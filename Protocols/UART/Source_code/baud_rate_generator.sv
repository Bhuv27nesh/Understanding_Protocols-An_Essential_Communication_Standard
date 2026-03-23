`timescale 1ns/1ps
module baud_rate_generator (
    input  logic clock,
    input  logic reset,
    output logic enb_tx,
    output logic enb_rx
);

parameter int CLK_FREQ  = 100_000_000;
parameter int BAUD_RATE = 9600;

localparam int DIV_TX = CLK_FREQ / BAUD_RATE;
localparam int DIV_RX = CLK_FREQ / (16 * BAUD_RATE);

logic [31:0] counter_tx;
logic [31:0] counter_rx;

// TX clock
always_ff @(posedge clock or posedge reset) begin
    if (reset) begin
        counter_tx <= 0;
        enb_tx     <= 0;
    end 
    else begin
        if (counter_tx == DIV_TX - 1) begin
            counter_tx <= 0;
            enb_tx     <= 1;
        end 
        else begin
            counter_tx <= counter_tx + 1;
            enb_tx     <= 0;
        end
    end
end

// RX clock
always_ff @(posedge clock or posedge reset) begin
    if (reset) begin
        counter_rx <= 0;
        enb_rx     <= 0;
    end 
    else begin
        if (counter_rx == DIV_RX - 1) begin
            counter_rx <= 0;
            enb_rx     <= 1;
        end 
        else begin
            counter_rx <= counter_rx + 1;
            enb_rx     <= 0;
        end
    end
end

endmodule
