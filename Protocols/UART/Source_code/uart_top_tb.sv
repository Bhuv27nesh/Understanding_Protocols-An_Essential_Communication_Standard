`timescale 1ns/1ps

module uart_top_tb;

    // DUT signals
    logic clk;
    logic rst;
    logic wr_en;
    logic rdy_clr;
    logic [7:0] data_in;
    logic [7:0] data_out;
    logic rdy;
    logic busy;

    // Instantiate DUT
    uart_top dut (
        .clk(clk),
        .rst(rst),
        .wr_en(wr_en),
        .data_in(data_in),
        .rdy_clr(rdy_clr),
        .rdy(rdy),
        .busy(busy),
        .data_out(data_out)
    );

    // Clock generation (10ns period)
    always #5 clk = ~clk;

    // Test data (6 values)
    logic [7:0] test_data [0:5];

    initial begin
        clk = 0;
        rst = 1;
        wr_en = 0;
        rdy_clr = 0;
        data_in = 0;

        // Initialize test values
        test_data[0] = 8'hA5;
        test_data[1] = 8'h3C;
        test_data[2] = 8'h7E;
        test_data[3] = 8'h55;
        test_data[4] = 8'hF0;
        test_data[5] = 8'h0F;

        // Reset
        #20;
        rst = 0;

        // Send 6 data values
        for (int i = 0; i < 6; i++) begin

            // Wait until transmitter is free
            @(posedge clk);
            wait (busy == 0);

            // Apply data
            data_in = test_data[i];
            wr_en   = 1;

            @(posedge clk);
            wr_en = 0;

            // Wait for reception
            wait (rdy == 1);

            $display("Time=%0t | Sent=%h | Received=%h",
                      $time, test_data[i], data_out);

            // Clear ready signal
            rdy_clr = 1;
            @(posedge clk);
            rdy_clr = 0;

            // Small gap
            #50;
        end

        $display("All 6 data transmissions completed!");
        #10000;
        $finish;
    end
	
    initial begin
        $dumpfile("UART_WAVE.vcd");
	$dumpvars(0,uart_top_tb);
    end
endmodule
