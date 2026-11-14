// acc_tile_scratchpad.sv -- Four banks holding a 6 x 6 x Cin input patch

module acc_tile_scratchpad (
    input logic clk_i, rst_ni,
    input logic wr_en_i,
    input logic [1:0] wr_bank_i,
    input logic [4:0] wr_addr_i,
    input accelerator_pkg::act_t wr_data_i,
    input logic rd_en_i,
    input logic [4:0] rd_addr_i [4],
    output logic rd_valid_o,
    output accelerator_pkg::act_t rd_data_o [4]
);

    accelerator_pkg::act_t mem_q [4][32];

    // Caller separates tile loading from compute
    always_ff @(posedge clk_i) begin
        if (rst_ni && wr_en_i)
            mem_q[wr_bank_i][wr_addr_i] <= wr_data_i;
        if (rst_ni && rd_en_i)
            for (int bank = 0; bank < 4; bank++)
                rd_data_o[bank] <= mem_q[bank][rd_addr_i[bank]];
    end

    always_ff @(posedge clk_i) begin
        if (!rst_ni) rd_valid_o <= 1'b0;
        else rd_valid_o <= rd_en_i;
    end
endmodule
