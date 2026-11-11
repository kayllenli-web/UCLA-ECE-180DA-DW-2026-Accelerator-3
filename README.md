## Existing CDR block interfaces

The seven module headers retain the current starter RTL ports. 
`acc_pkg.sv` contains the small set of constants/types needed to read those interfaces.

- `rtl/acc_mac_unit.sv`: Combinational multiply and add
- `rtl/acc_accumulator.sv`: Register holding one running sum
- `rtl/acc_pe_array.sv`: Four neighboring spatial outputs sharing one weight
- `rtl/acc_tile_scratchpad.sv`: Four banks holding a 6 x 6 x Cin input patch
- `rtl/acc_conv_schedule.sv`: Convolution tile, filter, channel, and kernel scheduler
- `rtl/acc_requant_relu.sv`: Bias, requantization, ReLU, and clipping for convolution
- `rtl/acc_pool2x2.sv`: Maximum of four completed outputs from one channel

## Remaining planned blocks

- `rtl/acc_top.sv`: Structural wrapper for the complete accelerator
- `rtl/acc_csr_adapter.sv`: Connect the course CSR interface to our job controller
- `rtl/acc_job_controller.sv`: Sequence one complete digit-classification job
- `rtl/acc_memory_subsystem.sv`: Group global scratchpads and loader control: diagram block 3
- `rtl/acc_source_loader.sv`: Read the provided IMG, WGT, and PARAM source memories
- `rtl/acc_weight_fifo.sv`: Stage the streamed weight and handle backpressure
- `rtl/acc_operand_stage.sv`: Align tile-bank responses, shared weight, and tap metadata
- `rtl/acc_fc_controller.sv`: Reuse MAC lane 0 for the fully connected layer
- `rtl/acc_argmax.sv`: Choose the class with the largest of ten signed logits
- `rtl/acc_result_regs.sv`: Hold ten logits and the predicted digit until readback