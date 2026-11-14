module tb_acc_phase2;
    `include "phase2_fixture.svh"
    longint signed expected_sums [4];
    int accepted = 0, reductions = 0, stalled = 0, result_wait = 0;
    int clear_count = 0;
    bit checking = 0;
    always @(negedge clk) begin
        result_done = 0;
        if (result_wait > 0) begin
            if (result_wait == 1) result_done = 1;
            result_wait--;
        end
    end
    always @(posedge clk) if (checking) begin
        if (mem_error || out_error) $fatal(1, "Phase 2 error");
        if (clear) begin
            clear_count++;
            foreach (expected_sums[lane]) expected_sums[lane] = 0;
        end
        if (out_valid && !out_ready) stalled++;
        if (out_valid && out_ready) begin
            int weight_addr, input_addr, expected_input;
            int signed expected_weight;
            weight_addr = (layer2 ? WGT_CONV2_BASE : WGT_CONV1_BASE)
                + ((int'(out_index.oc)*(layer2 ? C1_OC : IMG_C)+int'(out_index.ic))*5+int'(out_index.ky))*5+int'(out_index.kx);
            expected_weight = int'(weight_byte(weight_addr));
            if (aligned_weight !== 8'(expected_weight)) $fatal(1, "Wrong weight");
            for (int lane = 0; lane < 4; lane++) begin
                input_addr = layer2
                    ? (int'(out_index.ic)*P1_H+2*int'(out_index.py)+int'(out_index.ky)+lane/2)*P1_W+2*int'(out_index.px)+int'(out_index.kx)+lane%2
                    : int'(image_offset)+(2*int'(out_index.py)+int'(out_index.ky)+lane/2)*IMG_W+2*int'(out_index.px)+int'(out_index.kx)+lane%2;
                expected_input = layer2 ? int'(feature_byte(input_addr)) : int'(image_byte(input_addr));
                if (operands[lane] !== 8'(expected_input)) $fatal(1, "Wrong activation at tap %0d lane %0d", accepted, lane);
                expected_sums[lane] += 64'(expected_input)*64'(expected_weight);
            end
            accepted++;
            if (out_last) begin reductions++; result_wait = 5; end
            #1;
            foreach (sums[lane])
                if (sums[lane] !== ACC_W'(expected_sums[lane])) $fatal(1, "MAC sum mismatch");
        end
    end
    task automatic run_layer(input bit l2);
        int expected_taps, expected_results;
        expected_taps = l2 ? 3600 : 10800;
        expected_results = l2 ? 48 : 432;
        @(negedge clk);
        accepted = 0; reductions = 0; clear_count = 0; stalled = 0;
        layer2 = l2; schedule = 1; checking = 1; start = 1;
        while (!schedule_done) @(negedge clk);
        if (accepted != expected_taps || reductions != expected_results || clear_count != expected_results || stalled == 0)
            $fatal(1, "Integrated counts taps=%0d results=%0d clears=%0d stalls=%0d", accepted, reductions, clear_count, stalled);
        $display("phase2 layer %0d: %0d taps, %0d reductions, %0d stalled cycles", l2+1, accepted, reductions, stalled);
        start = 0; checking = 0;
        repeat (3) @(negedge clk);
        schedule = 0;
    endtask
    initial begin
        if ($test$plusargs("trace")) begin $dumpfile("phase2.vcd"); $dumpvars(0, tb_acc_phase2); end
        reset_local(); load_caches();
        run_layer(0);
        fill_features(); run_layer(1);
        reset_local(); image_offset = 0; load_caches(); run_layer(0);
        $display("tb_acc_phase2: PASS all taps, aligned operands, MAC sums, stalls and both image slots");
        $finish;
    end
endmodule
