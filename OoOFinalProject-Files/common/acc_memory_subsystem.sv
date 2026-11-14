// Local caches with one outstanding external word read
module acc_memory_subsystem
    import accelerator_pkg::*;
    import acc_pkg::conv_index_t;
(
    input logic clk_i, rst_ni,
    data_memory_if.client source,
    input logic load_valid_i,
    output logic load_ready_o,
    input logic [31:0] img_base_i, wgt_base_i, param_base_i, image_offset_i,
    output logic load_done_o, loaded_o, error_o,
    input logic tile_valid_i,
    output logic tile_ready_o,
    input conv_index_t tile_index_i,
    input logic tile_layer2_i,
    output logic tile_loaded_o,
    output logic tile_wr_en_o,
    output logic [1:0] tile_wr_bank_o,
    output logic [4:0] tile_wr_addr_o,
    output act_t tile_wr_data_o,
    input logic weight_req_valid_i,
    output logic weight_req_ready_o,
    input conv_index_t weight_index_i,
    input logic weight_layer2_i,
    output logic weight_valid_o,
    input logic weight_ready_i,
    output wgt_t weight_o,
    output logic weight_error_o,
    input logic feature_wr_valid_i,
    output logic feature_wr_ready_o,
    input mem_sel_e feature_wr_sel_i,
    input logic [ACT_A_ADDR_W-1:0] feature_wr_addr_i,
    input act_t feature_wr_data_i,
    input logic feature_rd_en_i,
    input mem_sel_e feature_rd_sel_i,
    input logic [ACT_A_ADDR_W-1:0] feature_rd_addr_i,
    output logic feature_rd_valid_o,
    output act_t feature_rd_data_o,
    input logic [PARAM_ADDR_W-1:0] param_addr_i,
    output logic [31:0] param_data_o
);
    typedef enum logic [2:0] {IDLE, REQUEST, RESPONSE, DRAIN} load_e;
    typedef enum logic [1:0] {T_IDLE, T_READ, T_WRITE, T_DONE} tile_e;
    load_e load_q;
    tile_e tile_q;
    act_t img_q [IMG_MEM_BYTES];
    wgt_t wgt_q [WGT_MEM_BYTES];
    logic [31:0] param_q [PARAM_WORDS];
    act_t a_q [ACT_A_BYTES], b_q [ACT_B_BYTES];
    logic [ACT_A_BYTES-1:0] a_valid_q;
    logic [ACT_B_BYTES-1:0] b_valid_q;
    logic [31:0] img_base_q, wgt_base_q, param_base_q, offset_q;
    logic [1:0] region_q;
    int unsigned word_q, patch_q;
    conv_index_t tile_index_q;
    logic tile_layer2_q;
    act_t patch_data_q;
    int unsigned patch_u, patch_v, patch_ic, patch_addr, weight_addr;
    int unsigned limit_words;
    logic feature_bad, patch_bad, weight_bad;

    assign load_ready_o = rst_ni && load_q == IDLE && tile_q == T_IDLE && !weight_valid_o;
    assign tile_ready_o = rst_ni && loaded_o && load_q == IDLE && tile_q == T_IDLE && !load_valid_i;
    assign tile_wr_en_o = rst_ni && tile_q == T_WRITE;
    assign tile_wr_bank_o = 2'(2*(patch_u%2) + patch_v%2);
    assign tile_wr_addr_o = 5'(9*patch_ic + 3*(patch_u/2) + patch_v/2);
    assign tile_wr_data_o = patch_data_q;
    assign weight_req_ready_o = rst_ni && loaded_o && load_q == IDLE && !load_valid_i && (!weight_valid_o || weight_ready_i);
    assign feature_wr_ready_o = rst_ni && load_q == IDLE && tile_q == T_IDLE && !load_valid_i && !tile_valid_i;
    assign param_data_o = loaded_o ? param_q[param_addr_i] : '0;

    always_comb begin
        source.request_valid = rst_ni && load_q == REQUEST;
        source.write = 0;
        source.byte_enable = '0;
        source.write_data = '0;
        source.address = '0;
        case (region_q)
            0: source.address = img_base_q + offset_q + 4*word_q;
            1: source.address = wgt_base_q + 4*word_q;
            2: source.address = param_base_q + 4*word_q;
            default: source.address = '0;
        endcase
        source.response_ready = rst_ni && (load_q == RESPONSE || load_q == DRAIN);
        case (region_q)
            0: limit_words = IMG_PIXELS/4;
            1: limit_words = WGT_MEM_BYTES/4;
            default: limit_words = PARAM_WORDS;
        endcase
        patch_ic = patch_q / 36;
        patch_u = (patch_q % 36) / 6;
        patch_v = patch_q % 6;
        patch_addr = tile_layer2_q
            ? (patch_ic*P1_H + 2*int'(tile_index_q.py)+patch_u)*P1_W + 2*int'(tile_index_q.px)+patch_v
            : offset_q + (2*int'(tile_index_q.py)+patch_u)*IMG_W + 2*int'(tile_index_q.px)+patch_v;
        patch_bad = tile_layer2_q ? patch_addr >= P1_ELEMS : patch_addr >= IMG_MEM_BYTES;
        if (tile_layer2_q && patch_addr < P1_ELEMS) patch_bad |= !b_valid_q[patch_addr];
        weight_addr = (weight_layer2_i ? WGT_CONV2_BASE : WGT_CONV1_BASE)
            + ((int'(weight_index_i.oc)*(weight_layer2_i ? C1_OC : IMG_C)+int'(weight_index_i.ic))*C1_K+int'(weight_index_i.ky))*C1_K+int'(weight_index_i.kx);
        weight_bad = int'(weight_index_i.oc) >= C1_OC || int'(weight_index_i.ic) >= (weight_layer2_i ? C1_OC : IMG_C)
            || int'(weight_index_i.ky) >= C1_K || int'(weight_index_i.kx) >= C1_K || weight_addr >= WGT_MEM_BYTES;
        feature_bad = !((feature_wr_sel_i == MEM_ACT_A && int'(feature_wr_addr_i) < ACT_A_BYTES)
            || (feature_wr_sel_i == MEM_ACT_B && int'(feature_wr_addr_i) < ACT_B_BYTES));
    end

    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            // Drain an accepted read before allowing another load
            if (load_q == RESPONSE || load_q == DRAIN) load_q <= DRAIN;
            else load_q <= IDLE;
            tile_q <= T_IDLE;
            loaded_o <= 0; load_done_o <= 0; tile_loaded_o <= 0; error_o <= 0;
            weight_valid_o <= 0; weight_error_o <= 0; weight_o <= '0;
            feature_rd_valid_o <= 0; feature_rd_data_o <= '0;
            a_valid_q <= '0; b_valid_q <= '0;
            img_base_q <= '0; wgt_base_q <= '0; param_base_q <= '0; offset_q <= '0;
            region_q <= 0; word_q <= 0; patch_q <= 0;
            tile_index_q <= '0; tile_layer2_q <= 0; patch_data_q <= '0;
        end else begin
            load_done_o <= 0; tile_loaded_o <= 0; error_o <= 0;
            feature_rd_valid_o <= 0;
            if (weight_valid_o && weight_ready_i) weight_valid_o <= 0;
            case (load_q)
                IDLE: if (load_valid_i && load_ready_o) begin
                    loaded_o <= 0;
                    a_valid_q <= '0; b_valid_q <= '0;
                    if (img_base_i[1:0] != 0 || wgt_base_i[1:0] != 0 || param_base_i[1:0] != 0
                        || image_offset_i[1:0] != 0 || image_offset_i > IMG_MEM_BYTES-IMG_PIXELS
                        || ({1'b0, img_base_i}+{1'b0, image_offset_i}+33'(IMG_PIXELS)) > 33'h100000000
                        || ({1'b0, wgt_base_i}+33'(WGT_MEM_BYTES)) > 33'h100000000
                        || ({1'b0, param_base_i}+33'(4*PARAM_WORDS)) > 33'h100000000) begin
                        load_done_o <= 1; error_o <= 1;
                    end else begin
                        img_base_q <= img_base_i; wgt_base_q <= wgt_base_i; param_base_q <= param_base_i;
                        offset_q <= image_offset_i; region_q <= 0; word_q <= 0;
                        load_q <= REQUEST;
                    end
                end
                REQUEST: if (source.request_ready) load_q <= RESPONSE;
                RESPONSE: if (source.response_valid) begin
                    if (source.error) begin
                        load_q <= IDLE; load_done_o <= 1; error_o <= 1;
                    end else begin
                        case (region_q)
                            0: for (int n = 0; n < 4; n++) img_q[offset_q+4*word_q+32'(n)] <= source.read_data[8*n +: 8];
                            1: for (int n = 0; n < 4; n++) wgt_q[4*word_q+32'(n)] <= source.read_data[8*n +: 8];
                            2: param_q[word_q] <= source.read_data;
                            default: ;
                        endcase
                        if (word_q == limit_words-1) begin
                            word_q <= 0;
                            if (region_q == 2) begin
                                load_q <= IDLE; load_done_o <= 1;
                                if (param_q[PAR_MAGIC] == MAGIC && param_q[PAR_VERSION] == VERSION) loaded_o <= 1;
                                else error_o <= 1;
                            end else begin region_q <= region_q + 1'b1; load_q <= REQUEST; end
                        end else begin word_q <= word_q + 1; load_q <= REQUEST; end
                    end
                end
                DRAIN: if (source.response_valid) load_q <= IDLE;
                default: load_q <= IDLE;
            endcase

            case (tile_q)
                T_IDLE: if (tile_valid_i && tile_ready_o) begin
                    if (int'(tile_index_i.py) >= (tile_layer2_i ? P2_H : P1_H)
                        || int'(tile_index_i.px) >= (tile_layer2_i ? P2_W : P1_W)) begin
                        tile_loaded_o <= 1; error_o <= 1;
                    end else begin
                        tile_index_q <= tile_index_i; tile_layer2_q <= tile_layer2_i;
                        patch_q <= 0; tile_q <= T_READ;
                    end
                end
                T_READ: begin
                    if (patch_bad) begin tile_q <= T_IDLE; tile_loaded_o <= 1; error_o <= 1; end
                    else begin
                        patch_data_q <= tile_layer2_q ? b_q[patch_addr] : img_q[patch_addr];
                        tile_q <= T_WRITE;
                    end
                end
                T_WRITE: begin
                    if (patch_q == (tile_layer2_q ? 108 : 36)-1) tile_q <= T_DONE;
                    else begin patch_q <= patch_q + 1; tile_q <= T_READ; end
                end
                T_DONE: begin tile_loaded_o <= 1; tile_q <= T_IDLE; end
                default: tile_q <= T_IDLE;
            endcase

            if (weight_req_valid_i && weight_req_ready_o) begin
                weight_valid_o <= 1; weight_error_o <= weight_bad;
                weight_o <= weight_bad ? '0 : wgt_q[weight_addr];
            end
            if (feature_wr_valid_i && feature_wr_ready_o) begin
                if (feature_bad) error_o <= 1;
                else if (feature_wr_sel_i == MEM_ACT_A) begin
                    a_q[feature_wr_addr_i] <= feature_wr_data_i; a_valid_q[feature_wr_addr_i] <= 1;
                end else begin
                    b_q[ACT_B_ADDR_W'(feature_wr_addr_i)] <= feature_wr_data_i; b_valid_q[ACT_B_ADDR_W'(feature_wr_addr_i)] <= 1;
                end
            end
            if (feature_rd_en_i && load_q == IDLE && !load_valid_i) begin
                if (feature_rd_sel_i == MEM_ACT_A && int'(feature_rd_addr_i) < ACT_A_BYTES && a_valid_q[feature_rd_addr_i]) begin
                    feature_rd_data_o <= a_q[feature_rd_addr_i]; feature_rd_valid_o <= 1;
                end else if (feature_rd_sel_i == MEM_ACT_B && int'(feature_rd_addr_i) < ACT_B_BYTES && b_valid_q[ACT_B_ADDR_W'(feature_rd_addr_i)]) begin
                    feature_rd_data_o <= b_q[ACT_B_ADDR_W'(feature_rd_addr_i)]; feature_rd_valid_o <= 1;
                end else error_o <= 1;
            end
        end
    end
endmodule
