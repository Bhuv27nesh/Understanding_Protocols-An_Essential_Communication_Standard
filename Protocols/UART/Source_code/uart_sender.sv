`timescale 1ns/1ps
module uart_sender (
    input  logic       clk,
    input  logic       rst,
    input  logic       wr_en,
    input  logic       enb,
    input  logic [7:0] data_in,
    output logic       tx,
    output logic       tx_busy
);

typedef enum logic [1:0] {
    IDLE,
    START,
    DATA,
    STOP
} tx_state_t;

tx_state_t state;

logic [7:0] data;
logic [2:0] bitpos;

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        state  <= IDLE;
        tx     <= 1'b1;
        data   <= 0;
        bitpos <= 0;
    end 
    else begin
        case (state)

            IDLE: begin
                tx <= 1'b1;
                if (wr_en) begin
                    state  <= START;
                    data   <= data_in;
                    bitpos <= 0;
                end
            end

            START: begin
                if (enb) begin
                    tx    <= 1'b0;
                    state <= DATA;
                end
            end

            DATA: begin
                if (enb) begin
                    tx <= data[bitpos];

                    if (bitpos == 7)
                        state <= STOP;
                    else
                        bitpos <= bitpos + 1;
                end
            end

            STOP: begin
                if (enb) begin
                    tx    <= 1'b1;
                    state <= IDLE;
                end
            end

        endcase
    end
end

assign tx_busy = (state != IDLE);

endmodule
