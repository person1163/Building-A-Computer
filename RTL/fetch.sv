module fetch (
	input  logic        clk,
	input  logic        rst,
	input  logic [31:0] instruction_in,
	input  logic        instruction_valid_in,
	input  logic        downstream_ready,
	output logic        instruction_ready,
	output logic [31:0] instruction_out,
	output logic        instruction_valid_out,
	output logic [31:0] pc_out,
	output logic [31:0] seq_out
);

	logic [31:0] pc_q;
	logic [31:0] seq_q;

	assign instruction_ready = downstream_ready;
	assign instruction_out = instruction_in;
	assign instruction_valid_out = instruction_valid_in;
	assign pc_out = pc_q;
	assign seq_out = seq_q;

	always_ff @(posedge clk) begin
		if (rst) begin
			pc_q <= '0;
			seq_q <= '0;
		end else if (instruction_valid_in && instruction_ready) begin
			pc_q <= pc_q + 32'd4;
			seq_q <= seq_q + 32'd1;
		end
	end

endmodule
