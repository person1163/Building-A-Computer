import core_params_pkg::*;
import core_types_pkg::*;

module ROB
(
    input logic clk, rst,
    // Valid entry to allocate
    input rob_entry_t alloc_entry,
    input logic alloc_valid,
    output logic alloc_ready,
    output logic [ROB_W-1:0] alloc_tag,
    // Ready tag to be writen back
    input logic [ROB_W-1:0] wb_tag,
    input logic wb_valid,
    // Retire logic
    output logic retire_valid,
    output rob_entry_t retired_entry,
    output logic [ROB_W:0] count;
);

logic [ROB_W-1:0] head_ptr, tail_ptr, next_head, next_tail;
logic [ROB_W:0] next_count;
logic bit full, empty;

rob_entry_t ROB_array[ROB_ENTRIES-1:0];

assign full = (count == ROB_ENTRIES);
assign empty = (count == 0);


always_comb begin
    alloc_ready = !full;
    alloc_tag = tail_ptr;
    retire_valid = !empty && ROB_array[head_ptr].valid && ROB_array[head_ptr].ready;
    retired_entry = ROB_array[head_ptr];
    next_tail = tail_ptr;
    next_head = head_ptr;
    next_count = count;

    //allocation logic
    if(alloc_valid && !full) begin 
        next_tail = (tail_ptr + 1) % ROB_ENTRIES;
        next_count = next_count + 1;
    end
    //deallocation logic
    if(!empty && ROB_array[head_ptr].ready && ROB_array[head_ptr].valid) begin
        next_head = (head_ptr + 1) % ROB_ENTRIES;
        next_count = next_count - 1;
    end
end

always_ff @(posedge clk) begin
    if(rst) begin
        head_ptr <= '0;
        tail_ptr <= '0;
        ROB_array <= '{default:'0};
        count <= '0;
    end else begin
        count <= next_count;
    end
    
    if(alloc_valid && !full) begin
        ROB_array[tail_ptr] <= alloc_entry;
        tail_ptr <= next_tail;
    end
    if(wb_valid) begin
        ROB_array[wb_tag].ready <= 1'b1;
    end
    if(retire_valid) begin
        head_ptr <= next_head;
    end
end

endmodule