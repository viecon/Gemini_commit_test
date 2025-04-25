module sort #(parameter NUM_VALS = 8, WIDTH = 4)
(
    input  [NUM_VALS*WIDTH-1:0] A,
    output [NUM_VALS*WIDTH-1:0] B
);

    wire [WIDTH-1:0] values [0:NUM_VALS-1];
    reg  [WIDTH-1:0] sorted [0:NUM_VALS-1];

    genvar i;
    generate
        for (i = 0; i < NUM_VALS; i = i + 1) begin
            assign values[i] = A[(NUM_VALS-i)*WIDTH-1 -: WIDTH];
        end
    endgenerate

    always @(*) begin
        integer j, k;
        for (j = 0; j < NUM_VALS; j = j + 1) begin
            sorted[j] = values[j];
        end

        for (j = 0; j < NUM_VALS-1; j = j + 1) begin
            for (k = 0; k < NUM_VALS-1-j; k = k + 1) begin
                if (sorted[k] < sorted[k+1]) begin
                    {sorted[k], sorted[k+1]} = {sorted[k+1], sorted[k]};
                end
            end
        end
    end

    generate
        for (i = 0; i < NUM_VALS; i = i + 1) begin
            assign B[(NUM_VALS-i)*WIDTH-1 -: WIDTH] = sorted[i];
        end
    endgenerate

endmodule
