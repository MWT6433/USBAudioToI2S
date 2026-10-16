// TOP
module audio_cpld (
    // Clocks
    // NO PLL mode: the 48k-family clocks (49.152/24.576/12.288/6.144 MHz)
    // are counter-divided directly from the 49.152 MHz crystal; the PLL
    // only produces the 122.88 MHz pll_main_clk (x5 /2). sub_clk is
    // divided by 2 with a fabric register to recover 22.5792 MHz.
    // MCK outputs: two runtime modes via SPI command SET_MCLK_DIV2 (mck_sel.v) —
    //   div2=0 (default): raw crystals 49.152/45.1584 MHz (2x nominal, out-of-spec
    //                     but ratio-consistent; doubles the DAC's modulator OSR,
    //                     measured to sound better — the default choice).
    //   div2=1: divided by 2 -> 24.576/22.5792 MHz, datasheet-nominal in-spec.
    input clk,  // 49.152 MHz -> clkdiv4_main + PLL x5/2 + MCK
    input sub_clk,  // 45.1584 MHz -> div_sub_clk 22.5792 MHz + MCK

    // I2S input
    input in_ws,
    input in_ck,
    input in_sd,

    // I2S output
    output out_mck,
    output out_ws,
    output out_ck,
    output out_sd,
    // I2S outputB
    output out_mckb,
    output out_wsb,
    output out_ckb,
    output out_sdb,

    // （FB0/FB1 buffer_empty/buffer_full 与静音反馈 zc_gpio 引脚已删除：
    //  FIFO 水位/事件/静音状态全部经 SPI 上报，见 spi_slave.v。）

    // SPI
    input  spi_ck,
    input  spi_mosi,
    output spi_miso,
    input  spi_nss
);
  // Reset
  wire nrst;
  wire mck_set;
  wire mck_div2; // MCLK 二分频使能（SPI SET_MCLK_DIV2 寄存器，spi_slave 输出）
  // On-chip divide-by-2 of sub_clk -> 22.5792 MHz. The 48k family is
  // divided by clkdiv4_main directly from the 49.152 MHz crystal.
  wire sub_clk_div2;
  clkdiv2 div_sub_clk (
      .inclk(sub_clk),
      .out  (sub_clk_div2)
  );
  // 左 DAC 的 I2S 三线延迟 1 个采样周期。
  // 原因（示波器实测，勿删）：不延迟时左声道输出提前 / 右声道慢一个 LRCK 周期（1Ts），
  // 故将左 DAC 整帧延迟一个采样周期，对齐两片 DAC 的输出时序。
  // 当前 I2S 主机每个 stereo frame 需要 128 个 out_clk 周期，
  // 因此固定延迟 128 个 out_clk 周期即可在不同采样率下保持 1Ts。
  // 注：128 恰为 WS(128)/CK(2) 周期的整数倍，WS/CK 两条延迟链在稳态下与直通
  // 逐位相同，真正起对齐作用的是 SD 数据链；如需节省触发器可只保留 SD 延迟（−256 FF）。
  localparam integer I2S_A_DELAY_CYCLES = 128;
  reg [I2S_A_DELAY_CYCLES-1:0] out_ws_delay = {I2S_A_DELAY_CYCLES{1'b0}};
  reg [I2S_A_DELAY_CYCLES-1:0] out_ck_delay = {I2S_A_DELAY_CYCLES{1'b0}};
  reg [I2S_A_DELAY_CYCLES-1:0] out_sd_delay = {I2S_A_DELAY_CYCLES{1'b0}};
  wire out_ws_raw;
  wire out_ck_raw;
  wire out_sd_raw;
  // MCK synchronize
  assign out_mck = mck_set;
  assign out_mckb = mck_set;
  // 左 DAC 仅延迟 BCK/LRCK/SD，MCK 保持不变；右 DAC 走直通。
  assign out_ws = out_ws_delay[I2S_A_DELAY_CYCLES-1];
  assign out_ck = out_ck_delay[I2S_A_DELAY_CYCLES-1];
  assign out_sd = out_sd_delay[I2S_A_DELAY_CYCLES-1];
  assign out_wsb = out_ws_raw;
  assign out_ckb = out_ck_raw;
  assign out_sdb = out_sd_raw;

  always @(posedge out_clk or negedge nrst) begin
    if (!nrst) begin
      out_ws_delay <= {I2S_A_DELAY_CYCLES{1'b0}};
      out_ck_delay <= {I2S_A_DELAY_CYCLES{1'b0}};
      out_sd_delay <= {I2S_A_DELAY_CYCLES{1'b0}};
    end else begin
      out_ws_delay <= {out_ws_delay[I2S_A_DELAY_CYCLES-2:0], out_ws_raw};
      out_ck_delay <= {out_ck_delay[I2S_A_DELAY_CYCLES-2:0], out_ck_raw};
      out_sd_delay <= {out_sd_delay[I2S_A_DELAY_CYCLES-2:0], out_sd_raw};
    end
  end
 
  // PLL clocks
  wire pll_main_clk;  // 122.88 MHz (PLL x5/2)
  wire pll_out2;  // 49.152 MHz -> 384 kHz Fs
  wire pll_out1;  // 24.576 MHz -> 192 kHz Fs
  wire pll_outd2;  // 12.288 MHz -> 96 kHz Fs
  wire pll_outd4;  // 6.144 MHz -> 48 kHz Fs
  wire sub_out1;  // 22.5792 MHz -> 176.4 kHz Fs
  wire sub_outd2;  // 11.2896 MHz -> 88.2 kHz Fs
  wire sub_outd4;  // 5.6448 MHz -> 44.1 kHz Fs
  wire [2:0] clk_sel;
  wire out_clk;

  // I2S input
  wire [31:0] i2s_in_left_channel;
  wire [31:0] i2s_in_right_channel;
  wire i2s_in_en;

  // FIFO
  wire fifo_full;
  wire [63:0] fifo_in;
  wire [63:0] fifo_out;
  wire fifo_in_en;
  wire fifo_empty;
  wire fifo_out_en;
  wire fifo_full_aux; // FIFO 读侧满标志（原 buffer_full 观察输出删除后暂无消费者，保留端口连接）

  // FIFO 水位与 over/underrun 事件（pll_main_clk 域，供 SPI 上报）
  wire [8:0] fifo_usedw;
  wire [8:0] fifo_level;
  wire fifo_near_full;
  wire fifo_near_empty;
  wire fifo_ovr_st;
  wire fifo_und_st;
  wire fifo_evt_clear;
  // v6 统计块：窗口均值/极值 + 真实事件计数（fifo_status -> spi_slave，同为 pll_main_clk 域）
  wire        stats_latch;
  wire [12:0] stats_mean16;
  wire [8:0]  stats_min;
  wire [8:0]  stats_max;
  wire [15:0] stats_ovr;
  wire [15:0] stats_und;
  wire        stats_valid;
  // 真实丢样/重样时刻：满时写入被 recv_buffer 丢弃、空时读请求重复上一样本
  wire fifo_ovr_evt = i2s_in_en & fifo_full;    // 写域 (pll_main_clk)
  wire fifo_und_evt = i2s_out_en & fifo_empty;  // 读域 (out_clk)

  // I2S output
  wire i2s_out_en;
  wire [31:0] i2s_out_left_channel;
  wire [31:0] i2s_out_right_channel;

  reset main_reset (
      .clk (clk),
      .nrst(nrst)
  );
  
    // 选择位来自 SPI 从机的 clk_sel 总线；mck_div2 来自 SET_MCLK_DIV2(0xC0) 命令
 mck_sel mck_src_sel (
     .clk     (clk),          // 49.152 MHz  -> MCK 2x48k 族
     .sub_clk (sub_clk),      // 45.1584 MHz -> MCK 2x44.1k 族
     .sel     (clk_sel),   // 按 sel 编码选族：0x1~0x4 -> 48k 族(clk)，0x5~0x7 -> 44.1k 族(sub_clk)
     .div2    (mck_div2),  // 0=晶振直出(49.152/45.1584)，1=÷2(24.576/22.5792 标称)
     .mck_src (mck_set)    // 输出到外部 MCK
 );

pll_nopll pll1_inst(
    .inclk0(clk),           // 49.152 MHz; x5/2 -> 122.88 MHz
    .c0(pll_main_clk)
);

  // 48k family: divide the 49.152 MHz crystal directly
  clkdiv4 clkdiv4_main (
      .inclk(clk),
      .out1 (pll_out2),   // 49.152 MHz -> 384 kHz Fs
      .outd2(pll_out1),   // 24.576 MHz -> 192 kHz Fs
      .outd4(pll_outd2),  // 12.288 MHz -> 96 kHz Fs
      .outd8(pll_outd4)   // 6.144 MHz -> 48 kHz Fs
  );

  clkdiv4 clkdiv4 (
      .inclk(sub_clk_div2),
      .out1 (sub_out1),
      .outd2(sub_outd2),
      .outd4(sub_outd4),
      .outd8()
  );

  clk_sel main_clk_sel (
      .nrst(nrst),
      .pll_main_clk(pll_main_clk),
      .pll_out2(pll_out2),
      .pll_out1(pll_out1),
      .pll_outd2(pll_outd2),
      .pll_outd4(pll_outd4),
      .sub_out1(sub_out1),
      .sub_outd2(sub_outd2),
      .sub_outd4(sub_outd4),
      .clk_sel(clk_sel),
      .out_clk(out_clk)
  );

  // --- Synchronize with pll_main_clk ---

  i2s_slave i2s_slave (
      .nrst(nrst),
      .clk(pll_main_clk),
      .i2s_ws(in_ws),
      .i2s_ck(in_ck),
      .i2s_sd(in_sd),
      .en(i2s_in_en),
      .left_channel(i2s_in_left_channel),
      .right_channel(i2s_in_right_channel)
  );

  recv_buffer recv_buffer (
      .clk(pll_main_clk),
      .nrst(nrst),
      .en(i2s_in_en),
      // Correction data
      // Swap left and right channels? Why???
      // Swap byte order
      .left_channel({i2s_in_right_channel[15:0], i2s_in_right_channel[31:16]}),
      .right_channel({i2s_in_left_channel[15:0], i2s_in_left_channel[31:16]}),
      .fifo_full(fifo_full),
      .data(fifo_in),
      .fifo_en(fifo_in_en)
  );

fifo2 main_fifo(
    //read
    .RdClk(out_clk),
    .RdRstn(nrst),
    .RdReq(fifo_out_en),
    .RdData(fifo_out),
    //write
    .WrClk(pll_main_clk),
    .WrRstn(nrst),
    .WrReq(fifo_in_en),
    .WrData(fifo_in),
    //Flags
    .RdEmpty(fifo_empty),
    .WrFull(fifo_full),
    .RdFull(fifo_full_aux),
    .WrUsedw(fifo_usedw)
);

  // 水位快照 + 近满/近空阈值 + over/underrun sticky 事件
  fifo_status u_fifo_status (
      .clk       (pll_main_clk),
      .und_clk   (out_clk),
      .nrst      (nrst),
      .usedw     (fifo_usedw),
      .ovr_evt   (fifo_ovr_evt),
      .und_evt   (fifo_und_evt),
      .clear     (fifo_evt_clear),
      .level     (fifo_level),
      .near_full (fifo_near_full),
      .near_empty(fifo_near_empty),
      .ovr_st    (fifo_ovr_st),
      .und_st    (fifo_und_st),
      .stats_latch  (stats_latch),
      .stats_mean16 (stats_mean16),
      .stats_min    (stats_min),
      .stats_max    (stats_max),
      .stats_ovr    (stats_ovr),
      .stats_und    (stats_und),
      .stats_valid  (stats_valid)
  );
 // --- Synchronize with out_clk ---

  trans_buffer trans_buffer (
      .clk(out_clk),
      .nrst(nrst),
      .en(i2s_out_en),
      .left_channel(i2s_out_left_channel),
      .right_channel(i2s_out_right_channel),
      .fifo_empty(fifo_empty),
      .data(fifo_out),
      .fifo_en(fifo_out_en)
  );

  i2s_master i2s_master (
      .clk(out_clk),
      .nrst(nrst),
      .en(i2s_out_en),
      .left_channel(i2s_out_left_channel),
      .right_channel(i2s_out_right_channel),
      .i2s_ws(out_ws_raw),
      .i2s_ck(out_ck_raw),
      .i2s_sd(out_sd_raw)
  );

  // Silence detector instance (out_clk domain).
  // zc 静音标志不再走引脚：经 2 拍同步进 pll_main_clk 域，由 SPI GET_SILENCE 上报。
  wire zc_silence;
  silence_detector #(
      .THRESH(16'd15360),
      .QUIET_LVL(32'd256)
  ) u_silence_detector (
      .clk(out_clk),
      .nrst(nrst),
      .sample_en(i2s_out_en),
      .fifo_empty(fifo_empty),
      .left(i2s_out_left_channel),
      .right(i2s_out_right_channel),
      .clk_sel(clk_sel),
      .zc_gpio(zc_silence)
  );

  // 同步 out_clk 域静音标志到 pll_main_clk 域（SPI 从机时钟域）
  reg zc_sync1 = 1'b0;
  reg zc_sync2 = 1'b0;
  always @(posedge pll_main_clk or negedge nrst) begin
      if (!nrst) begin
          zc_sync1 <= 1'b0;
          zc_sync2 <= 1'b0;
      end else begin
          zc_sync1 <= zc_silence;
          zc_sync2 <= zc_sync1;
      end
  end

  spi_slave spi_slave (
      .clk(pll_main_clk),
      .nrst(nrst),
      .spi_ck(spi_ck),
      .spi_mosi(spi_mosi),
      .spi_miso(spi_miso),
      .spi_nss(spi_nss),
      .clk_sel(clk_sel),
      .mck_div2(mck_div2),
      .silence(zc_sync2),
      .fifo_level(fifo_level),
      .fifo_near_full(fifo_near_full),
      .fifo_near_empty(fifo_near_empty),
      .fifo_ovr_st(fifo_ovr_st),
      .fifo_und_st(fifo_und_st),
      .evt_clear(fifo_evt_clear),
      .stats_latch(stats_latch),
      .stats_mean16(stats_mean16),
      .stats_min(stats_min),
      .stats_max(stats_max),
      .stats_ovr(stats_ovr),
      .stats_und(stats_und),
      .stats_valid(stats_valid)
  );

  // （buffer_empty/buffer_full 输出寄存器已随 FB0/FB1 引脚删除。）

endmodule
