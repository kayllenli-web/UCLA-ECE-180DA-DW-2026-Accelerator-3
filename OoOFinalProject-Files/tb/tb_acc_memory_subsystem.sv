module tb_acc_memory_subsystem;
    `include "phase2_fixture.svh"
    int writes = 0;
    always @(posedge clk) if (tile_wr) begin
        int ic, u, v, addr, global_addr;
        ic = writes/36; u = (writes%36)/6; v = writes%6;
        addr = 9*ic+3*(u/2)+v/2;
        global_addr = manual_layer2
            ? (ic*P1_H+2*int'(manual_index.py)+u)*P1_W+2*int'(manual_index.px)+v
            : int'(image_offset)+(2*int'(manual_index.py)+u)*IMG_W+2*int'(manual_index.px)+v;
        if (tile_bank !== 2'(2*(u%2)+v%2) || tile_addr !== 5'(addr)
            || tile_data !== (manual_layer2 ? feature_byte(global_addr) : image_byte(global_addr)))
            $fatal(1, "Patch byte mismatch at %0d", writes);
        writes++;
    end
    task automatic patch(input bit l2, input int py, px);
        @(negedge clk); manual_layer2 = l2; manual_index.py = 4'(py); manual_index.px = 4'(px);
        writes = 0; manual_tile = 1;
        do @(posedge clk); while (!tile_ready);
        @(negedge clk); manual_tile = 0;
        while (!tile_loaded) @(negedge clk);
        if (mem_error || writes != (l2 ? 108 : 36)) $fatal(1, "Tile load count");
        @(negedge clk);
    endtask
    initial begin
        reset_local();
        load_caches();
        if (requests != IMG_PIXELS/4 + WGT_MEM_BYTES/4 + PARAM_WORDS) $fatal(1, "Source read count");
        param_addr = PARAM_ADDR_W'(PAR_SHIFT1); #1;
        if (param_data !== 2) $fatal(1, "Parameter cache mismatch");
        patch(0, 0, 0); patch(0, 11, 11);
        @(negedge clk); manual_layer2 = 1; manual_index = '0; manual_tile = 1;
        do @(posedge clk); while (!tile_ready);
        @(negedge clk); manual_tile = 0;
        while (!tile_loaded) @(negedge clk);
        if (!mem_error) $fatal(1, "Uninitialized feature read was accepted");
        @(negedge clk);
        fill_features(); patch(1, 0, 0); patch(1, 3, 3);
        @(negedge clk); feature_rd = 1; feature_addr = ACT_A_ADDR_W'(P1_ELEMS-1);
        @(posedge clk); #1;
        if (!feature_valid || feature_read !== feature_byte(P1_ELEMS-1)) $fatal(1, "Feature read");
        @(negedge clk); feature_rd = 0;
        manual_weight = 1; manual_weight_index = '0;
        manual_weight_index.oc = 2; manual_weight_index.ic = 2;
        manual_weight_index.ky = 4; manual_weight_index.kx = 4;
        manual_layer2 = 1; manual_weight_valid = 1;
        do @(posedge clk); while (!wr_ready);
        @(negedge clk); manual_weight_valid = 0;
        repeat (3) begin
            if (!w_valid || w_error || w_data !== weight_byte(WGT_CONV2_BASE+224))
                $fatal(1, "Buffered weight mismatch");
            @(negedge clk);
        end
        manual_weight_ready = 1;
        @(negedge clk); manual_weight_ready = 0; manual_weight = 0;
        feature_wr = 1; feature_sel = MEM_ACT_B; feature_addr = ACT_A_ADDR_W'(ACT_B_BYTES);
        @(posedge clk); #1;
        if (!mem_error) $fatal(1, "Out of bounds feature write accepted");
        @(negedge clk); feature_wr = 0;
        fail_read = 1; load_caches(1); fail_read = 0;
        bad_magic = 1; load_caches(1); bad_magic = 0;
        image_offset = 1; load_caches(1);
        image_offset = 0; load_caches(); patch(0, 11, 11);
        // Keep the external response alive while resetting local state
        @(negedge clk); load_valid = 1;
        do @(posedge clk); while (!load_ready);
        @(negedge clk); load_valid = 0;
        while (!pending) @(negedge clk);
        reset_local();
        while (!load_ready) @(negedge clk);
        if (loaded) $fatal(1, "Reset kept loaded state");
        load_caches(); patch(0, 0, 0);
        $display("tb_acc_memory_subsystem: PASS loads, patches, features, errors and reset drain");
        $finish;
    end
endmodule
