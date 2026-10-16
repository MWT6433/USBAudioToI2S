// FIFO 水位与 over/underrun 事件状态，供 spi_slave 经 SPI 上报 MCU。
//
// 时钟域约定：
//  - clk      = pll_main_clk (122.88 MHz)，与 spi_slave、fifo2 写侧同域；
//               WrUsedw 是 alta_fifo 在写域同步出的占用计数，可直接采样，无需额外 CDC。
//  - und_clk  = out_clk（读域）。und_evt 是读域单周期脉冲
//               （i2s_out_en & fifo_empty，即下溢重复上一样本的时刻），
//               经 toggle 同步器单向跨到 clk 域置位 sticky，不需要反向清除同步。
//  - ovr_evt  （i2s_in_en & fifo_full，写域丢样时刻）本就在 clk 域，单 FF 锁存。
//
// usedw 先寄存一拍再作比较/输出：把 alta_fifo 内部 gray2bin+减法组合链
// 与阈值比较器分到两个时钟周期，122.88 MHz 下时序余量更稳。
module fifo_status (
    input  wire       clk,        // pll_main_clk
    input  wire       und_clk,    // out_clk
    input  wire       nrst,

    input  wire [8:0] usedw,      // fifo2 WrUsedw（写域占用计数，0..511）
    input  wire       ovr_evt,    // clk 域：FIFO 满时又收到样本（丢样）
    input  wire       und_evt,    // und_clk 域：FIFO 空时读请求（重样）
    input  wire       clear,      // clk 域单周期：MCU 读 GET_EVENTS 后清 sticky

    output reg  [8:0] level,      // 水位快照（滞后 usedw 两拍，仅供慢速控制环）
    output reg        near_full,  // level >= NEAR_FULL_TH
    output reg        near_empty, // level <= NEAR_EMPTY_TH
    output reg        ovr_st,     // sticky：发生过溢出（读清）
    output reg        und_st,     // sticky：发生过下溢（读清）

    // ---- v6 统计块（供 MCU 反馈环使用，详见文件尾注释）----
    input  wire        stats_latch,   // clk 域单周期：锁存快照并清零事件计数
    output reg  [12:0] stats_mean16,  // 窗口平均水位 ×16（1/16 帧分辨率，0..8176）
    output reg  [8:0]  stats_min,     // 窗口内最低水位
    output reg  [8:0]  stats_max,     // 窗口内最高水位
    output reg  [15:0] stats_ovr,     // 自上次快照以来的真实丢样次数（饱和）
    output reg  [15:0] stats_und,     // 自上次快照以来的真实重样次数（饱和）
    output reg         stats_valid    // 至少完成过一个统计窗口
);

  localparam [8:0] NEAR_FULL_TH  = 9'd480;
  localparam [8:0] NEAR_EMPTY_TH = 9'd32;

  // 读域下溢脉冲 -> toggle 同步器
  reg und_toggle;
  always @(posedge und_clk or negedge nrst) begin
    if (!nrst)
      und_toggle <= 1'b0;
    else if (und_evt)
      und_toggle <= ~und_toggle;
  end

  reg und_tg_ms1, und_tg_ms2, und_tg_d;
  always @(posedge clk or negedge nrst) begin
    if (!nrst) begin
      und_tg_ms1 <= 1'b0;
      und_tg_ms2 <= 1'b0;
      und_tg_d   <= 1'b0;
    end else begin
      und_tg_ms1 <= und_toggle;
      und_tg_ms2 <= und_tg_ms1;
      und_tg_d   <= und_tg_ms2;
    end
  end

  wire und_evt_sync = und_tg_ms2 ^ und_tg_d;

  // 两级流水：usedw_r 打断组合链
  reg [8:0] usedw_r;
  always @(posedge clk or negedge nrst) begin
    if (!nrst)
      usedw_r <= 9'd0;
    else
      usedw_r <= usedw;
  end

  always @(posedge clk or negedge nrst) begin
    if (!nrst) begin
      level      <= 9'd0;
      near_full  <= 1'b0;
      near_empty <= 1'b0;
      ovr_st     <= 1'b0;
      und_st     <= 1'b0;
    end else begin
      level      <= usedw_r;
      near_full  <= (usedw_r >= NEAR_FULL_TH);
      near_empty <= (usedw_r <= NEAR_EMPTY_TH);

      if (ovr_evt)
        ovr_st <= 1'b1;
      else if (clear)
        ovr_st <= 1'b0;

      if (und_evt_sync)
        und_st <= 1'b1;
      else if (clear)
        und_st <= 1'b0;
    end
  end

  // ------------------------------------------------------------------
  // v6 统计块：给 MCU 反馈环提供"干净的位置观测"和"真实故障计数"。
  //
  // 动机：旧接口（GET_LEVEL）只给一个瞬时采样，量化到 4 帧，而水位本身有
  // ±8 帧的锯齿纹波（MCU 的 I2S 是"有数据才走"的突发注入）。MCU 每 10ms
  // 抽一个点，只能靠 ±24 帧死区掩盖纹波。这里把"窗口平均"做在硬件里：
  //   - mean×16：整个窗口的平均水位，1/16 帧分辨率（比旧接口细 64 倍）；
  //   - min/max：窗口内极值，直接量化"抖动实际有多大"，用于定容缓存深度；
  //   - ovr/und 计数：真实丢样/重样次数（旧 GET_EVENTS 只有 sticky 位，
  //     MCU 侧统计的是"每秒是否看到 sticky"，拿不到真实次数）。
  //
  // 窗口固定 2^WINDOW_BITS 个 pll_main_clk（2^20 @122.88MHz ≈ 8.53ms），
  // 与 MCU 的 10ms 反馈节拍匹配。窗口结束只更新 rep_* 报告寄存器，
  // 由 stats_latch（MCU 发快照命令时）一次性拷进读出寄存器并清零计数，
  // 因此 MCU 逐字节读取期间数值不会变化，天然无撕裂。
  // ------------------------------------------------------------------
  localparam integer WINDOW_BITS = 20;
  localparam [WINDOW_BITS-1:0] WINDOW_LAST = {WINDOW_BITS{1'b1}};

  reg [WINDOW_BITS+9:0] win_sum;   // 30bit：511×2^20 = 0x1FF00000 需 29bit，留 1bit 余量
  reg [WINDOW_BITS-1:0] win_cnt;
  reg [8:0] win_min, win_max;

  reg [12:0] rep_mean16;
  reg [8:0]  rep_min, rep_max;
  reg [15:0] ovr_cnt, und_cnt;
  reg        rep_valid;

  // 事件饱和计数器（真实次数；清零优先于计数，快照周期内至多丢 1 个事件，可忽略）
  always @(posedge clk or negedge nrst) begin
    if (!nrst) begin
      ovr_cnt <= 16'd0;
      und_cnt <= 16'd0;
    end else if (stats_latch) begin
      ovr_cnt <= 16'd0;
      und_cnt <= 16'd0;
    end else begin
      if (ovr_evt && (ovr_cnt != 16'hFFFF))
        ovr_cnt <= ovr_cnt + 16'd1;
      if (und_evt_sync && (und_cnt != 16'hFFFF))
        und_cnt <= und_cnt + 16'd1;
    end
  end

  // 窗口累加器（复用 usedw_r 的打拍，避免 alta_fifo 内部 gray2bin 组合链被拉长）
  always @(posedge clk or negedge nrst) begin
    if (!nrst) begin
      win_sum    <= {WINDOW_BITS+10{1'b0}};
      win_cnt    <= {WINDOW_BITS{1'b0}};
      win_min    <= 9'h1FF;
      win_max    <= 9'd0;
      rep_mean16 <= 13'd0;
      rep_min    <= 9'd0;
      rep_max    <= 9'd0;
      rep_valid  <= 1'b0;
    end else if (win_cnt == WINDOW_LAST) begin
      // 窗口结束：报告寄存器更新，同时以当前采样开启下一个窗口
      rep_mean16 <= win_sum[WINDOW_BITS+8:WINDOW_BITS-4]; // >> (20-4)，×16 保留 4 位小数
      rep_min    <= win_min;
      rep_max    <= win_max;
      rep_valid  <= 1'b1;
      win_sum    <= {{WINDOW_BITS+9{1'b0}}, 1'b0} + usedw_r;
      win_cnt    <= {{(WINDOW_BITS-1){1'b0}}, 1'b1};
      win_min    <= usedw_r;
      win_max    <= usedw_r;
    end else begin
      win_sum <= win_sum + usedw_r;
      win_cnt <= win_cnt + 1'b1;
      if (usedw_r < win_min) win_min <= usedw_r;
      if (usedw_r > win_max) win_max <= usedw_r;
    end
  end

  // 快照读出寄存器：stats_latch 时一次性更新，MCU 随后逐字节读取
  always @(posedge clk or negedge nrst) begin
    if (!nrst) begin
      stats_mean16 <= 13'd0;
      stats_min    <= 9'd0;
      stats_max    <= 9'd0;
      stats_ovr    <= 16'd0;
      stats_und    <= 16'd0;
      stats_valid  <= 1'b0;
    end else if (stats_latch) begin
      stats_mean16 <= rep_mean16;
      stats_min    <= rep_min;
      stats_max    <= rep_max;
      stats_ovr    <= ovr_cnt;
      stats_und    <= und_cnt;
      stats_valid  <= rep_valid;
    end
  end

endmodule
