module tb_acc_pool2x2;
    import accelerator_pkg::*;

    act_t lane0_i [4] = '{9, 2, 3, 4};
    act_t lane1_i [4] = '{1, 9, 3, 4};
    act_t lane2_i [4] = '{1, 2, 9, 4};
    act_t lane3_i [4] = '{1, 2, 3, 9};
    act_t tie_i   [4] = '{7, 7, 3, 2};
    act_t cross_tie_i [4] = '{9, 1, 9, 2};
    act_t equal_i [4] = '{42, 42, 42, 42};
    act_t zero_i  [4] = '{0, 0, 0, 0};
    act_t max_i   [4] = '{0, 255, 1, 2};

    act_t lane0_o;
    act_t lane1_o;
    act_t lane2_o;
    act_t lane3_o;
    act_t tie_o;
    act_t cross_tie_o;
    act_t equal_o;
    act_t zero_o;
    act_t max_o;

    acc_pool2x2 lane0_dut (.x_i(lane0_i), .max_o(lane0_o));
    acc_pool2x2 lane1_dut (.x_i(lane1_i), .max_o(lane1_o));
    acc_pool2x2 lane2_dut (.x_i(lane2_i), .max_o(lane2_o));
    acc_pool2x2 lane3_dut (.x_i(lane3_i), .max_o(lane3_o));
    acc_pool2x2 tie_dut   (.x_i(tie_i),   .max_o(tie_o));
    acc_pool2x2 cross_tie_dut (.x_i(cross_tie_i), .max_o(cross_tie_o));
    acc_pool2x2 equal_dut (.x_i(equal_i), .max_o(equal_o));
    acc_pool2x2 zero_dut  (.x_i(zero_i),  .max_o(zero_o));
    acc_pool2x2 max_dut   (.x_i(max_i),   .max_o(max_o));

    initial begin
        #1;
        if ((lane0_o !== 9) || (lane1_o !== 9) ||
            (lane2_o !== 9) || (lane3_o !== 9) ||
            (tie_o !== 7) || (cross_tie_o !== 9) || (equal_o !== 42) ||
            (zero_o !== 0) || (max_o !== 255)) begin
            $fatal(1, "pool max test failed");
        end

        lane0_i[0] = 0; lane0_i[1] = 200;
        #1;
        if (lane0_o !== 200) $fatal(1, "Pool did not respond to changed inputs");
        lane0_i[1] = 0;
        #1;
        if (lane0_o !== 4) $fatal(1, "Pool retained a previous maximum");
        $display("tb_acc_pool2x2: PASS");
        $finish;
    end
endmodule
