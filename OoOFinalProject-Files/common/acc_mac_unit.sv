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

    logic signed [ACT_W+WGT_W-1:0] product;
    logic signed [ACC_W-1:0]       product_extended;

    // acc_accumulator
    always_comb begin
        product = act_i * wgt_i;

        // sign extension
        product_extended = {
            {(ACC_W-(ACT_W+WGT_W)){product[ACT_W+WGT_W-1]}
            }, product};

            result_o = acc_i + product_extended;
        end

endmodule
