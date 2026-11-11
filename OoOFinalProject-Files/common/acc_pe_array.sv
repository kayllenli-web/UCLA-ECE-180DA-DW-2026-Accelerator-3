// acc_pe_array.sv -- Four neighboring spatial outputs sharing one weight

module acc_pe_array
  import accelerator_pkg::act_t;
  import accelerator_pkg::wgt_t;
  import acc_pkg::*;
(
    input logic clk_i, rst_ni, clear_i, issue_i,
    input logic [LANES-1:0] lane_en_i,
    input act_t act_i [LANES],
    input wgt_t wgt_i,
    output sum_t sum_o [LANES]
);

    // Declare wires between each combinational MAC and its accumulator
    // Zero-extend each uint8 input to signed 9 bits before multiplying
    // Instantiate four acc_mac_unit / acc_accumulator pairs with named ports
    // Enable each lane only on issue_i && lane_en_i[lane]
    // Clear sums in a separate cycle before accepting the first product

endmodule
