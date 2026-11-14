module tb_acc_tile_scratchpad;
    import accelerator_pkg::*;
    logic clk_i = 0, rst_ni = 0, wr_en_i = 0, rd_en_i = 0;
    logic [1:0] wr_bank_i;
    logic [4:0] wr_addr_i, rd_addr_i [4];
    act_t wr_data_i, rd_data_o [4];
    logic rd_valid_o;
    always #5 clk_i = ~clk_i;
    acc_tile_scratchpad dut (.*);

    initial begin
        foreach (rd_addr_i[b]) rd_addr_i[b] = '0;
        repeat (2) @(negedge clk_i);
        rst_ni = 1;
        for (int addr = 0; addr < 32; addr++) begin
            for (int bank = 0; bank < 4; bank++) begin
                wr_en_i = 1; wr_bank_i = 2'(bank); wr_addr_i = 5'(addr);
                wr_data_i = 8'(bank*32+addr);
                @(negedge clk_i);
            end
        end
        wr_en_i = 0;
        for (int addr = 0; addr < 32; addr++) begin
            rd_en_i = 1;
            for (int bank = 0; bank < 4; bank++) rd_addr_i[bank] = 5'((addr+bank)%32);
            #1;
            if (addr == 0 && rd_valid_o) $fatal(1, "Read returned before clock");
            @(posedge clk_i); #1;
            if (!rd_valid_o) $fatal(1, "Missing read valid");
            for (int bank = 0; bank < 4; bank++)
                if (rd_data_o[bank] !== 8'(bank*32+(addr+bank)%32))
                    $fatal(1, "Bank or address mismatch");
            @(negedge clk_i);
        end
        rd_en_i = 0;
        @(posedge clk_i); #1;
        if (rd_valid_o) $fatal(1, "Valid did not clear");
        @(negedge clk_i); rst_ni = 0; rd_en_i = 1;
        @(posedge clk_i); #1;
        if (rd_valid_o) $fatal(1, "Valid survived reset");
        @(negedge clk_i); rst_ni = 1;
        @(posedge clk_i); #1;
        if (!rd_valid_o || rd_data_o[0] !== 31) $fatal(1, "RAM lost contents on reset");
        $display("tb_acc_tile_scratchpad: PASS all 128 locations and registered reads");
        $finish;
    end
endmodule
