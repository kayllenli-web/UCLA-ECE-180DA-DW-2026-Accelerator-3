// acc_pkg.sv -- Accelerator-local constants and types (no datapath logic)
// Keep Common course definitions separate and unchanged
package acc_pkg;
    localparam int unsigned LANES = 4;
    localparam int unsigned ACC_W = 40;
    typedef logic signed [ACC_W-1:0] sum_t;

    localparam int unsigned PY_W = $clog2(accelerator_pkg::P1_H);
    localparam int unsigned PX_W = $clog2(accelerator_pkg::P1_W);
    localparam int unsigned OC_W = $clog2(accelerator_pkg::C1_OC);
    localparam int unsigned IC_W = $clog2(accelerator_pkg::C1_OC);
    localparam int unsigned KY_W = $clog2(accelerator_pkg::C1_K);
    localparam int unsigned KX_W = $clog2(accelerator_pkg::C1_K);
    typedef struct packed {
        logic [PY_W-1:0] py;
        logic [PX_W-1:0] px;
        logic [OC_W-1:0] oc;
        logic [IC_W-1:0] ic;
        logic [KY_W-1:0] ky;
        logic [KX_W-1:0] kx;
    } conv_index_t;
    // Add internal types as interfaces are agreed
endpackage
