module spi_slave (
    input clk,
    input nrst,

    input spi_ck,
    input spi_mosi,
    output reg spi_miso,
    input spi_nss,

    // Control
    output reg [2:0] clk_sel,
    output reg mck_div2,   // MCLK 二分频使能：0=晶振直出(49.152/45.1584)，1=÷2(24.576/22.5792)
                           // 由 SET_MCLK_DIV2(0xC0) 设置，复位默认 0；与 SET_FORMAT 互不干扰,

    // FIFO status (pll_main_clk 域，来自 fifo_status)
    input [8:0] fifo_level,
    input fifo_near_full,
    input fifo_near_empty,
    input fifo_ovr_st,
    input fifo_und_st,
    output reg evt_clear,  // 单周期脉冲：GET_EVENTS 读清 sticky

    // v6 统计块（pll_main_clk 域，来自 fifo_status）：
    // 窗口平均水位×16 / 窗口极值 / 真实丢样重样计数，见 fifo_status.v 末尾注释。
    output reg         stats_latch,  // 单周期脉冲：锁存快照并清零事件计数
    input      [12:0]  stats_mean16,
    input      [8:0]   stats_min,
    input      [8:0]   stats_max,
    input      [15:0]  stats_ovr,
    input      [15:0]  stats_und,
    input              stats_valid,

    // 静音状态实时电平（out_clk 域 silence_detector 判定，
    // 顶层已 2 拍同步到本域；GET_SILENCE 上报，替代已删除的 zc_gpio 引脚）
    input silence
);

  // Metastability guard
  reg spi_ck_ms;
  reg spi_mosi_ms;
  reg spi_nss_ms;

  // Sample
  reg spi_ck_sample;
  reg spi_mosi_sample;
  reg spi_nss_sample;
  reg spi_ck_sample_d;

  // FSM
  reg [2:0] state;
  localparam S_IDLE = 3'b001;
  localparam S_TRANS = 3'b010;
  localparam S_RESP = 3'b100;

  reg [2:0] cnt;
  reg [7:0] data_in;
  reg [7:0] data_out;
  reg resp_done;  // S_RESP 内命令只执行一次（CS 保持低期间不重复提交）

  always @(posedge clk, negedge nrst) begin
    if (!nrst) begin
      state <= 0;
      cnt <= 0;
      data_in <= 0;
      data_out <= 0;
      clk_sel <= 0;
      mck_div2 <= 0;
      resp_done <= 0;
      evt_clear <= 0;
      stats_latch <= 0;

      spi_ck_ms <= 0;
      spi_mosi_ms <= 0;
      spi_nss_ms <= 0;
      spi_ck_sample <= 0;
      spi_mosi_sample <= 0;
      spi_nss_sample <= 0;
      spi_ck_sample_d <= 0;
      spi_miso <= 0;
    end else begin
      evt_clear <= 1'b0;
      stats_latch <= 1'b0;
      // Sampling
      spi_ck_ms <= spi_ck;
      spi_mosi_ms <= spi_mosi;
      spi_nss_ms <= spi_nss;

      spi_ck_sample <= spi_ck_ms;
      spi_mosi_sample <= spi_mosi_ms;
      spi_nss_sample <= spi_nss_ms;

      spi_ck_sample_d <= spi_ck_sample;

      case (state)
        S_IDLE: begin
          if (~spi_nss_sample) begin  // Activate
            state <= S_TRANS;
            cnt <= 7;
            resp_done <= 0;
            spi_miso <= data_out[7];
          end
        end

        S_TRANS: begin
          if (spi_nss_sample) begin
            state <= S_IDLE;
          end else begin
            if (~spi_ck_sample_d & spi_ck_sample) begin  // Up
              data_in[cnt] <= spi_mosi_sample;
              cnt <= cnt - 1;
              if (cnt == 0) state <= S_RESP;
            end

            if (spi_ck_sample_d & ~spi_ck_sample) begin  // Down
              spi_miso <= data_out[cnt];
            end
          end
        end

        S_RESP: begin
          if (spi_nss_sample) state <= S_IDLE;  // Deactivate

          // Response
          // Inst: 7:5 | Param: 4:0
          // 命令只执行一次：CS 保持低电平期间不重复提交（resp_done 门控）

          if (!resp_done) begin
            resp_done <= 1'b1;

            case (data_in[7:5])
              // 000: v6 统计块。param[4]=1 才有效（param[3:0]=字节索引）。
              //      0x00 是 MCU 的读占位字节，必须保持空操作，故用 param[4] 区分。
              //      index 0 = 锁存快照（fifo_status 打进读出寄存器并清零事件计数）
              //                + 回 flags：bit7=Ready bit6=窗口有效 bit5:0=协议版本(6)
              //      index 1..11 = 快照各字节（小端），布局见 ch32v30x_spi_device.h
              3'b000: begin
                if (data_in[4]) begin
                  case (data_in[3:0])
                    4'd0:  begin
                      stats_latch <= 1'b1;
                      data_out <= {1'b1, stats_valid, 6'd6};
                    end
                    4'd1:  data_out <= stats_mean16[7:0];
                    4'd2:  data_out <= {5'b0, stats_mean16[12:8]};
                    4'd3:  data_out <= stats_min[7:0];
                    4'd4:  data_out <= {7'b0, stats_min[8]};
                    4'd5:  data_out <= stats_max[7:0];
                    4'd6:  data_out <= {7'b0, stats_max[8]};
                    4'd7:  data_out <= stats_ovr[7:0];
                    4'd8:  data_out <= stats_ovr[15:8];
                    4'd9:  data_out <= stats_und[7:0];
                    4'd10: data_out <= stats_und[15:8];
                    4'd11: data_out <= 8'd20;  // 窗口长度指数：2^20 pll_main_clk ≈ 8.53ms
                    default: data_out <= 8'h00;
                  endcase
                end else begin
                  data_out <= 8'h00;  // 0x00 占位读：空操作（与旧位流行为一致）
                end
              end

              // Get status: 001
              3'b001: begin
                // Ready: 7 | Version: 6:0  (v6: 新增统计块命令 000xxxxx)
                data_out <= 8'b10000110;
              end

              // Set format: 010
              3'b010: begin
                clk_sel  <= data_in[2:0];
                // Ready: 7
                data_out <= 8'b10000000;
              end

              // Get format: 011
              3'b011: begin
                // Ready: 7 | Div2: 3 | Format: 2:0
                data_out <= {4'b1000, mck_div2, clk_sel};
              end

              // Get FIFO level: 100 (0x80)
              // bit7=near_full(水位>=480) bit6:0=水位[8:2]（0..127，分辨率 4 样本）。
              // 注意拼位宽度必须恰好 8 位：1+7。近空标志不上报，MCU 由水位自行判定。
              // （fifo_near_empty 端口保留但未使用）
              3'b100: begin
                data_out <= {fifo_near_full, fifo_level[8:2]};
              end

              // Get over/underrun events: 101 (0xA0)，读清
              // bit7=溢出 sticky bit6=下溢 sticky
              3'b101: begin
                data_out <= {fifo_ovr_st, fifo_und_st, 6'b000000};
                evt_clear <= 1'b1;
              end

              // Set MCLK div2: 110 (0xC0)，参数 bit0
              // 1=MCLK 二分频(标称频率)，0=晶振直出(2×)。独立寄存器，切率不扰动。
              3'b110: begin
                mck_div2 <= data_in[0];
                data_out <= 8'b10000000;  // Ready
              end

              // Get silence: 111 (0xE0)，实时电平（非 sticky，读不清）
              // bit7=Ready bit6=静音（FIFO 空或持续静音，silence_detector 判定）
              3'b111: begin
                data_out <= {1'b1, silence, 6'b000000};
              end

              default: data_out <= 0;  // Error
            endcase
          end
        end

        default: state <= S_IDLE;
      endcase
    end
  end

endmodule
