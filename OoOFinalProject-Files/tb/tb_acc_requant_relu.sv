module tb_acc_requant_relu;
    import accelerator_pkg::*;

    localparam int unsigned ACC_W = 40;

    logic signed [ACC_W-1:0] sum_i;
    acc_t bias_i;
    logic [5:0] shift_i;
    logic [7:0] data_o;

    acc_requant_relu #(.ACC_W(ACC_W)) dut (
        .sum_i,
        .bias_i,
        .shift_i,
        .data_o
    );

    task automatic check_value(
        input logic signed [ACC_W-1:0] test_sum,
        input acc_t test_bias,
        input logic [5:0] test_shift,
        input logic [7:0] expected_data
    );
        begin
            sum_i = test_sum;
            bias_i = test_bias;
            shift_i = test_shift;
            #1;
            if (data_o !== expected_data) begin
                $fatal(1, "sum=%0d bias=%0d shift=%0d: got %0d, expected %0d",
                       sum_i, bias_i, shift_i, data_o, expected_data);
            end
        end
    endtask

    initial begin
        // Bias must be added before shifting.
        check_value(40'sd100, 32'sd156, 6'd8, 8'd1);

        // A zero shift preserves a positive value.
        check_value(40'sd42, 32'sd0, 6'd0, 8'd42);

        // Golden vectors require an arithmetic floor shift, not rounding.
        check_value(40'sd942, 32'sd0, 6'd8, 8'd3);

        // ReLU and saturation boundaries.
        check_value(-40'sd1, 32'sd0, 6'd0, 8'd0);
        check_value(40'sd255, 32'sd0, 6'd0, 8'd255);
        check_value(40'sd256, 32'sd0, 6'd0, 8'd255);

        // A wide sum plus a negative int32 bias remains signed and precise.
        check_value(40'sd1_000_000, -32'sd999_800, 6'd0, 8'd200);

        $display("tb_acc_requant_relu: PASS");
        $finish;
    end
endmodule
