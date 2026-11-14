module tb_acc_operand_stage;
    import accelerator_pkg::*;
    import acc_pkg::*;
    logic clk_i = 0, rst_ni = 0, tap_valid_i = 0, tap_ready_o;
    conv_index_t index_i, weight_index_o, index_o;
    logic layer2_i = 1, first_i = 0, last_i = 0;
    logic rd_en_o, rd_valid_i = 0;
    logic [4:0] rd_addr_o [4], saved_addr [4];
    act_t rd_data_i [4], act_o [4];
    logic weight_req_valid_o, weight_req_ready_i, weight_layer2_o;
    logic weight_valid_i = 0, weight_ready_o, weight_error_i = 0;
    wgt_t weight_i, weight_o;
    logic clear_o, out_valid_o, out_ready_i = 0, first_o, last_o, error_o;
    int cycle = 0, pixel_delay = 0, weight_delay = 0, clears = 0;
    wgt_t saved_weight;
    always #5 clk_i = ~clk_i;
    assign weight_req_ready_i = cycle%3 != 0 && weight_delay == 0 && !weight_valid_i;
    acc_operand_stage dut (.*);

    function automatic int weight_for(input conv_index_t idx);
        return -60 + 10*int'(idx.oc) + 3*int'(idx.ic) + int'(idx.ky) - int'(idx.kx);
    endfunction

    always @(posedge clk_i) begin
        cycle <= cycle + 1;
        if (!rst_ni) begin
            rd_valid_i <= 0; weight_valid_i <= 0;
            pixel_delay <= 0; weight_delay <= 0;
            clears <= 0;
        end else begin
            if (clear_o) clears <= clears + 1;
            rd_valid_i <= 0;
            if (rd_en_o) begin
                if (pixel_delay != 0) $fatal(1, "Duplicate pixel request");
                foreach (saved_addr[b]) saved_addr[b] <= rd_addr_o[b];
                pixel_delay <= 1 + cycle%5;
            end else if (pixel_delay > 0) begin
                pixel_delay <= pixel_delay - 1;
                if (pixel_delay == 1) begin
                    for (int bank = 0; bank < 4; bank++) begin
                        rd_data_i[bank] <= 8'(36*(int'(saved_addr[bank])/9)
                            + 6*(2*((int'(saved_addr[bank])%9)/3)+bank/2)
                            + 2*(int'(saved_addr[bank])%3)+bank%2);
                    end
                    rd_valid_i <= 1;
                end
            end
            if (weight_valid_i && weight_ready_o) weight_valid_i <= 0;
            if (weight_req_valid_o && weight_req_ready_i) begin
                saved_weight <= 8'(weight_for(weight_index_o));
                weight_delay <= 6 - cycle%5;
            end else if (weight_delay > 0) begin
                weight_delay <= weight_delay - 1;
                if (weight_delay == 1) begin weight_i <= saved_weight; weight_valid_i <= 1; end
            end
        end
    end

    task automatic send_tap(input int ic, ky, kx);
        int guard;
        @(negedge clk_i);
        index_i = '0; index_i.ic = 2'(ic); index_i.ky = 3'(ky); index_i.kx = 3'(kx);
        index_i.oc = 2'(kx%3);
        first_i = ic == 0 && ky == 0 && kx == 0;
        last_i = ic == 2 && ky == 4 && kx == 4;
        tap_valid_i = 1;
        do @(posedge clk_i); while (!tap_ready_o);
        @(negedge clk_i); tap_valid_i = 0;
        guard = 0;
        while (!out_valid_o && guard < 50) begin @(negedge clk_i); guard++; end
        if (!out_valid_o) $fatal(1, "Operand timeout");
        repeat (3) begin
            if (index_o !== index_i || first_o !== first_i || last_o !== last_i || error_o)
                $fatal(1, "Metadata mismatch");
            for (int lane = 0; lane < 4; lane++)
                if (act_o[lane] !== 8'(36*ic+6*(ky+lane/2)+kx+lane%2))
                    $fatal(1, "Pixel route mismatch");
            if (weight_o !== 8'(weight_for(index_i))) $fatal(1, "Weight mismatch");
            if (clear_o) $fatal(1, "Clear repeated during output stall");
            @(negedge clk_i);
        end
        out_ready_i = 1;
        @(negedge clk_i); out_ready_i = 0;
    endtask

    initial begin
        index_i = '0;
        repeat (2) @(negedge clk_i); rst_ni = 1;
        for (int ic = 0; ic < 3; ic++)
            for (int ky = 0; ky < 5; ky++)
                for (int kx = 0; kx < 5; kx++) send_tap(ic, ky, kx);
        if (clears != 1) $fatal(1, "Expected one clear");
        $display("tb_acc_operand_stage: PASS 75 routed taps with independent response delays and output stalls");
        $finish;
    end
    initial begin #100000; $fatal(1, "Timeout"); end
endmodule
