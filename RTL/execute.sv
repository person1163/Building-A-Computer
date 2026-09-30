import core_params_pkg::*;
import core_types_pkg::*;

module execute(
    input  logic        clk,
    input  logic        rst,
    input  logic        issue_valid,
    input  issued_uop_t issued_uop,

    output logic                exec_valid,
    output logic [XLEN-1:0]     result,
    output logic [ROB_W-1:0]    exec_tag,
    output logic                exec_dst_valid
);

    issued_uop_t execute_uop_q;
    assign exec_tag = execute_uop_q.dst_tag;
    assign exec_dst_valid = execute_uop_q.dst_valid;

    ALU u_alu (
        .a(execute_uop_q.src1_value),        
        .b(execute_uop_q.src2_value),       
        .alu_opcode(execute_uop_q.alu_opcode),
        .result(result)        
    );

    always_ff @(posedge clk) begin
        if (rst) begin
            execute_uop_q <= '0;
            exec_valid <= 1'b0;
        end else begin
            execute_uop_q <= issued_uop;
            exec_valid <= issue_valid;
        end
    end

endmodule