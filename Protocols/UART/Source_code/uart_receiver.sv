`timescale 1ns/1ps
module uart_receiver (
    input  logic        clk,
    input  logic        rst,
    input  logic        rx,
    input  logic        rdy_clr,
    input  logic        clken,
    output logic        rdy,
    output logic [7:0]  data_out
);

typedef enum logic [1:0] {
    RX_START,
    RX_DATA,
    RX_STOP
} rx_state_t;

rx_state_t state;

logic [3:0] sample;
logic [3:0] index;
logic [7:0] temp;

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        state     <= RX_START;
        sample    <= 0;
        index     <= 0;
        temp      <= 0;
        data_out  <= 0;
        rdy       <= 0;
    end 
    else begin
        if (rdy_clr)
            rdy <= 0;

        if (clken) begin
            case (state)

                RX_START: begin
                    if (!rx || sample != 0)
                        sample <= sample + 1;

                    if (sample == 15) begin
                        state  <= RX_DATA;
                        index  <= 0;
                        sample <= 0;
                        temp   <= 0;
                    end
                end

                RX_DATA: begin
                    sample <= sample + 1;

                    if (sample == 8) begin
                        temp[index] <= rx;
                        index <= index + 1;
                    end

                    if (index == 8 && sample == 15)
                        state <= RX_STOP;
                end

                RX_STOP: begin
                    if (sample == 15) begin
                        state    <= RX_START;
                        data_out <= temp;
                        rdy      <= 1;
                        sample   <= 0;
                    end 
                    else begin
                        sample <= sample + 1;
                    end
                end

		default: begin
		    state <= RX_START;
	        end

            endcase
        end
    end
end

endmodule
