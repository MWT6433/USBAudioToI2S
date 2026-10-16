# Board input clocks: 49.152 MHz / 45.1584 MHz
create_clock -name clk -period 20.345 -waveform {0 10.1725} [get_ports {clk}]
create_clock -name sub_clk -period 22.145 -waveform {0 11.0725} [get_ports {sub_clk}]

# NO PLL mode: 48k family clocks are counter-divided from clk by clkdiv4_main
create_generated_clock -name pll_out1 \
  -source [get_ports {clk}] -divide_by 2 [get_pins {clkdiv4_main|outd2}]
create_generated_clock -name pll_outd2 \
  -source [get_ports {clk}] -divide_by 4 [get_pins {clkdiv4_main|outd4}]
create_generated_clock -name pll_outd4 \
  -source [get_ports {clk}] -divide_by 8 [get_pins {clkdiv4_main|outd8}]
# pll_out2 (= clk, 49.152 MHz) needs no generated clock: it is the raw clk.

# sub_clk divide-by-2 -> 22.5792 MHz. The single-fanout div_sub_clk|d net is
# folded into clkdiv4|inclk by the fitter, so the clock is declared there.
create_generated_clock -name sub_clk_div2 \
  -source [get_ports {sub_clk}] -divide_by 2 [get_pins {clkdiv4|inclk}]

# Generated clocks from div_sub_clk (22.5792 MHz) via clkdiv4 (match actual design hierarchy)
# Prefer pin/net targets over registers to avoid missing-names warnings
create_generated_clock -name sub_clk_d2 \
  -source [get_pins {clkdiv4|inclk}] -divide_by 2 [get_pins {clkdiv4|outd2}]
create_generated_clock -name sub_clk_d4 \
  -source [get_pins {clkdiv4|inclk}] -divide_by 4 [get_pins {clkdiv4|outd4}]

# Auto-derive PLL clocks for pll1_inst outputs
derive_pll_clocks -create_base_clocks

# Clock Groups (use actual PLL clock names present in logs)
# Cut timing between main clk, PLL outputs, and sub clocks to avoid cross-domain analysis
set_clock_groups -asynchronous \
  -group [get_clocks {clk}] \
  -group [get_clocks {pll1_inst|pll_FD388D04|clkout0}] \
  -group [get_clocks {pll_out1}] \
  -group [get_clocks {pll_outd2}] \
  -group [get_clocks {pll_outd4}] \
  -group [get_clocks {sub_clk}] \
  -group [get_clocks {sub_clk_div2}] \
  -group [get_clocks {sub_clk_d2}] \
  -group [get_clocks {sub_clk_d4}]



# False paths 
set_false_path -from [get_ports in_ck]
set_false_path -from [get_ports in_ws]
set_false_path -from [get_ports in_sd]

set_false_path -to [get_ports out_ws]
set_false_path -to [get_ports out_ck]
set_false_path -to [get_ports out_sd]

set_false_path -to [get_ports out_wsb]
set_false_path -to [get_ports out_ckb]
set_false_path -to [get_ports out_sdb]

set_false_path -to [get_ports out_mck]
set_false_path -to [get_ports out_mckb]

# (buffer_empty/buffer_full/zc_gpio ports removed; silence status is
#  reported over SPI — see the zc_sync2 path into spi_slave.)

set_false_path -from [get_ports spi_ck]
set_false_path -from [get_ports spi_mosi]
set_false_path -to   [get_ports spi_miso]
set_false_path -from [get_ports spi_nss]

# Async reset release: nrst from the power-on reset counter is
# asynchronous to every clock domain that consumes it.
set_false_path -from [get_registers {main_reset|nrst_reg}]

# General uncertainty
derive_clock_uncertainty
