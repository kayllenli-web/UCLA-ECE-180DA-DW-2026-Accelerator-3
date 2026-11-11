// acc_accumulator.sv -- Register holding one running sum

module acc_accumulator #(
    parameter int unsigned ACC_W = 40
) (
    input logic clk_i, rst_ni, clear_i, en_i,
    input logic signed [ACC_W-1:0] d_i,
    output logic signed [ACC_W-1:0] q_o
);

    // Sequential logic: always_ff @(posedge clk_i)
    // Use nonblocking assignments (<=)
    // Reset is synchronous active-low
    // Priority: !rst_ni -> zero; clear_i -> zero; en_i -> d_i; otherwise hold
    // The reset must occur inside the clocked block, not in its sensitivity list

endmodule
