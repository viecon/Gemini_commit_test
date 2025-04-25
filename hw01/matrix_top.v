module matrix_top(input [15:0] A, input [7:0] x, output [17:0] y);
    wire [8:0] y0, y1;
    dot UUT0(.A(A[15:8]), .x(x[7:0]), .y(y0));
    dot UUT1(.A(A[7:0]), .x(x[7:0]), .y(y1));
    assign y = { y0, y1 };
endmodule
