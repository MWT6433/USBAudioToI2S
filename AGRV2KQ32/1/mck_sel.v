module mck_sel (
    input clk,
    input sub_clk,
    input [2:0] sel,
    input div2,     // 1 = MCLK 二分频输出（标称 24.576/22.5792，规格内）
                    // 0 = 晶振直出（49.152/45.1584，2× 规格，调制器 OSR 翻倍、实测听感更优）
                    // 由 spi_slave 的 SET_MCLK_DIV2(0xC0) 命令运行时切换，复位默认 0
    output mck_src
);
    // sel 编码（与 clk_sel.v / spi_slave.v 一致）：
    //   0x1/0x2/0x3/0x4 = 48k 族 (384k/192k/96k/48k) -> clk(49.152M)
    //   0x5/0x6/0x7     = 44.1k 族 (176.4k/88.2k/44.1k) -> sub_clk(45.1584M)
    // 注意 0x4(48k) 的 sel[2]=1，不能单用 sel[2] 判族，必须排除 0x4。
    wire sel_44k = (sel[2] & (sel[1] | sel[0]));

    // T 触发器二分频：占空比恰好 50%，输出手册标称频率。
    // 初值 0 仅为仿真确定性；绝对相位对 CS43131 无意义（内部比率式时钟树）。
    reg clk_half = 1'b0;  // 49.152  -> 24.576  MHz
    reg sub_half = 1'b0;  // 45.1584 -> 22.5792 MHz
    always @(posedge clk)     clk_half <= ~clk_half;
    always @(posedge sub_clk) sub_half <= ~sub_half;

    (* altera_attribute = {"-name AUTO_GLOBAL_CLOCK OFF", "-name GLOBAL_SIGNAL OFF"} *) wire mck_src_int;
    assign mck_src_int = div2 ? (sel_44k ? sub_half : clk_half)
                              : (sel_44k ? sub_clk  : clk);
    assign mck_src     = mck_src_int;
endmodule
