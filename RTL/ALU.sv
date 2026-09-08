module ALU(
  input [31:0] a,
  input [31:0] b,
  input alu_op_t alu_opcode,
  output reg [31:0] result
);

always_comb
  begin
    case (alu_opcode)
      ALU_ADD:  result = a + b;
      ALU_SUB:  result = a - b;
      ALU_SLL:  result = a << b;
      ALU_SLT:  result = $signed(a) < $signed(b);
      ALU_SLTU: result = $unsigned(a) < $unsigned(b);
      ALU_XOR:  result = a ^ b;
      ALU_SRL:  result = a >> b;
      ALU_SRA:  result = $signed(a) >>> b;
      ALU_OR:   result = a | b;
      ALU_AND:  result = a & b;
      default:  result = '0;
    endcase
  end

endmodule