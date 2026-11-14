# Group 3 CNN Accelerator

Four-lane CNN accelerator for ECE 180DA/DW, targeting an FPGA
The current tests cover arithmetic, local memory, convolution scheduling and operand alignment
The full inference top and processor integration are still unfinished

## 1. Requirements

- Verilator 5.x
- GNU Make
- A C++20 compiler such as G++ 11 or newer
- Python 3

Run the commands below in WSL or Linux

## 2. Run all tests

From the repository root:

```bash
cd OoOFinalProject-Files
python3 tb/run_tests.py
```

The runner stops if a test fails
Each successful test prints PASS
Build files are saved in `build/` and logs in `test_results/`

For lint checks only:

```bash
python3 tb/run_tests.py --lint
```

## 3. Run an individual test

Run these from `OoOFinalProject-Files`

| Test | What it checks | Command |
| --- | --- | --- |
| MAC | Signed multiplication and addition | `python3 tb/run_tests.py acc_mac_unit` |
| Accumulator | Reset, clear, enable and hold | `python3 tb/run_tests.py acc_accumulator` |
| PE array | Four lanes, shared weights and lane enables | `python3 tb/run_tests.py acc_pe_array` |
| Requantization and ReLU | Bias, shifts, ReLU and clipping | `python3 tb/run_tests.py acc_requant_relu` |
| Pooling | Maximum of four values | `python3 tb/run_tests.py acc_pool2x2` |
| Tile scratchpad | Bank writes, reads and synchronous timing | `python3 tb/run_tests.py acc_tile_scratchpad` |
| Convolution scheduler | Coordinates, stalls and layer completion | `python3 tb/run_tests.py acc_conv_schedule` |
| Operand stage | Pixel routing and weight alignment | `python3 tb/run_tests.py acc_operand_stage` |
| Memory subsystem | Loading, patch fills, features, errors and reset | `python3 tb/run_tests.py acc_memory_subsystem` |
| Integrated Phase 2 | Matching pixels, weights and MAC sums under delays and stalls | `python3 tb/run_tests.py acc_phase2` |

The Phase 2 test uses preloaded Conv2 features and does not test full CNN inference
## 4. Recorded test results

All ten testbenches passed Verilator lint and simulation in the recorded runs
Nine final simulations ran on Windows
The integrated test passed in WSL using Verilator 5.048 and G++ 11.4
Rerun the tests after copying or changing the code

| Integrated run | Accepted four-lane taps | Completed reductions |
| --- | ---: | ---: |
| Conv1, image offset 0x400 | 10800 | 432 |
| Conv2, preloaded features | 3600 | 48 |
| Conv1 after reset, image offset 0 | 10800 | 432 |

The test checked pixels, weights and MAC sums while responses were delayed and the output stalled
The WSL build reported a Make clock-skew warning, but the simulation finished with PASS

## 5. Still unfinished

- Full CNN inference and comparison with the course golden model
- Computed Conv1 pooled outputs feeding Conv2 without testbench preloading
- Job control, FC, argmax and processor/result/debug connections
- Synthesis, FPGA resource use and timing checks

The Phase 2 fixture models downstream result acceptance rather than testing the final hardware writeback
The 40-bit internal sums still need to match the reference arithmetic when narrowed
