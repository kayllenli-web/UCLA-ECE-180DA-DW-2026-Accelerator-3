module tb_acc_conv_schedule;
    import accelerator_pkg::*;
    import acc_pkg::*;
    logic clk_i = 0, rst_ni = 0, start_i = 0, layer2_i = 0;
    logic tile_valid_o, tile_ready_i = 0, tile_loaded_i = 0;
    logic tap_valid_o, tap_ready_i = 0, result_done_i = 0;
    conv_index_t index_o;
    logic first_o, last_o, done_o;
    always #5 clk_i = ~clk_i;
    acc_conv_schedule dut (.*);

    task automatic run_layer(input bit layer2);
        int count, tiles, tick, load_wait, result_wait;
        int pmax, channels, expected_count;
        conv_index_t expected, held;
        bit tile_stalled, tap_stalled;
        pmax = layer2 ? P2_W : P1_W;
        channels = layer2 ? C1_OC : IMG_C;
        expected_count = pmax*pmax*C1_OC*channels*C1_K*C1_K;
        count = 0; tiles = 0; tick = 0; load_wait = 0; result_wait = 0;
        expected = '0; tile_stalled = 0; tap_stalled = 0;
        @(negedge clk_i); layer2_i = layer2; start_i = 1;
        while (!done_o && tick < 100000) begin
            @(negedge clk_i);
            tile_ready_i = tick%4 == 0;
            tap_ready_i = tick%3 != 0;
            tile_loaded_i = load_wait == 1;
            result_done_i = result_wait == 1;
            if (load_wait > 0) load_wait--;
            if (result_wait > 0) result_wait--;
            @(posedge clk_i);
            if ((tile_stalled || tap_stalled) && index_o !== held)
                $fatal(1, "Indices moved during stall");
            if (tile_valid_o && tile_ready_i) begin tiles++; load_wait = 4; end
            if (tap_valid_o && tap_ready_i) begin
                if (index_o !== expected) $fatal(1, "Coordinate mismatch at tap %0d", count);
                if (first_o !== (expected.ic == 0 && expected.ky == 0 && expected.kx == 0)) $fatal;
                if (last_o !== (int'(expected.ic) == channels-1 && expected.ky == 4 && expected.kx == 4)) $fatal;
                count++;
                if (expected.kx != 4) expected.kx++;
                else begin
                    expected.kx = 0;
                    if (expected.ky != 4) expected.ky++;
                    else begin
                        expected.ky = 0;
                        if (int'(expected.ic) != channels-1) expected.ic++;
                        else begin
                            expected.ic = 0; result_wait = 5;
                            if (expected.oc != 2) expected.oc++;
                            else begin
                                expected.oc = 0;
                                if (int'(expected.px) != pmax-1) expected.px++;
                                else begin expected.px = 0; expected.py++; end
                            end
                        end
                    end
                end
            end
            held = index_o;
            tile_stalled = tile_valid_o && !tile_ready_i;
            tap_stalled = tap_valid_o && !tap_ready_i;
            tick++;
            #1;
        end
        if (!done_o || count != expected_count || tiles != pmax*pmax)
            $fatal(1, "Layer counts wrong count=%0d tiles=%0d", count, tiles);
        repeat (3) begin @(posedge clk_i); #1; if (!done_o) $fatal; end
        @(negedge clk_i); start_i = 0; tile_ready_i = 0; tap_ready_i = 0;
        tile_loaded_i = 0; result_done_i = 0;
        repeat (2) @(negedge clk_i);
        $display("layer %0d: %0d taps, %0d tiles", layer2+1, count, tiles);
    endtask

    initial begin
        repeat (2) @(negedge clk_i); rst_ni = 1;
        run_layer(0); run_layer(1); run_layer(0);
        $display("tb_acc_conv_schedule: PASS both layers, stalls and restart");
        $finish;
    end
endmodule
