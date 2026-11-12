// Focused self-checking testbench for the combinational MAC datapath.
module tb_acc_mac_unit;

    localparam int unsigned ACT_W = 9;
    localparam int unsigned WGT_W = 8;
    localparam int unsigned ACC_W = 40;

    logic signed [ACT_W-1:0] act_i;
    logic signed [WGT_W-1:0] wgt_i;
    logic signed [ACC_W-1:0] acc_i;
    logic signed [ACC_W-1:0] result_o;

    acc_mac_unit #(
        .ACT_W (ACT_W),
        .WGT_W (WGT_W),
        .ACC_W (ACC_W)
    ) dut (
        .act_i    (act_i),
        .wgt_i    (wgt_i),
        .acc_i    (acc_i),
        .result_o (result_o)
    );

    task automatic check(
        input logic signed [ACT_W-1:0] expected_act,
        input logic signed [WGT_W-1:0] expected_wgt,
        input logic signed [ACC_W-1:0] expected_acc,
        input logic signed [ACC_W-1:0] expected_result
    );
        begin
            act_i = expected_act;
            wgt_i = expected_wgt;
            acc_i = expected_acc;
            #1;
            if (result_o !== expected_result) begin
                $fatal(1, "MAC mismatch: act=%0d wgt=%0d acc=%0d, got=%0d expected=%0d",
                       act_i, wgt_i, acc_i, result_o, expected_result);
            end
        end
    endtask

    initial begin
        // Zero and ordinary positive arithmetic.
        check(9'sd0,   8'sd37,  40'sd19,     40'sd19);
        check(9'sd12,  8'sd7,   40'sd100,    40'sd184);

        // The extrema exercise the required unsigned-activation conversion
        // (255 is positive in the 9-bit signed MAC input) and product sign extension.
        check(9'sh0ff, -8'sd128, 40'sd0,      -40'sd32640);
        check(9'sh0ff,  8'sd127, -40'sd32640, -40'sd255);

        // A negative running sum plus a negative product stays negative.
        check(9'sd31, -8'sd9,   -40'sd200,   -40'sd479);

        $display("tb_acc_mac_unit: PASS");
        $finish;
    end

endmodule
