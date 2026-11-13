// acc_pool2x2.sv -- Maximum of four completed outputs from one channel

module acc_pool2x2 (
    input accelerator_pkg::act_t x_i [4],
    output accelerator_pkg::act_t max_o
);
    accelerator_pkg::act_t x1;
    accelerator_pkg::act_t x2;
    // Combinational logic: compare the four postprocessed output values
    // Drive the largest value to max_o
    // All four values must belong to the same 2 x 2 spatial window

    // A two-level combinational max tree: three unsigned 8-bit comparisons.
    assign x1    = (x_i[0] >= x_i[1]) ? x_i[0] : x_i[1];
    assign x2    = (x_i[2] >= x_i[3]) ? x_i[2] : x_i[3];
    assign max_o = (x1 >= x2) ? x1 : x2;
endmodule
