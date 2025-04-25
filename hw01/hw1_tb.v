module hw1_tb;
    reg clk = 0;
    reg [15:0] A;
    reg [7:0] x, tick_count = 0;
    wire [17:0] y;
    reg [17:0] y_true;
    matrix_top UUT(.A(A), .x(x), .y(y));
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, hw1_tb);
    end

    always begin
        #5 clk = !clk;
    end

    always @(posedge clk) begin
        A <= { 4'd15, 4'd7, 4'd3, 4'd10 };
        x <= { 4'd6, 4'd11 };
        y_true <= { 9'd167, 9'd128 };
        tick_count <= tick_count + 1;
    end


    always @(posedge clk) begin
        if (tick_count == 8'd1) begin
            if (y != y_true) $display("incorrect!");
            else $display("correct");
            $finish;
        end
    end
endmodule
