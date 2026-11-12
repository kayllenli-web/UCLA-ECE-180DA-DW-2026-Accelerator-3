// acc_operand_stage.sv -- Align inputs, weights, and convolution markers

module acc_operand_stage (
    input logic clk_i,
    input logic rst_ni
);

    import accelerator_pkg::*;

    // Add scheduler, tile read, weight stream, and MAC control ports
    // Use acc_pkg::conv_index_t for the scheduler indices
    // Calculate the four tile bank addresses for each accepted tap
    // Route returned bank data to lanes (0,0), (0,1), (1,0), and (1,1)
    // Include a small weight buffer instead of adding a separate FIFO module
    // Align the weight and first/last markers with the returned input values
    // Hold data and indices during stalls and reserve space before issuing reads
    // Clear the accumulators in a separate cycle before the first product
    // Issue a MAC update only when all four inputs and the shared weight are ready
    // Pass the last marker to result control after the final product is accepted

endmodule
