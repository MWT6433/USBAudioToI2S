# USBAudioToI2S
Firmware from UAC2.0 to I2S, supporting up to 32-bit 384KHz.

This project is a low-cost implementation of UAC2.0 to I2S, using MCU+CPLD to achieve asynchronous USB audio. This project can replace Amanero and XMOS solutions.

- `AGRV2KQ32/1/`: CPLD (AGRV2KQ32) firmware.
- Repo root (`User/`, `Core/`, `Peripheral/`, ...): CH32V307 MCU firmware.

## How to build

### CH32V307

Visit [WCH](https://www.wch.cn/products/CH32V307.html) for more information.

### AGRV2KQ32

Visit [AGM](http://www.tcx-micro.com/doc_27047096.html) for more information.

Two oscillators are necessary (49.152MHz and 45.1584MHz). The CPLD outputs them directly as the DAC MCLK (2x the CS43131 nominal 24.576/22.5792MHz — out-of-spec but ratio-consistent, see the notes in `User/cs43131.h`), and derives all sample clocks by dividing them down.

If you would like to use your external PLL, please use `AGRV2KQ32/1/pll_nopll.v` to replace the corresponding PLL instance. Otherwise, please ignore it.

## Schematic

[Schematic](https://oshwhub.com/lovelonelytime/usbtoi2s)
