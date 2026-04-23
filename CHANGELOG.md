# CHANGELOG

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
