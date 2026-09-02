module datapath_tb ();
    import core_params_pkg::*;
    import core_types_pkg::*;

    logic clk, rst;
    logic [31:0] instruction;
    logic instruction_valid;
    logic [31:0] pc, seq;
    logic instruction_ready;

    logic commit_valid;
    logic [31:0] commit_pc, commit_seq;
    logic [ARCH_W-1:0] commit_dst_arch;
    logic commit_dst_valid;

    int unsigned commit_count;
    datapath dut(
        .clk(clk),
        .rst(rst),
        .instruction(instruction),
        .instruction_valid(instruction_valid),
        .pc(pc),
        .seq(seq),
        .instruction_ready(instruction_ready),
        .commit_valid(commit_valid),
        .commit_pc(commit_pc),
        .commit_seq(commit_seq),
        .commit_dst_arch(commit_dst_arch),
        .commit_dst_valid(commit_dst_valid)
    );
    initial begin
        $dumpfile("datapath.vcd");
        $dumpvars(0, datapath_tb);
    end

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        rst = 1;
        instruction_valid = 0;
        instruction = '0;
        pc = 0;
        seq = 0;

        repeat (3) @(posedge clk);
        rst = 0;
        // First 2 instructions are RAW dependencies
        // first instruction
        @(negedge clk);
        instruction_valid = 1;
        pc = 32'h0;
        seq = 0;
        instruction = {7'b0000000, 5'd6, 5'd5, 3'b000, 5'd5, 7'b0110011}; //add x5, x6, x5

        while (!instruction_ready) @(posedge clk);
                
        // second instruction
        
        @(negedge clk);
        instruction_valid = 1;
        pc = 32'h4;
        seq = 1;
        instruction = {7'b0000000, 5'd7, 5'd5, 3'b000, 5'd6, 7'b0110011}; //add x6, x7, x5

        while (!instruction_ready) @(posedge clk);
        
        // No dependency next 2 instructions
        // third instruction
        
        @(negedge clk);
        instruction_valid = 1;
        pc = 32'h8;
        seq = 2;
        instruction = {7'b0000000, 5'd1, 5'd2, 3'b000, 5'd5, 7'b0110011}; //add x5, x1, x2

        while (!instruction_ready) @(posedge clk);
        
        // fourth instruction
        @(negedge clk);
        instruction_valid = 1;
        pc = 32'hC;
        seq = 3;
        instruction = {7'b0000000, 5'd3, 5'd4, 3'b000, 5'd6, 7'b0110011}; //add x6, x3, x4

        while (!instruction_ready) @(posedge clk);
        
        // WAW next 2 instructions
        // fifth instruction
        @(negedge clk);
        instruction_valid = 1;
        pc = 32'h10;
        seq = 4;
        instruction = {7'b0000000, 5'd1, 5'd2, 3'b000, 5'd5, 7'b0110011}; //add x5, x1, x2

        while (!instruction_ready) @(posedge clk);
    
        // sixth instruction
        @(negedge clk);
        instruction_valid = 1;
        pc = 32'h14;
        seq = 5;
        instruction = {7'b0000000, 5'd3, 5'd4, 3'b000, 5'd5, 7'b0110011}; //add x5, x3, x4

        while (!instruction_ready) @(posedge clk);
        
        // RAW chain next 3 instructions
        // seventh instruction
        @(negedge clk);
        instruction_valid = 1;
        pc = 32'h18;
        seq = 6;
        instruction = {7'b0000000, 5'd1, 5'd2, 3'b000, 5'd5, 7'b0110011}; //add x5, x1, x2

        while (!instruction_ready) @(posedge clk);

        // eighth instruction
        @(negedge clk);
        instruction_valid = 1;
        pc = 32'h1C;
        seq = 7;
        instruction = {7'b0000000, 5'd3, 5'd5, 3'b000, 5'd6, 7'b0110011}; //add x6, x3, x5

        while (!instruction_ready) @(posedge clk);

        // ninth instruction
        @(negedge clk);
        instruction_valid = 1;
        pc = 32'h20;
        seq = 8;
        instruction = {7'b0000000, 5'd4, 5'd6, 3'b000, 5'd7, 7'b0110011}; //add x7, x6, x4

        while (!instruction_ready) @(posedge clk);
        @(posedge clk);

        @(negedge clk);

        instruction_valid = 0;
        repeat (20) @(posedge clk);

        if (commit_count != 9) begin
            $fatal("Expected 9 commits, saw %0d", commit_count);
        end
        $finish;
    end


    always @(posedge clk) begin
        if (rst) begin
            commit_count <= 0;
        end else if (commit_valid) begin
            case (commit_count)
                0: begin
                    assert (commit_seq == 0) else $fatal("Commit 0: expected seq 0, got %0d", commit_seq);
                    assert (commit_pc == 32'h0) else $fatal("Commit 0: expected PC 0x0, got 0x%h", commit_pc);
                    assert (commit_dst_valid) else $fatal("Commit 0: expected a destination register");
                    assert (commit_dst_arch == 5) else $fatal("Commit 0: expected destination x5, got x%0d", commit_dst_arch);
                end

                1: begin
                    assert (commit_seq == 1) else $fatal("Commit 1: expected seq 1, got %0d", commit_seq);
                    assert (commit_pc == 32'h4) else $fatal("Commit 1: expected PC 0x4, got 0x%h", commit_pc);
                    assert (commit_dst_valid) else $fatal("Commit 1: expected a destination register");
                    assert (commit_dst_arch == 6) else $fatal("Commit 1: expected destination x6, got x%0d", commit_dst_arch);
                end

                2: begin
                    assert (commit_seq == 2) else $fatal("Commit 2: expected seq 2, got %0d", commit_seq);
                    assert (commit_pc == 32'h8) else $fatal("Commit 2: expected PC 0x8, got 0x%h", commit_pc);
                    assert (commit_dst_valid) else $fatal("Commit 2: expected a destination register");
                    assert (commit_dst_arch == 5) else $fatal("Commit 2: expected destination x5, got x%0d", commit_dst_arch);
                end

                3: begin
                    assert (commit_seq == 3) else $fatal("Commit 3: expected seq 3, got %0d", commit_seq);
                    assert (commit_pc == 32'hC) else $fatal("Commit 3: expected PC 0xC, got 0x%h", commit_pc);
                    assert (commit_dst_valid) else $fatal("Commit 3: expected a destination register");
                    assert (commit_dst_arch == 6) else $fatal("Commit 3: expected destination x6, got x%0d", commit_dst_arch);
                end

                4: begin
                    assert (commit_seq == 4) else $fatal("Commit 4: expected seq 4, got %0d", commit_seq);
                    assert (commit_pc == 32'h10) else $fatal("Commit 4: expected PC 0x10, got 0x%h", commit_pc);
                    assert (commit_dst_valid) else $fatal("Commit 4: expected a destination register");
                    assert (commit_dst_arch == 5) else $fatal("Commit 4: expected destination x5, got x%0d", commit_dst_arch);
                end

                5: begin
                    assert (commit_seq == 5) else $fatal("Commit 5: expected seq 5, got %0d", commit_seq);
                    assert (commit_pc == 32'h14) else $fatal("Commit 5: expected PC 0x14, got 0x%h", commit_pc);
                    assert (commit_dst_valid) else $fatal("Commit 5: expected a destination register");
                    assert (commit_dst_arch == 5) else $fatal("Commit 5: expected destination x5, got x%0d", commit_dst_arch);
                end

                6: begin
                    assert (commit_seq == 6) else $fatal("Commit 6: expected seq 6, got %0d", commit_seq);
                    assert (commit_pc == 32'h18) else $fatal("Commit 6: expected PC 0x18, got 0x%h", commit_pc);
                    assert (commit_dst_valid) else $fatal("Commit 6: expected a destination register");
                    assert (commit_dst_arch == 5) else $fatal("Commit 6: expected destination x5, got x%0d", commit_dst_arch);
                end

                7: begin
                    assert (commit_seq == 7) else $fatal("Commit 7: expected seq 7, got %0d", commit_seq);
                    assert (commit_pc == 32'h1C) else $fatal("Commit 7: expected PC 0x1C, got 0x%h", commit_pc);
                    assert (commit_dst_valid) else $fatal("Commit 7: expected a destination register");
                    assert (commit_dst_arch == 6) else $fatal("Commit 7: expected destination x6, got x%0d", commit_dst_arch);
                end

                8: begin
                    assert (commit_seq == 8) else $fatal("Commit 8: expected seq 8, got %0d", commit_seq);
                    assert (commit_pc == 32'h20) else $fatal("Commit 8: expected PC 0x20, got 0x%h", commit_pc);
                    assert (commit_dst_valid) else $fatal("Commit 8: expected a destination register");
                    assert (commit_dst_arch == 7) else $fatal("Commit 8: expected destination x7, got x%0d", commit_dst_arch);
                end

                default: $fatal("Unexpected extra commit: seq=%0d pc=0x%h", commit_seq, commit_pc);
            endcase

            commit_count <= commit_count + 1;
        end
    end
endmodule