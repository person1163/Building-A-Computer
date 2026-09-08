module decode(
    input logic [31:0] instruction,
    input logic [31:0] pc, seq,
    input logic instruction_valid,
    output uop_t decoded_uop,
    output bit decode_valid
    
);

    logic [6:0] current_opcode;
    logic [2:0] current_funct3;
    logic [6:0] current_funct7;

    always_comb begin
        decoded_uop = '0;
        // Fetch and Decode logic
        current_opcode      = instruction[6:0];
        decoded_uop.dst     = instruction[11:7];
        current_funct3      = instruction[14:12];
        decoded_uop.src1    = instruction[19:15];
        decoded_uop.src2    = instruction[24:20];
        current_funct7      = instruction[31:25];

        decoded_uop.pc      = pc;
        decoded_uop.seq     = seq;
        decoded_uop.op = OP_NOP;

        case(current_opcode)
            default: begin
                decode_valid = 1'b0;
                decoded_uop.valid = 1'b0;
                decoded_uop.op = OP_NOP;
            end
            // R-type instructions
            7'b0110011: begin
                case (current_funct3)
                    3'b000: decoded_uop.alu_opcode =
                        current_funct7[5] ? ALU_SUB : ALU_ADD;
                    3'b001: decoded_uop.alu_opcode = ALU_SLL;
                    3'b010: decoded_uop.alu_opcode = ALU_SLT;
                    3'b011: decoded_uop.alu_opcode = ALU_SLTU;
                    3'b100: decoded_uop.alu_opcode = ALU_XOR;
                    3'b101: decoded_uop.alu_opcode =
                        current_funct7[5] ? ALU_SRA : ALU_SRL;
                    3'b110: decoded_uop.alu_opcode = ALU_OR;
                    3'b111: decoded_uop.alu_opcode = ALU_AND;
                    default: decode_valid = 1'b0; decoded_uop.valid = 1'b0;
                endcase
                decoded_uop.op = OP_ALU;
                decoded_uop.src1_valid = 1'b1;
                decoded_uop.src2_valid = 1'b1;
                decoded_uop.dst_valid = 1'b1;
                decoded_uop.valid = 1'b1;
                decode_valid = 1'b1;
            end
            // I-type instructions
            7'b0010011: begin
                case (current_funct3)
                    3'b000: decoded_uop.alu_opcode = ALU_ADD;   // addi
                    3'b001: decoded_uop.alu_opcode = ALU_SLL;   // slli
                    3'b010: decoded_uop.alu_opcode = ALU_SLT;   // slti
                    3'b011: decoded_uop.alu_opcode = ALU_SLTU;  // sltiu
                    3'b100: decoded_uop.alu_opcode = ALU_XOR;   // xori
                    3'b101: decoded_uop.alu_opcode =
                        current_funct7[5] ? ALU_SRA : ALU_SRL;   // srli/srai
                    3'b110: decoded_uop.alu_opcode = ALU_OR;    // ori
                    3'b111: decoded_uop.alu_opcode = ALU_AND;   // andi
                    default: decode_valid = 1'b0; decoded_uop.valid = 1'b0;
                endcase
                decoded_uop.op = OP_ALU;
                decoded_uop.src1_valid = 1'b1;
                decoded_uop.src2_valid = 1'b0;
                decoded_uop.dst_valid = 1'b1;
                decoded_uop.valid = 1'b1;
                decode_valid = 1'b1;
            end
            // I-type instructions loads
            7'b0000011: begin
                decoded_uop.op = OP_LOAD;
                decoded_uop.src1_valid = 1'b1;
                decoded_uop.src2_valid = 1'b0;
                decoded_uop.dst_valid  = 1'b1;
                decoded_uop.valid = 1'b1;
                decode_valid = 1'b1;
            end
            // S-type instructions
            7'b0100011: begin
                decoded_uop.op = OP_STORE;
                decoded_uop.src1_valid = 1'b1;
                decoded_uop.src2_valid = 1'b1;
                decoded_uop.dst_valid = 1'b0;
                decoded_uop.valid = 1'b1;
                decode_valid = 1'b1;
            end
            // B-type instructions
            7'b1100011: begin
                decoded_uop.op = OP_BRANCH;
                decoded_uop.src1_valid = 1'b1;
                decoded_uop.src2_valid = 1'b1;
                decoded_uop.dst_valid = 1'b0;
                decoded_uop.valid = 1'b1;
                decode_valid = 1'b1;
            end
        endcase
    end


endmodule