module i2s_master (
    input nrst,
    input clk,

    output reg en,
    input [31:0] left_channel,
    input [31:0] right_channel,

    output reg i2s_ws,
    output reg i2s_ck,
    output reg i2s_sd
);

  localparam DATA_WIDTH = 32;
  reg [31:0] left_channel_reg;
  reg [31:0] right_channel_reg;
  reg [4:0] cnt;
  reg phase;
  reg channel;

  // MSB-first shift-register output: i2s_sd = reg[31], and the active
  // channel's register shifts left by 1 every bit clock. This removes the
  // 32:1 combinational select chain of the old reg[cnt] indexing, which
  // was the critical path into i2s_sd.
  always @(posedge clk, negedge nrst) begin
    if (!nrst) begin
      en <= 0;
      left_channel_reg <= 0;
      right_channel_reg <= 0;
      cnt <= DATA_WIDTH - 1;
      phase <= 0;
      channel <= 0;
      i2s_ws <= 0;
      i2s_ck <= 0;
      i2s_sd <= 0;
    end else begin
      en <= 0;

      if (!phase) begin
        i2s_ck <= 0;

        if (!channel) begin
          i2s_sd <= left_channel_reg[31];
          i2s_ws <= (cnt == 0);
        end else begin
          i2s_sd <= right_channel_reg[31];
          i2s_ws <= (cnt != 0);
          if (cnt == 0) begin
            en <= 1;
          end
        end

        phase <= 1;
      end else begin
        i2s_ck <= 1;

        // Shift only the active channel's register so the other channel
        // keeps its data until it is output.
        if (!channel) begin
          left_channel_reg <= {left_channel_reg[30:0], 1'b0};
        end else begin
          right_channel_reg <= {right_channel_reg[30:0], 1'b0};
        end

        if (cnt == 0) begin
          cnt <= DATA_WIDTH - 1;
          if (channel) begin
            channel <= 0;
            left_channel_reg <= left_channel;
            right_channel_reg <= right_channel;
          end else begin
            channel <= 1;
          end
        end else begin
          cnt <= cnt - 1;
        end

        phase <= 0;
      end
    end
  end

endmodule
