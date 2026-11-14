// Convolution request scheduler
module acc_conv_schedule
  import acc_pkg::*;
(
    input logic clk_i, rst_ni, start_i, layer2_i,
    output logic tile_valid_o,
    input logic tile_ready_i, tile_loaded_i,
    output logic tap_valid_o,
    input logic tap_ready_i, result_done_i,
    output conv_index_t index_o,
    output logic first_o, last_o, done_o
);
  typedef enum logic [2:0] {S_IDLE, S_TILE_REQ, S_TILE_WAIT,
                           S_ISSUE, S_RESULT, S_DONE} state_e;
  state_e state_q, state_d;
  conv_index_t index_q, index_d;
  logic layer2_q, layer2_d;
  logic [3:0] max_py, max_px;
  logic [1:0] max_ic;
  assign max_py = layer2_q ? 4'(accelerator_pkg::P2_H-1) : 4'(accelerator_pkg::P1_H-1);
  assign max_px = layer2_q ? 4'(accelerator_pkg::P2_W-1) : 4'(accelerator_pkg::P1_W-1);
  assign max_ic = layer2_q ? 2'(accelerator_pkg::C1_OC-1) : 2'(accelerator_pkg::IMG_C-1);
  assign index_o = index_q;
  always_comb begin
    state_d = state_q;
    index_d = index_q;
    layer2_d = layer2_q;
    tile_valid_o = 1'b0;
    tap_valid_o = 1'b0;
    done_o = 1'b0;
    first_o = (index_q.ic == 0 && index_q.ky == 0 && index_q.kx == 0);
    last_o = (index_q.ic == max_ic && index_q.ky == 3'(accelerator_pkg::C1_K-1) && index_q.kx == 3'(accelerator_pkg::C1_K-1));
    case (state_q)
      S_IDLE: if (start_i) begin
        index_d = '0; layer2_d = layer2_i; state_d = S_TILE_REQ;
      end
      S_TILE_REQ: begin
        tile_valid_o = 1'b1;
        if (tile_ready_i) state_d = S_TILE_WAIT;
      end
      S_TILE_WAIT: if (tile_loaded_i) state_d = S_ISSUE;
      S_ISSUE: begin
        tap_valid_o = 1'b1;
        if (tap_ready_i) begin
          if (last_o) state_d = S_RESULT;
          else if (index_q.kx == 3'(accelerator_pkg::C1_K-1)) begin
            index_d.kx = '0;
            if (index_q.ky == 3'(accelerator_pkg::C1_K-1)) begin
              index_d.ky = '0; index_d.ic = index_q.ic + 2'd1;
            end else index_d.ky = index_q.ky + 3'd1;
          end else index_d.kx = index_q.kx + 3'd1;
        end
      end
      S_RESULT: if (result_done_i) begin
        index_d.ic = '0; index_d.ky = '0; index_d.kx = '0;
        if (index_q.oc != 2'(accelerator_pkg::C1_OC-1)) begin
          index_d.oc = index_q.oc + 2'd1; state_d = S_ISSUE;
        end else begin
          index_d.oc = '0;
          if (index_q.px != max_px) begin
            index_d.px = index_q.px + 4'd1; state_d = S_TILE_REQ;
          end else if (index_q.py != max_py) begin
            index_d.px = '0; index_d.py = index_q.py + 4'd1; state_d = S_TILE_REQ;
          end else state_d = S_DONE;
        end
      end
      S_DONE: begin done_o = 1'b1; if (!start_i) state_d = S_IDLE; end
      default: state_d = S_IDLE;
    endcase
  end
  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin state_q <= S_IDLE; index_q <= '0; layer2_q <= 1'b0; end
    else begin state_q <= state_d; index_q <= index_d; layer2_q <= layer2_d; end
  end
endmodule
