// acc_requant_relu.sv -- Bias, requantization, ReLU, and clipping for convolution

module acc_requant_relu #(
    parameter int unsigned ACC_W = 40,
    parameter bit OUT_UNSIGNED = 1'b1
) (
    input logic signed [ACC_W-1:0] sum_i,
    input accelerator_pkg::acc_t bias_i,
    input logic [5:0] shift_i,
    output logic [7:0] data_o
);

    // Combinational logic: extend/add the int32 bias to the wide sum
    // Apply the agreed shift/rounding rule, ReLU, and output saturation
    // Confirm intermediate format and clipping with the course reference
    // Do not use this convolution block on the final FC logits

endmodule
