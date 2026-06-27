`timescale 1ns/1ns

import core_params_pkg::*;
import core_types_pkg::*;

module IQ (
    input  logic             clk,
    input  logic             rst,
    input  logic             dispatch_valid,
    input  uop_t             dispatch_uop,
    input  logic             wb_valid,
    input  logic [ROB_W-1:0] wb_tag,
    output logic             dispatch_ready,
    output logic             issue_valid,
    output uop_t             issue_uop
);

iq_entry_t IQ_array[IQ_ENTRIES-1:0];
logic [XLEN-1:0] oldest_seq;
logic [IQ_W-1:0] oldest_index;
logic [IQ_W-1:0] free_index;
logic selected_valid;
logic free_valid;

always_comb begin
    issue_valid = 1'b0;
    issue_uop = '0;
    selected_valid = 1'b0;
    oldest_seq = '1;
    oldest_index = '0;

    dispatch_ready = 1'b0;
    free_valid = 1'b0;
    free_index = '0;

    for (int i = 0; i < IQ_ENTRIES; i++) begin
        if (!IQ_array[i].valid && !free_valid) begin
            free_valid = 1'b1;
            free_index = IQ_W'(i);
        end

        if (IQ_array[i].valid &&
            IQ_array[i].uop.src1_ready &&
            IQ_array[i].uop.src2_ready &&
            (IQ_array[i].uop.seq < oldest_seq)) begin
            selected_valid = 1'b1;
            oldest_seq = IQ_array[i].uop.seq;
            oldest_index = IQ_W'(i);
            issue_uop = IQ_array[i].uop;
        end
    end

    dispatch_ready = free_valid;
    issue_valid = selected_valid;
end

always_ff @(posedge clk) begin
    if (rst) begin
        for (int i = 0; i < IQ_ENTRIES; i++) begin
            IQ_array[i].valid <= 1'b0;
            IQ_array[i].uop <= '0;
        end
    end else begin
        if (wb_valid) begin
            for (int i = 0; i < IQ_ENTRIES; i++) begin
                if (IQ_array[i].valid) begin
                    if (wb_tag == IQ_array[i].uop.src1_tag) begin
                        IQ_array[i].uop.src1_ready <= 1'b1;
                    end
                    if (wb_tag == IQ_array[i].uop.src2_tag) begin
                        IQ_array[i].uop.src2_ready <= 1'b1;
                    end
                end
            end
        end

        if (dispatch_valid && dispatch_ready) begin
            IQ_array[free_index].valid <= 1'b1;
            IQ_array[free_index].uop <= dispatch_uop;
        end

        if (issue_valid) begin
            IQ_array[oldest_index].valid <= 1'b0;
        end
    end
end

endmodule
