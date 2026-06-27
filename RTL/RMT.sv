`timescale 1ns/1ns

import core_params_pkg::*;
import core_types_pkg::*;

module RMT (
    input  logic clk,
    input  logic rst,

    // inputs from rename stage
    input  logic rename_valid,
    input  logic dst_valid,
    input  logic [ARCH_W-1:0] src1,
    input  logic [ARCH_W-1:0] src2,
    input  logic [ARCH_W-1:0] dst,
    input  logic [ROB_W-1:0] new_tag,

    // inputs from commit stage
    input  logic commit_valid,
    input  logic [ARCH_W-1:0] commit_dst,
    input  logic [ROB_W-1:0] commit_tag,

    // outputs for rename stage
    output logic src1_valid,
    output logic src2_valid,
    output logic [ROB_W-1:0] src1_tag,
    output logic [ROB_W-1:0] src2_tag
);

    rmt_entry_t rmt [ARCH_REGS-1:0];

    always_comb begin
        src1_valid = rmt[src1].valid;
        src2_valid = rmt[src2].valid;
        src1_tag   = rmt[src1].tag;
        src2_tag   = rmt[src2].tag;
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < ARCH_REGS; i++) begin
                rmt[i].valid <= 1'b0;
                rmt[i].tag   <= '0;
            end
        end else begin
            if (rename_valid && dst_valid) begin
                rmt[dst].valid <= 1'b1;
                rmt[dst].tag   <= new_tag;
            end

            if (commit_valid) begin
                if (rmt[commit_dst].valid && (rmt[commit_dst].tag == commit_tag)) begin
                    rmt[commit_dst].valid <= 1'b0;
                    rmt[commit_dst].tag   <= '0;
                end
            end
        end
    end

endmodule