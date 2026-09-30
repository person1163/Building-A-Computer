import core_params_pkg::*;
import core_types_pkg::*;

module retire(
    input  logic              retire_valid,
    input  rob_entry_t         retired_entry,
    input  logic [ROB_W-1:0]   retired_tag,
    input  logic [XLEN-1:0]    retired_result,

    output logic               commit_valid,
    output logic [XLEN-1:0]    commit_pc,
    output logic [31:0]        commit_seq,
    output logic [ARCH_W-1:0]  commit_dst_arch,
    output logic               commit_dst_valid,

    output logic               arch_w_en,
    output logic [ARCH_W-1:0]  arch_w_reg,
    output logic [XLEN-1:0]    arch_w_val,

    output logic               rmt_commit_valid,
    output logic [ARCH_W-1:0]  rmt_commit_dst,
    output logic [ROB_W-1:0]   rmt_commit_tag
);

    always_comb begin
        // Split retired entry into commit values
        commit_valid = retire_valid;
        commit_pc = retired_entry.pc;
        commit_seq = retired_entry.seq;
        commit_dst_arch = retired_entry.dst_arch;
        commit_dst_valid = retired_entry.dst_valid;
        // Defines permissions for write to register files
        arch_w_en = retire_valid && retired_entry.dst_valid;
        arch_w_reg = retired_entry.dst_arch;
        arch_w_val = retired_result;
        // Defines RMT
        rmt_commit_valid = retire_valid && retired_entry.dst_valid;
        rmt_commit_dst = retired_entry.dst_arch;
        rmt_commit_tag = retired_tag;
    end

endmodule