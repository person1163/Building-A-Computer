import core_params_pkg::*;
import core_types_pkg::*;

module rename(
    input   uop_t       decoded_uop,
    input   [ROB_W-1:0] rob_alloc_tag,
    input   [ROB_W-1:0] rmt_src1_tag, rmt_src2_tag,
    input   logic       rmt_src1_valid, rmt_src2_valid,
    input   logic       src1_producer_ready, src2_producer_ready,
    input   logic       instruction_valid,
    input   logic       instruction_ready,
    output  uop_t       iq_dispatch_uop,
    output  logic       rob_alloc_valid,
    output  rob_entry_t rob_alloc_entry,
    output  logic       rmt_rename_valid,
    output  logic       iq_dispatch_valid
);

    logic rename_fire;
    
    always_comb begin
        rename_fire = instruction_valid && instruction_ready;
        // Build IQ uop with renamed tags
        iq_dispatch_uop  = decoded_uop;
        iq_dispatch_uop.dst_tag = rob_alloc_tag;
        iq_dispatch_uop.src1_tag_valid = decoded_uop.src1_valid && rmt_src1_valid;
        iq_dispatch_uop.src2_tag_valid = decoded_uop.src2_valid && rmt_src2_valid;
        iq_dispatch_uop.src1_tag = rmt_src1_tag;
        iq_dispatch_uop.src2_tag = rmt_src2_tag;
        iq_dispatch_uop.src1_ready = !decoded_uop.src1_valid || src1_producer_ready;
        iq_dispatch_uop.src2_ready = !decoded_uop.src2_valid || src2_producer_ready;
        iq_dispatch_valid = rename_fire;
        
        // Rename logic
        rob_alloc_valid       = rename_fire;
        rob_alloc_entry       = '0;
        rob_alloc_entry.valid = decoded_uop.valid;
        rob_alloc_entry.ready = 1'b0;
        rob_alloc_entry.seq   = decoded_uop.seq;
        rob_alloc_entry.pc    = decoded_uop.pc;
        rob_alloc_entry.dst_arch = decoded_uop.dst;
        rob_alloc_entry.dst_valid= decoded_uop.dst_valid;

        // RMT update on successful rename
        rmt_rename_valid = rename_fire;
    end
endmodule