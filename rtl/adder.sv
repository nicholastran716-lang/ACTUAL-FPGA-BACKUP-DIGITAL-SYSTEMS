module full_adder (
    input  logic [0:0] A,
    input  logic [0:0] B,
    input  logic [0:0] Cin,
    output logic [0:0] S,
    output logic [0:0] Cout
);

always @(*) begin
    case ({A, B, Cin})  // 3-bit vector
        3'b000: begin S = 1'b0; Cout = 1'b0; end
        3'b001: begin S = 1'b1; Cout = 1'b0; end
        3'b010: begin S = 1'b1; Cout = 1'b0; end
        3'b011: begin S = 1'b0; Cout = 1'b1; end
        3'b100: begin S = 1'b1; Cout = 1'b0; end
        3'b101: begin S = 1'b0; Cout = 1'b1; end
        3'b110: begin S = 1'b0; Cout = 1'b1; end
        3'b111: begin S = 1'b1; Cout = 1'b1; end
        default: begin S = 1'b0; Cout = 1'b0; end
    endcase
end

endmodule