// Adapted for NO PLL mode: the 48k-family clocks are counter-divided from
// the raw 49.152 MHz crystal (see clkdiv4_main), and this PLL only produces
// the 122.88 MHz pll_main_clk (VCO 491.52, c0 /4).
// Implemented with alta_pllve (the AGM toolchain does not support altpll).
module pll_nopll (
   input inclk0,
   output c0
);

wire pll_clkout0;
wire pll_clkfbout;
wire pll_lock;

alta_pllve pll_FD388D04(
  .clkin(inclk0),
  .clkfb(pll_clkfbout),
  .pfden(1'b1),
  .resetn(1'b1),
  .phasecounterselect(3'b0),
  .phaseupdown(1'b0),
  .phasestep(1'b0),
  .scanclk(1'b0),
  .scanclkena(1'b0),
  .scandata(1'b0),
  .configupdate(1'b0),
  .clkout0(pll_clkout0),
  .clkout1(),
  .clkout2(),
  .clkout3(),
  .clkout4(),
  .clkfbout(pll_clkfbout),
  .lock(pll_lock),
  .scandataout(),
  .scandone(),
  .phasedone()
);
defparam pll_FD388D04.CLKIN_BYPASS = 1'h1;   // 49.152 MHz ref, no input divider
defparam pll_FD388D04.CLKIN_TRIM = 1'h0;
defparam pll_FD388D04.CLKIN_HIGH = 8'hFF;
defparam pll_FD388D04.CLKIN_LOW = 8'hFF;
defparam pll_FD388D04.CLKFB_BYPASS = 1'h0;
defparam pll_FD388D04.CLKFB_HIGH = 8'h04;    // feedback /10 -> VCO 491.52 MHz
defparam pll_FD388D04.CLKFB_LOW = 8'h04;
defparam pll_FD388D04.VCO_POST_DIV = 1'h1;
defparam pll_FD388D04.CLKDIV0_EN = 1'h1;
defparam pll_FD388D04.CLKOUT0_HIGH = 8'h01;  // /4 -> 122.88 MHz
defparam pll_FD388D04.CLKOUT0_LOW = 8'h01;
defparam pll_FD388D04.CLKOUT0_BYPASS = 1'h0;
defparam pll_FD388D04.CLKOUT0_TRIM = 1'h0;
defparam pll_FD388D04.CLKOUT0_DEL = 8'h00;
defparam pll_FD388D04.CLKOUT0_PHASE = 3'h0;
defparam pll_FD388D04.CLKDIV1_EN = 1'h0;     // remaining outputs unused
defparam pll_FD388D04.CLKOUT1_HIGH = 8'h00;
defparam pll_FD388D04.CLKOUT1_LOW = 8'h00;
defparam pll_FD388D04.CLKOUT1_BYPASS = 1'h1;
defparam pll_FD388D04.CLKOUT1_TRIM = 1'h0;
defparam pll_FD388D04.CLKOUT1_DEL = 8'h00;
defparam pll_FD388D04.CLKOUT1_PHASE = 3'h0;
defparam pll_FD388D04.CLKOUT1_CASCADE = 1'h0;
defparam pll_FD388D04.CLKDIV2_EN = 1'h0;
defparam pll_FD388D04.CLKOUT2_HIGH = 8'h00;
defparam pll_FD388D04.CLKOUT2_LOW = 8'h00;
defparam pll_FD388D04.CLKOUT2_BYPASS = 1'h1;
defparam pll_FD388D04.CLKOUT2_TRIM = 1'h0;
defparam pll_FD388D04.CLKOUT2_DEL = 8'h00;
defparam pll_FD388D04.CLKOUT2_PHASE = 3'h0;
defparam pll_FD388D04.CLKOUT2_CASCADE = 1'h0;
defparam pll_FD388D04.CLKDIV3_EN = 1'h0;
defparam pll_FD388D04.CLKOUT3_HIGH = 8'h00;
defparam pll_FD388D04.CLKOUT3_LOW = 8'h00;
defparam pll_FD388D04.CLKOUT3_BYPASS = 1'h1;
defparam pll_FD388D04.CLKOUT3_TRIM = 1'h0;
defparam pll_FD388D04.CLKOUT3_DEL = 8'h00;
defparam pll_FD388D04.CLKOUT3_PHASE = 3'h0;
defparam pll_FD388D04.CLKOUT3_CASCADE = 1'h0;
defparam pll_FD388D04.CLKDIV4_EN = 1'h0;
defparam pll_FD388D04.CLKOUT4_HIGH = 8'h00;
defparam pll_FD388D04.CLKOUT4_LOW = 8'h00;
defparam pll_FD388D04.CLKOUT4_BYPASS = 1'h1;
defparam pll_FD388D04.CLKOUT4_TRIM = 1'h0;
defparam pll_FD388D04.CLKOUT4_DEL = 8'h00;
defparam pll_FD388D04.CLKOUT4_PHASE = 3'h0;
defparam pll_FD388D04.CLKOUT4_CASCADE = 1'h0;
defparam pll_FD388D04.CLKFB_TRIM = 1'h0;
defparam pll_FD388D04.CLKFB_DEL = 8'h00;
defparam pll_FD388D04.CLKFB_PHASE = 3'h0;
defparam pll_FD388D04.FEEDBACK_MODE = 3'h4;
defparam pll_FD388D04.FBDELAY_VAL = 3'h4;
defparam pll_FD388D04.PLLOUTP_EN = 1'h0;
defparam pll_FD388D04.PLLOUTN_EN = 1'h0;

assign c0 = pll_clkout0;

endmodule
