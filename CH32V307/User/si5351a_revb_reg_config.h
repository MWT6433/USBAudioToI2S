/*
 * Si5351A Rev B Safe Configuration Register Writes
 * Target: 24.576 MHz on CLK0/CLK1/CLK2 (from PLLA @ 884.736 MHz)
 * Order: outputs disabled -> clocks powered down -> program PLLA -> program MS0/1/2 -> power up CLK0/1/2 -> enable outputs
 * Notes:
 * - 默认使用板载晶体/外部XO输入�? XA（XTAL 源）�?
 * - 如需改用 CLKIN 有源时钟作为 PLLA 输入，请将宏 SI5351_PLLA_SRC_CLKIN 设为 1；数组中 0x0F 将随之切换为 CLKIN 源�?
 */
#include <stdint.h>
#ifndef SI5351A_REVB_REG_CONFIG_HEADER
#define SI5351A_REVB_REG_CONFIG_HEADER

/* 设为 1：PLLA 使用 CLKIN 作为参考输入；设为 0：PLLA 使用 XTAL（含外部XO�? XA 注入�? */
#ifndef SI5351_PLLA_SRC_CLKIN
#define SI5351_PLLA_SRC_CLKIN 0
#endif

#define SI5351A_REVB_REG_CONFIG_NUM_REGS 47
#define SI5351A_I2C_ADDR 0x60

typedef struct {
    unsigned int address;  /* 16-bit register address */
    unsigned char value;   /* 8-bit register data */
} si5351a_revb_register_t;

/*
 * Sequence:
 * 1) Disable all outputs (reg 0x03)
 * 2) Power down all CLKx (0x10..0x17 = 0x8C -> PDN=1, SRC=MS, IDRV preset)
 *    + Select PLLA reference source (0x0F)
 *    + Optional: keep 0xB7 as prior board setting
 * 3) Program PLLA (0x1A..0x21) to 884.736 MHz (from 25 MHz reference, M = 35 + 2651/3125)
 * 4) Program MS0/1/2 to integer divide by 36 (P1=0x1000, P2=0, P3=1)
 * 5) Power up CLK0/1/2 and set drive
 * 6) Enable outputs 0/1/2 only
 */
#include "ch32v30x_i2c.h"
#include "Dec_IIC.h"

static inline int si5351_write_reg(uint8_t reg, uint8_t val) {
    const uint8_t devAddr8 = (uint8_t)(SI5351A_I2C_ADDR << 1);
    for (int attempt = 0; attempt < 3; ++attempt) {
        uint32_t timeout = 0;
        while (I2C_GetFlagStatus(I2C1, I2C_FLAG_BUSY) != RESET) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_GenerateSTART(I2C1, ENABLE);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_MODE_SELECT)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_Send7bitAddress(I2C1, devAddr8, I2C_Direction_Transmitter);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_SendData(I2C1, reg);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_SendData(I2C1, val);
        timeout = 0;
        while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED)) {
            if (++timeout > 100000) { IIC_reset(); goto retry; }
        }
        I2C_GenerateSTOP(I2C1, ENABLE);
        return 0;
    retry: ;
    }
    return -1;
}

static inline int si5351_disable_all_outputs(void) {
    return si5351_write_reg(0x03, 0xFF);
}

static inline int si5351_power_down_all_clks(void) {
    int err = 0;
    err |= si5351_write_reg(0x10, 0x8C);
    err |= si5351_write_reg(0x11, 0x8C);
    err |= si5351_write_reg(0x12, 0x8C);
    err |= si5351_write_reg(0x13, 0x8C);
    err |= si5351_write_reg(0x14, 0x8C);
    err |= si5351_write_reg(0x15, 0x8C);
    err |= si5351_write_reg(0x16, 0x8C);
    err |= si5351_write_reg(0x17, 0x8C);
    return err ? -1 : 0;
}

static inline int si5351_set_plla_ref_source(void) {
#if (SI5351_PLLA_SRC_CLKIN)
    return si5351_write_reg(0x0F, 0x10); /* PLLA from CLKIN */
#else
    return si5351_write_reg(0x0F, 0x00); /* PLLA from XTAL/XA */
#endif
}

static inline int si5351_write_board_option_b7(void) {
    return si5351_write_reg(0xB7, 0x12);
}

/* PLLA to 884.736 MHz from 25 MHz ref: M = 35 + 2651/3125 */
static inline int si5351_program_plla_884_736mhz(void) {
    int err = 0;
    /* Update to ClockBuilder Pro export for 24.576 MHz family */
    err |= si5351_write_reg(0x1A, 0x7A);
    err |= si5351_write_reg(0x1B, 0x12);
    err |= si5351_write_reg(0x1C, 0x00);
    err |= si5351_write_reg(0x1D, 0x0F);
    err |= si5351_write_reg(0x1E, 0xB1);
    err |= si5351_write_reg(0x1F, 0x00);
    err |= si5351_write_reg(0x20, 0x63);
    err |= si5351_write_reg(0x21, 0x0E);
    return err ? -1 : 0;
}

/* Program a Multisynth (base=0x2A, 0x32, 0x3A) for integer divide by 36 (P1=0x1000, P2=0, P3=1) */
static inline int si5351_program_ms_div36(uint8_t base) {
    int err = 0;
    err |= si5351_write_reg(base + 0, 0x00); /* P3[15:8] */
    err |= si5351_write_reg(base + 1, 0x01); /* P3[7:0]  */
    err |= si5351_write_reg(base + 2, 0x00); /* P1[17:10] */
    err |= si5351_write_reg(base + 3, 0x10); /* P1[9:2]   */
    err |= si5351_write_reg(base + 4, 0x00); /* P1[1:0]|P3[19:16]|R/INT */
    err |= si5351_write_reg(base + 5, 0x00); /* P2[19:12] */
    err |= si5351_write_reg(base + 6, 0x00); /* P2[11:4]  */
    err |= si5351_write_reg(base + 7, 0x00); /* P2[3:0]|P3[23:20] */
    return err ? -1 : 0;
}

static inline int si5351_power_up_clk012_default_drive(void) {
    int err = 0;
    err |= si5351_write_reg(0x10, 0x0E); /* CLK0 */
    err |= si5351_write_reg(0x11, 0x0E); /* CLK1 */
    err |= si5351_write_reg(0x12, 0x0E); /* CLK2 */
    return err ? -1 : 0;
}

static inline int si5351_enable_outputs_012(void) {
    return si5351_write_reg(0x03, 0xF8);
}

/* Top-level: apply 24.576 MHz on CLK0/1/2 using PLLA @ 884.736 MHz */
static inline int si5351_configure_24_576mhz(void) {
    int err = 0;
    err |= si5351_disable_all_outputs();
    err |= si5351_power_down_all_clks();
    err |= si5351_set_plla_ref_source();
    err |= si5351_write_board_option_b7();
    err |= si5351_program_plla_884_736mhz();
    err |= si5351_program_ms_div36(0x2A); /* MS0 */
    err |= si5351_program_ms_div36(0x32); /* MS1 */
    err |= si5351_program_ms_div36(0x3A); /* MS2 */
    err |= si5351_power_up_clk012_default_drive();
    err |= si5351_enable_outputs_012();
    return err ? -1 : 0;
}


/* ===== 22.5792 MHz configuration (functionized from provided register array) ===== */
static inline int si5351_write_initial_global_22_5792(void) {
    int err = 0;
    err |= si5351_write_reg(0x02, 0x53);
    err |= si5351_write_reg(0x03, 0x00);
    err |= si5351_write_reg(0x04, 0x20);
    err |= si5351_write_reg(0x07, 0x00);
    err |= si5351_write_reg(0x0F, 0x00);
    return err ? -1 : 0;
}

static inline int si5351_write_clk_ctrl_22_5792(void) {
    int err = 0;
    err |= si5351_write_reg(0x10, 0x0F); /* per array */
    err |= si5351_write_reg(0x11, 0x0F); /* enable CLK1 same as CLK0 */
    err |= si5351_write_reg(0x12, 0x8C);
    err |= si5351_write_reg(0x13, 0x8C);
    err |= si5351_write_reg(0x14, 0x8C);
    err |= si5351_write_reg(0x15, 0x8C);
    err |= si5351_write_reg(0x16, 0x8C);
    err |= si5351_write_reg(0x17, 0x8C);
    return err ? -1 : 0;
}

/* PLLA parameters per array (0x1A..0x21) */
static inline int si5351_program_plla_for_22_5792mhz(void) {
    int err = 0;
    err |= si5351_write_reg(0x1A, 0x61);
    err |= si5351_write_reg(0x1B, 0xA8);
    err |= si5351_write_reg(0x1C, 0x00);
    err |= si5351_write_reg(0x1D, 0x0F);
    err |= si5351_write_reg(0x1E, 0x9C);
    err |= si5351_write_reg(0x1F, 0x00);
    err |= si5351_write_reg(0x20, 0x38);
    err |= si5351_write_reg(0x21, 0x20);
    return err ? -1 : 0;
}

/* MSx parameters per array (base = 0x2A, 0x32, 0x3A) */
static inline int si5351_program_ms_for_22_5792(uint8_t base) {
    int err = 0;
    err |= si5351_write_reg(base + 0, 0x00);
    err |= si5351_write_reg(base + 1, 0x01);
    err |= si5351_write_reg(base + 2, 0x00);
    err |= si5351_write_reg(base + 3, 0x11);
    err |= si5351_write_reg(base + 4, 0x80);
    err |= si5351_write_reg(base + 5, 0x00);
    err |= si5351_write_reg(base + 6, 0x00);
    err |= si5351_write_reg(base + 7, 0x00);
    return err ? -1 : 0;
}

static inline int si5351_write_tail_regs_22_5792(void) {
    int err = 0;
    err |= si5351_write_reg(0x5A, 0x00);
    err |= si5351_write_reg(0x5B, 0x00);
    err |= si5351_write_reg(0x95, 0x00);
    err |= si5351_write_reg(0x96, 0x00);
    err |= si5351_write_reg(0x97, 0x00);
    err |= si5351_write_reg(0x98, 0x00);
    err |= si5351_write_reg(0x99, 0x00);
    err |= si5351_write_reg(0x9A, 0x00);
    err |= si5351_write_reg(0x9B, 0x00);
    err |= si5351_write_reg(0xA2, 0x00);
    err |= si5351_write_reg(0xA3, 0x00);
    err |= si5351_write_reg(0xA4, 0x00);
    err |= si5351_write_reg(0xA5, 0x00);
    err |= si5351_write_reg(0xB7, 0x12);
    return err ? -1 : 0;
}

/* Top-level: apply 22.5792 MHz configuration (exact order per provided array) */
static inline int si5351_configure_22_5792mhz(void) {
    int err = 0;
    err |= si5351_write_initial_global_22_5792();
    err |= si5351_write_clk_ctrl_22_5792();
    err |= si5351_program_plla_for_22_5792mhz();
    err |= si5351_program_ms_for_22_5792(0x2A); /* MS0 */
    err |= si5351_program_ms_for_22_5792(0x32); /* MS1 mirror MS0 for CLK1 */
    err |= si5351_write_tail_regs_22_5792();
    return err ? -1 : 0;
}
#endif /* SI5351A_REVB_REG_CONFIG_HEADER */

#ifndef SI5351_REF_CLK_HZ
#define SI5351_REF_CLK_HZ 25000000UL
#endif

// Compute PLL parameters for M = a + b/c and write to PLLA (0x1A..0x21)
static inline int si5351_pll_compute_and_write(uint64_t vco_hz, uint32_t ref_hz)
{
    // Choose denominator c within 20-bit range
    const uint32_t c = 1000000U; // 1e6 <= 2^20-1
    uint64_t a = vco_hz / ref_hz; // integer part
    uint64_t rem = vco_hz % ref_hz;
    uint64_t b = (rem * c + (ref_hz / 2)) / ref_hz; // rounded fractional
    if (b >= c) { a += 1; b -= c; }

    // Encode per AN619: P1 = 128*a + floor(128*b/c) - 512
    uint64_t floor_128_b_c = (128ULL * b) / c;
    uint32_t P1 = (uint32_t)(128ULL * a + floor_128_b_c - 512ULL);
    uint32_t P2 = (uint32_t)(128ULL * b - c * floor_128_b_c);
    uint32_t P3 = c;

    int err = 0;
    // Map to PLLA registers 0x1A..0x21
    err |= si5351_write_reg(0x1A, (P3 >> 8) & 0xFF);     // P3[15:8]
    err |= si5351_write_reg(0x1B, (P3 >> 0) & 0xFF);     // P3[7:0]
    err |= si5351_write_reg(0x1C, (P1 >> 10) & 0xFF);    // P1[17:10]
    err |= si5351_write_reg(0x1D, (P1 >> 2) & 0xFF);     // P1[9:2]
    err |= si5351_write_reg(0x1E, ((P1 & 0x3) << 6) | ((P3 >> 16) & 0x0F)); // P1[1:0]|P3[19:16]
    err |= si5351_write_reg(0x1F, (P2 >> 12) & 0xFF);    // P2[19:12]
    err |= si5351_write_reg(0x20, (P2 >> 4) & 0xFF);     // P2[11:4]
    err |= si5351_write_reg(0x21, ((P2 & 0xF) << 4) | ((P3 >> 20) & 0x0F)); // P2[3:0]|P3[23:20]
    return err ? -1 : 0;
}

// Program MS integer divider N (N in 4..900, typical 6..254) at base (0x2A, 0x32, 0x3A)
static inline int si5351_program_ms_divN(uint8_t base, uint16_t N)
{
    // Integer mode: P1 = 128*N - 512, P2 = 0, P3 = 1, set INT bit in base+4[6]
    uint32_t P1 = 128U * (uint32_t)N - 512U;
    uint32_t P2 = 0U;
    uint32_t P3 = 1U;
    int err = 0;
    err |= si5351_write_reg(base + 0, (P3 >> 8) & 0xFF);
    err |= si5351_write_reg(base + 1, (P3 >> 0) & 0xFF);
    err |= si5351_write_reg(base + 2, (P1 >> 10) & 0xFF);
    err |= si5351_write_reg(base + 3, (P1 >> 2) & 0xFF);
    // base+4: [7]=? reserved, [6]=INT mode, [5:4]=R div, [3:0]=P3[19:16]
    err |= si5351_write_reg(base + 4, 0x80 | ((P3 >> 16) & 0x0F)); // INT=1, R=0
    err |= si5351_write_reg(base + 5, (P2 >> 12) & 0xFF);
    err |= si5351_write_reg(base + 6, (P2 >> 4) & 0xFF);
    err |= si5351_write_reg(base + 7, ((P2 & 0xF) << 4) | ((P3 >> 20) & 0x0F));
    return err ? -1 : 0;
}

// Generic top-level: target fout on CLK0/1/2 with MS integer N=36 and ppm correction
static inline int si5351_configure_target36_with_ppm(uint32_t fout_hz, int32_t ppm)
{
    // Compute target VCO and apply ppm correction: vco = fout * 36 * (1 + ppm/1e6)
    uint64_t vco = (uint64_t)fout_hz * 36ULL;
    int64_t adj = (int64_t)vco * (int64_t)ppm / 1000000LL; // can be negative if ppm<0
    uint64_t vco_adj = (uint64_t)((int64_t)vco + adj);

    int err = 0;
    err |= si5351_disable_all_outputs();
    err |= si5351_power_down_all_clks();
    err |= si5351_set_plla_ref_source();
    err |= si5351_write_board_option_b7();
    err |= si5351_pll_compute_and_write(vco_adj, (uint32_t)SI5351_REF_CLK_HZ);
    err |= si5351_program_ms_divN(0x2A, 36); // MS0
    err |= si5351_program_ms_divN(0x32, 36); // MS1
    err |= si5351_program_ms_divN(0x3A, 36); // MS2
    err |= si5351_power_up_clk012_default_drive();
    err |= si5351_enable_outputs_012();
    return err ? -1 : 0;
}

// Public wrappers: per-family ppm
static inline int si5351_configure_24_576mhz_with_ppm(int32_t ppm)
{
    return si5351_configure_target36_with_ppm(24576000U, ppm);
}

static inline int si5351_configure_22_5792mhz_with_ppm(int32_t ppm)
{
    return si5351_configure_target36_with_ppm(22579200U, ppm);
}