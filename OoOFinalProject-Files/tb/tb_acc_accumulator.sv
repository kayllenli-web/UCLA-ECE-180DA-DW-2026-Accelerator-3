module tb_acc_accumulator;
    localparam int unsigned ACC_W = 40;

    logic clk_i = 1'b0;
    logic rst_ni;
    logic clear_i;
    logic en_i;
    logic signed [ACC_W-1:0] d_i;
    logic signed [ACC_W-1:0] q_o;

    always #5 clk_i = ~clk_i;

    acc_accumulator #(.ACC_W(ACC_W)) dut (
        .clk_i,
        .rst_ni,
        .clear_i,
        .en_i,
        .d_i,
        .q_o
    );

    task automatic check_value(input logic signed [ACC_W-1:0] expected);
        #1;
        if (q_o !== expected)
            $fatal(1, "accumulator got %0d, expected %0d", q_o, expected);
    endtask

    initial begin
        // Reset clears the register synchronously.
        rst_ni = 1'b0; clear_i = 1'b0; en_i = 1'b0; d_i = 40'sd123;
        @(posedge clk_i); check_value(40'sd0);

        // Enable captures both positive and negative sums.
        @(negedge clk_i);
        rst_ni = 1'b1; en_i = 1'b1; d_i = 40'sd25;
        @(posedge clk_i); check_value(40'sd25);

        @(negedge clk_i);
        d_i = -40'sd100;
        @(posedge clk_i); check_value(-40'sd100);

        // Disabled register holds even when the input changes.
        @(negedge clk_i);
        en_i = 1'b0; d_i = 40'sd999;
        @(posedge clk_i); check_value(-40'sd100);

        // Clear takes priority over enable.
        @(negedge clk_i);
        clear_i = 1'b1; en_i = 1'b1; d_i = 40'sd77;
        @(posedge clk_i); check_value(40'sd0);

        $display("tb_acc_accumulator: PASS");
        $finish;
    end
endmodule
