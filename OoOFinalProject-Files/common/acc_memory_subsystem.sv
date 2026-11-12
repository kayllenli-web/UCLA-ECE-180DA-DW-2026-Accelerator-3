// acc_memory_subsystem.sv -- Global scratchpads and source loading

module acc_memory_subsystem (
    input logic clk_i,
    input logic rst_ni
);

    import accelerator_pkg::*;

    // Add internal load requests, memory accesses, completion, and error ports
    // Use the shared memory sizes, address widths, and layout constants
    // Declare feature, weight, and parameter storage as unpacked arrays
    // Include the source loader here instead of adding a separate module
    // Use the agreed shared memory interface once the team confirms the connection
    // Track memory responses and report completion after the data is stored
    // Supply tile fills, streamed weights, bias and shift values, and FC features
    // Accept pooled writes and coordinate feature memory reuse with the controller
    // Reset control and validity without clearing every RAM entry

endmodule
