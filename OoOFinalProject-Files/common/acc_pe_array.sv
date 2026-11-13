// acc_pe_array.sv 
// Four neighboring parallel MAC's initialized and utilized 

module acc_pe_array
  import accelerator_pkg::act_t;
  import accelerator_pkg::wgt_t;
  import acc_pkg::*; // LANES, sum_t, ACC_W
(
    input logic clk_i, rst_ni, clear_i, issue_i,
    input logic [LANES-1:0] lane_en_i,
    input act_t act_i [LANES],  // Image values
    input wgt_t wgt_i,          // Shared weight
    output sum_t sum_o [LANES]
);

    logic signed [8:0] act_extended [LANES];
    sum_t              mac_result  [LANES];
    
    // Generate 4 mac units and accumulator registers
    for (genvar lane = 0; lane < LANES; lane++) begin : g_lane
        assign act_extended[lane] = {1'b0, act_i[lane]};
        
        // Mac Unit creation
        acc_mac_unit #(
            .ACT_W (9),
            .WGT_W (8),
            .ACC_W (ACC_W)
        ) mac (
            .act_i    (act_extended[lane]),
            .wgt_i    (wgt_i),
            .acc_i    (sum_o[lane]),
            .result_o (mac_result[lane])
        );

        // result accumulator registers
        acc_accumulator #(
            .ACC_W (ACC_W)
        ) accumulator (
            .clk_i   (clk_i),
            .rst_ni  (rst_ni),
            .clear_i (clear_i),
            .en_i    (issue_i && lane_en_i[lane]),
            .d_i     (mac_result[lane]),
            .q_o     (sum_o[lane])
        );
    end

endmodule
