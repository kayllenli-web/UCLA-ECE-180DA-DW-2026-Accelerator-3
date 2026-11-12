module tb_acc_pe_array;
    import accelerator_pkg::*;
    import acc_pkg::*;

    logic clk_i = 1'b0;
    logic rst_ni;
    logic clear_i;
    logic issue_i;
    logic [LANES-1:0] lane_en_i;
    act_t act_i [LANES];
    wgt_t wgt_i;
    sum_t sum_o [LANES];

    always #5 clk_i = ~clk_i;

    acc_pe_array dut (
        .clk_i,
        .rst_ni,
        .clear_i,
        .issue_i,
        .lane_en_i,
        .act_i,
        .wgt_i,
        .sum_o
    );

    task automatic check_sums(
        input sum_t expected_0,
        input sum_t expected_1,
        input sum_t expected_2,
        input sum_t expected_3
    );
        #1;
        if ((sum_o[0] !== expected_0) || (sum_o[1] !== expected_1) ||
            (sum_o[2] !== expected_2) || (sum_o[3] !== expected_3)) begin
            $fatal(1, "sums got {%0d, %0d, %0d, %0d}, expected {%0d, %0d, %0d, %0d}",
                   sum_o[0], sum_o[1], sum_o[2], sum_o[3],
                   expected_0, expected_1, expected_2, expected_3);
        end
    endtask

    initial begin
        rst_ni = 1'b0;
        clear_i = 1'b0;
        issue_i = 1'b0;
        lane_en_i = '0;
        wgt_i = '0;
        foreach (act_i[lane]) act_i[lane] = '0;
        @(posedge clk_i);
        check_sums(0, 0, 0, 0);

        // Clear before the first accepted product.
        @(negedge clk_i);
        rst_ni = 1'b1;
        clear_i = 1'b1;
        @(posedge clk_i);
        check_sums(0, 0, 0, 0);

        // Four independent lanes receive four activations and one shared weight.
        @(negedge clk_i);
        clear_i = 1'b0;
        issue_i = 1'b1;
        lane_en_i = 4'b1111;
        act_i[0] = 8'd1;
        act_i[1] = 8'd2;
        act_i[2] = 8'd3;
        act_i[3] = 8'd4;
        wgt_i = 8'sd5;
        @(posedge clk_i);
        check_sums(5, 10, 15, 20);

        // Disabled lane 1 must hold while the other lanes accept a product.
        @(negedge clk_i);
        lane_en_i = 4'b1101;
        act_i[0] = 8'd10;
        act_i[1] = 8'd20;
        act_i[2] = 8'd30;
        act_i[3] = 8'd40;
        wgt_i = -8'sd1;
        @(posedge clk_i);
        check_sums(-5, 10, -15, -20);

        // Verify that 8'd255 remains positive after zero extension.
        @(negedge clk_i);
        clear_i = 1'b1;
        issue_i = 1'b0;
        @(posedge clk_i);
        check_sums(0, 0, 0, 0);

        @(negedge clk_i);
        clear_i = 1'b0;
        issue_i = 1'b1;
        lane_en_i = 4'b0001;
        act_i[0] = 8'd255;
        wgt_i = -8'sd128;
        @(posedge clk_i);
        check_sums(-32640, 0, 0, 0);

        $display("tb_acc_pe_array: PASS");
        $finish;
    end
endmodule
