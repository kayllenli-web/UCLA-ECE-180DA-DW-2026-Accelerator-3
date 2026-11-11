// acc_mac_unit.sv -- Combinational multiply and add

module acc_mac_unit #(
    parameter int unsigned ACT_W = 9,
    parameter int unsigned WGT_W = 8,
    parameter int unsigned ACC_W = 40
) (
    input logic signed [ACT_W-1:0] act_i,
    input logic signed [WGT_W-1:0] wgt_i,
    input logic signed [ACC_W-1:0] acc_i,
    output logic signed [ACC_W-1:0] result_o
);

    // Declare a signed product signal with the full product width
    // Combinational logic: multiply act_i by wgt_i, extend, then add acc_i
    // Drive result_o
    // No clocked register belongs in this block

endmodule
