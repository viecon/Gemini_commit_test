module dot(input [7:0] A, input [7:0] x, output [8:0] y);
    assign y = A[3:0] * x[3:0] + A[7:4] * x[7:4];
endmodule