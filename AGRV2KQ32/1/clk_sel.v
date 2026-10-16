module clk_sel (
    input nrst,
    input pll_main_clk,
    input pll_out2,
    input pll_out1,
    input pll_outd2,
    input pll_outd4,
    input sub_out1,
    input sub_outd2,
    input sub_outd4,

    input [2:0] clk_sel,
    output reg out_clk
);

    // 在 pll_main_clk 上升沿锁存选择（与 spi_slave 的 clk_sel 寄存器同域同沿）。
    // 注意：不要改回 negedge，也不要加回 last_clk_sel 变化检测——
    // 那个比较器在逻辑上等价于无条件赋值（死逻辑），且 negedge 采样会把
    // spi_slave|clk_sel → current_sel 路径的时序预算砍成半周期（4.07ns），
    // 曾是全设计最差路径；posedge 采样为该路径提供完整周期 8.14ns。
    reg [2:0] current_sel; // current selected clock

    always @(posedge pll_main_clk or negedge nrst) begin
        if (!nrst) begin
            current_sel <= 3'b001;
        end else begin
            current_sel <= clk_sel;
        end
    end

    // Select out_clk according to current selection
    always @(*) begin
        case (current_sel)
            3'b001:  out_clk = pll_out2;
            3'b010:  out_clk = pll_out1;
            3'b011:  out_clk = pll_outd2;
            3'b100:  out_clk = pll_outd4;
            3'b101:  out_clk = sub_out1;
            3'b110:  out_clk = sub_outd2;
            3'b111:  out_clk = sub_outd4;
            default: out_clk = pll_out2;
        endcase
    end


endmodule
