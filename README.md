## Shared definitions

We use the definitions already in `common/` instead of making separate copies

- `accelerator_pkg.sv`: Network dimensions, memory layouts, CSR addresses, and shared data types
- `csr_accelerator_if.sv`: Sends job settings to the accelerator and returns done/error status
- `data_memory_if.sv`: Shared memory interface, with our connection still to be worked out

`rtl/acc_pkg.sv` only holds details specific to our design, including the four lanes, internal sum width, and convolution indices

Our proposed internal sums are 40 bits, while the shared accumulator type is 32 bits
We still need to check how these match the reference calculations

## Current files

We have 12 files, including one package
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
- `rtl/acc_job_controller.sv`: Controls the order of loading, convolution, pooling, FC, and completion
- `rtl/acc_memory_subsystem.sv`: Holds the global memories and loads image, weight, and parameter data
- `rtl/acc_operand_stage.sv`: Routes input values to the correct lanes and lines them up with buffered weights
- `rtl/accelerator_top.sv`: Connects the blocks and handles the processor interface

We renamed `acc_top` to `accelerator_top` to match the testbench
It currently has clock, reset, and CSR ports, but still needs the memory and debug ports

The three newest templates have clock/reset ports only
Their remaining ports still need to be added as we agree on the connections

## How the work is divided

- `acc_job_controller` decides which stage runs next
- `acc_conv_schedule` controls the loops within each convolution layer
- `acc_memory_subsystem` includes source loading and global scratchpad control
- `acc_operand_stage` includes a small weight buffer and aligns data before issuing a MAC update
- `accelerator_top` connects everything and initially holds CSR handling, FC sequencing, argmax, and result registers

We are keeping these responsibilities within the 12 files for now
We can split them into smaller modules later if needed

## Work remaining

- Write and test the logic inside the templates
- Load the image, weights, and parameters using the agreed memory connection
- Connect the scheduler, scratchpad, operand stage, and MAC lanes
- Add bias, requantization, ReLU, and pooling
- Connect both convolution layers and the fully connected layer
- Compare the ten scores and store the predicted digit
- Finish the processor, memory, debug, and result connections

## Things to resolve

- The support files use both `accelerator_pkg` and `accelerator_cnn_pkg`
- Some memory, debug, and golden-model files referenced by the testbench are missing
- We need to agree on the memory connection and match the testbench ports
- The testbench needs access to intermediate layer results
- Internal arithmetic and output conversion must match the reference model

## Current checks

Syntax parsing passed for the templates
Simulation, synthesis, and integration have not been tested yet