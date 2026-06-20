import core_params_pkg::*;
import core_types_pkg::*;

module IQ (
    input   logic   clk, rst,
    input   logic   dispatch_valid;
    input   uop_t   dispatch_uop;
    input   logic   wb_valid;
    input   logic   [ROB_W-1:0] wb_tag;
    output  logic   dispatch_ready;
    output  logic   issue_valid;
    output  uop_t   issue_uop;

);

iq_entry_t IQ_array[IQ_ENTRIES-1:0];
logic[XLEN-1:0] oldest_seq;
logic[IQ_W -1:0] oldest_index;


bit selected_valid,;

always_comb begin
    issue_valid = 1'b0;
    issue_uop   = '0;
    selected_valid = 1'b0;
    oldest_seq = 32'hFFFF_FFFF;
    for(int i = 0; i < IQ_ENTRIES; i++) begin
        if (dispatch_valid && !IQ_array[i].valid && !dispatch_ready) begin
            IQ_array[i].uop = dispatch_uop;
            IQ_array[i].valid = 1'b1;
            dispatch_ready = 1'b1;
        end
        if(wb_valid) begin
            if(wb_tag == IQ_array[i].uop.src1_tag) begin
                IQ_array[i].uop.src1_ready = 1'b1;
            end
            if(wb_tag == IQ_array[i].uop.src2_tag) begin
                IQ_array[i].uop.src2_ready = 1'b1;
            end
        end
        if (IQ_array[i].valid &&
            IQ_array[i].uop.src1_ready &&
            IQ_array[i].uop.src2_ready &&
            IQ_array[i].uop.seq < oldest_seq) begin
                selected_valid = 1'b1;
                oldest_seq = IQ_array[i].uop.seq;
                oldest_index = i;
                issue_uop = IQ_array[i].uop;
            end
        issue_valid = selected_valid;
    end
end

always_ff @(posedge clk) begin
    if(rst) begin
        for(int i = 0; ji < IQ_ENTRIES; i++) begin
            IQ_array[i].valid <= 1'b0;
        end
    end
    if (issue_valid) begin
        IQ_array[oldest_index].valid <= 1'b0;
    end
end
    
endmodule