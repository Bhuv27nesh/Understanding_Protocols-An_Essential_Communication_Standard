`timescale 1ns/1ps
module uart_top (
    input  logic        clk,
    input  logic        rst,
    input  logic        wr_en,
    input  logic [7:0]  data_in,
    input  logic        rdy_clr,
    output logic        rdy,
    output logic        busy,
    output logic [7:0]  data_out
);

logic tx_clk_en;
logic rx_clk_en;
logic tx_line;

baud_rate_generator bg (
    .clock(clk),
    .reset(rst),
    .enb_tx(tx_clk_en),
    .enb_rx(rx_clk_en)
);

uart_sender us (
    .clk(clk),
    .rst(rst),
    .wr_en(wr_en),
    .enb(tx_clk_en),
    .data_in(data_in),
    .tx(tx_line),
    .tx_busy(busy)
);

uart_receiver ur (
    .clk(clk),
    .rst(rst),
    .rx(tx_line),
    .rdy_clr(rdy_clr),
    .clken(rx_clk_en),
    .rdy(rdy),
    .data_out(data_out)
);

endmodule
