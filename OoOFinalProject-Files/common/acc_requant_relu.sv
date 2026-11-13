// acc_requant_relu.sv
// Bias, requantization, ReLU, and clipping for convolution

module acc_requant_relu #(
    parameter int unsigned ACC_W = 40,
    parameter bit OUT_UNSIGNED = 1'b1
) (
    input logic signed [ACC_W-1:0] sum_i,
    input accelerator_pkg::acc_t bias_i,
    input logic [5:0] shift_i,
    output logic [7:0] data_o
);
    logic signed [ACC_W:0] sum_plus_bias;
    logic signed [ACC_W:0] bias_extended;
    logic signed [ACC_W:0] shifted_val;

    always_comb begin
        // The 41-bit intermediate preserves the signed 40-bit sum and the
        // signed 32-bit bias before the arithmetic right shift.
        bias_extended = {{(ACC_W-31){bias_i[31]}}, bias_i};
        sum_plus_bias = {sum_i[ACC_W-1], sum_i} + bias_extended;

        shifted_val = sum_plus_bias >>> shift_i;

        if (shifted_val <= 0)
            data_o = 8'd0;
        else if (shifted_val > 255)
            data_o = 8'd255;
        else
            data_o = shifted_val[7:0];
    end

endmodule
