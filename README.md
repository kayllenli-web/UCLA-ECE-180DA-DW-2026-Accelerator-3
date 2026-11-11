## Shared definitions

We use the definitions already in `common/` instead of making separate copies

- `accelerator_pkg.sv`: Network dimensions, memory layouts, CSR addresses, and shared data types
- `csr_accelerator_if.sv`: Sends job settings to the accelerator and returns done/error status
- `data_memory_if.sv`: Shared memory interface, with our connection still to be worked out

`rtl/acc_pkg.sv` only holds details specific to our design, including the four lanes, internal sum width, and convolution indices

Our proposed internal sums are 40 bits, while the shared accumulator type is 32 bits
We still need to check how these match the reference calculations

## Current files

These are templates with ports and comments
The logic still needs to be written

- `rtl/acc_pkg.sv`: Internal constants and types
- `rtl/acc_mac_unit.sv`: Multiplies an input by a weight and adds the previous sum
- `rtl/acc_accumulator.sv`: Stores the running sum
- `rtl/acc_pe_array.sv`: Connects four MAC lanes that share one weight
- `rtl/acc_tile_scratchpad.sv`: Stores the input patch in four memory banks
- `rtl/acc_conv_schedule.sv`: Tracks the tile, filter, input channel, and kernel position
- `rtl/acc_requant_relu.sv`: Adds bias, converts the result, and applies ReLU and clipping
- `rtl/acc_pool2x2.sv`: Takes the largest of four outputs
- `rtl/accelerator_top.sv`: Connects the accelerator blocks and the processor interface

We renamed `acc_top` to `accelerator_top` to match the testbench
It currently has clock, reset, and CSR ports, but still needs the memory and debug ports

## Work remaining

- Load the image, weights, and parameters
- Build the local memories and weight buffer
- Line up memory data and weights before sending them to the MACs
- Control Conv1, Pool1, Conv2, Pool2, and the fully connected layer
- Compare the ten scores and store the predicted digit
- Finish the processor, memory, and result connections

These tasks do not each need their own file
We can keep them in the existing modules or split them up when needed

## Things to resolve

- The support files use both `accelerator_pkg` and `accelerator_cnn_pkg`
- Some memory, debug, and golden-model files referenced by the testbench are missing
- We need to agree on the memory connection and match the testbench ports
- The testbench also needs access to intermediate layer results

Syntax parsing passed
Simulation, synthesis, and integration have not been tested yet