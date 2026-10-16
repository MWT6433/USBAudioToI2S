`timescale 1ns/1ps
module silence_detector #(
    parameter integer THRESH = 16'd15360,
    parameter [31:0] QUIET_LVL = 32'd256
)(
    (* altera_attribute = "-name no_global_clock true" *) input  wire        clk,
    (* altera_attribute = "-name no_global_reset true" *) input  wire        nrst,
    input  wire        sample_en,
    input  wire        fifo_empty,
    input  wire [31:0] left,
    input  wire [31:0] right,
    input  wire [2:0]  clk_sel,
    output reg         zc_gpio
);

  reg  [2:0] rate_sync1;
  reg  [2:0] rate_sync2;
  always @(posedge clk or negedge nrst) begin
    if (!nrst) begin
      rate_sync1 <= 3'b010;
      rate_sync2 <= 3'b010;
    end else begin
      rate_sync1 <= clk_sel;
      rate_sync2 <= rate_sync1;
    end
  end
  wire [2:0] rate_sel = rate_sync2;

  wire [15:0] on_thresh_sel = (rate_sel == 3'b001) ? 16'd30720 :
                               (rate_sel == 3'b010) ? 16'd15360 :
                               (rate_sel == 3'b011) ? 16'd7680  :
                               (rate_sel == 3'b100) ? 16'd3840  :
                               (rate_sel == 3'b101) ? 16'd14112 :
                               (rate_sel == 3'b110) ? 16'd7056  :
                               (rate_sel == 3'b111) ? 16'd3528  :
                                                       THRESH;
  wire [15:0] off_thresh_sel = (rate_sel == 3'b001) ? 16'd7680  :
                               (rate_sel == 3'b010) ? 16'd3840  :
                               (rate_sel == 3'b011) ? 16'd1920  :
                               (rate_sel == 3'b100) ? 16'd960   :
                               (rate_sel == 3'b101) ? 16'd3528  :
                               (rate_sel == 3'b110) ? 16'd1764  :
                               (rate_sel == 3'b111) ? 16'd882   :
                                                      (THRESH >> 2);

  wire [31:0] l_abs = left[31] ? (~left + 32'd1) : left;
  wire [31:0] r_abs = right[31] ? (~right + 32'd1) : right;
  wire        sample_quiet = (l_abs <= QUIET_LVL) && (r_abs <= QUIET_LVL);

  reg [1:0] fifo_sync;
  always @(posedge clk or negedge nrst) begin
    if (!nrst) fifo_sync <= 2'b00;
    else fifo_sync <= {fifo_sync[0], fifo_empty};
  end
  wire fifo_empty_s = fifo_sync[1];

  reg  [15:0] zero_cnt;
  reg  [15:0] nonzero_cnt;
  reg  [15:0] fifo_cnt;

  always @(posedge clk or negedge nrst) begin
    if (!nrst) begin
      zero_cnt    <= 16'd0;
      nonzero_cnt <= 16'd0;
      fifo_cnt    <= 16'd0;
      zc_gpio     <= 1'b0;
    end else begin
      if (fifo_empty_s) begin
        if (fifo_cnt < off_thresh_sel) fifo_cnt <= fifo_cnt + 16'd1;
      end else begin
        fifo_cnt <= 16'd0;
      end

      if (fifo_cnt >= off_thresh_sel) begin
        zc_gpio     <= 1'b1;
        zero_cnt    <= 16'd0;
        nonzero_cnt <= 16'd0;
      end else if (sample_en) begin
        if (sample_quiet) begin
          if (zero_cnt < on_thresh_sel) zero_cnt <= zero_cnt + 16'd1;
          nonzero_cnt <= 16'd0;
          if (!zc_gpio && (zero_cnt >= on_thresh_sel)) zc_gpio <= 1'b1;
        end else begin
          if (nonzero_cnt < off_thresh_sel) nonzero_cnt <= nonzero_cnt + 16'd1;
          zero_cnt <= 16'd0;
          if (zc_gpio && (nonzero_cnt >= off_thresh_sel)) zc_gpio <= 1'b0;
        end
      end
    end
  end
endmodule
