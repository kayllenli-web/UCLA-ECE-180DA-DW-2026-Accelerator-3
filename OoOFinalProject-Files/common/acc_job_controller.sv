// acc_job_controller.sv -- Sequence one complete accelerator job

module acc_job_controller (
    input logic clk_i,
    input logic rst_ni
);

    import accelerator_pkg::*;

    // Add internal start, stage request, completion, and error ports
    // Keep the external CSR connection in accelerator_top
    // Declare enum state_e and state_q / state_d
    // Use always_comb for next state and always_ff for state registers
    // Sequence loading, Conv1/Pool1, Conv2/Pool2, FC, and result publication
    // Wait for each stage to finish its reads and writes before advancing
    // Coordinate FC sequencing in accelerator_top through the stage handshake
    // Report job completion after the final results are available

endmodule
