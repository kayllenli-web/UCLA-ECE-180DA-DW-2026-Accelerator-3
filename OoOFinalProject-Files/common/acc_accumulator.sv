// acc_accumulator.sv 
// Register holding one running sum for one MAC of current convolution

module acc_accumulator #(
    parameter int unsigned ACC_W = 40
) (
    input logic clk_i, rst_ni, clear_i, en_i,
    input logic signed [ACC_W-1:0] d_i, // new accumulator to assign
    output logic signed [ACC_W-1:0] q_o // current accumulator
);
    // Reset is synchronous active-low
    always_ff @(posedge clk_i) begin
        if (!rst_ni || clear_i)
            q_o <= '0;
        else if (en_i)
            q_o <= d_i;
    end
endmodule
