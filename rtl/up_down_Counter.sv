module up_down_Counter #(
    parameter int MAX   = 2,
    parameter int WIDTH = 2
) (
    input logic clk,
    input logic enable,
    input logic up,
    output logic [WIDTH - 1:0] count
);
  localparam logic [WIDTH - 1:0] Max = WIDTH'(MAX);
  logic [WIDTH - 1 : 0] next_count;
  initial count = 0;
  initial count = WIDTH'(0);


  always_ff @(posedge clk) begin
    if (enable) count <= next_count;
  end

  // Determine next state logic
  always_comb begin
    if (up) begin
      if (count < MAX) begin
        next_count = count + 1;
      end else begin
        next_count = 0;
      end
    end else begin
      if (count < 0) begin
        next_count = MAX;
      end else begin
        next_c ount = count - 1;
      end
    end

    //hello aijsdioajsoidjasidja
  end
endmodule
