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

    // Declare an unpacked byte memory: four banks, 32 entries per bank
    // Sequential logic: write one selected bank; read one address per bank
    // Read data and its valid indication must have matching clock latency
    // Reset validity, not every RAM byte
    // Load the patch before computing
    // Returned data is in bank order; operand routing restores lane order

endmodule
