    import accelerator_pkg::*;
    import acc_pkg::*;
    logic clk = 0, rst_n = 0;
    always #5 clk = ~clk;
    data_memory_if bus ();
    logic load_valid = 0, load_ready, load_done, loaded, mem_error;
    logic [31:0] image_offset = 32'h400;
    logic tile_valid, tile_ready, tile_loaded, tile_wr;
    logic [1:0] tile_bank;
    logic [4:0] tile_addr;
    act_t tile_data;
    logic schedule = 0, start = 0, layer2 = 0, schedule_done;
    logic sched_tile, sched_tap, sched_ready, first, last;
    conv_index_t index;
    logic result_done = 0;
    logic manual_tile = 0;
    conv_index_t manual_index = '0;
    logic manual_layer2 = 0;
    logic rd_en, raw_rd_valid, rd_valid = 0;
    logic [4:0] rd_addr [4];
    act_t raw_rd_data [4], rd_data [4];
    logic wr_req, wr_ready, w_valid, w_ready, w_error, w_layer2;
    conv_index_t w_index;
    wgt_t w_data;
    logic clear, out_valid, out_ready;
    logic out_first, out_last, out_error;
    act_t operands [4];
    wgt_t aligned_weight;
    conv_index_t out_index;
    sum_t sums [4];
    logic feature_wr = 0, feature_ready, feature_rd = 0, feature_valid;
    mem_sel_e feature_sel = MEM_ACT_B;
    logic [ACT_A_ADDR_W-1:0] feature_addr = '0;
    act_t feature_data = '0, feature_read;
    logic [PARAM_ADDR_W-1:0] param_addr = '0;
    logic [31:0] param_data;
    int cycles = 0;
    bit pending = 0, fail_read = 0, bad_magic = 0;
    int bus_delay = 0;
    logic [31:0] saved_bus_data;
    logic saved_bus_error;
    logic was_stalled = 0;
    logic [31:0] held_address;
    logic [31:0] requests = 0;
    int pixel_delay = 0;
    act_t saved_pixels [4];
    logic manual_weight = 0, manual_weight_valid = 0, manual_weight_ready = 0;
    conv_index_t manual_weight_index = '0;

    function automatic act_t image_byte(input int addr);
        return 8'(addr*7+3);
    endfunction
    function automatic act_t feature_byte(input int addr);
        return 8'(addr*3+7);
    endfunction
    function automatic wgt_t weight_byte(input int addr);
        return 8'(addr%17-8);
    endfunction
    function automatic logic [31:0] external_word(input logic [31:0] addr);
        logic [31:0] value;
        int offset;
        value = '0;
        if (addr >= 'h1000 && addr < 'h1800) begin
            offset = int'(addr-'h1000);
            for (int n = 0; n < 4; n++) value[8*n +: 8] = image_byte(offset+n);
        end else if (addr >= 'h3000 && addr < 'h3400) begin
            offset = int'(addr-'h3000);
            for (int n = 0; n < 4; n++) value[8*n +: 8] = weight_byte(offset+n);
        end else if (addr >= 'h4000 && addr < 'h4080) begin
            offset = int'((addr-'h4000)/4);
            if (offset == PAR_MAGIC) value = bad_magic ? 0 : MAGIC;
            else if (offset == PAR_VERSION) value = VERSION;
            else value = 32'(offset);
        end else $fatal(1, "External address outside fixture map %h", addr);
        return value;
    endfunction

    assign bus.request_ready = !pending && cycles%4 != 0;
    initial begin bus.response_valid = 0; bus.read_data = 0; bus.error = 0; end
    always @(posedge clk) begin
        cycles <= cycles+1;
        if (rst_n && was_stalled && (!bus.request_valid || bus.address !== held_address))
            $fatal(1, "External request changed during stall");
        was_stalled <= rst_n && bus.request_valid && !bus.request_ready;
        held_address <= bus.address;
        if (bus.response_valid && bus.response_ready) begin
            bus.response_valid <= 0; pending <= 0;
        end
        if (bus.request_valid && bus.request_ready) begin
            if (pending || bus.write || bus.address[1:0] != 0) $fatal(1, "Invalid source read");
            pending <= 1; bus_delay <= 1+cycles%5;
            saved_bus_data <= external_word(bus.address);
            saved_bus_error <= fail_read;
            requests <= requests+1;
        end else if (pending && !bus.response_valid) begin
            if (bus_delay == 0) begin
                bus.response_valid <= 1; bus.read_data <= saved_bus_data; bus.error <= saved_bus_error;
            end else bus_delay <= bus_delay-1;
        end
        rd_valid <= 0;
        if (!rst_n) pixel_delay <= 0;
        else if (raw_rd_valid) begin
            foreach (saved_pixels[b]) saved_pixels[b] <= raw_rd_data[b];
            pixel_delay <= 1+cycles%4;
        end else if (pixel_delay > 0) begin
            pixel_delay <= pixel_delay-1;
            if (pixel_delay == 1) begin
                rd_valid <= 1;
                foreach (rd_data[b]) rd_data[b] <= saved_pixels[b];
            end
        end
    end

    assign tile_valid = schedule ? sched_tile : manual_tile;
    assign out_ready = cycles%5 > 1;
    acc_conv_schedule scheduler (
        .clk_i(clk), .rst_ni(rst_n), .start_i(start), .layer2_i(layer2),
        .tile_valid_o(sched_tile), .tile_ready_i(tile_ready && schedule), .tile_loaded_i(tile_loaded),
        .tap_valid_o(sched_tap), .tap_ready_i(sched_ready && schedule), .result_done_i(result_done),
        .index_o(index), .first_o(first), .last_o(last), .done_o(schedule_done)
    );
    acc_memory_subsystem memory (
        .clk_i(clk), .rst_ni(rst_n), .source(bus),
        .load_valid_i(load_valid), .load_ready_o(load_ready),
        .img_base_i(32'h1000), .wgt_base_i(32'h3000), .param_base_i(32'h4000), .image_offset_i(image_offset),
        .load_done_o(load_done), .loaded_o(loaded), .error_o(mem_error),
        .tile_valid_i(tile_valid), .tile_ready_o(tile_ready),
        .tile_index_i(schedule ? index : manual_index), .tile_layer2_i(schedule ? layer2 : manual_layer2),
        .tile_loaded_o(tile_loaded), .tile_wr_en_o(tile_wr), .tile_wr_bank_o(tile_bank),
        .tile_wr_addr_o(tile_addr), .tile_wr_data_o(tile_data),
        .weight_req_valid_i(manual_weight ? manual_weight_valid : wr_req), .weight_req_ready_o(wr_ready),
        .weight_index_i(manual_weight ? manual_weight_index : w_index), .weight_layer2_i(manual_weight ? manual_layer2 : w_layer2),
        .weight_valid_o(w_valid), .weight_ready_i(manual_weight ? manual_weight_ready : w_ready), .weight_o(w_data), .weight_error_o(w_error),
        .feature_wr_valid_i(feature_wr), .feature_wr_ready_o(feature_ready),
        .feature_wr_sel_i(feature_sel), .feature_wr_addr_i(feature_addr), .feature_wr_data_i(feature_data),
        .feature_rd_en_i(feature_rd), .feature_rd_sel_i(feature_sel), .feature_rd_addr_i(feature_addr),
        .feature_rd_valid_o(feature_valid), .feature_rd_data_o(feature_read),
        .param_addr_i(param_addr), .param_data_o(param_data)
    );
    acc_tile_scratchpad tile (
        .clk_i(clk), .rst_ni(rst_n), .wr_en_i(tile_wr), .wr_bank_i(tile_bank), .wr_addr_i(tile_addr), .wr_data_i(tile_data),
        .rd_en_i(rd_en), .rd_addr_i(rd_addr), .rd_valid_o(raw_rd_valid), .rd_data_o(raw_rd_data)
    );
    acc_operand_stage operands_stage (
        .clk_i(clk), .rst_ni(rst_n), .tap_valid_i(sched_tap && schedule), .tap_ready_o(sched_ready),
        .index_i(index), .layer2_i(layer2), .first_i(first), .last_i(last),
        .rd_en_o(rd_en), .rd_addr_o(rd_addr), .rd_valid_i(rd_valid), .rd_data_i(rd_data),
        .weight_req_valid_o(wr_req), .weight_req_ready_i(wr_ready), .weight_index_o(w_index), .weight_layer2_o(w_layer2),
        .weight_valid_i(w_valid), .weight_ready_o(w_ready), .weight_i(w_data), .weight_error_i(w_error),
        .clear_o(clear), .out_valid_o(out_valid), .out_ready_i(out_ready), .act_o(operands), .weight_o(aligned_weight),
        .index_o(out_index), .first_o(out_first), .last_o(out_last), .error_o(out_error)
    );
    acc_pe_array pe (
        .clk_i(clk), .rst_ni(rst_n), .clear_i(clear), .issue_i(out_valid && out_ready && !out_error),
        .lane_en_i(4'b1111), .act_i(operands), .wgt_i(aligned_weight), .sum_o(sums)
    );

    task automatic reset_local();
        @(negedge clk); rst_n = 0;
        repeat (2) @(negedge clk);
        rst_n = 1;
    endtask
    task automatic load_caches(input bit expect_error = 0);
        int guard;
        @(negedge clk); load_valid = 1;
        do @(posedge clk); while (!load_ready);
        @(negedge clk); load_valid = 0;
        guard = 0;
        while (!load_done && guard < 20000) begin @(negedge clk); guard++; end
        if (!load_done || mem_error !== expect_error || loaded === expect_error)
            $fatal(1, "Cache load failed error=%b loaded=%b", mem_error, loaded);
        @(negedge clk);
    endtask
    task automatic fill_features();
        @(negedge clk); feature_sel = MEM_ACT_B;
        for (int addr = 0; addr < P1_ELEMS; addr++) begin
            feature_wr = 1; feature_addr = ACT_A_ADDR_W'(addr); feature_data = feature_byte(addr);
            do @(posedge clk); while (!feature_ready);
            @(negedge clk);
        end
        feature_wr = 0;
    endtask
    initial begin #20000000; $fatal(1, "Fixture timeout"); end
