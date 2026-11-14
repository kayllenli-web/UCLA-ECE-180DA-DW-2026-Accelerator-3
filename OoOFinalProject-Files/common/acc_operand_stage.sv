// One buffered tap with independent pixel and weight responses
module acc_operand_stage
    import accelerator_pkg::act_t;
    import accelerator_pkg::wgt_t;
    import acc_pkg::conv_index_t;
(
    input logic clk_i, rst_ni,
    input logic tap_valid_i,
    output logic tap_ready_o,
    input conv_index_t index_i,
    input logic layer2_i, first_i, last_i,
    output logic rd_en_o,
    output logic [4:0] rd_addr_o [4],
    input logic rd_valid_i,
    input act_t rd_data_i [4],
    output logic weight_req_valid_o,
    input logic weight_req_ready_i,
    output conv_index_t weight_index_o,
    output logic weight_layer2_o,
    input logic weight_valid_i,
    output logic weight_ready_o,
    input wgt_t weight_i,
    input logic weight_error_i,
    output logic clear_o,
    output logic out_valid_o,
    input logic out_ready_i,
    output act_t act_o [4],
    output wgt_t weight_o,
    output conv_index_t index_o,
    output logic first_o, last_o, error_o
);
    typedef enum logic [1:0] {IDLE, FETCH, CLEAR, OUTPUT} state_e;
    state_e state_q;
    conv_index_t index_q;
    logic layer2_q, first_q, last_q, rd_sent_q, weight_sent_q;
    logic pixels_q, weight_q, error_q;
    act_t pixels_data_q [4];
    wgt_t weight_data_q;
    int unsigned u, v, bank;

    assign tap_ready_o = rst_ni && state_q == IDLE;
    assign rd_en_o = rst_ni && state_q == FETCH && !rd_sent_q;
    assign weight_req_valid_o = rst_ni && state_q == FETCH && !weight_sent_q;
    assign weight_ready_o = rst_ni && state_q == FETCH && !weight_q;
    assign weight_index_o = index_q;
    assign weight_layer2_o = layer2_q;
    assign clear_o = rst_ni && state_q == CLEAR && !error_q;
    assign out_valid_o = rst_ni && state_q == OUTPUT;
    assign index_o = index_q;
    assign first_o = first_q;
    assign last_o = last_q;
    assign error_o = error_q;
    assign weight_o = weight_data_q;

    always_comb begin
        for (int b = 0; b < 4; b++) rd_addr_o[b] = '0;
        for (int lane = 0; lane < 4; lane++) begin
            u = int'(index_q.ky) + (lane / 2);
            v = int'(index_q.kx) + (lane % 2);
            bank = 2*(u % 2) + (v % 2);
            rd_addr_o[bank] = 5'(9*int'(index_q.ic) + 3*(u/2) + v/2);
            act_o[lane] = pixels_data_q[bank];
        end
    end

    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            state_q <= IDLE;
            index_q <= '0;
            layer2_q <= 0; first_q <= 0; last_q <= 0;
            rd_sent_q <= 0; weight_sent_q <= 0;
            pixels_q <= 0; weight_q <= 0; error_q <= 0;
            weight_data_q <= '0;
            foreach (pixels_data_q[b]) pixels_data_q[b] <= '0;
        end else case (state_q)
            IDLE: if (tap_valid_i) begin
                index_q <= index_i;
                layer2_q <= layer2_i;
                first_q <= first_i; last_q <= last_i;
                rd_sent_q <= 0; weight_sent_q <= 0;
                pixels_q <= 0; weight_q <= 0; error_q <= 0;
                state_q <= FETCH;
            end
            FETCH: begin
                if (rd_en_o) rd_sent_q <= 1;
                if (weight_req_valid_o && weight_req_ready_i) weight_sent_q <= 1;
                if (rd_valid_i && rd_sent_q && !pixels_q) begin
                    foreach (pixels_data_q[b]) pixels_data_q[b] <= rd_data_i[b];
                    pixels_q <= 1;
                end
                if (weight_valid_i && weight_ready_o) begin
                    weight_data_q <= weight_i;
                    error_q <= weight_error_i;
                    weight_q <= 1;
                end
                if (pixels_q && weight_q)
                    state_q <= first_q ? CLEAR : OUTPUT;
            end
            CLEAR: state_q <= OUTPUT;
            OUTPUT: if (out_ready_i) state_q <= IDLE;
            default: state_q <= IDLE;
        endcase
    end
endmodule
