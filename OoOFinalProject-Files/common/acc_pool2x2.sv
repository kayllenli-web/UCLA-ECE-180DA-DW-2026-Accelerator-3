// acc_pool2x2.sv -- Maximum of four completed outputs from one channel

module acc_pool2x2 (
    input accelerator_pkg::act_t x_i [4],
    output accelerator_pkg::act_t max_o
);

    // Combinational logic: compare the four postprocessed output values
    // Drive the largest value to max_o
    // All four values must belong to the same 2 x 2 spatial window

endmodule
