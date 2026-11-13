import argparse
import os
from pathlib import Path
import shlex
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
SOURCES = ['accelerator_pkg', 'acc_pkg', 'data_memory_if', 'acc_mac_unit',
           'acc_accumulator', 'acc_pe_array', 'acc_requant_relu', 'acc_pool2x2',
           'acc_tile_scratchpad', 'acc_conv_schedule', 'acc_operand_stage',
           'acc_memory_subsystem']
TESTS = sorted(p.stem[3:] for p in (ROOT / 'tb').glob('tb_acc_*.sv'))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('tests', nargs='*', default=TESTS)
    parser.add_argument('--lint', action='store_true')
    args = parser.parse_args()
    verilator = os.environ.get('VERILATOR_BIN') or shutil.which('verilator')
    make = os.environ.get('MAKE') or shutil.which('make')
    if not verilator or (not args.lint and not make):
        parser.error('Verilator and GNU Make are required')
    logs = ROOT / 'test_results'
    logs.mkdir(exist_ok=True)
    for test in args.tests:
        if test not in TESTS:
            parser.error('Unknown test ' + test)
        top = 'tb_' + test
        build = ROOT / 'build' / test
        build.mkdir(parents=True, exist_ok=True)
        command = [verilator, '--timing', '--assert', '--timescale', '1ns/1ps',
                   '--top-module', top, '--Mdir', str(build), '-I' + str(ROOT / 'tb')]
        command += ['--lint-only'] if args.lint else ['--cc', '--main', '--exe', '--trace']
        command += [str(ROOT / 'common' / (s + '.sv')) for s in SOURCES]
        command += [str(ROOT / 'tb' / (top + '.sv'))]
        log_path = logs / (test + ('.lint.log' if args.lint else '.log'))
        with log_path.open('w', encoding='utf-8') as log:
            log.write(subprocess.check_output([verilator, '--version'], text=True))
            log.write('\n' + shlex.join(command) + '\n')
            log.flush()
            subprocess.run(command, cwd=ROOT, stdout=log, stderr=subprocess.STDOUT, check=True)
            if not args.lint:
                command = [make, '-C', str(build), '-f', 'V' + top + '.mk', '-j2']
                for name in ['CXX', 'PERL', 'AR', 'LINK']:
                    if os.environ.get(name):
                        command.append(name + '=' + os.environ[name])
                command.append('CXXFLAGS=-std=c++20')
                command.append('CFG_CXXFLAGS_STD=-std=c++20')
                if os.name == 'nt':
                    command.append('VM_PARALLEL_BUILDS=1')
                    command.append('CFG_CXXFLAGS_PCH_I=-include')
                log.write('\n' + shlex.join(command) + '\n'); log.flush()
                subprocess.run(command, cwd=ROOT, stdout=log, stderr=subprocess.STDOUT, check=True)
                binary = build / ('V' + top + ('.exe' if os.name == 'nt' else ''))
                if not binary.exists():
                    binary = build / ('V' + top)
                log.flush()
                try:
                    subprocess.run([str(binary)], cwd=build, stdout=log, stderr=subprocess.STDOUT,
                                   check=True, timeout=180)
                except OSError as error:
                    log.write('\nSimulation could not start: ' + str(error) + '\n')
                    raise
        print(test + ': ' + ('LINT PASS' if args.lint else 'PASS'), flush=True)


if __name__ == '__main__':
    try:
        main()
    except subprocess.CalledProcessError as error:
        print('Failed command:', shlex.join(error.cmd), file=sys.stderr)
        sys.exit(1)
