# CHANGELOG

## Unreleased

- **左右 DAC 音量平衡菜单**：新增 `Balance` 菜单项（位于 HPF 与 MCLK 之间）。单击进入调节模式：左旋给左 DAC（0x31）加音量、右旋给右 DAC（0x30）加音量（每格 0.5dB，范围 ±10dB，只增偏置侧、另一侧保持基准音量），再次单击退出回菜单列表。调节界面全屏显示当前值与 L/R 标尺。平衡值随设置一并保存到 Flash（新增 `balance` 字段，占用原结构体填充字节，旧存量设置无需重置即可平滑升级）；主界面非居中时音量下方小字显示 `BAL L2.5`。
- **引脚重定义（配合新板布线）**：
  - **RST 合并**：左右 DAC 的复位不再分用 PD2/PC11，统一合并到 **PD8**（两片 RST 硬件并联驱动）。
  - **INT 移脚**：CS43131 共享中断脚 PB3 → **PD9**，EXTI3 改为 EXTI9（`EXTI9_5_IRQHandler`）。
  - **FB0/FB1 与静音引脚删除**：FPGA 侧 `buffer_empty`(PIN_31)/`buffer_full`(PIN_19)/`zc_gpio`(PIN_20) 输出端口删除；FIFO 水位/溢出事件/静音状态全部经 SPI 上报。CPLD 固件协议升至 **v5**：新增 `GET_SILENCE (0xE0)` 命令（响应 bit7=Ready bit6=静音，实时电平），MCU 侧 `Audio_IsSilent()` 改为 SPI 轮询，PA8 静音 EXTI 及 `Audio_SetFifoPaused`（无消费者的遗留标志）一并移除。
  - **MCU 时钟**：HSE 改为 **8MHz 有源时钟**输入（软件本就按 HSE=8MHz × 18 = 144MHz 配置，无需改倍频；`SetSysClockTo144_HSE` 启动时置 `RCC_HSEBYP` 旁路片内晶振放大器）。
- **CPLD 初始化失败自动进入 DAP 模式**：启动时若 CPLD 握手检查失败（如首次上电 CPLD 尚未烧写固件），不再挂死，而是自动将 USB 切换为 CMSIS-DAP 模式，供外部调试器通过 SWD（PB1/PC5/PA3）烧写 CPLD。烧写完成后断电/复位即可恢复正常音频模式。

## v1.0.0 — 初始发布

### 新增功能

#### 1. MCU 模拟 DAPLINK 调试烧录 CPLD
- 基于 CMSIS-DAP 协议实现 DAP 模式，通过 USBHS 双模式切换（Audio ↔ DAP）
- 支持 DAP HID 传输协议，兼容主流 IDE 和调试工具
- 通过 bit-banged SPI（PA4–PA7）与 AGRV2KQ32 CPLD 通信，支持 GET_STATUS / SET_FORMAT / GET_FORMAT 协议
- 可选 Si5351 PLL 频率切换，为 CPLD 提供独立时钟源

#### 2. CS43131 DAC 驱动
- 完整的 I2C 驱动，支持 24 位寄存器寻址（3 字节 MAP 地址）
- 支持双 DAC 配置（I2C 地址 0x30 / 0x31），实现立体声输出
- ASP（Audio Serial Port）I2S 从模式配置，支持 16/24/32 位、多种采样率运行时切换
- 双电源模式：外部 VCPFILT 电容泵与内部电荷泵（Adapt-to-Signal）
- Mono 模式支持（4.4mm 平衡输出）及通道校准
- 插拔检测与动态电源管理（HandlePlug / HandleUnplug）
- 状态诊断输出，含 ASP 错误智能解读

#### 3. OLED 与旋转编码器用户界面
- 集成 U8g2 单色图形库，支持多种 OLED 屏驱动
- **主界面**：显示音量值、当前采样率、耳机插孔模式（4.4mm / 3.5mm）
- **设置菜单**：通过编码器长按进入，支持以下选项调整：
  - 滤波模式（Fast / Slow）
  - Latency / Phase
  - HPF 开关
  - WBF 开关
  - NOS 模式
  - Class H / Class AB 功放模式
  - HP FS 增益
  - DAP 模式切换
- 旋转编码器（TIM3 编码器模式）实现音量调节（0x00–0xFE，0.5dB 步进）
- 按键状态机支持单击 / 双击 / 长按检测（TIM7 10ms 扫描）
- 空闲自动降低亮度（约 5 秒无操作）
- 音量掉电保存：Flash 末页存储，支持 Magic Number（0x564F4C55）与 CRC 校验

### 其他修改

- **自适应 USB 音频反馈控制**：硬件定时器测量 FIFO 水位，SOF 中断中动态调整反馈值，实现稳定时钟同步
- **USB 音频栈**：支持 UAC2.0，采样率 44.1k–384k 全覆盖，16/24/32 位深度交替设置
- **UAC2 音量控制**：可选跟随主机 USB 混音器音量（通过 `ENABLE_USB_VOLUME_FOLLOW` 编译开关控制）
- **配置开关**：`app_config.h` 提供 `ENABLE_USB_VOLUME_FOLLOW` 和 `BOARD_HAS_SI5351` 编译选项
