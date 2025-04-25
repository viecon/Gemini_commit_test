module hw1_tb(input clk);
reg [15:0] A;
reg [7:0] x;
wire [17:0] y;
reg [17:0] y_true;
matrix_top UUT(.A(A), .x(x), .y(y));

always @(posedge clk) begin
    A <= { 4'd15, 4'd7, 4'd3, 4'd10 };
    x <= { 4'd6, 4'd11 };
    y_true <= { 9'd167, 9'd128 };
end

always @(negedge clk) begin
    if (y != y_true)
        $display("incorrect!");
    else
        $display("correct");
    $finish;
end

endmodule