// acc_conv_schedule.sv -- Convolution tile, filter, channel, and kernel scheduler

module acc_conv_schedule
  import acc_pkg::*;
(
    input logic clk_i, rst_ni, start_i, layer2_i,
    output logic tile_valid_o,
    input logic tile_ready_i, tile_loaded_i,
    output logic tap_valid_o,
    input logic tap_ready_i, result_done_i,
    output conv_index_t index_o,
    output logic first_o, last_o, done_o
);

    // Declare enum state_e and state_q / state_d plus index_q / index_d
    // Use two blocks: always_comb for next state; always_ff for registers
    // In always_comb, give every output and next-state signal a default
    // States: idle, tile request, tile wait, issue taps, wait result, done
    // Advance a tap only when tap_valid_o && tap_ready_i
    // Wait for tile_loaded_i before issuing; wait for result_done_i after last
    // done_o means this layer schedule finished, not the whole inference

endmodule
