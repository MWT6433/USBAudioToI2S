# 130-dB, 32-Bit High-Performance DAC with Integrated Headphone Driver and Impedance Detection

# System Features

• Enhanced  oversampling DAC architecture 

— 32-bit resolution 

— Up to 384-kHz sampling rate 

— Low clock jitter sensitivity 

— Auto mute detection 

• Integrated high performance, ground-centered stereo headphone outputs 

— 130-dB dynamic range (A-weighted) 

— –115-dB total harmonic distortion $^ +$ noise $( \mathsf { T H D } + \mathsf { N } _ { \varepsilon }$ 

— 110-dB interchannel isolation 

— Up to $2 \mathrm { - } \mathsf { V } _ { \mathsf { r m s } }$ stereo output 

— Headphone power output 

– 30 mW per channel into ${ } ^ { 3 2 } \Omega$ 

– 5 mW per channel into $6 0 0 \Omega$ 

• Headphone detection 

— Headphone DC and AC impedance measurement 

— Headphone plug-in detection 

— Popguard® technology eliminates pop noise 

• Integrated PLL 

— Support for 11.2896-/22.5792-, 12.288-/24.576-, 9.6-/ 19.2-, 12-/24-, and 13-/26-MHz system MCLK rates 

— Reference clock sourced from XTI/MCLK pin 

— System clock output 

• Mono Mode (differential) support 

• I2C control—up to 1 MHz 

• Wideband Flatness Mode Support 

• Direct Stream Digital (DSD®) path 

— Up to 256•Fs DSD 

— Patented DSD processor 

– On-chip 50-kHz filter to meet Scarlet Book Super Audio Compact Disk (SACD) recommendations 

– Matched PCM and DSD analog output levels 

– Nondecimating volume control with 0.5-dB step size and soft ramp 

– DSD and Pulse-code modulation (PCM) mixing for alerts 

— Dedicated DSD and DoP pin interface 

• Serial audio input path 

— Programmable Hi-Fi digital filter 

— Five selectable digital filter responses 

– Low-latency Mode minimizes pre-echo 

– 110 dB of stopband attenuation 

— Supports sample rates from 32 to 384 kHz 

— I2S, right-justified, left-justified, TDM, and DSD-over-PCM (DoP) interface 

— Master or slave operation 

— Volume control with 0.5-dB step size and soft ramp 

— 44.1 kHz deemphasis and inverting feature 

• Alternate headphone input 

• 40-pin 5mm $\times$ 5mm QFN or 42-ball CSP package options 

# Applications

• Smart phones, tablets, portable media players, laptops, digital headphones, powered speakers, AVR, home theater systems, Blu-ray/DVD/SACD players, and pro audio 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/597c4c05850b2ce738d39aa1abffd793fff5a209b485a6af8a5ee181d6433fed.jpg)


# General Description

The CS43131 is a high-performance, 32-bit resolution, stereo audio DAC that supports up to 384-kHz sampling frequency with integrated low-noise ground-centered headphone amplifiers. The advanced 32-bit oversampled multibit modulator with mismatch shaping technology eliminates distortion due to on-chip component mismatch. Proprietary digital-interpolation filters support five selectable filter responses with pseudo-linear phase and ultralow latency to minimize pre-echos and ringing artifacts. An on-chip programmable filter is available for further response customization. Other features include volume control with 0.5-dB steps, wideband flatness mode support, and digital deemphasis for 44.1-kHz sample rate. 

The integrated ground-centered stereo headphone amplifiers are capable of delivering more than $3 0 ~ \mathsf { m W }$ into 32- load or 5 mW into 600- load per channel at full performance. It is also capable of generating $2 \vee _ { \mathrm { r m s } }$ on a 600- load. Proprietary headphone impedance detection enables wide-band impedance detection for further digital post-processing. An internal stereo audio switch with true bypass supports an alternate analog input path for interfacing with external audio sources to minimize the overall bill-of-materials cost and PCB area. 

The patented on-chip DSD processor preserves audio integrity by allowing signal processing such as volume control and 50-kHz Scarlet Book recommended filtering to be applied directly to the DSD stream without an intermediate decimation stage. Additional features like volume matching and channel mixing enable seamless transition between DSD and PCM playback paths. 

The CS43131 accepts I2S, right-justified, left-justified, and TDM-format PCM data at sample rates from 32 to $3 8 4 ~ { \mathsf { k H z } }$ . The industry-standard high-speed I2C interface capable of up to 1-MHz operation provides easy configuration control. An integrated PLL allows for maximum clocking flexibility in any system. Popguard® technology eliminates output transients upon power-up or power-down events. 

The CS43131 is available in a commercial-grade 42-ball WLCSP or 40-pin QFN package for operation from $\angle 0 ^ { \circ } \mathsf { C }$ to $+ 7 0 \textdegree$ . 

# Table of Contents

1 Pin Assignments and Descriptions 

1.1 40-Pin QFN (Top-Down, Through-Package View) . . . . . . . . . 4 

1.2 42-Ball WLCSP (Top-down, Through-Package View) . . . . . . 5 

1.3 Pin Descriptions . 6 

1.4 Electrostatic Discharge (ESD) Protection Circuitry . . . . . . . . 8 

2 Typical Connection Diagram . 10 

3 Characteristics and Specifications . 12 

Table 3-1. Parameter Definitions . 12 

Table 3-2. Recommended Operating Conditions . . . 1 2 

Table 3-3. Absolute Maximum Ratings 1 3 

Table 3-4. Analog Output Characteristics (HV_EN = 1) . . . . . 13 

Table 3-5. Analog Output Characteristics $( \mathsf { H V \_ E N } = 0 )$ . . . . . 15 

Table 3-6. Wideband Flatness Mode Analog Output Characteristics 17 

Table 3-7. Headphone Load Measurement 1 8 

Table 3-8. Alternate Headphone Path 19 

Table 3-9. Combined DAC Digital, On-Chip Analog and HPOUTx F ter Characteristics . 19 

Table 3-10. Combined DAC Digital, On-Chip Analog and HPOUTx Filter Characteristics (Wideband Flatness Mode) . 21 

Table 3-11. DAC High-Pass Filter (HPF) Characteristics . . . . . 21 

Table 3-12. DSD Combined Digital and On-Chip Analog Filter Response 22 

Table 3-13. Digital Interface Specifications and Characteristics 22 

Table 3-14. CLKOUT Characteristics 22 

Table 3-15. PLL Characteristics . 22 

Table 3-16. Crystal Characteristics 23 

Table 3-17. Power-Supply Rejection Ratio (PSRR) Characteristics 23 

Table 3-18. DC Characteristics . 24 

Table 3-19. Power Consumption . 24 

Table 3-20. Serial-Port Interface Characteristics . 24 

Table 3-21. DSD Switching Characteristics . 25 

Table 3-22. I2C Slave Port Characteristics . 26 

4 Functional Description . . 28 

4.1 Overview . 28 

4.2 Analog Outputs . . 31 

4.3 Class H Amplifier Output 32 

4.4 Alternate Headphone Inputs . . 37 

4.5 Headphone Presence Detect and Output Load Detection . . 38 

4.6 Clocking Architecture . 41 

4.7 Clock Output and Fractional-N PLL . 44 

4.8 Filtering Options . . 46 

4.9 Audio Serial Port (ASP) . 47 

4.10 DSD Interface . . 55 

4.11 DSD and PCM Mixing . 57 

4.12 Standard Interrupts . 57 

4.13 Control Port Operation . 59 

4.14 Programmable Filter . 6 2 

5 Applications . . . 63 

5.1 PLL Clocking 6 3 

5.2 Power Sequencing 63 

5.3 Crystal Tuning . . 63 

5.4 Alert Mixing Shutdown . 64 

5.5 Enable/Disable Alternate Headphone Path (HPINx) . . . . . . 64 

5.6 Headphone Power Down Sequences . 65 

5.7 Headphone Power-Up Sequence . . 66 

5.8 Power-Down Sequence in External VCPFILT Mode . . . . . . 67 

5.9 Enabling and Disabling NOS Filter . . . 69 

5.10 Sequence for Using PCM Invert Bits 70 

5.11 Sequences for Using the PCM Channel Swap Bit . . . . . . . 72 

5.12 Sequences for Enabling and Disabling Mono Mode for PCM 

Playback . 73 

5.13 Example Sequences 74 

5.14 Headphone Load Measurement . 9 9 

6 Register Quick Reference . . . . 106 

6.1 Global Registers . . . 106 

6.2 PLL Registers . . 106 

6.3 ASP and XSP Registers . . . 107 

6.4 DSD Registers . 108 

6.5 Headphone and PCM Registers . . . 109 

6.6 Interrupt Status and Mask Registers . 112 

7 Register Descriptions . 113 

7.1 Global Registers . . . 113 

7.2 PLL Registers . . 116 

7.3 ASP and XSP Registers . . 118 

7.4 DSD Registers 124 

7.5 Headphone and PCM Registers . 127 

7.6 Interrupt Status and Mask Registers . 134 

8 PCB Layout Considerations . . . . 140 

8.1 Power Supply . 140 

8.2 Grounding . . . 140 

8.3 HPREFA and HPREFB Routing . . . 140 

8.4 QFN Thermal Pad . 140 

9 Performance Plots . . . 141 

9.1 Digital Filter Response . . 141 

Package Dimensions . . . . . 153 

10.1 40-Pin QFN Package Dimensions . 153 

10.2 42-Ball WLCSP Package Dimensions . . 154 

11 Thermal Characteristics . . 155 

12 Ordering Information . . . . 155 

13 References . . 155 

14 Revision History . . . . 155 

# 1 Pin Assignments and Descriptions

# 1.1 40-Pin QFN (Top-Down, Through-Package View)

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/9ba5c96c29f34e7b936fa09b64f386757d75c3eba65720c1f7a2ed641b0d6ca0.jpg)



Figure 1-1. Top-Down (Through-Package) View—QFN 40-Pin Diagram


# 1.2 42-Ball WLCSP (Top-down, Through-Package View)

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/6298b82e010e32595f803faf3831ec4c9f90b1701f746267e21378f8ff2f36ea.jpg)



Figure 1-2. Top-Down (Through-Package) View—42-Ball WLCSP Package


# 1.3 Pin Descriptions


Table 1-1. Pin Descriptions


<table><tr><td>Pin Name</td><td>QFN Pin #</td><td>WLCSP Ball</td><td>Power Supply</td><td>I/O</td><td>Pin Description</td><td>Internal Connection</td><td>Digital I/O Driver</td><td>Digital I/O Receiver</td></tr><tr><td colspan="9">Digital I/O</td></tr><tr><td>ADR</td><td>30</td><td>C2</td><td>VL</td><td>I</td><td>Address Bit (I²C). In I²C Mode, ADR is a chip address pin.</td><td>—</td><td>—</td><td>—</td></tr><tr><td>CLKOUT</td><td>33</td><td>B2</td><td>VL</td><td>O</td><td>CLK Output. Single-ended clock output sourced from PLL or buffered crystal.</td><td>Weak pull-down</td><td>CMOS output</td><td>—</td></tr><tr><td>SCLK1</td><td>34</td><td>A2</td><td>VL</td><td>I/O</td><td>Serial Audio Input Bit Clock 1. Serial bit clock for audio data on the SDIN pins.</td><td>Weak pull-down</td><td>CMOS output</td><td>Hysteresis on CMOS input</td></tr><tr><td>LRCK1</td><td>38</td><td>B3</td><td>VL</td><td>I/O</td><td>Serial Audio Input Left/Right Clock. Word-rate clock for the audio data on the SDIN pins.</td><td>Weak pull-down</td><td>CMOS output</td><td>Hysteresis on CMOS input</td></tr><tr><td>SDIN1</td><td>2</td><td>A6</td><td>VL</td><td>I</td><td>Serial Audio Input Data Port. Audio data serial input pin 1.</td><td>Weak pull-down</td><td>—</td><td>Hysteresis on CMOS input</td></tr><tr><td>DSDA/SDIN2</td><td>40</td><td>A5</td><td>VL</td><td>I</td><td>DSD Data Input A/Serial Data In 2. DSD audio or PCM audio data serial input pin 2.</td><td>Weak pull-down</td><td>—</td><td>Hysteresis on CMOS input</td></tr><tr><td>DSDB/LRCK2</td><td>29</td><td>C1</td><td>VL</td><td>I/O</td><td>DSD Data Input B/Serial Audio Input Left/Right Clock 2. DSD audio data serial input pin or word rate clock for the audio data on the SDIN2 pin.</td><td>Weak pull-down</td><td>CMOS output</td><td>Hysteresis on CMOS input</td></tr><tr><td>DSDCLK/SCLK2</td><td>32</td><td>B1</td><td>VL</td><td>I/O</td><td>DSD Clock Input/Serial Audio Input Bit Clock 2. DSD clock input. Serial bit clock for audio data on the SDIN2 pin.</td><td>Weak pull-down</td><td>CMOS output</td><td>Hysteresis on CMOS input</td></tr><tr><td>INT</td><td>27</td><td>C5</td><td>VP</td><td>O</td><td>Interrupt. When pulled up, works as system interrupt pin. Open drain, active low programmable.</td><td>—</td><td>CMOS open-drain output</td><td>—</td></tr><tr><td>RESET</td><td>28</td><td>C4</td><td>VP</td><td>I</td><td>System Reset. The device enters system reset when enabled.</td><td>—</td><td>—</td><td>Hysteresis on CMOS input</td></tr><tr><td>SDA</td><td>39</td><td>B4</td><td>VL</td><td>I/O</td><td>Serial Control Data I/O (I²C). In I²C Mode, SDA is the control I/O data line.</td><td>—</td><td>CMOS open-drain output</td><td>Hysteresis on CMOS input</td></tr><tr><td>SCL</td><td>1</td><td>B5</td><td>VL</td><td>I</td><td>Software Clock (I²C). Serial control interface clock used to clock control data bits into and out of the CS43131.</td><td>—</td><td>—</td><td>Hysteresis on CMOS input</td></tr><tr><td>XTI/MCLK</td><td>37</td><td>A4</td><td>VL</td><td>I</td><td>Crystal/Oscillator Input/MCLK In. Crystal or digital clock input for the master clock.</td><td>Weak pull-down</td><td>—</td><td>Hysteresis on CMOS input</td></tr><tr><td>XTO</td><td>36</td><td>A3</td><td>VL</td><td>O</td><td>Crystal/Oscillator Output. Crystal output.</td><td>Weak pull-down</td><td>CMOS output</td><td>—</td></tr><tr><td colspan="9">Analog I/O</td></tr><tr><td>FILT+</td><td>5</td><td>D4</td><td>VA</td><td>O</td><td>Positive/Negative Voltage Reference. Positive/negative reference voltage for DAC.</td><td>—</td><td>—</td><td>—</td></tr><tr><td>FILT-</td><td>6</td><td>D5</td><td></td><td></td><td></td><td></td><td></td><td></td></tr><tr><td>HP_DETECT</td><td>22</td><td>F4</td><td>VP</td><td>I</td><td>Headphone Detect. Can be configured to be debounced on unplugged and plugged events before it is presented as a noninterrupt status bit (HPDETECT).</td><td>—</td><td>Hi-Z</td><td>—</td></tr><tr><td>HPINB</td><td>15</td><td>F3</td><td rowspan="2">VCP_FILT±</td><td rowspan="2">I</td><td rowspan="2">Headphone Audio Input. For interfacing low power audio source, an alternate analog input path for the headphone output. Refer to analog specification table for full-scale input level.</td><td rowspan="2">Weak pull-down</td><td rowspan="2">—</td><td rowspan="2">—</td></tr><tr><td>HPINA</td><td>12</td><td>G5</td></tr><tr><td>HPOUTB</td><td>16</td><td>G3</td><td rowspan="2">VCP_FILT±</td><td rowspan="2">O</td><td rowspan="2">Headphone Audio Output. Refer to analog specification table for full-scale output level.</td><td rowspan="2">—</td><td rowspan="2">—</td><td rowspan="2">—</td></tr><tr><td>HPOUTA</td><td>14</td><td>G4</td></tr><tr><td>HPREFB</td><td>17</td><td>E3</td><td rowspan="2">VCP_FILT±</td><td rowspan="2">I</td><td rowspan="2">Headphone Output Reference. Reference for headphone amplifier and detect.</td><td rowspan="2">—</td><td rowspan="2">—</td><td rowspan="2">—</td></tr><tr><td>HPREFA</td><td>13</td><td>E4</td></tr><tr><td colspan="9">Power Supplies</td></tr><tr><td>VL</td><td>31</td><td>A1</td><td>N/A</td><td>I</td><td>Logic Power. Input/Output power supply, typically +1.8 V.</td><td>—</td><td>—</td><td>—</td></tr><tr><td>VD</td><td>4</td><td>C6</td><td>N/A</td><td>I</td><td>Internal Digital Power. Internal digital power supply, typically +1.8 V.</td><td>—</td><td>—</td><td>—</td></tr><tr><td>VA</td><td>7</td><td>D6</td><td>N/A</td><td>I</td><td>Analog Power. Power supply for the internal analog section.</td><td>—</td><td>—</td><td>—</td></tr><tr><td>VCP</td><td>25</td><td>D2</td><td>N/A</td><td>I</td><td>Charge Pump Supply. Provides charge pump voltage to the headphone Class H analog output circuit.</td><td>—</td><td>—</td><td>—</td></tr><tr><td>VP</td><td>26</td><td>D1</td><td>N/A</td><td>I</td><td>Battery supply. Provides voltage to the headphone Class H circuit.</td><td>—</td><td>—</td><td>—</td></tr></table>


Ground


<table><tr><td>GNDD</td><td>35</td><td>C3</td><td>N/A</td><td>I Digital and I/O Ground. Ground for the I/O and core logic. GNDA, GNDCP, and GNDD must be connected to a common ground area under the chip.</td><td>—</td><td>—</td><td>—</td></tr><tr><td>GNDA</td><td>8</td><td>E5</td><td>N/A</td><td>I Analog Ground. Ground reference for the internal analog section. GNDA, GNDCP, and GNDD must be connected to a common ground area under the chip.</td><td>—</td><td>—</td><td>—</td></tr><tr><td>GNDCP</td><td>19</td><td>F2</td><td>N/A</td><td>I Charge Pump Ground. Ground reference for the charge pump section. GNDA, GNDCP, and GNDD must be connected to a common ground area under the chip.</td><td>—</td><td>—</td><td>—</td></tr></table>


Charge Pump


<table><tr><td>VCP_FILT+</td><td>21</td><td>E2</td><td rowspan="2">VCP/VP 1</td><td rowspan="2">I/O</td><td rowspan="2">Inverting Charge Pump Filter Connection. Power supply from the inverting charge pump that provides the positive/negative rail for the analog output. When operating in external VCP_FILT mode, these pins can directly take in supply voltage.</td><td rowspan="2">—</td><td rowspan="2">—</td><td rowspan="2">—</td></tr><tr><td>VCP_FILT-</td><td>18</td><td>G2</td></tr><tr><td>-VA</td><td>9</td><td>E6</td><td>VA</td><td>O</td><td>VA Negative Charge Pump Output. Negative charge pump output for DAC rail. It is derived from VA.</td><td>—</td><td>—</td><td>—</td></tr><tr><td>FLYP_VA</td><td>10</td><td>F6</td><td rowspan="2">VA</td><td rowspan="2">O</td><td rowspan="2">-VA Charge Pump Cap Positive/Negative Node. Positive/negative nodes for the DAC negative charge pump&#x27;s flying capacitor.</td><td rowspan="2">—</td><td rowspan="2">—</td><td rowspan="2">—</td></tr><tr><td>FLYN_VA</td><td>11</td><td>G6</td></tr><tr><td>FLYP_VCP</td><td>24</td><td>E1</td><td>VCP/VP 1</td><td>O</td><td>-VCCHarge Pump Cap Positive Node. Positive node for the analog output negative charge pump&#x27;s flying capacitor.</td><td>—</td><td>—</td><td>—</td></tr><tr><td>FLYC_VCP</td><td>23</td><td>F1</td><td>VCP/VP 1</td><td>O</td><td>-VCCHarge Pump Cap Center Node. Center node for the analog output negative charge pump&#x27;s flying capacitor.</td><td>—</td><td>—</td><td>—</td></tr><tr><td>FLYN_VCP</td><td>20</td><td>G1</td><td>VCP_FILT±</td><td>O</td><td>-VCCHarge Pump Cap Negative Node. Negative node for the analog output negative charge pump&#x27;s flying capacitor.</td><td>—</td><td>—</td><td>—</td></tr></table>


Test


<table><tr><td>TSO</td><td>3</td><td>B6</td><td>N/A</td><td>I/O</td><td>Test Output.</td><td>—</td><td>—</td><td>—</td></tr><tr><td>TSI</td><td>—</td><td>D3, F5</td><td></td><td>Test Input.</td><td>—</td><td>—</td><td>—</td><td>—</td></tr></table>


1.The power supply is determined by ADPT_PWR setting (see Section 4.3.1). VP is used if ADPT_PWR = 001 (VP_LDO Mode) or when necessary for ADPTPWR $=$ 111 (Adapt-to-Signal Mode). 


# 1.4 Electrostatic Discharge (ESD) Protection Circuitry

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/c4745fec646d4e3742c9a5b596c80837a144b5b3662a8b3e9838649ce1687e25.jpg)


ESD-sensitive device. The CS43131 is manufactured on a CMOS process. Therefore, it is generically susceptible to damage from excessive static voltages. Proper ESD precautions must be taken while handling and storing this device. This device is qualified to current JEDEC ESD standards. 

Fig. 1-3 provides a composite view of the ESD domains showing the ESD protection paths between each pad and the substrate (GND), as well as the interrelations between some domains. Note that this figure represents the structure for the internal protection devices and that additional protections can be implemented as part of the integration into the board. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/ddbb2828646c439d18c5726f5a89d1dbe4fc4aba6a1d6927d45d965d8290c5a9.jpg)



Figure 1-3. Composite ESD Topology


Table 1-2 shows the individual ESD domains and lists the pins associated with each domain. 


Table 1-2. ESD Domains


<table><tr><td>ESD Domain</td><td>Signal Name
(See * in Topology Figures for Pad)</td><td>Topology</td></tr><tr><td>VL/GNDD</td><td>ADR
DSDCLK/SCLK2
SCL
SDA
DSDB/LRCK2
DSDA/SDIN2
SDIN1
LRCK1
SCLK1
CLKOUT
XTI/MCLK
XTO</td><td>VL
GNDD
Substrate
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*Vw
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VW
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*Vz
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZO
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VIZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZE
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZH
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZF
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZR
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZA
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZN
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZen
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*V Z
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*V.Z
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*V,Z
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*V2
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZ
*VZY
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*Vzx
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*V ZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZW
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZZ
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VXZ
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
* VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
*VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
* VZX
* VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
* VZX
*VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
*VZX
* VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
*VZX
*VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
* VZX
* VZX
* VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
* VZX
* VZX
*VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
* VZX
*VZX
* VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
* VZX
*VZX
*VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
*VZX
* VZX
* VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
*VZX
* VZX
*VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
*VZX
*VZX
* VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
*VZX
*VZX
*VZX
*VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
* VZX
*VZX
* VZX
* VZX
* VZX
* VZX
*VZX</td></tr><tr><td>VA/-VA</td><td>FLYN_VA
FLYP_VA
FILT+
FILT-</td><td>Substrate
VAT
GNDA
GNDA
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+Vat
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAP
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VIP
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VIT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+Vitat
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VCAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+V AT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+Viat
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+Vati
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+VAT
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vit
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vv
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vtt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vc
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vr
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vrt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vl
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vf
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vp
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vlt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vxt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vx
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vt
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+VW
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vwt
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vw
+Vwu
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwU
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUl
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VwUd
+VWUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
-
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
+
WUd
± Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/Vt/√</td></tr></table>

# 2 Typical Connection Diagram

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/642b10dbc901792c61d56cb89c10fb50a3dd3f9b10f8c4eef559a786977634c5.jpg)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/8a7e13026f08a5d80919156cc9225f931e0cd65a3b74f1b3e6507eef77bb4d56.jpg)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/494e54bf96c57416d93a85f2f9e735efd58aa5c89568d3d316267631b8aa5308.jpg)



Figure 2-1. Typical Connection Diagram


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/5df77ecd391bf447aa1a7938db00a9519fcbe0866164830848be7c3f0bad7b43.jpg)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/7ff9e0b1141b1b4b3e35c25c5e1d2ed8b05b316f2486e76b2dceb432e6faa61a.jpg)



Figure 2-2. Typical Connection Diagram (Mono Mode)


# Note:

1. The value for $\mathsf { R } _ { \mathsf { P } \_ \mathsf { I } }$ can be determined by the interrupt pin specification in Table 3-13. 

# 3 Characteristics and Specifications

Table 3-1 defines parameters as they are characterized in this section. 


Table 3-1. Parameter Definitions


<table><tr><td>Parameter</td><td>Definition</td></tr><tr><td>Dynamic range</td><td>The ratio of the rms value of the signal to the rms sum of all other spectral components over the specified bandwidth. A signal-to-noise ratio measurement over the specified bandwidth made with a -60-dB signal; 60 dB is added to resulting measurement to refer the measurement to full scale. This technique ensures that distortion components are below the noise level and do not affect the measurement. This measurement technique has been accepted by the Audio Engineering Society, AES17-1991, and the Electronic Industries Association of Japan, EIAJ CP-307. Dynamic range is expressed in decibel units.</td></tr><tr><td>Gain drift</td><td>The change in gain value with temperature, expressed in ppm/°C units.</td></tr><tr><td>Idle channel noise</td><td>The rms value of the signal with no input applied (properly back-terminated analog input, digital zero, or zero modulation input). Measured over the specified bandwidth.</td></tr><tr><td>Interchannel gain mismatch</td><td>The gain difference between left and right channel pairs. Interchannel gain mismatch is expressed in decibel units.</td></tr><tr><td>Interchannel phase mismatch</td><td>The phase difference between left and right channel pairs at 997-Hz sine wave input. Interchannel phase mismatch is expressed in degree units (with respect to 997-Hz sine wave input).</td></tr><tr><td>Interchannel isolation</td><td>A measure of cross talk between the left and right channel pairs. Interchannel isolation is measured for each channel at the converter&#x27;s output with no signal to the input under test and a full-scale signal applied to the other channel. Interchannel isolation is expressed in decibel units.</td></tr><tr><td>Load resistance and capacitance</td><td>The recommended minimum resistance and maximum capacitance required for the internal op-amp&#x27;s stability and signal integrity. The load capacitance effectively moves the band-limiting pole of the amp in the output stage. Increasing load capacitance beyond the recommended value can cause the internal op-amp to become unstable.</td></tr><tr><td>Output offset voltage</td><td>The DC offset voltage present at the amplifier&#x27;s output when its input signal is in a mute state. The offset exists due to CMOS process limitations and is proportional to analog volume settings. When measuring the offset out of the headphone amplifier, the headphone amplifier is ON.</td></tr><tr><td>Total harmonic distortion + noise (THD+N)</td><td>The ratio of the rms sum of distortion and noise spectral components across the specified bandwidth (typically 20 Hz-20 kHz) relative to the rms value of the signal. THD+N is measured at -1 and -20 dBFS for the analog input and at 0 and -20 dB for the analog output, as suggested in AES17-1991 Annex A. THD+N is expressed in decibel units.</td></tr><tr><td>Turn-on time</td><td>Turn-on time is measured from when the PDN_HP = 0 ACK signal is received to when the signal appears on the HP output.</td></tr></table>


Table 3-2. Recommended Operating Conditions


Test conditions (unless otherwise specified): GNDD $=$ GNDA= GNDCP = 0 V, all voltages with respect to ground. 

<table><tr><td colspan="2">Parameters1</td><td>Symbol</td><td>Minimum</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="9">DC power supply</td><td>Analog</td><td>VA</td><td>1.66</td><td>1.94</td><td>V</td></tr><tr><td>Charge pump</td><td>VCP</td><td>1.66</td><td>1.94</td><td>V</td></tr><tr><td rowspan="2">Filtered charge pump2EXT_VCPFLT = 1</td><td>VCP_FILT+</td><td>2.85</td><td>3.15</td><td>V</td></tr><tr><td>VCP_FILT-</td><td>-3.15</td><td>-2.85</td><td>V</td></tr><tr><td>Battery supply HV_EN = 0, EXT_VCPFILT = 0</td><td>VP</td><td>3.0</td><td>5.25</td><td>V</td></tr><tr><td>HV_EN = 1, EXT_VCPFILT = 0</td><td></td><td>3.3</td><td>5.25</td><td>V</td></tr><tr><td>EXT_VCPFILT = 1</td><td></td><td>3.3</td><td>5.25</td><td>V</td></tr><tr><td>Digital Interface</td><td>VL</td><td>1.66</td><td>1.94</td><td>V</td></tr><tr><td>Digital Internal</td><td>VD</td><td>1.66</td><td>1.94</td><td>V</td></tr><tr><td>External voltage applied to pin3,4</td><td>HP_DETECT pin VCP_FILT± domain pins5 VL domain pins VA domain pins VP domain pins</td><td>VINHI VVCPF VVL VVA VVP</td><td>-0.3 - VCP_FILT- -0.3 - VCP_FILT- -0.3 -0.3 -0.3</td><td>VP + 0.3 0.3 + VCP_FILT+ VL + 0.3 VA + 0.3 VP + 0.3</td><td>V V V V V V</td></tr><tr><td colspan="2">Ambient temperature</td><td>TA</td><td>-20</td><td>+70</td><td>°C</td></tr></table>


1.Device functional operation is guaranteed within these limits. Functionality is not guaranteed or implied outside of these limits. Operation outside of these limits may adversely affect device reliability. 



$2 . 1 \mathsf { f } + 1 \mathsf { d } \mathsf { B } \_ { \mathsf { E } } \mathsf { N } = 1$ , the minimum VCP_FILT+ voltage becomes $3 . 0 \lor$ , and the maximum VCP_FILT– voltage becomes $- 3 . 0 \lor$ 



3.The maximum over/undervoltage is limited by the input current. 



4.Table 1-1 lists the power supply domain in which each CS43131 pin resides. 



5.VCP_FILT± is specified in Table 3-18. 



Table 3-3. Absolute Maximum Ratings


Test conditions (unless otherwise specified): GNDD $=$ GNDA= GNDCP = 0 V; all voltages with respect to ground. 

<table><tr><td>Parameters</td><td>Symbol</td><td>Minimum</td><td>Maximum</td><td>Units</td></tr><tr><td>DC power supply
Analog</td><td>VA</td><td>-0.3</td><td>2.33</td><td>V</td></tr><tr><td>Battery</td><td>VP</td><td>-0.3</td><td>6.3</td><td>V</td></tr><tr><td>Charge pump</td><td>VCP</td><td>-0.3</td><td>2.33</td><td>V</td></tr><tr><td>Filtered charge pump (positive)</td><td>VCP_FILT+</td><td>-0.3</td><td>3.3</td><td>V</td></tr><tr><td>Filtered charge pump (negative)</td><td>VCP_FILT-</td><td>-3.3</td><td>0.3</td><td>V</td></tr><tr><td>Digital interface</td><td>VL</td><td>-0.3</td><td>2.33</td><td>V</td></tr><tr><td>Digital internal</td><td>VD</td><td>-0.3</td><td>2.33</td><td>V</td></tr><tr><td>Input current 1</td><td>Iin</td><td>—</td><td>±10</td><td>mA</td></tr><tr><td>Ambient operating temperature (power applied)</td><td>TA</td><td>-50</td><td>+115</td><td>°C</td></tr><tr><td>Storage temperature</td><td>Tstg</td><td>-65</td><td>+150</td><td>°C</td></tr></table>


Caution: Stresses beyond “Absolute Maximum Ratings” levels may cause permanent damage to the device. These levels are stress ratings only, and functional operation of the device at these or any other conditions beyond those indicated in Table 3-2, “Recommended Operating Conditions” is not implied. Exposure to absolute maximum rating conditions for extended periods may affect device reliability. 



1.Any pin except supplies and HPINx. Transient currents of up to $\pm 1 0 0 ~ \mathsf { m A }$ on the analog input pins do not cause SCR latch-up. 


# Table 3-4. Analog Output Characteristics $( \mathsf { H V \_ E N } = 1 )$ 1

Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; input test signal is a 32-bit, full-scale 997-Hz sine wave (unless specified otherwise); $\mathtt { G N D A } = \mathtt { G N D C P } = \mathtt { G N D D } = 0 \ V$ ; voltages are with respect to ground; $\mathsf { H V \_ E N } = 1$ ; ASP_M/Sb = 1; typical, min/max performance data taken with ${ \mathsf { V } } { \mathsf { A } } = { \mathsf { V C P } } = 1 . 8 { \mathsf { V } } ;$ ; $\mathsf { V L } = \mathsf { V D } = 1 . 8 \mathsf { V }$ ; $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ ; ${ \mathsf { T } } { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ measurement bandwidth is 20 Hz–20 kHz; ASP_SPRATE $= 0 0 0 1$ (LRCK $= 4 4 . 1$ -kHz mode); PDN_XTAL $= 0$ , MCLK_INT = 1, PLUS_1DB $= 0$ , and MCLK_SRC_SEL $= 0 0$ (crystal frequency $\mathsf { f } _ { \mathsf { X T A L } } = 2 2 . 5 7 9 2 \mathsf { M H z } )$ ; Volume $= 0$ dB; when testing in DSD processor mode, DSD_ZERODB $= 1$ ; when testing noise related specifications (dynamic range, $T H \mathsf { D } { + } \mathsf { N }$ , idle channel noise), no external impedance on HPREFx. 

<table><tr><td colspan="3">PCM and DSD Processor Mode Parameter 2,3,4</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td>HPOUTx</td><td>Dynamic range</td><td>24-bit, 32-bit, DSD</td><td>A-weighted</td><td>124</td><td>130</td><td>—</td></tr><tr><td>RL=10 kΩ</td><td>(defined in Table 3-1)</td><td></td><td>Unweighted</td><td>121</td><td>127</td><td>—</td></tr><tr><td>CL=200 pF</td><td></td><td>16-bit</td><td>A-weighted</td><td>91</td><td>97</td><td>—</td></tr><tr><td>OUT_FS=11</td><td></td><td></td><td>Unweighted</td><td>88</td><td>94</td><td>—</td></tr><tr><td>Volume=0 dB</td><td></td><td></td><td></td><td></td><td></td><td></td></tr><tr><td>+1dB_EN=0,5</td><td>THD+N</td><td>24-bit, 32-bit</td><td>0 dB</td><td>—</td><td>-115</td><td>-109</td></tr><tr><td>unless otherwise specified</td><td>(defined in Table 3-1)</td><td></td><td>-20 dB</td><td>—</td><td>-97</td><td>—</td></tr><tr><td></td><td></td><td></td><td>-60 dB</td><td>—</td><td>-67</td><td>-61</td></tr><tr><td></td><td></td><td>16-bit</td><td>0 dB</td><td>—</td><td>-94</td><td>-88</td></tr><tr><td></td><td></td><td></td><td>-20 dB</td><td>—</td><td>-74</td><td>—</td></tr><tr><td></td><td></td><td></td><td>-60 dB</td><td>—</td><td>-34</td><td>-28</td></tr><tr><td></td><td></td><td>DSD</td><td>0 dB</td><td>—</td><td>-108</td><td>-101</td></tr><tr><td></td><td></td><td></td><td>-20 dB</td><td>—</td><td>-97</td><td>—</td></tr><tr><td></td><td></td><td></td><td>-60 dB</td><td>—</td><td>-67</td><td>-61</td></tr><tr><td></td><td>Idle channel noise</td><td>24-bit, 32-bit, DSD</td><td></td><td>—</td><td>0.55</td><td>—</td></tr><tr><td></td><td>(A-weighted)</td><td></td><td></td><td></td><td></td><td></td></tr><tr><td></td><td>(defined in Table 3-1)</td><td></td><td></td><td></td><td></td><td></td></tr><tr><td></td><td colspan="2">Full-scale output voltage</td><td></td><td>4.66</td><td>4.90</td><td>5.14</td></tr><tr><td></td><td colspan="2">Interchannel isolation 6(defined in Table 3-1)</td><td>217 Hz</td><td>—</td><td>120</td><td>—</td></tr><tr><td></td><td colspan="2"></td><td>1 kHz</td><td>—</td><td>120</td><td>—</td></tr><tr><td></td><td colspan="2"></td><td>20 kHz</td><td>—</td><td>100</td><td>—</td></tr><tr><td>HPOUTx</td><td>THD+N</td><td>24-bit, 32-bit, DSD</td><td>0 dB</td><td>—</td><td>-105</td><td>—</td></tr><tr><td>RL=10 kΩ</td><td>(defined in Table 3-1)</td><td></td><td></td><td></td><td></td><td></td></tr><tr><td>CL=200 pF</td><td></td><td></td><td></td><td></td><td></td><td></td></tr><tr><td>OUT_FS=11</td><td></td><td></td><td></td><td></td><td></td><td></td></tr><tr><td>Volume=0 dB</td><td></td><td></td><td></td><td></td><td></td><td></td></tr><tr><td>+1dB_EN=1,</td><td></td><td></td><td></td><td></td><td></td><td></td></tr><tr><td>unless otherwise specified</td><td></td><td></td><td></td><td></td><td></td><td></td></tr></table>


Table 3-4. Analog Output Characteristics (HV_EN = 1) 1 (Cont.)


Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; input test signal is a 32-bit, full-scale 997-Hz sine wave (unless specified otherwise); $\mathtt { G N D A } = \mathtt { G N D C P } = \mathtt { G N D D } = 0 \ V$ ; voltages are with respect to ground; $\mathsf { H V \_ E N } = 1$ ; ASP_M/Sb = 1; typical, min/max performance data taken with ${ \mathsf { V } } { \mathsf { A } } = { \mathsf { V C P } } = 1 . 8 { \mathsf { V } } ;$ $\mathsf { V L } = \mathsf { V D } = 1 . 8 \mathsf { V }$ ; $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ ; ${ \mathsf { T } } { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ measurement bandwidth is $2 0 \mathsf { H z } \ – 2 0 \mathsf { k H z }$ ; ASP_SPRATE $= 0 0 0 1$ (LRCK $= 4 4 . 1$ -kHz mode); PDN_XTAL $= 0$ , MCLK_INT $= 1$ , PLUS_1DB = 0, and MCLK_SRC_SEL $= 0 0$ (crystal frequency $\mathsf { f } _ { \mathsf { X T A L } } = 2 2 . 5 7 9 2 \mathsf { M H z } )$ ; Volume $= 0$ dB; when testing in DSD processor mode, DSD_ZERODB $= 1$ ; when testing noise related specifications (dynamic range, $T H \mathsf { D } { + } \mathsf { N }$ , idle channel noise), no external impedance on HPREFx. 

<table><tr><td colspan="3">PCM and DSD Processor Mode Parameter 2,3,4</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="5">HPOUTxRL=600ΩCL=200 pFOUT_FS=11Volume=0 dB+1dB_EN=0,unless otherwisespecified</td><td>Dynamic range24-bit, 32-bit, DSDA-weighted(defined in Table 3-1)16-bit17d+N24-bit, 32-bit0 dB-20 dB-60 dB0 dB-20 dB-60 dB0 dB-20 dB-60 dB</td><td>1241219188——</td><td>1301279794——</td><td>——</td><td>dBdBdBdB——</td><td>dBdBdBdBdBdB</td></tr><tr><td>Idle channel noise24-bit, 32-bit, DSD(A-weighted)(defined in Table 3-1)</td><td></td><td>—</td><td>0.55</td><td>—</td><td>μV</td></tr><tr><td>Full-scale output voltage</td><td>4.66</td><td>4.90</td><td>5.14</td><td>Vpp</td><td></td></tr><tr><td>Output power</td><td>—</td><td>5</td><td>—</td><td>mW</td><td></td></tr><tr><td>Interchannel isolation (defined in Table 3-1)217 Hz1 kHz20 kHz</td><td>—</td><td>120120100</td><td>—</td><td>dBdBdB</td><td></td></tr><tr><td rowspan="3">HPOUTXR_L=600ΩCL=200 pFOUT_FS=11Volume=0 dB+1dB_EN=1,unless otherwisespecified</td><td>THD+N24-bit, 32-bit, DSD0 dB</td><td>—</td><td>-105</td><td>—</td><td>dB</td><td></td></tr><tr><td>Full-scale output voltage</td><td>5.42</td><td>5.70</td><td>5.99</td><td>Vpp</td><td></td></tr><tr><td>Output power</td><td>—</td><td>6.8</td><td>—</td><td>mW</td><td></td></tr><tr><td rowspan="8">Other characteristicsfor HPOUTx</td><td>Interchannel gain mismatch (defined in Table 3-1)</td><td>—</td><td>±0.1</td><td>—</td><td>dB</td><td></td></tr><tr><td>Interchannel phase mismatch (defined in Table 3-1)</td><td>—</td><td>—</td><td>±0.01</td><td>°</td><td></td></tr><tr><td>Output offset voltage: Mute (defined in Table 3-1)</td><td>—</td><td>±50</td><td>±100</td><td>μV</td><td></td></tr><tr><td>Gain drift (defined in Table 3-1)</td><td>—</td><td>±100</td><td>—</td><td>ppm/°C</td><td></td></tr><tr><td>Load resistance (RL)</td><td>600</td><td>—</td><td>—</td><td>Ω</td><td></td></tr><tr><td>Load capacitance (CL)</td><td>—</td><td>—</td><td>1</td><td>nF</td><td></td></tr><tr><td>Turn-on time (defined in Table 3-1)</td><td>—</td><td>—</td><td>12</td><td>ms</td><td></td></tr><tr><td>Click/pop during PDN_HP enable or disableA-weighted</td><td>—</td><td>±50</td><td>±100</td><td>μV</td><td></td></tr></table>


1.This table also applies to external VCP_FILT supply mode: CS43131 power up procedure is per description in Section 5.13.1; EXT_VCPFILT = 1; VCP_FILT+ and VCP_FILT– comply to Table 3-2 when EXT_VCPFILT $= 1$ ; in this mode, HV_EN must be set to 1. 



2.One LSB of triangular PDF dither is added to PCM data. 



3.Referred to the typical full-scale voltage. Applies to all THD $+ N$ and dynamic range values in the table. 



4.DSD performance may be limited by the source recording. 0 dB-SACD $= 5 0 \%$ modulation index. 



5.The volume must be configured as indicated to achieve specified output characteristics. 


6.Output test configuration. Symbolized component values are specified in the test conditions. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/4102da9de700d0dbc2f42fff5d2052025221502f392208e92d4ce36d69494bce.jpg)


# Table 3-5. Analog Output Characteristics $( \mathsf { H } \mathsf { V } _ { - } \mathsf { E } \mathsf { N } = \mathsf { 0 } )$ ) 1

Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; input test signal is a 32-bit, full-scale 997-Hz sine wave (unless specified otherwise); $\mathsf { G N D A } = \mathsf { G N D C P } = \mathsf { G N D D } = 0 \mathsf { \Omega } ^ { \mathsf { \prime } }$ V; voltages are with respect to ground; $\mathsf { H V \_ E N } = 0$ ; ASP_M/Sb = 1; typical, min/max performance data taken with $\mathsf { V } \mathsf { A } = \mathsf { V C P } = 1 . 8 \mathsf { V }$ ; $\mathsf { V L } = \mathsf { V D } = 1 . 8 \mathsf { V }$ ; $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ ; ${ \mathsf { T } } _ { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ measurement bandwidth is $2 0 \mathsf { H z } \ – 2 0 \mathsf { k H z }$ ; ASP_SPRATE $= 0 0 0 1$ (LRCK $= 4 4 . 1$ -kHz mode); PDN_XTAL $= 0$ , MCLK_INT = 1, and MCLK_SRC_SEL $= 0 0$ (crystal frequency $\mathsf { f } _ { \mathsf { X T A L } } = 2 2 . 5 7 9 2 \mathsf { M H z }$ ); Volume $= 0$ dB; when testing in DSD processor mode, DSD_ZERODB $= 1$ ; when testing noise related specifications (dynamic range, $T H \mathsf { D } { + } \mathsf { N }$ , idle channel noise), no external impedance on HPREFx. 

<table><tr><td colspan="4">PCM and DSD Processor Mode Parameter 2,3,4</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="19">HPOUTx; 
RL=10 kΩ 
CL=200 pF 
OUT_FS=10 
Volume=0 dB,5 unless otherwise specified</td><td>Dynamic range</td><td>24-bit, 32-bit, DSD</td><td>A-weighted</td><td>122</td><td>128</td><td>—</td><td>dB</td></tr><tr><td>(defined in Table 3-1)</td><td></td><td>Unweighted</td><td>119</td><td>125</td><td>—</td><td>dB</td></tr><tr><td></td><td>16-bit</td><td>A-weighted</td><td>91</td><td>97</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>Unweighted</td><td>88</td><td>94</td><td>—</td><td>dB</td></tr><tr><td>THD+N</td><td>24-bit, 32-bit</td><td>0 dB</td><td>—</td><td>-113</td><td>-107</td><td>dB</td></tr><tr><td>(defined in Table 3-1)</td><td></td><td>-20 dB</td><td>—</td><td>-95</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>-60 dB</td><td>—</td><td>-65</td><td>-59</td><td>dB</td></tr><tr><td></td><td>16-bit</td><td>0 dB</td><td>—</td><td>-94</td><td>-88</td><td>dB</td></tr><tr><td></td><td></td><td>-20 dB</td><td>—</td><td>-74</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>-60 dB</td><td>—</td><td>-34</td><td>-28</td><td>dB</td></tr><tr><td></td><td>DSD</td><td>0 dB</td><td>—</td><td>-109</td><td>-103</td><td>dB</td></tr><tr><td></td><td></td><td>-20 dB</td><td>—</td><td>-95</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>-60 dB</td><td>—</td><td>-65</td><td>-59</td><td>dB</td></tr><tr><td>Idle channel noise</td><td>24-bit, 32-bit, DSD</td><td></td><td>—</td><td>0.55</td><td>—</td><td>μV</td></tr><tr><td>(A-weighted) 
(defined in Table 3-1)</td><td></td><td></td><td></td><td></td><td></td><td></td></tr><tr><td colspan="3">Full-scale output voltage</td><td>3.76</td><td>3.96</td><td>4.16</td><td>Vpp</td></tr><tr><td colspan="2">Interchannel isolation 6 (defined in Table 3-1)</td><td>217 Hz</td><td>—</td><td>120</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>1 kHz</td><td>—</td><td>120</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>20 kHz</td><td>—</td><td>100</td><td>—</td><td>dB</td></tr><tr><td rowspan="20">HPOUTx; 
RL=600 Ω 
CL=200 pF 
OUT_FS=10 
Volume=0 dB, 
unless otherwise specified</td><td>Dynamic range</td><td>24-bit, 32-bit, DSD</td><td>A-weighted</td><td>122</td><td>128</td><td>—</td><td>dB</td></tr><tr><td>(defined in Table 3-1)</td><td></td><td>Unweighted</td><td>119</td><td>125</td><td>—</td><td>dB</td></tr><tr><td></td><td>16-bit</td><td>A-weighted</td><td>91</td><td>97</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>Unweighted</td><td>88</td><td>94</td><td>-</td><td>dB</td></tr><tr><td>THD+N</td><td>24-bit, 32-bit</td><td>0 dB</td><td>—</td><td>-113</td><td>-107</td><td>dB</td></tr><tr><td>(defined in Table 3-1)</td><td></td><td>-20 dB</td><td>—</td><td>-95</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>-60 dB</td><td>—</td><td>-65</td><td>-59</td><td>dB</td></tr><tr><td></td><td>16-bit</td><td>0 dB</td><td>—</td><td></td><td></td><td></td></tr><tr><td></td><td></td><td>-20 dB</td><td>—</td><td>-74</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>-60 dB</td><td>—</td><td>-34</td><td>-28</td><td>dB</td></tr><tr><td></td><td>DSD</td><td>0 dB</td><td>—</td><td>-109</td><td>-103</td><td>dB</td></tr><tr><td></td><td></td><td>-20 dB</td><td>—</td><td>-95</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>-60 dB</td><td>—</td><td>65</td><td>-59</td><td>dB</td></tr><tr><td>Idle channel noise</td><td>24-bit, 32-bit, DSD</td><td></td><td>—</td><td>0.55</td><td>—</td><td>μV</td></tr><tr><td>(A-weighted) 
(defined in Table 3-1)</td><td></td><td></td><td></td><td></td><td></td><td></td></tr><tr><td colspan="3">Full-scale output voltage</td><td>3.76</td><td>3.96</td><td>4.16</td><td>Vpp</td></tr><tr><td colspan="3">Output power</td><td>—</td><td>3.3</td><td>—</td><td>mW</td></tr><tr><td colspan="2">Interchannel isolation 6 (defined in Table 3-1)</td><td>217 Hz</td><td>—</td><td>120</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>1 kHz</td><td>—</td><td>120</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>20 kHz</td><td>—</td><td>100</td><td>—</td><td>dB</td></tr></table>


Table 3-5. Analog Output Characteristics $( \mathsf { H V \_ E N } = \mathsf { 0 } )$ 1 (Cont.)


Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; input test signal is a 32-bit, full-scale 997-Hz sine wave (unless specified otherwise); $\mathtt { G N D A } = \mathtt { G N D C P } = \mathtt { G N D D } = 0 \ V$ ; voltages are with respect to ground; $\mathsf { H V \_ E N } = 0$ ; ASP_M/Sb = 1; typical, min/max performance data taken with ${ \mathsf { V } } { \mathsf { A } } = { \mathsf { V C P } } = 1 . 8 { \mathsf { V } } ;$ $\mathsf { V L } = \mathsf { V D } = 1 . 8 \mathsf { V }$ ; $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ ; ${ \mathsf { T } } { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ ; measurement bandwidth is $2 0 \mathsf { H z } \ – 2 0 \mathsf { k H z }$ ; ASP_SPRATE $= 0 0 0 1$ (LRCK $= 4 4 . 1$ -kHz mode); PDN_XTAL $= 0$ , MCLK_INT $= 1$ , and MCLK_SRC_SEL $= 0 0$ (crystal frequency $\mathsf { f } _ { \mathsf { X T A L } } = 2 2 . 5 7 9 2 \mathsf { M H z }$ ); Volume $= 0$ dB; when testing in DSD processor mode, DSD_ZERODB $= 1$ ; when testing noise related specifications (dynamic range, $T H \mathsf { D } { + } \mathsf { N }$ , idle channel noise), no external impedance on HPREFx. 

<table><tr><td colspan="4">PCM and DSD Processor Mode Parameter 2,3,4</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="21">HPOUTx; 
RL=32Ω 
CL=200 pF 
OUT_FS=01 
Volume=0 dB, 
unless otherwise 
specified</td><td>Dynamic range</td><td>24-bit, 32-bit, DSD</td><td>A-weighted</td><td>119</td><td>125</td><td>—</td><td>dB</td></tr><tr><td>(defined in Table 3-1)</td><td></td><td>Unweighted</td><td>116</td><td>122</td><td>—</td><td>dB</td></tr><tr><td></td><td>16-bit</td><td>A-weighted</td><td>91</td><td>97</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>Unweighted</td><td>88</td><td>94</td><td>—</td><td>dB</td></tr><tr><td>THD+N</td><td>24-bit, 32-bit</td><td>0 dB</td><td>—</td><td>-110</td><td>-104</td><td>dB</td></tr><tr><td>(defined in Table 3-1)</td><td></td><td>-20 dB</td><td>—</td><td>-92</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>-60 dB</td><td>—</td><td>-62</td><td>-56</td><td>dB</td></tr><tr><td></td><td>16-bit</td><td>0 dB</td><td>—</td><td>-94</td><td>-88</td><td>dB</td></tr><tr><td></td><td></td><td>-20 dB</td><td>—</td><td>-74</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>-60 dB</td><td>—</td><td>-34</td><td>-28</td><td>dB</td></tr><tr><td></td><td>DSD</td><td>0 dB</td><td>—</td><td>-106</td><td>-96</td><td>dB</td></tr><tr><td></td><td></td><td>-20 dB</td><td>—</td><td>-92</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>-60 dB</td><td>—</td><td>-62</td><td>-56</td><td>dB</td></tr><tr><td>Idle channel noise</td><td>24-bit, 32-bit, DSD</td><td></td><td>—</td><td>0.55</td><td>—</td><td>μV</td></tr><tr><td>(A-weighted)</td><td></td><td></td><td></td><td></td><td></td><td></td></tr><tr><td>(defined in Table 3-1)</td><td></td><td></td><td></td><td></td><td></td><td></td></tr><tr><td colspan="3">Full-scale output voltage</td><td>2.68</td><td>2.81</td><td>2.96</td><td>Vpp</td></tr><tr><td colspan="3">Output power</td><td>—</td><td>30.8</td><td>—</td><td>mW</td></tr><tr><td colspan="3">Interchannel isolation 6(defined in Table 3-1)</td><td>217 Hz</td><td>—</td><td>110</td><td>—</td></tr><tr><td colspan="3"></td><td>1 kHz</td><td>—</td><td>105</td><td>—</td></tr><tr><td colspan="3"></td><td>20 kHz</td><td>—</td><td>90</td><td>—</td></tr><tr><td rowspan="21">HPOUTx; 
RL=16Ω 
CL=200 pF 
OUT_FS=00 
Volume=0 dB, 
unless otherwise 
specified</td><td>Dynamic range</td><td>24-bit, 32-bit</td><td>A-weighted</td><td>113</td><td>119</td><td>—</td><td>dB</td></tr><tr><td>(defined in Table 3-1)</td><td></td><td>Unweighted</td><td>110</td><td>116</td><td>—</td><td>dB</td></tr><tr><td></td><td>16-bit</td><td>A-weighted</td><td>89</td><td>95</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>Unweighted</td><td>86</td><td>92</td><td>—</td><td>dB</td></tr><tr><td>THD+N</td><td>24-bit, 32-bit</td><td>0 dB</td><td>—</td><td>-100</td><td>-94</td><td>dB</td></tr><tr><td>(defined in Table 3-1)</td><td></td><td>-20 dB</td><td>—</td><td>-86</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>-60 dB</td><td>—</td><td>-56</td><td>-50</td><td>dB</td></tr><tr><td></td><td>16-bit</td><td>0 dB</td><td>—</td><td>-94</td><td>-88</td><td>dB</td></tr><tr><td></td><td></td><td>-20 dB</td><td>—</td><td>-74</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>-60 dB</td><td>—</td><td>-34</td><td>-28</td><td>dB</td></tr><tr><td></td><td>DSD</td><td>0 dB</td><td>—</td><td>-100</td><td>-94</td><td>dB</td></tr><tr><td></td><td></td><td>-20 dB</td><td>—</td><td>-86</td><td>—</td><td>dB</td></tr><tr><td></td><td></td><td>-60 dB</td><td>—</td><td>-56</td><td>-50</td><td>dB</td></tr><tr><td>Idle channel noise</td><td>24-bit, 32-bit, DSD</td><td></td><td>—</td><td>0.55</td><td>—</td><td>μV</td></tr><tr><td>(A-weighted)</td><td></td><td></td><td></td><td></td><td></td><td></td></tr><tr><td>(defined in Table 3-1)</td><td></td><td></td><td></td><td></td><td></td><td></td></tr><tr><td colspan="3">Full-scale output voltage</td><td>1.34</td><td>1.41</td><td>1.48</td><td>Vpp</td></tr><tr><td colspan="3">Output power</td><td>—</td><td>15.6</td><td>—</td><td>mW</td></tr><tr><td colspan="3">Interchannel isolation 6(defined in Table 3-1)</td><td>217 Hz</td><td>—</td><td>105</td><td>—</td></tr><tr><td colspan="3"></td><td>1 kHz</td><td>—</td><td>100</td><td>—</td></tr><tr><td colspan="3"></td><td>20 kHz</td><td>—</td><td>85</td><td>—</td></tr><tr><td rowspan="9">Other characteristics 
for HPOUTx</td><td colspan="3">Interchannel gain mismatch (defined in Table 3-1)</td><td>—</td><td>±0.1</td><td>—</td><td>dB</td></tr><tr><td colspan="3">Interchannel phase mismatch (defined in Table 3-1)</td><td>—</td><td>—</td><td>±0.01</td><td>°</td></tr><tr><td colspan="3">Output offset voltage: Mute (defined in Table 3-1)</td><td>—</td><td>±50</td><td>±100</td><td>μV</td></tr><tr><td colspan="3">Gain drift (defined in Table 3-1)</td><td>—</td><td>±100</td><td>—</td><td>ppm/°C</td></tr><tr><td colspan="3">Load resistance (RL)</td><td>16</td><td>—</td><td>—</td><td>Ω</td></tr><tr><td colspan="3">Load capacitance (CL)</td><td>—</td><td>—</td><td>1</td><td>nF</td></tr><tr><td colspan="3">Turn-on time (defined in Table 3-1)</td><td>—</td><td>—</td><td>12</td><td>ms</td></tr><tr><td colspan="3">Audio latency after RESET released 7</td><td>—</td><td>—</td><td>22</td><td>ms</td></tr><tr><td>Click/pop during PDN_HP enable or disable</td><td colspan="2">A-weighted</td><td>—</td><td>±50</td><td>±100</td><td>μV</td></tr></table>

1.This table also applies to external VCP_FILT supply mode: CS43131 power up procedure as described in Section 4.3.5; EXT_VCPFILT=1; VCP_ FILT+ and VCP_FILT– comply to Table 3-2 when EXT_VCPFILT $= 1$ ; in this mode, HV_EN must be set to 1. 

2.One LSB of triangular PDF dither is added to PCM data. 

3.Referred to the typical full-scale voltage. Applies to all $T H \mathsf { D } { + } \mathsf { N }$ and dynamic range values in the table. 

4.DSD performance may be limited by the source recording. 0 dB-SACD $= 5 0 \%$ modulation index. 

5.The volume must be configured as indicated to achieve specified output characteristics. 

6.HP output test configuration. Symbolized component values are specified in the test conditions. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/010ee90b27aaf770b75df14215b00bd9abf6fb2261a8524427d91684fe382a69.jpg)



7.With I2C normal speed mode and 22.5792-MHz XTAL used as MCLK source, this specification is measured from reset released to when the audio signal appears on the output per power-up sequence listed in Section 5.13.1. PCM_SZC should be set to Immediate $( \mathsf { P C M \_ S Z C } = 0 0 )$ ) to hear audio at 20 ms after startup.


# Table 3-6. Wideband Flatness Mode Analog Output Characteristics 1

Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; input test signal is a 32-bit, full-scale 997-Hz sine wave (unless specified otherwise); $\mathsf { G N D A } = \mathsf { G N D C P } = \mathsf { G N D D } \mathsf { D } = 0 \mathsf { V }$ ; voltages are with respect to ground; ASP_M/Sb = 1; typical, min/max performance data taken with $\mathsf { V } \mathsf { A } = \mathsf { V } \mathsf { C } \mathsf { P } = 1 . 8 \mathsf { 1 }$ ; $\mathsf { V L } = \mathsf { V D } = 1 . 8 \mathsf { V }$ ; ${ \mathsf { V P } } = 3 . 6 { \mathsf { V } } ;$ ; ${ \mathsf { T } } { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ ; measurement bandwidth is 20 Hz–90 kHz; ASP_SPRATE = 0110 (LRCK = 192-kHz mode); PDN_XTAL $= 0$ , MCLK_INT = 1, and MCLK_SRC_SEL $= 0 0$ (crystal frequency $\mathsf { f } _ { \mathsf { X T A L } } = 2 2 . 5 7 9 2 \mathsf { M H z } )$ ; Volume $= 0$ dB; when testing noise related specifications (dynamic range, $T H \mathsf { D } { + } \mathsf { N }$ , idle channel noise), no external impedance on HPREFx. 

<table><tr><td colspan="2">Wideband Flatness Mode Parameter 2,3</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="10">HPOUTxRL=600ΩCL=200 pFOUT_FS=11Volume=0 dB+1dB_EN=0HV_EN=1,unless otherwisespecified</td><td>Dynamic range 24-bit, 32-bitA-weighted (defined in Table 3-1)</td><td>122</td><td>128</td><td>—</td><td>dB</td></tr><tr><td rowspan="3">THD+N(20 Hz-20 kHz, 24-bit, 32-bit defined in Table 3-1)</td><td>0 dB—</td><td>-112</td><td>-106</td><td>dB</td></tr><tr><td>-20 dB—</td><td>-97</td><td>—</td><td>dB</td></tr><tr><td>-60 dB—</td><td>-67</td><td>-61</td><td>dB</td></tr><tr><td>Idle channel noise 24-bit, 32-bit(A-weighted)(defined in Table 3-1)</td><td>—</td><td>0.69</td><td>—</td><td>μV</td></tr><tr><td>Full-scale output voltage</td><td>4.66</td><td>4.90</td><td>5.14</td><td>Vpp</td></tr><tr><td>Output power</td><td>—</td><td>5</td><td>—</td><td>mW</td></tr><tr><td rowspan="3">Interchannel isolation (defined in Table 3-1)</td><td>217 Hz—</td><td>120</td><td>—</td><td>dB</td></tr><tr><td>1 kHz—</td><td>120</td><td>—</td><td>dB</td></tr><tr><td>20 kHz—</td><td>110</td><td>—</td><td>dB</td></tr><tr><td rowspan="3">HPOUTxRL=600ΩCL=200 pFOUT_FS=11Volume=0 dB+1dB_EN=1HV_EN=1,unless otherwisespecified</td><td>THD+N(20 Hz-20 kHz, 24-bit, 32-bit defined in Table 3-1)</td><td>0 dB—</td><td>-105</td><td>-99</td><td>dB</td></tr><tr><td>Full-scale output voltage</td><td>5.42</td><td>5.7</td><td>5.99</td><td>Vpp</td></tr><tr><td>Output power</td><td>—</td><td>6.8</td><td>—</td><td>mW</td></tr></table>


Table 3-6. Wideband Flatness Mode Analog Output Characteristics 1 (Cont.)


Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; input test signal is a 32-bit, full-scale 997-Hz sine wave (unless specified otherwise); $\mathsf { G N D A } = \mathsf { G N D C P } = \mathsf { G N D D } = 0 \mathsf { V } ;$ voltages are with respect to ground; ASP_M/Sb = 1; typical, min/max performance data taken with ${ \mathsf { V } } { \mathsf { A } } = { \mathsf { V C P } } = 1 . 8 { \mathsf { V } } ;$ ; $\mathsf { V L } = \mathsf { V D } = 1 . 8 \mathsf { V }$ ; ${ \mathsf { V P } } = 3 . 6 { \mathsf { V } } ;$ ; ${ \mathsf { T } } { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ ; measurement bandwidth is 20 Hz–90 kHz; ASP_SPRATE = 0110 (LRCK = 192-kHz mode); PDN_XTAL $= 0$ , MCLK_INT $= 1$ , and MCLK_SRC_SEL $= 0 0$ (crystal frequency $f _ { \mathsf { X T A L } } = 2 2 . 5 7 9 2 \mathsf { M H z } )$ ; Volume $= 0$ dB; when testing noise related specifications (dynamic range, $T H \mathsf { D } { + } \mathsf { N }$ , idle channel noise), no external impedance on HPREFx. 

<table><tr><td colspan="3">Wideband Flatness Mode Parameter 2,3</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="17">HPOUTx; RL=32Ω CL=200 pF OUT_FS=01 Volume=0 dB HV_EN=0, unless otherwise specified</td><td>Dynamic range 24-bit, 32-bit (defined in Table 3-1)</td><td>A-weighted</td><td>117</td><td>123</td><td>—</td><td>dB</td></tr><tr><td>Dynamic range 24-bit, 32-bit (DRE_EN=1)</td><td>A-weighted</td><td>115</td><td>121</td><td>—</td><td>dB</td></tr><tr><td rowspan="3">(MCLK=19.2 MHz, MCLK_SRC_SEL=01, MCLK_INT=1)</td><td>Unweighted</td><td>88</td><td>94</td><td>—</td><td>dB</td></tr><tr><td>A-weighted</td><td>94</td><td>100</td><td>—</td><td>dB</td></tr><tr><td>Unweighted</td><td>64</td><td>70</td><td>—</td><td>dB</td></tr><tr><td rowspan="3">THD+N (20 Hz–20 kHz, 24-bit, 32-bit defined in Table 3-1)</td><td>0 dB</td><td>—</td><td>-110</td><td>-104</td><td>dB</td></tr><tr><td>-20 dB</td><td>—</td><td>-92</td><td>—</td><td>dB</td></tr><tr><td>-60 dB</td><td>—</td><td>-62</td><td>-56</td><td>dB</td></tr><tr><td rowspan="3">THD+N (20 Hz–90 kHz, 24-bit, 32-bit defined in Table 3-1)</td><td>0 dB</td><td>—</td><td>-89</td><td>-83</td><td>dB</td></tr><tr><td>-20 dB</td><td>—</td><td>-78</td><td>—</td><td>dB</td></tr><tr><td>-60 dB</td><td>—</td><td>-38</td><td>-32</td><td>dB</td></tr><tr><td>Idle channel noise 24-bit, 32-bit (A-weighted) (defined in Table 3-1)</td><td></td><td>—</td><td>0.69</td><td>—</td><td>μV</td></tr><tr><td>Full-scale output voltage</td><td></td><td>2.68</td><td>2.81</td><td>2.96</td><td>Vpp</td></tr><tr><td>Output power</td><td></td><td>—</td><td>30.8</td><td>—</td><td>mW</td></tr><tr><td rowspan="3">Interchannel isolation 4 (defined in Table 3-1)</td><td>217 Hz</td><td>—</td><td>110</td><td>—</td><td>dB</td></tr><tr><td>1 kHz</td><td>—</td><td>105</td><td>—</td><td>dB</td></tr><tr><td>20 kHz</td><td>—</td><td>90</td><td>—</td><td>dB</td></tr><tr><td rowspan="8">Other characteristics for HPOUTx</td><td>Interchannel gain mismatch (defined in Table 3-1)</td><td></td><td>—</td><td>±0.1</td><td>—</td><td>dB</td></tr><tr><td>Interchannel phase mismatch (defined in Table 3-1)</td><td></td><td>—</td><td>—</td><td>±0.01</td><td>°</td></tr><tr><td>Output offset voltage: Mute (defined in Table 3-1)</td><td></td><td>—</td><td>±50</td><td>±100</td><td>μV</td></tr><tr><td>Gain drift (defined in Table 3-1)</td><td></td><td>—</td><td>±100</td><td>—</td><td>ppm/°C</td></tr><tr><td>Load resistance (RL)</td><td></td><td>6</td><td>—</td><td>—</td><td>Ω</td></tr><tr><td>Load capacitance (CL)</td><td></td><td>—</td><td>—</td><td>1</td><td>nF</td></tr><tr><td>Turn-on time (defined in Table 3-1)</td><td></td><td>—</td><td>—</td><td>12</td><td>ms</td></tr><tr><td>Click/pop during PDN_HP enable or disable</td><td>A-weighted</td><td>—</td><td>±50</td><td>±100</td><td>μV</td></tr></table>


1.This table also applies to external VCP_FILT supply mode: CS43131 power up procedure is per description in Section 5.13.1; EXT_VCPFILT = 1; VCP_FILT+ and VCP_FILT– comply to Table 3-2 when EXT_VCPFILT $= 1$ ; in this mode, HV_EN must be set to 1. 



2.One LSB of triangular PDF dither is added to PCM data. 



3.Referred to the typical full-scale voltage. Applies to all THD+N and dynamic range values in the table. 



4.HP output test configuration. Symbolized component values are specified in the test conditions. 


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/499483e4c207bf25ec877da40b505c5f5f09707ab8698d477a7f3bcda9d31d4e.jpg)



Table 3-7. Headphone Load Measurement


Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; $\mathtt { G N D D } = \mathtt { G N D C P } = \mathtt { G N D A } = 0 \vee$ $=$ ; voltages are with respect to ground; typical performance data taken with $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ , $\mathsf { V C P } = \mathsf { V A } = 1 . 8 \mathsf { V }$ , $\mathsf { V L } = \mathsf { V D } = 1 . 8 \mathsf { V }$ ; min/max performance data taken with $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ , $\mathsf { V C P } = \mathsf { V A } = 1 . 8 \mathsf { V }$ , ${ \mathsf { V L } } = { \mathsf { V D } } = 1 . 8 { \mathsf { V } }$ ; ${ \mathsf { T } } { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ . MCLK_INT $= 1$ , PDN_XTAL $= 0$ , and MCLK_SRC_SEL $= 0 0$ (crystal frequency $f _ { \mathsf { X T A L } } = 2 2 . 5 7 9 2 \mathsf { M H z } )$ 

<table><tr><td>Parameters</td><td>Symbol</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td>Frequency range</td><td>—</td><td>20</td><td>—</td><td>20k</td><td>Hz</td></tr><tr><td>Frequency resolution</td><td>—</td><td>—</td><td>5.94</td><td>—</td><td>Hz</td></tr></table>


Table 3-7. Headphone Load Measurement (Cont.)


Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; $\mathtt { G N D D } = \mathtt { G N D C P } = \mathtt { G N D A } = 0 \vee$ $=$ ; voltages are with respect to ground; typical performance data taken with $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ , $\mathsf { V C P } = \mathsf { V A } = 1 . 8 \mathsf { V }$ , $\mathsf { V L } = \mathsf { V D } = 1 . 8 \mathsf { V }$ ; min/max performance data taken with ${ \mathsf { V P } } = 3 . 6 { \mathsf { V } } _ { : }$ $\mathsf { V C P } = \mathsf { V A } = 1 . 8 \mathsf { V }$ , ${ \mathsf { V L } } = { \mathsf { V D } } = 1 . 8 { \mathsf { V } }$ ; ${ \mathsf { T } } { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ . MCLK_INT $= 1$ , PDN_XTAL $= 0$ , and MCLK_SRC_SEL $= 0 0$ (crystal frequency $f _ { \mathsf { X T A L } } = 2 2 . 5 7 9 2 \mathsf { M H z } )$ 

<table><tr><td>Parameters</td><td>Symbol</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td>Low frequency impedance range</td><td>—</td><td>8</td><td>—</td><td>1200</td><td>Ω</td></tr><tr><td>Relative impedance measurement capability 1</td><td>—</td><td>-122</td><td>—</td><td>+12</td><td>dB</td></tr><tr><td rowspan="2">Impedance measurement accuracy 3</td><td>Gain error</td><td>—</td><td>-10</td><td>—</td><td>+10</td></tr><tr><td>Offset</td><td>—</td><td>-1</td><td>—</td><td>1</td></tr></table>


1.Impedance measurement range is relative to low-frequency HP load impedance measured. 



2.Or 4 , whichever is greater. 



3.Accuracy is referred to reported impedance. 



Table 3-8. Alternate Headphone Path


Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; $\mathtt { G N D D } = \mathtt { G N D C P } = \mathtt { G N D A } = 0 \vee$ $=$ ; voltages are with respect to ground; typical performance data taken with $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ , $\mathsf { V C P } = \mathsf { V A } = 1 . 8 \mathsf { V }$ , $\mathsf { V L } = \mathsf { V D } = 1 . 8 \mathsf { V }$ ; min/max performance data taken with $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ ${ \mathsf { V C P } } = 1 . 8 { \mathsf { V } }$ , $\mathsf { V A } = 0 \mathsf { V }$ , $\mathsf { V L } = \mathsf { V D } = 1 . 8 \mathsf { V }$ ; $\mathsf { R } _ { \mathsf { L } } = 3 2 \Omega ;$ ; ${ \mathsf { T } } { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ ; measurement bandwidth is $2 0 \ H z - 2 0 \ k H z$ ; MCLK_SRC_SEL $= 1 0$ , PDN_XTAL $= 1$ 

<table><tr><td colspan="2">Parameters</td><td>Symbol</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="7">Switch on characteristics (PDN_HP = 1 HP_IN_EN = 1)</td><td>Signal range when switch on1</td><td>VINAI</td><td>—</td><td>—</td><td>3.00</td><td>Vpp</td></tr><tr><td>THD+N with 32 Ω @ 2.82 Vpp</td><td>—</td><td>—</td><td>-103</td><td>—</td><td>dB</td></tr><tr><td rowspan="3">Interchannel isolation 217 Hz 1 kHz 20 kHz</td><td rowspan="3">—</td><td>104</td><td>110</td><td>—</td><td>dB</td></tr><tr><td>—</td><td>105</td><td>—</td><td>dB</td></tr><tr><td>—</td><td>90</td><td>—</td><td>dB</td></tr><tr><td rowspan="2">HPINx turn-on time2EXT_VCPFILT = 1EXT_VCPFILT = 0</td><td rowspan="2">tHPIN_ON</td><td>—</td><td>—</td><td>80</td><td>μs</td></tr><tr><td>—</td><td>—</td><td>1.1</td><td>ms</td></tr><tr><td rowspan="5">Switch off characteristics (PDN_HP = 1, HP_IN_EN = 0)</td><td>Analog signal range when switched off 3,4</td><td>VINOFF</td><td>—</td><td>—</td><td>0.3</td><td>Vp</td></tr><tr><td>Turn-off time5</td><td>tHPIN_OFF</td><td>—</td><td>—</td><td>20</td><td>μs</td></tr><tr><td rowspan="3">Off isolation6217 Hz 1 kHz 20 kHz</td><td></td><td>—</td><td>120</td><td>—</td><td>dB</td></tr><tr><td></td><td>—</td><td>120</td><td>—</td><td>dB</td></tr><tr><td></td><td>—</td><td>100</td><td>—</td><td>dB</td></tr></table>


1.When switch is on, maximally allowable voltage applied to HPINx pins. 



2.HPINx turn-on time is measured when setting HP_IN_EN $= 1$ . I2C ACK signal is received to when the signal appears on the HP out. MCLK_SRC_ SEL $= 0 0$ , PDN_XTAL $= 0$ , MCLK_INT $= 1$ . For EXT_VCPFILT $= 1$ , VCP_FILT± has been properly charged to expected nominal values. 



3.When switch is off, maximally allowable voltage applied to HPINx pins. 



4.Before switch off event, it is required HPINx signal is within this range before the switch is turned off. When the switch is in off state, HPINx signal cannot exceed this specified range. 



5.HPINx turn-off time is measured when HP_IN_EN = 0 ACK signal is received to when the signal disappears from the HP out. This spec also applies when register settings are: MCLK_SRC_SEL $= 0 0$ , PDN_ $\mathsf { X T A L } = 0$ $= 0$ , MCLK_INT $= 1$ . 



6.Off isolation specification is measured with $\mathsf { V } _ { \mathsf { I N O F F } } = 0 . 1 \ \mathsf { V p }$ input. 



Table 3-9. Combined DAC Digital, On-Chip Analog and HPOUTx Filter Characteristics


Test conditions (unless specified otherwise): The filter characteristics have been normalized to the sample rate (Fs) and can be referenced to the desired sample rate by multiplying the given characteristic by Fs. Single-Speed Mode refers to 32-, 44.1-, and 48-kHz sample rates. Double-Speed Mode refers to 88.2- and 96-kHz sample rates. Quad-Speed Mode refers to 176.4- and 192-kHz sample rates. Octuple-Speed Mode refers to 352.8- and 384-kHz sample rates. MCLK_INT is an integer multiple of Fs; HPF disabled; no DC offset applied; group delay does not include serial port delay. 

<table><tr><td colspan="2">Parameter</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="9">Fast Roll-Off (FILTER_SLOW_FASTB = 0) Single-Speed Mode 1</td><td rowspan="3">Passband 2 to -0.01-dB corner to -3-dB corner attenuation @ Fs/2</td><td>0</td><td>—</td><td>0.45354</td><td>Fs</td></tr><tr><td>0</td><td>—</td><td>0.482</td><td>Fs</td></tr><tr><td>8.443</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Passband ripple 10 Hz to -0.01-dB corner 5</td><td>-0.01</td><td>—</td><td>+0.01</td><td>dB</td></tr><tr><td>Stopband</td><td>0.547</td><td>—</td><td>—</td><td>Fs</td></tr><tr><td>Stopband attenuation 6</td><td>110</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Group delay (linear phase) PHCOMP_LOWLATB = 1</td><td>—</td><td>39.5/Fs 7</td><td>—</td><td>s</td></tr><tr><td>Group delay (minimum phase) PHCOMB_LOWLATB = 0</td><td>—</td><td>6.3/Fs 8</td><td>—</td><td>s</td></tr><tr><td>Deemphasis error 9 (Relative to 1 kHz) Fs = 44.1 kHz</td><td>—</td><td>—</td><td>±0.3</td><td>dB</td></tr></table>


Table 3-9. Combined DAC Digital, On-Chip Analog and HPOUTx Filter Characteristics (Cont.)


Test conditions (unless specified otherwise): The filter characteristics have been normalized to the sample rate (Fs) and can be referenced to the desired sample rate by multiplying the given characteristic by Fs. Single-Speed Mode refers to 32-, 44.1-, and 48-kHz sample rates. Double-Speed Mode refers to 88.2- and 96-kHz sample rates. Quad-Speed Mode refers to 176.4- and 192-kHz sample rates. Octuple-Speed Mode refers to 352.8- and 384-kHz sample rates. MCLK_INT is an integer multiple of Fs; HPF disabled; no DC offset applied; group delay does not include serial port delay. 

<table><tr><td colspan="2">Parameter</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="8">Fast Roll-Off(FILTER_SLOW_FASTB=0)Double-Speed Mode1</td><td>Passband2to -0.01-dB corner</td><td>0</td><td>—</td><td>0.227</td><td>Fs</td></tr><tr><td>to -3-dB corner</td><td>0</td><td>—</td><td>0.48</td><td>Fs</td></tr><tr><td>attenuation @ Fs/2</td><td>7.77</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Passband ripple 10 Hz to -0.01-dB corner</td><td>-0.01</td><td>—</td><td>0.01</td><td>dB</td></tr><tr><td>Stopband</td><td>0.583</td><td>—</td><td>—</td><td>Fs</td></tr><tr><td>Stopband attenuation6</td><td>80</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Group delay (linear phase) PHCOMB_LOWLATB = 1</td><td>—</td><td>22.3/Fs</td><td>—</td><td>s</td></tr><tr><td>Group delay (minimum phase) PHCOMB_LOWLATB = 0</td><td>—</td><td>7.5/Fs</td><td>—</td><td>s</td></tr><tr><td rowspan="8">Fast Roll-Off(FILTER_SLOW_FASTB=0)Quad-Speed Mode1</td><td>Passband2to -0.01-dB corner</td><td>0</td><td>—</td><td>0.114</td><td>Fs</td></tr><tr><td>to -3-dB corner</td><td>0</td><td>—</td><td>0.46</td><td>Fs</td></tr><tr><td>attenuation @ Fs/2</td><td>9.44</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Passband ripple 10 Hz to -0.01-dB corner</td><td>-0.01</td><td>—</td><td>0.01</td><td>dB</td></tr><tr><td>Stopband</td><td>0.583</td><td>—</td><td>—</td><td>Fs</td></tr><tr><td>Stopband attenuation6</td><td>80</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Group delay (linear phase) PHCOMB_LOWLATB = 1</td><td>—</td><td>20.7/Fs</td><td>—</td><td>s</td></tr><tr><td>Group delay (minimum phase) PHCOMB_LOWLATB = 0</td><td>—</td><td>11.3/Fs</td><td>—</td><td>s</td></tr><tr><td rowspan="9">Slow Roll-Off(FILTER_SLOW_FASTB=1)Single-Speed Mode1</td><td>Passband2to -0.01-dB corner</td><td>0</td><td>—</td><td>0.417</td><td>Fs</td></tr><tr><td>to -3-dB corner</td><td>0</td><td>—</td><td>0.482</td><td>Fs</td></tr><tr><td>attenuation @ Fs/2</td><td>6.45 10</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Passband ripple 10 Hz to -0.01-dB corner5</td><td>-0.01</td><td>—</td><td>+0.01</td><td>dB</td></tr><tr><td>Stopband</td><td>0.583</td><td>—</td><td>—</td><td>Fs</td></tr><tr><td>Stopband attenuation6</td><td>64</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Group delay (linear phase) PHCOMB_LOWLATB = 1</td><td>—</td><td>34.5/Fs 11</td><td>—</td><td>s</td></tr><tr><td>Group delay (minimum phase) PHCOMB_LOWLATB = 0</td><td>—</td><td>5.6/Fs 12</td><td>—</td><td>s</td></tr><tr><td>Deemphasis error9(Relative to 1 kHz) Fs = 44.1 kHz</td><td>—</td><td>—</td><td>±0.3</td><td>dB</td></tr><tr><td rowspan="8">Slow Roll-Off(FILTER_SLOW_FASTB=1)Double-Speed Mode1</td><td>Passband2to -0.01-dB corner</td><td>0</td><td>—</td><td>0.208</td><td>Fs</td></tr><tr><td>to -3-dB corner</td><td>0</td><td>—</td><td>0.458</td><td>Fs</td></tr><tr><td>attenuation @ Fs/2</td><td>7</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Passband ripple 10 Hz to -0.01-dB corner</td><td>-0.01</td><td>—</td><td>0.01</td><td>dB</td></tr><tr><td>Stopband</td><td>0.792</td><td>—</td><td>—</td><td>Fs</td></tr><tr><td>Stopband attenuation6</td><td>70</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Group delay (linear phase) PHCOMB_LOWLATB = 1</td><td>—</td><td>22.3/Fs</td><td>—</td><td>s</td></tr><tr><td>Group delay (minimum phase) PHCOMB_LOWLATB = 0</td><td>—</td><td>6.7/Fs</td><td>—</td><td>s</td></tr><tr><td rowspan="8">Slow Roll-Off(FILTER_SLOW_FASTB=1)Quad-Speed Mode1</td><td>Passband2to -0.01-dB corner</td><td>0</td><td>—</td><td>0.104</td><td>Fs</td></tr><tr><td>to -3-dB corner</td><td>0</td><td>—</td><td>0.43</td><td>Fs</td></tr><tr><td>attenuation @ Fs/2</td><td>7.00</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Passband ripple 10 Hz to -0.01-dB corner</td><td>-0.01</td><td>—</td><td>0.01</td><td>dB</td></tr><tr><td>Stopband</td><td>0.792</td><td>—</td><td>—</td><td>Fs</td></tr><tr><td>Stopband attenuation6</td><td>75</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Group delay (linear phase) PHCOMB_LOWLATB = 1</td><td>—</td><td>20.7/Fs</td><td>—</td><td>s</td></tr><tr><td>Group delay (minimum phase) PHCOMB_LOWLATB = 0</td><td>—</td><td>10.6/Fs</td><td>—</td><td>s</td></tr><tr><td rowspan="4">Nonoversampling (NOS)(NOS=1)Single-Speed Mode1</td><td>Passband2to -0.01-dB corner</td><td>0</td><td>—</td><td>0.026</td><td>Fs</td></tr><tr><td>to -3-dB corner</td><td>0</td><td>—</td><td>0.443</td><td>Fs</td></tr><tr><td>Passband droop 10 Hz to 20 kHz</td><td>—</td><td>—</td><td>3.2 13</td><td>dB</td></tr><tr><td>Group delay</td><td>—</td><td>2.7/Fs</td><td>—</td><td>s</td></tr><tr><td rowspan="4">Nonoversampling (NOS)(NOS=1)Double-Speed Mode1</td><td>Passband2to -0.01-dB corner</td><td>0</td><td>—</td><td>0.0246</td><td>Fs</td></tr><tr><td>to -3-dB corner</td><td>0</td><td>—</td><td>0.446</td><td>Fs</td></tr><tr><td>Passband droop 10 Hz to 20 kHz</td><td>—</td><td>—</td><td>0.73</td><td>dB</td></tr><tr><td>Group delay</td><td>—</td><td>4.5/Fs</td><td>—</td><td>s</td></tr><tr><td rowspan="4">Nonoversampling (NOS)(NOS=1)Quad-Speed Mode1</td><td>Passband2to -0.01-dB corner</td><td>0</td><td>—</td><td>0.026</td><td>Fs</td></tr><tr><td>to -3-dB corner</td><td>0</td><td>—</td><td>0.405</td><td>Fs</td></tr><tr><td>Passband droop 10 Hz to 20 kHz</td><td>—</td><td>—</td><td>0.17</td><td>dB</td></tr><tr><td>Group delay</td><td>—</td><td>8.4/Fs</td><td>—</td><td>s</td></tr></table>

# Table 3-9. Combined DAC Digital, On-Chip Analog and HPOUTx Filter Characteristics (Cont.)

Test conditions (unless specified otherwise): The filter characteristics have been normalized to the sample rate (Fs) and can be referenced to the desired sample rate by multiplying the given characteristic by Fs. Single-Speed Mode refers to 32-, 44.1-, and 48-kHz sample rates. Double-Speed Mode refers to 88.2- and 96-kHz sample rates. Quad-Speed Mode refers to 176.4- and 192-kHz sample rates. Octuple-Speed Mode refers to 352.8- and 384-kHz sample rates. MCLK_INT is an integer multiple of Fs; HPF disabled; no DC offset applied; group delay does not include serial port delay. 

<table><tr><td colspan="2">Parameter</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="4">Octuple-Speed Mode 1</td><td>Passband 2 to -0.01-dB corner</td><td>0</td><td>—</td><td>0.0299</td><td>Fs</td></tr><tr><td>to -3-dB corner</td><td>0</td><td>—</td><td>0.263</td><td>Fs</td></tr><tr><td>Passband droop 10 Hz to 20 kHz</td><td>—</td><td>—</td><td>0.04</td><td>dB</td></tr><tr><td>Group delay</td><td>—</td><td>17/Fs</td><td>—</td><td>s</td></tr></table>

1. Filter response is by design. 

2. Response is clock-dependent and scales with Fs. 

3. 8.5 dB for 32-kHz sample rate. 

4. 0.454 Fs for 32-kHz sample rate. 

5. Filter ripple specification is invalid with deemphasis enabled. 

6. For Single-Speed Mode, the measurement bandwidth is from stopband to 3 Fs. For Double-Speed Mode, the measurement bandwidth is from stopband to 3 Fs. For Quad-Speed Mode, the measurement bandwidth is from stopband to 1.34 Fs. 

7. 39/Fs for 32-kHz sample rate. 

8. 5.9/Fs for 32-kHz sample rate. 

9. Deemphasis is available only in 44.1 kHz. 

10. 6.5 dB for 32-kHz sample rate. 

11. 34/Fs for 32-kHz sample rate. 

12. 5.2/Fs for 32-kHz sample rate. 

13. 3.9 dB for 32-kHz sample rate (passband droop 10 Hz to 15 kHz). 

# Table 3-10. Combined DAC Digital, On-Chip Analog and HPOUTx Filter Characteristics (Wideband Flatness Mode)

Test conditions (unless specified otherwise): The filter characteristics have been normalized to the sample rate (Fs) and can be referenced to the desired sample rate by multiplying the given characteristic by Fs. Wideband Flatness Mode refers to $\mathsf { F s } = 1 9 2 \mathsf { k H z }$ sample rates. PCM_WBF_EN $= 1$ . MCLK_ INT is an integer multiple of Fs; HPF disabled; no DC offset applied; group delay does not include serial port delay. 

<table><tr><td colspan="2">Parameter</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="7">Wideband Flatness Mode 1</td><td>Passband 2 to -0.003-dB corner</td><td>0</td><td>—</td><td>0.417</td><td>Fs</td></tr><tr><td>to -3-dB corner</td><td>0</td><td>—</td><td>0.46</td><td>Fs</td></tr><tr><td>attenuation @ Fs/2</td><td>3</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Passband ripple 10 Hz to -0.003-dB corner</td><td>-0.003</td><td>—</td><td>0.003</td><td>dB</td></tr><tr><td>Stopband</td><td>0.583</td><td>—</td><td>—</td><td>Fs</td></tr><tr><td>Stopband attenuation 3</td><td>80</td><td>—</td><td>—</td><td>dB</td></tr><tr><td>Group delay</td><td>—</td><td>20.7/Fs</td><td>—</td><td>s</td></tr></table>

1. Filter response is by design and may require calibration. 

2. Response is clock-dependent and scales with Fs. 

3. The measurement bandwidth is from stopband to 1.34 Fs. 


Table 3-11. DAC High-Pass Filter (HPF) Characteristics


Test conditions (unless specified otherwise): Gains are all set to 0 dB; ${ \mathsf { T } } _ { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ 

<table><tr><td>Parameter 1</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td>Passband 2 -0.05-dB corner</td><td>—</td><td>0.195 x 10-3/N</td><td>—</td><td>Fs</td></tr><tr><td>Passband ripple (0.417x10-3/N Fs to 0.417/N Fs; normalized to 0.417/N Fs) 2</td><td>—</td><td>19.5 x 10-6/N</td><td>—</td><td>Fs</td></tr><tr><td>Phase deviation @ 0.453x10-3/N Fs 2</td><td>—</td><td>—</td><td>0.01</td><td>dB</td></tr><tr><td rowspan="2">Filter settling time 3</td><td>—</td><td>2.45</td><td>—</td><td>°</td></tr><tr><td>—</td><td>24500 x N / Fs 2</td><td>—</td><td>s</td></tr></table>


1.Response scales with Fs in PCM Mode. Specifications are normalized to Fs and are denormalized by multiplying by Fs. For DSD Mode, Fs is 44.1 kHz. 



2.For PCM Single-Speed Mode, $\Nu = 1$ 


For PCM Double-Speed Mode, $\Nu = 2$ . 

For PCM Quad-Speed Mode, ${ \mathsf N } = 4$ 

For PCM Octuple-Speed Mode, $\Nu = 8$ 

For DSD $6 4 \times$ Fs Mode, $N = 1$ 

For DSD $1 2 8 \times$ Fs Mode, $N = 1$ . 

3.Required time for the magnitude of the DC component present at the output of the HPF to reach $5 \%$ of the applied DC signal. 

Table 3-12. DSD Combined Digital and On-Chip Analog Filter Response 1 

Test conditions (unless specified otherwise): Digital gains are all set to 0 dB; ${ \mathsf { T } } _ { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ ; PDN_XTAL $= 0$ , MCLK_INT $=$ 1, DSD_EN = 1, and MCLK_SRC_ SEL $= 0 0$ (crystal frequency $\mathsf { f } _ { \mathsf { X T A L } } = 2 2 . 5 7 9 2 \mathsf { M H z } )$ . 

<table><tr><td colspan="2">Parameter</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="3">DSD Mode</td><td>Passband to -3-dB corner</td><td>—</td><td>50</td><td>—</td><td>kHz</td></tr><tr><td>Frequency response 20 Hz to 20 kHz</td><td>-0.05</td><td>—</td><td>0.05</td><td>dB</td></tr><tr><td>Roll-off</td><td>27</td><td>—</td><td>—</td><td>dB/Oct</td></tr></table>


1.Filter response is by design. 



Table 3-13. Digital Interface Specifications and Characteristics


Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; $\mathtt { G N D D } = \mathtt { G N D C P } = \mathtt { G N D A } = 0 \vee$ ; voltages are with respect to ground; parameters can vary with VL and VP; typical performance data taken with $\mathsf { V P } = 3 . 6 \mathsf { V }$ , VCP = VA = 1.8 V, $\mathsf { V D } = 1 . 8 \mathsf { V }$ and $\mathsf { V L } = 1 . 8 \mathsf { V }$ ; min/max performance data taken with $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ , $\mathsf { V C P } = \mathsf { V A } = 1 . 8 \mathsf { V }$ , $\mathsf { V D } = 1 . 8 \mathsf { V }$ and $\mathsf { V L } = 1 . 8 \mathsf { V }$ ; ${ \mathsf { T } } _ { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ ; $\mathsf { C } _ { \mathrm { L } } = 6 0$ pF. 

<table><tr><td colspan="2">Parameters 1</td><td>Symbol</td><td>Minimum</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="4">Input leakage current 2,3</td><td>LRCK1, DSDB/LRCK2</td><td>\(I_{\text{in}}\)</td><td>—</td><td>±4</td><td>μA</td></tr><tr><td>SDIN1, SCLK1, DSDA/SDIN2, DSDCLK/SCLK2</td><td></td><td>—</td><td>±3</td><td>μA</td></tr><tr><td>SDA, SCL</td><td></td><td>—</td><td>±100</td><td>nA</td></tr><tr><td>INT, RESET</td><td></td><td>—</td><td>±100</td><td>nA</td></tr><tr><td colspan="2">Internal weak pull-down</td><td>—</td><td>550</td><td>2450</td><td>kΩ</td></tr><tr><td colspan="2">Input capacitance</td><td>—</td><td>—</td><td>10</td><td>pF</td></tr><tr><td colspan="2">\(\overline{\mathbf{INT}}\) current sink (\(V_{\text{OL}}=0.3 \text{ V maximum}\))</td><td>—</td><td>825</td><td>—</td><td>μA</td></tr><tr><td rowspan="4">VL Logic (non-\(I^{2}C\))</td><td>High-level output voltage (\(I_{\text{OH}}=-100 \mu\text{A}\))</td><td>\(V_{\text{OH}}\)</td><td>0.9·VL</td><td>—</td><td>V</td></tr><tr><td>Low-level output voltage</td><td>\(V_{\text{OL}}\)</td><td>—</td><td>0.1·VL</td><td>V</td></tr><tr><td>High-level input voltage</td><td>\(V_{\text{IH}}\)</td><td>0.7·VL</td><td>—</td><td>V</td></tr><tr><td>Low-level input voltage</td><td>\(V_{\text{IL}}\)</td><td>—</td><td>0.3·VL</td><td>V</td></tr><tr><td rowspan="4">VL Logic (\(I^{2}C\) only)</td><td>Hysteresis voltage (Fast Mode and Fast Mode Plus)</td><td>\(V_{\text{HYS}}\)</td><td>0.05·VL</td><td>—</td><td>V</td></tr><tr><td>Low-level output voltage</td><td>\(V_{\text{OL}}\)</td><td>—</td><td>0.2·VL</td><td>V</td></tr><tr><td>High-level input voltage</td><td>\(V_{\text{IH}}\)</td><td>0.7·VL</td><td>—</td><td>V</td></tr><tr><td>Low-level input voltage</td><td>\(V_{\text{IL}}\)</td><td>—</td><td>0.3·VL</td><td>V</td></tr><tr><td rowspan="2">HP_DETECT 4</td><td>High-level input voltage</td><td>\(V_{\text{IH}}\)</td><td>0.93·VP</td><td>—</td><td>V</td></tr><tr><td>Low-level input voltage</td><td>\(V_{\text{IL}}\)</td><td>—</td><td>2.0</td><td>V</td></tr><tr><td colspan="2">HP Detective current to VCP_FILT- 4</td><td>\(I_{\text{HP}-\text{DET}}\)</td><td>1.00</td><td>2.91</td><td>μA</td></tr><tr><td colspan="2">\(\overline{\text{RESET}}\) pulse width low</td><td>—</td><td>1000</td><td>—</td><td>μs</td></tr></table>


1.See Table 1-1 for serial and control-port power rails. 



2.Specification is per pin. 



3.Includes current through internal pull-up or pull-down resistors on pin. 



4.The HP_DETECT input circuit allows the HP_DETECT signal to be as low of a voltage as VCP_FILT– and as high as VP. Section 4.5.1 provides configuration details. 


Table 3-14. CLKOUT Characteristics 

Test conditions (unless specified otherwise): $\mathtt { G N D D } = \mathtt { G N D C P } = \mathtt { G N D A } = 0 \ V$ ; voltages are with respect to ground; ${ \mathsf { V P } } = 3 . 6 { \mathsf { V } } _ { : }$ , $\mathsf { V C P } = \mathsf { V A } = 1 . 8 \mathsf { V }$ , VL = $\mathsf { V D } = 1 . 8 \mathsf { V }$ ; $C _ { \mathrm { L } } = 6 0$ pF; PLL reference input must meet the phase-noise mask specified in Fig. 4-15; ${ \mathsf { T } } { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ ; Output jitter is measured from $1 0 0 \mathsf { H z }$ to half of the output frequency. 

<table><tr><td>Parameters</td><td>Symbol</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td><td></td></tr><tr><td rowspan="4">CLKOUT output frequency</td><td rowspan="4">fCLKOUT</td><td>2.8224</td><td>3</td><td>3.072</td><td>MHz</td><td></td></tr><tr><td>5.6448</td><td>6</td><td>6.144</td><td>MHz</td><td></td></tr><tr><td>7.5264</td><td>8</td><td>8.192</td><td>MHz</td><td></td></tr><tr><td>11.2896</td><td>12</td><td>12.288</td><td>MHz</td><td></td></tr><tr><td>CLKOUT output duty cycle</td><td>—</td><td>40</td><td>50</td><td>60</td><td>%</td><td></td></tr><tr><td>CLKOUT output TIE jitter (RMS)</td><td>CLKOUT_SRC_SEL = 01</td><td>tJIT</td><td>—</td><td>500</td><td>—</td><td>ps</td></tr></table>


Table 3-15. PLL Characteristics


Test conditions (unless specified otherwise): $\mathtt { G N D D } = \mathtt { G N D C P } = \mathtt { G N D A } = 0 \ V$ ; voltages are with respect to ground; ${ \mathsf { V P } } = 3 . 6 { \mathsf { V } }$ , VCP = VA = 1.8 V, VL = $\mathsf { V D } = 1 . 8 \mathsf { V } ;$ ; PLL reference input must meet the phase-noise mask specified in Fig. 4-15; ${ \mathsf { T } } _ { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ . 

<table><tr><td>Parameters</td><td>Symbol</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td>PLL output frequency</td><td>fout</td><td>22.5792</td><td>24</td><td>24.576</td><td>MHz</td></tr><tr><td>PLL lock time</td><td>tLock</td><td>—</td><td>620</td><td>1000</td><td>μs</td></tr></table>

Table 3-15. PLL Characteristics (Cont.) 

Test conditions (unless specified otherwise): $\mathtt { G N D D } = \mathtt { G N D C P } = \mathtt { G N D A } = 0 \vee$ $=$ ; voltages are with respect to ground; $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ , ${ \mathsf { V C P } } = { \mathsf { V A } } = 1 . 8 { \mathsf { V } } , { \mathsf { V L } }$ = $\mathsf { V D } = 1 . 8 \mathsf { V } ;$ ; PLL reference input must meet the phase-noise mask specified in Fig. 4-15; ${ \mathsf { T } } _ { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ . 

<table><tr><td>Parameters</td><td>Symbol</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="10">PLL reference clock input</td><td rowspan="10">—</td><td>—</td><td>11.2896</td><td>—</td><td>MHz</td></tr><tr><td>—</td><td>22.5792</td><td>—</td><td>MHz</td></tr><tr><td>—</td><td>12.2880</td><td>—</td><td>MHz</td></tr><tr><td>—</td><td>24.5760</td><td>—</td><td>MHz</td></tr><tr><td>—</td><td>9.6000</td><td>—</td><td>MHz</td></tr><tr><td>—</td><td>19.2000</td><td>—</td><td>MHz</td></tr><tr><td>—</td><td>12.0000</td><td>—</td><td>MHz</td></tr><tr><td>—</td><td>24.0000</td><td>—</td><td>MHz</td></tr><tr><td>—</td><td>13.0000</td><td>—</td><td>MHz</td></tr><tr><td>—</td><td>26.000</td><td>—</td><td>MHz</td></tr><tr><td>PLL reference clock input jitter</td><td>—</td><td>—</td><td>—</td><td>50</td><td>ps</td></tr></table>


Table 3-16. Crystal Characteristics


Test conditions (unless specified otherwise): GNDD $=$ GNDCP $=$ GNDA = 0 V; voltages are with respect to ground; VP = 3.6 V, VCP = VA = 1.8 V, VL = $\mathsf { V D } = 1 . 8 \mathsf { V } ;$ ; ${ \mathsf { T } } { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ 

<table><tr><td>Parameters1</td><td>Symbol</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td>Crystal oscillator frequency</td><td>fXTAL</td><td>22.57</td><td>22.5792/ 24.576</td><td>24.58</td><td>MHz</td></tr><tr><td>Crystal load capacitance</td><td>CL_XTAL</td><td>5</td><td>—</td><td>8</td><td>pF</td></tr><tr><td>Equivalent series resistance</td><td>esrXTAL</td><td>—</td><td>—</td><td>100</td><td>Ω</td></tr><tr><td>Startup time</td><td>tXTAL_pup</td><td>—</td><td>—</td><td>6.5</td><td>ms</td></tr><tr><td>Shunt capacitance</td><td>CO</td><td>—</td><td>—</td><td>0.8</td><td>pF</td></tr><tr><td>Maximum drive level</td><td>—</td><td>200</td><td>—</td><td>—</td><td>μW</td></tr></table>


1.Refer to Section 5.3 for supported crystal options. 



Table 3-17. Power-Supply Rejection Ratio (PSRR) Characteristics


Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; input test signal held low (all zero data); GNDA $=$ GNDL $=$ GNDCP $= 0$ V; voltages are with respect to ground; $\mathsf { V L } = \mathsf { V A } = \mathsf { V D } = 1 . 8 \mathsf { V }$ , ${ \mathsf { V P } } = 3 . 6$ V; When testing PSRR, PCM input test signal held low (all zero data); TA = $+ 2 5 ^ { \circ } \mathsf { C }$ ; PCM_AMUTE $= 0$ . 

<table><tr><td colspan="2">Parameter 1</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td>HPOUTx</td><td>217 Hz</td><td>—</td><td>75</td><td>—</td><td>dB</td></tr><tr><td>PSRR with 100-mVpp signal AC coupled to VA supply</td><td>1 kHz</td><td>—</td><td>75</td><td>—</td><td>dB</td></tr><tr><td>PDN_HP = 0, HP_IN_EN = 0</td><td>20 kHz</td><td>—</td><td>70</td><td>—</td><td>dB</td></tr><tr><td>HPOUTx</td><td>217 Hz</td><td>—</td><td>80</td><td>—</td><td>dB</td></tr><tr><td>PSRR with 100-mVpp signal AC coupled to VCP supply</td><td>1 kHz</td><td>—</td><td>80</td><td>—</td><td>dB</td></tr><tr><td>PDN_HP = 0, HP_IN_EN = 0</td><td>20 kHz</td><td>—</td><td>60</td><td>—</td><td>dB</td></tr><tr><td>HPOUTx</td><td>217 Hz</td><td>—</td><td>100</td><td>—</td><td>dB</td></tr><tr><td>PSRR with 100-mVpp signal AC coupled to VP supply</td><td>1 kHz</td><td>—</td><td>100</td><td>—</td><td>dB</td></tr><tr><td>PDN_HP = 0, HP_IN_EN = 0</td><td>20 kHz</td><td>—</td><td>80</td><td>—</td><td>dB</td></tr><tr><td>HPOUTx (0-dB analog gain)</td><td>217 Hz</td><td>—</td><td>80</td><td>—</td><td>dB</td></tr><tr><td>PSRR with 100-mVpp signal AC coupled to VCP supply</td><td>1 kHz</td><td>—</td><td>80</td><td>—</td><td>dB</td></tr><tr><td>PDN_HP = 1, HP_IN_EN = 1, RL = 32 Ω</td><td>20 kHz</td><td>—</td><td>60</td><td>—</td><td>dB</td></tr><tr><td>HPOUTx (0-dB analog gain)</td><td>217 Hz</td><td>—</td><td>100</td><td>—</td><td>dB</td></tr><tr><td>PSRR with 100-mVpp signal AC coupled to VP supply</td><td>1 kHz</td><td>—</td><td>100</td><td>—</td><td>dB</td></tr><tr><td>PDN_HP = 1, HP_IN_EN = 1, RL = 32 Ω</td><td>20 kHz</td><td>—</td><td>80</td><td>—</td><td>dB</td></tr></table>


1.PSRR test configuration: Typical PSRR can vary by approximately 6 dB below the indicated values. 


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/de76928092904ef554d4c9a434c197e0ebb5279a0339ac0f0a068a349e992606.jpg)


Table 3-18. DC Characteristics 

Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; GNDD $=$ GNDA $=$ GNDCP = 0 V; all voltages with respect to ground. 

<table><tr><td colspan="2">Parameters</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="6">VCP_FILT (No load connected to HPOUTx)EXT_VCPFILT = 0</td><td rowspan="4">VP_LDO Mode VCP_FILT+ pin (HV_EN = 1)VCP_FILT+ pin (HV_EN = 0)VCP_FILT- pin (HV_EN = 1)VCP_FILT- pin (HV_EN = 0)</td><td>—</td><td>3.0</td><td>—</td><td>V</td></tr><tr><td>—</td><td>2.6</td><td>—</td><td>V</td></tr><tr><td>—</td><td>-3.0</td><td>—</td><td>V</td></tr><tr><td>—</td><td>-2.6</td><td>—</td><td>V</td></tr><tr><td rowspan="2">VCP Mode VCP_FILT+ pinVCP_FILT- pin</td><td>—</td><td>VCP</td><td>—</td><td>V</td></tr><tr><td>—</td><td>-VCP</td><td>—</td><td>V</td></tr><tr><td>-VA</td><td>-VA pin</td><td>—</td><td>- VA</td><td>—</td><td>V</td></tr><tr><td rowspan="2">Alternate headphone pathswitch-on characteristicsPDN_HP = 1, HP_IN_EN = 1</td><td>On-resistance</td><td>—</td><td>0.4</td><td>—</td><td>Ω</td></tr><tr><td>rON matching between channels</td><td>—</td><td>0.05</td><td>—</td><td>Ω</td></tr><tr><td rowspan="5">Other DC characteristics</td><td>FILT+ voltage</td><td>—</td><td>-0.35</td><td>—</td><td>V</td></tr><tr><td>FILT- voltage</td><td>—</td><td>0.35</td><td>—</td><td>V</td></tr><tr><td>HP output current limiter on threshold.</td><td>—</td><td>120</td><td>160</td><td>mA</td></tr><tr><td>VD power-onreset threshold(VPOR)Up</td><td>—</td><td>1.15</td><td>—</td><td>V</td></tr><tr><td>Down</td><td>—</td><td>0.950</td><td>—</td><td>V</td></tr></table>


Table 3-19. Power Consumption


Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; $\mathsf { G N D A } = \mathsf { G N D C P } = \mathsf { G N D D } \mathsf { D } = 0 \mathsf { V }$ ; voltages are with respect to ground; performance data taken with $\mathsf { V A } = \mathsf { V C P } = \mathsf { V D } = \mathsf { V L } = 1 . 8 \mathsf { V }$ ; $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ ; $\mathsf { T } _ { \mathsf { A } } = + 2 5 ^ { \circ } \mathsf { C }$ ; ASP_SPRATE $= 0 0 0 ^ { \cdot }$ 1(44.1-kHz mode); MCLK_INT= 1 (22.5792 MHz); MCLK_SRC_SEL $= 0 0$ ; $+ 1 mathsf { d } \mathsf { B } \_ \mathsf { E } \mathsf { N } = 1$ ; all other fields are set to defaults; no signal on any input; control port inactive; all serial ports are set to Slave or Master Mode as indicated, input clock/data are held low unless active; test load is $\mathsf { R } _ { \mathsf { L } } = 3 2 \Omega$ and $\mathsf C _ { \mathsf { L } } = \mathsf 1$ nF for HPOUTx; measured values include currents consumed by the DAC and do not include current delivered to external loads unless specified otherwise (e.g., from HPOUTx outputs); see Fig. 2-1. 

<table><tr><td rowspan="2" colspan="3">Use Cases</td><td colspan="6">Typical Current (μA)</td><td rowspan="2">Total Power (μW)</td></tr><tr><td>POUT</td><td>iVCP</td><td>iVA</td><td>iVD</td><td>iVL</td><td>iVP</td></tr><tr><td>1</td><td colspan="2">Off 1</td><td>—</td><td>0</td><td>0</td><td>0</td><td>0</td><td>6</td><td>11</td></tr><tr><td>2</td><td colspan="2">Standby 2</td><td>—</td><td>0</td><td>0</td><td>256</td><td>0</td><td>32</td><td>576</td></tr><tr><td rowspan="2">3</td><td>A</td><td rowspan="2">Playback External MCLK = 22.5792 MHz, I2S/DoP Stereo HPOUT</td><td>Quiescent 3</td><td>3808</td><td>7835</td><td>2786</td><td>0</td><td>28</td><td>26074</td></tr><tr><td>C</td><td>0.1mW</td><td>12363</td><td>7862</td><td>2004</td><td>40</td><td>32</td><td>40199</td></tr><tr><td>4</td><td colspan="2">Alternate HP path stereo HPIN enabled 4</td><td>Quiescent</td><td>32</td><td>0</td><td>186</td><td>0</td><td>65</td><td>625</td></tr></table>


1.Off configuration: Clock/data lines held low; $\overline { { \mathsf { R E S E T } } } = \mathsf { L O W }$ ; $V _ { \mathsf { A } } = \mathsf { V } _ { \mathsf { D } } = \mathsf { V } _ { \mathsf { L } } = 0 \mathsf { V }$ V, ${ \mathsf { V C P } } = 0$ V, $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ . 



2.Standby configuration: Clock/data lines held low; RESET = HIGH; $\mathsf { V } \mathsf { A } = \mathsf { V } \mathsf { D } = \mathsf { V } \mathsf { L } = 1 . 8 \mathsf { V }$ , VCP = 1.8 V, $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ ; HP_DETECT_CTRL = 11 (enabled); HPDETECT_PLUG_INT_MASK=0 (unmasked); PDN_XTAL $= 1$ , MCLK_SRC_SEL $= 1 0$ (RCO selected as MCLK source). 



3.Quiescent configuration: data lines held low; RESET $=$ HIGH; $\mathsf { V A } = 1 . 8 \ : \mathsf { V }$ , $\mathsf { V D } = \mathsf { V L } = \mathsf { V C P } = 1 . 8 \mathsf { V }$ , ${ \mathsf { V P } } = 3 . 6 { \mathsf { V } } .$ . Serial port, I2S/DoP Mode (ASP and SDIN, ASP_ $\mathsf { M } / \mathsf { S } \mathsf { b } = 0$ ; PDN_XTAL $= 1$ . 



4.Quiescent configuration: PDN_XTAL $= 1$ ; MCLK_SRC_SEL $= 1 0$ (RCO selected as MCLK source); alternate headphone path (PDN_HP = 1, HPOUT_ CLAMP $= 1$ , HP_IN_EN = 1, HP_IN_LP = 1); data lines held low; RESET $=$ HIGH; $\mathsf { V A } = 1 . 8 \ : \mathsf { V }$ , $\mathsf { V D } = \mathsf { V L } = \mathsf { V C P } = 1 . 8 \mathsf { V }$ , $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ . 



Table 3-20. Serial-Port Interface Characteristics


Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; $\mathsf { G N D A } = \mathsf { G N D C P } = \mathsf { G N D D } \mathsf { D } = 0 \mathsf { V }$ ; voltages are with respect to ground; parameters can vary with VL; typical performance data taken with $\mathsf { V L } = \mathsf { V D } = \mathsf { V A } = \mathsf { V C P } = 1 . 8 \mathsf { V } , \mathsf { V P } = 3 . 6 \mathsf { V } ;$ $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ min/max performance data taken with VL = 1.8 V; $\mathsf { V D } = \mathsf { V A } = \mathsf { V C P } = 1 . 8 \mathsf { V }$ , ${ \mathsf { V P } } = 3 . 6 { \mathsf { V } } ;$ ${ \mathsf { T } } _ { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ ; $\mathsf C _ { \mathrm { L } } = 6 0$ pF; Logic $0 =$ ground, Logic $\uparrow = \mathsf { V L }$ ; output timings are measured at $\mathsf { V } _ { \mathsf { O L } }$ and $\mathsf { V } _ { \mathsf { O H } }$ thresholds (see Table 3-13). 

<table><tr><td colspan="2">Parameters 1,2,3,4</td><td>Symbol</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td colspan="2">FSYNC frame rate</td><td>Fs</td><td colspan="3">(See Section 4.9.5)</td><td>kHz</td></tr><tr><td colspan="2">FSYNC high period 5</td><td>tHI:FSYNC</td><td>1/fSCLK</td><td>—</td><td>(n-1)/fSCLK</td><td>s</td></tr><tr><td rowspan="6">Master Mode</td><td>FSYNC duty cycle xSP_5050 = 1</td><td>—</td><td>45</td><td>—</td><td>55</td><td>%</td></tr><tr><td>FSYNC delay time after SCLK launching edge 6</td><td>tD:CLK-FSYNC</td><td>—</td><td>—</td><td>10</td><td>ns</td></tr><tr><td>SCLK frequency fsCLK</td><td>—</td><td>—</td><td>—</td><td>fMCLK_INT</td><td>MHz</td></tr><tr><td>SCLK high period 7</td><td>tHI:SCLK</td><td>1/(2*fSCLK) - 1/fMCLK_INT</td><td>—</td><td>1/(2*fSCLK) + 1/fMCLK_INT</td><td>ns</td></tr><tr><td>SDIN setup time before SCLK latching edge 6</td><td>tSU:SDI</td><td>10</td><td>—</td><td>—</td><td>ns</td></tr><tr><td>SDIN hold time after SCLK latching edge 6</td><td>tH:SDI</td><td>5</td><td>—</td><td>—</td><td>ns</td></tr></table>


Table 3-20. Serial-Port Interface Characteristics (Cont.)


Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; $\mathsf { G N D A } = \mathsf { G N D C P } = \mathsf { G N D D } \mathsf { D } = 0 \mathsf { V }$ ; voltages are with respect to ground; parameters can vary with VL; typical performance data taken with $\mathsf { V L } = \mathsf { V D } = \mathsf { V A } = \mathsf { V C P } = 1 . 8 \mathsf { V }$ , ${ \mathsf { V P } } = 3 . 6 { \mathsf { V } } ;$ ; min/max performance data taken with VL = 1.8 V; $\mathsf { V D } = \mathsf { V A } = \mathsf { V C P } = 1 . 8 \mathsf { V }$ V, ${ \mathsf { V P } } = 3 . 6 { \mathsf { V } } ;$ ; ${ \mathsf { T } } _ { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ ; $\mathsf C _ { \mathrm { L } } = 6 0$ pF; Logic $0 =$ ground, Logic $\uparrow = \mathsf { V L }$ ; output timings are measured at $V _ { \mathrm { O L } }$ and $\mathsf { V } _ { \mathsf { O H } }$ thresholds (see Table 3-13). 

<table><tr><td colspan="2">Parameters 1,2,3,4</td><td>Symbol</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td rowspan="7">Slave Mode</td><td>FSYNC setup time before SCLK latching edge 6</td><td>tsU:FSYNC</td><td>10</td><td>—</td><td>—</td><td>ns</td></tr><tr><td>FSYNC hold time after SCLK latching edge 6</td><td>tH:FSYNC</td><td>5</td><td>—</td><td>—</td><td>ns</td></tr><tr><td>SCLK frequency</td><td>fSCLK</td><td>—</td><td>—</td><td>24.58</td><td>MHz</td></tr><tr><td>SCLK high period</td><td>tHI:SCLK</td><td>16</td><td>—</td><td>—</td><td>ns</td></tr><tr><td>SCLK low period</td><td>tLO:SCLK</td><td>16</td><td>—</td><td>—</td><td>ns</td></tr><tr><td>SDIN setup time before SCLK latching edge 8</td><td>tsU:SDI</td><td>10</td><td>—</td><td>—</td><td>ns</td></tr><tr><td>SDIN hold time after SCLK latching edge 6</td><td>tH:SDI</td><td>5</td><td>—</td><td>—</td><td>ns</td></tr></table>


1.Output clock frequencies follow the internal master clock (MCLK_INT) frequency proportionally. Any deviation of the clock source from the nominal supported rates are directly imparted to the output clock rate by the same factor (e.g., $+ 1 0 0$ -ppm offset in the frequency of MCLK_INT becomes a $+ 1 0 0$ -ppm offset in LRCK/FSYNC and SCLK). 



2.I2S interface timing 


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/bb43bc8349a78fb2a901a7e84d8ce41912c5d42f588aaaf11b91a447c27e9c6c.jpg)



3.TDM interface timing (shown with xSP_FSD $=$ 010, xSP_LCHI = 1)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/61f0c2ef68d2841d26ce86ad95b82dcc9887e547358906df42f3e06afac8df1b.jpg)


4.Applies to Master and Slave Modes, unless specified otherwise. 

5.Maximum LRCK duty cycle is equal to frame length, in SCLK periods, minus 1. Maximum duty cycle occurs when LRCK high (xSP_LCHI) is set to 768 SCLK periods and LRCK period (xSP_LCPR) is set to 769 SCLK periods. 

6.Data may be latched/launched on either the rising or falling edge of SCLK. 

7.SCLK duty cycle in Master Mode depends on Master Mode clock configuration, and can vary by up to 1 MCLK_INT period. 

8.Data is latched/launched on the rising or falling edge of SCLK as determined by xSP_SCPOL_OUT, xSP_SCPOL_IN, and xSP_FSD bits. See the SCLK launching specs in Table 3-20. 


Table 3-21. DSD Switching Characteristics


Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; $\mathsf { G N D A } = \mathsf { G N D C P } = \mathsf { G N D D } \mathsf { D } = 0 \mathsf { V }$ ; voltages are with respect to ground; parameters can vary with VL; typical performance data taken with ${ \mathsf { V L } } = { \mathsf { V D } } = { \mathsf { V A } } = { \mathsf { V C P } } = 1 . 8 { \mathsf { V } } ,$ $\mathsf { V P } = 3 . 6 \ : \mathsf { V }$ ; min/max performance data taken with VL = 1.8 V; $\mathsf { V D } = \mathsf { V A } = \mathsf { V C P } = 1 . 8 \mathsf { I }$ V, ${ \mathsf { V P } } = 3 . 6 { \mathsf { V } } ;$ ; ${ \mathsf { T } } _ { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ ; $\mathsf C _ { \mathrm { L } } = 6 0$ pF; Logic $0 =$ ground, Logic $\uparrow = \mathsf { V L }$ ; output timings are measured at $\mathsf { V } _ { \mathsf { O L } }$ and $\mathsf { V } _ { \mathsf { O H } }$ thresholds (see Table 3-13). 

<table><tr><td>Parameter 1,2</td><td>Symbol</td><td>Minimum</td><td>Typical</td><td>Maximum</td><td>Units</td></tr><tr><td>DSDCLK duty cycle</td><td>—</td><td>40</td><td>—</td><td>60</td><td>%</td></tr><tr><td>DSDCLK pulse width low</td><td>tSCLKL</td><td>40</td><td>—</td><td>—</td><td>ns</td></tr><tr><td>DSDCLK pulse width high</td><td>tSCLKH</td><td>40</td><td>—</td><td>—</td><td>ns</td></tr><tr><td>DSDCLK frequency (64× oversampled)</td><td>—</td><td>1.024</td><td>2.8224</td><td>fMCLK_INT/8</td><td>MHz</td></tr><tr><td>(128× oversampled)</td><td></td><td>2.048</td><td>5.6448</td><td>fMCLK_INT/4</td><td>MHz</td></tr><tr><td>(256× oversampled)</td><td></td><td>4.096</td><td>11.2897</td><td>fMCLK_INT/2</td><td>MHz</td></tr><tr><td>DSDA/DSDB valid to DSDCLK rising setup time</td><td>tSDLRS</td><td>10</td><td>—</td><td>—</td><td>ns</td></tr><tr><td>DSDCLK rising to DSDA or DSDB hold time</td><td>tSDH</td><td>10</td><td>—</td><td>—</td><td>ns</td></tr><tr><td>DSD clock to data transition (Phase Modulation Mode) (64× oversampled)</td><td>tDPM</td><td>-20</td><td>—</td><td>20</td><td>ns</td></tr><tr><td>(128× oversampled)</td><td></td><td>-10</td><td>—</td><td>10</td><td>ns</td></tr></table>

1.Serial audio input interface timing 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/0662493ed6ca6972f5dbb1a50e266f2c1bfdb70b41926e8792b2a4d3997050c8.jpg)


2.Phase modulation mode serial audio input interface timing 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/3f6c9957c2e37979241c9c47012ec5fc595772aaaf234c327a1053e35edf615d.jpg)


# Table 3-22. I2C Slave Port Characteristics

Test conditions (unless specified otherwise): Fig. 2-1 shows typical connections; Inputs: $\mathtt { G N D A } = \mathtt { G N D L } = \mathtt { G N D C P } = 0 \vee$ ; all voltages with respect to ground; $\mathsf { V L } = 1 . 8 \mathsf { V }$ ; inputs: Logic $0 = \mathsf { G N D A } = 0 \vee$ , Logic $\uparrow = \mathsf { V L }$ ; ${ \mathsf { T } } _ { \mathsf { A } } = + 2 5 ^ { \circ } { \mathsf { C } }$ ; SDA load capacitance equal to maximum value of $C _ { \mathsf { B } } = 4 0 0$ pF; minimum SDA pull-up resistance, $\mathsf { R } _ { \mathsf { P } ( \mathsf { m i n } ) } .$ 1 Table 3-1 describes some parameters in detail. All specifications are valid for the signals at the pins of the CS43131 with the specified load capacitance. 

<table><tr><td colspan="2">Parameter 2</td><td>Symbol 3</td><td>Minimum</td><td>Maximum</td><td>Units</td></tr><tr><td colspan="2">SCL clock frequency</td><td>fSCL</td><td>—</td><td>1000</td><td>kHz</td></tr><tr><td colspan="2">Clock low time</td><td>tLOW</td><td>500</td><td>—</td><td>ns</td></tr><tr><td colspan="2">Clock high time</td><td>tHIGH</td><td>260</td><td>—</td><td>ns</td></tr><tr><td colspan="2">Start condition hold time (before first clock pulse)</td><td>tHDST</td><td>260</td><td>—</td><td>ns</td></tr><tr><td colspan="2">Setup time for repeated start</td><td>tSUST</td><td>260</td><td>—</td><td>ns</td></tr><tr><td rowspan="3">Rise time of SCL and SDA</td><td>Standard Mode</td><td>tRC</td><td>—</td><td>1000</td><td>ns</td></tr><tr><td>Fast Mode</td><td></td><td>—</td><td>300</td><td>ns</td></tr><tr><td>Fast Mode Plus</td><td></td><td>—</td><td>120</td><td>ns</td></tr><tr><td rowspan="3">Fall time of SCL and SDA</td><td>Standard Mode</td><td>tFC</td><td>—</td><td>300</td><td>ns</td></tr><tr><td>Fast Mode</td><td></td><td>—</td><td>300</td><td>ns</td></tr><tr><td>Fast Mode Plus</td><td></td><td>—</td><td>120</td><td>ns</td></tr><tr><td colspan="2">Setup time for stop condition</td><td>tSUSP</td><td>260</td><td>—</td><td>ns</td></tr><tr><td colspan="2">SDA setup time to SCL rising</td><td>tSUD</td><td>50</td><td>—</td><td>ns</td></tr><tr><td colspan="2">SDA input hold time from SCL falling 4</td><td>tHDDI</td><td>0</td><td>—</td><td>ns</td></tr><tr><td rowspan="3">Output data valid (Data/Ack) 5</td><td>Standard Mode</td><td>tVDDO</td><td>—</td><td>3450</td><td>ns</td></tr><tr><td>Fast Mode</td><td></td><td>—</td><td>900</td><td>ns</td></tr><tr><td>Fast Mode Plus</td><td></td><td>—</td><td>450</td><td>ns</td></tr><tr><td colspan="2">Bus free time between transmissions</td><td>tBUF</td><td>500</td><td>—</td><td>ns</td></tr><tr><td rowspan="2">SDA bus capacitance</td><td>SCL frequency = 1 MHz, VL = 1.8 V</td><td>CB</td><td>—</td><td>340</td><td>pF</td></tr><tr><td>SCL frequency ≤ 400 kHz</td><td></td><td>—</td><td>400</td><td>pF</td></tr><tr><td>SCL/SDA pull-up resistance 1</td><td>VL = 1.8 V</td><td>RP</td><td>350</td><td>—</td><td>Ω</td></tr><tr><td colspan="2">Pulse width of spikes to be suppressed</td><td>tPS</td><td>—</td><td>50</td><td>ns</td></tr><tr><td colspan="2">Switching time between RCO and MCLK_INT 6</td><td>—</td><td>150</td><td>—</td><td>μs</td></tr><tr><td colspan="2">Power-up delay (delay before I2C can communicate after RESET released)</td><td>tPUD</td><td>1500</td><td>—</td><td>μs</td></tr></table>


1.The minimum $\mathsf { R } _ { \mathsf { P } }$ value (resistor shown in Fig. 2-1) is determined by using the maximum level of VL, the minimum sink current strength of its respective output, and the maximum low-level output voltage $V _ { \mathrm { O L } }$ . The maximum $\mathsf { R } _ { \mathsf { P } }$ value may be determined by how fast its associated signal must transition (e.g., the lower the value of $\mathsf { R } _ { \mathsf { P } }$ , the faster the $\mathsf { I 2 C }$ bus is able to operate for a given bus load capacitance). See I²C bus specification referenced in Section 13. 



2.All timing is relative to thresholds specified in Table 3-13, $\mathsf { V } _ { \parallel }$ and $\mathsf { V } _ { \mathsf { H } }$ for input signals, and $V _ { \mathrm { O L } }$ and $\mathsf { V } _ { \mathsf { O H } }$ for output signals. 


3.I²C control-port timing 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/a517d4745fcc8e5b1fb0677447dd806c104f4f159b7162cee9bd5cf1baff6369.jpg)


4.Data must be held long enough to bridge the transition time, tF, of SCL. 

5.Time from falling edge of SCL until data output is valid. 

6.Upon setting MCLK_SRC_SEL and sending the I2C stop condition, the switching of RCO and other MCLK_INT sources occurs. A least wait time as specified is required after changing MCLK_SRC_SEL and sending the I2C stop condition before the next I2C transaction is initiated. 

# 4 Functional Description

This section describes the general theory of operation of the CS43131, tracing the signal and control flow through the various blocks within the device. It comprises the following sections: 

Section 4.1, “Overview” 

Section 4.2, “Analog Outputs” 

Section 4.3, “Class H Amplifier Output” 

Section 4.4, “Alternate Headphone Inputs” 

Section 4.5, “Headphone Presence Detect and Output Load Detection” 

Section 4.6, “Clocking Architecture” 

Section 4.7, “Clock Output and Fractional-N PLL” 

Section 4.8, “Filtering Options” 

Section 4.9, “Audio Serial Port (ASP)” 

Section 4.10, “DSD Interface” 

Section 4.11, “DSD and PCM Mixing” 

Section 4.12, “Standard Interrupts” 

Section 4.13, “Control Port Operation” 

Section 4.14, “Programmable Filter” 

# 4.1 Overview

# 4.1.1 Analog Outputs

The analog output block includes separate pseudodifferential headphone Class H amplifiers output. An on-chip inverting charge pump creates a positive and negative voltage equal to the input, allowing an adaptable, full-scale output swing centered around ground. The resulting internal amplifier supply can be $\pm { \mathsf { V C P } }$ , or $\pm \mathsf { V P } .$ _LDO (either $\pm 3 . 0 \lor$ with HV_EN $= 1$ or $\pm 2 . 6 \lor$ with $\mathsf { H V \_ E N } = 0$ ). 

The inverting architecture eliminates the need for large DC-blocking capacitors and allows the amplifier to deliver more power to HP loads at lower supply voltages. This adaptive power supply scheme converts traditional Class AB amplifiers into more power-efficient Class H amplifiers. 

# 4.1.2 Alternate Headphone Inputs

The alternate headphone inputs provide an integrated selectable path to interface between the system codec output and the headphone connector, which allows for lower-power operation in applications such as voice or compressed music playback. These inputs eliminate the need for an external audio switch and prevent the high-fidelity headphone outputs of CS43131 from degradation by the external audio switch. 

# 4.1.3 Headphone Detection

The CS43131 detects the presence of a headphone and notifies the application processor to wake up through an interrupt event. 

# 4.1.4 Headphone Impedance Measurement

The CS43131 detects headphone impedance information at low frequencies, which can be used to adjust the system properly to accommodate different load conditions. One example is to adjust signal chain gain to avoid distortion. 

The CS43131 also provides impedance measurement functions to evaluate the headphone load within $^ { 2 0 } H z$ to $2 0 ~ \mathsf { k H z }$ . A specific frequency is selected and the impedance measurement process is initiated by setting the register. Through a series of interrupt events, the CS43131 notifies application processor to retrieve the impedance information after completion. 

# 4.1.5 Audio Interfaces and Supported Formats

There are two serial input ports on the CS43131, the audio serial port (ASP) and the auxiliary serial port (XSP). The ASP on the CS43131 supports I2S, TDM, and DoP (DSD over PCM) formats up to a 384-kHz sample rate. The XSP on the CS43131 supports the DoP format up to a 352.8-kHz sample rate. 

The CS43131 also has a dedicated DSD interface to support up to a 256•Fs DSD stream. The DSD interface shares pins with the XSP. 

# 4.1.6 System Clocking

The CS43131 internal MCLK can be sourced from three options: 

Direct MCLK/crystal mode. The internal MCLK is provided through XTI/MCLK pin directly or generated by crystal oscillator. 

PLL mode. A PLL reference CLK is provided by externally through XTI/MCLK. The PLL is configured, and output is used as the internal MCLK. 

RCO mode. An internal RCO is used as the internal MCLK. Note that HPIN input path is the only supported audio playback feature in this mode for optimized power consumption. This mode can also support HP detection and I2C communication. DAC playback and headphone impedance measurement functions are not supported. 

The clock output is provided for audio applications that require high quality audio rate system clock. This clock output can be sourced from the following two options: 

• The clock generated by the CS43131 crystal oscillator. 

• Output of the internal Fractional-N PLL that refers to MCLK input. See Section 4.7.1 for supported frequencies. 

The internal MCLK is used to generate serial port clocks. See Table 4-6 for supported LRCK combinations. 

# 4.1.7 System Interrupts

The CS43131 includes an open-drain interrupt output (INT pin). Interrupt mask registers control whether an event associated with an interrupt status/mask bit pair triggers the assertion of INT. All types of interrupt are described in Section 4.11. 

# 4.1.8 System Reset

The CS43131 offers two types of reset options: 

Asserting RESET. If RESET is asserted, all registers and state machines are immediately set to their default values/ states. No operation can begin until RESET is deasserted. Before normal operation can begin, RESET must be asserted at least once after the VP supply is first brought up. 

• Power-on reset (POR). If the VD supply is lower than the POR threshold specified in Table 3-18, all registers and state machines are set to their default values/states. The POR releases the reset when the VD supply goes above the POR threshold. When the VD supply is turned on, the VL and VA supplies must also be turned on at the same time. 

# 4.1.9 Power Down

The CS43131 has a register to power down individual components on the chip. Before any change can be applied to an individual component (except PLL), the block must be powered down first. For the PLL, changes can be applied after PLL_ START is cleared. 

The PDN_HP bit is responsible for enabling or disabling the signal chain playback operation. Setting PDN_HP disables signal chain playback operation. All the necessary components for playback operation need to be powered up and configured properly before PDN_HP is cleared. PDN_HP needs to be set before making any changes to the playback signal chain setup, except the following functions: 

• Volume and mute related functions 

• PCM filter settings (see Section 7.5.2) 

Before ASP, XSP, or DSDIF can be safely powered down, PDN_HP must be asserted, and PDN_DONE_INT must be present. For XTAL or PLL used as the source of internal MCLK, PDN_HP needs to be set first and MCLK source needs to be properly switched away before PDN_XTAL or PDN_PLL is set. If PLL output is only used as the source of CLKOUT, PDN_PLL can be set without PDN_HP being asserted. If the steps described above are not followed, the CS43131 enters an unresponsive state. 

PDN_CLKOUT does not require PDN_HP to be set before it is enabled. 

PDN_HP should be set before using headphone input path and load detection function. Refer to the functional description of these two components for further details. 

Recommended power-up and power-down sequences can be found in the Section 5.2. 

# 4.2 Analog Outputs

The CS43131 provides an analog output that is derived from the digital audio input ports. This section describes the general flow of the analog outputs. 

# 4.2.1 Analog Output Signal Flow

The CS43131 signal flow is shown in Fig. 4-1. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/0ea10fcf32c7f5f948ccf3994c2c85eb5cefed0caf78ca7eeedf68ed29ca8690.jpg)



Figure 4-1. Analog Output Signal Flow


The CS43131 has 4 settings of full scale voltage, which are determined by OUT_FS[1:0]. When OUT_FS[1:0] = 11 and $\mathsf { H V \_ E N } = 1$ , the +1dB_EN bit can boost the output voltage to $2 \ : \forall _ { \mathrm { r m s } }$ . In any other setting combination of OUT_FS[1:0] and HV_EN, the +1dB_EN bit is ignored. The proper full scale voltage must be set first, and the digital volume settings is used to control signal levels. 

The CS43131 digital volume control allows independent control of the signal level in 1/2 dB increments from 0 dB (0b0000 0000) to –127 dB (0b1111 1110) by using x_VOLUME_y (where $" \times "$ is either PCM or DSD; "y" is either A or B) register. When the x_VOL_BEQA bit is set, both volumes can be changed simultaneously using x_VOLUME_A). The volume changes are implemented as dictated by PCM_SZC[1:0] and DSD_SZC in the signal control register (see Section 7.4.3 and Section 7.5.5). If soft ramping is enabled, gain and attenuation changes are carried out by incrementally changing the volume level in 1/8-dB steps, from the previous level to the new level. For PCM, when PCM_SZC[1:0] = 2, the volume level changes at an approximate rate of 1 dB/ms. The volume level also changes at a rate of 1 dB/ms for DSD. Both channels can be inverted independently by setting the INV_A and INV_B bits. Both channels can be swapped by setting the x_SWAP_CHAN bit. Channel A content can be copied to channel B by setting the x_COPY_CHAN bit. Mono mode can be enabled with proper setting of these bits. 

The CS43131 provides individual ramp-up and ramp-down control options (from the global soft ramp settings) for two specific scenarios. The PCM_RAMP_DOWN bit is for the scenario when the interpolation filter configuration switches (as configured by the PCM Filter Option register) during PCM playback. DSD_RAMP_UP bit is for the scenario when DSD playback recovers from detected DSD stream errors. Refer to each individual register description for setting details. 

The CS43131 can mute both channels simultaneously or independently. Also, it can auto-mute on both PCM stream and DSD stream when mute pattern is identified (defined in PCM_AMUTE and DSD_AMUTE). Additional signal and mute control options can be found in Section 7.4.3 and Section 7.5.5. 

The CS43131 has an independent set of controls for the DSD processor path as shown in Fig. 4-1. The DSD processor also offers the control bit SIGCTL_DSDEQPCM, which maps the PCM_x setting to DSD_x setting, once enabled. As a result, some of the DSD_x register settings are ignored. The registers affected are DSD_RAMP_UP, DSD_VOL_BEQA, DSD_SZC, DSD_AMUTE, DSD_AMUTE_BEQA, DSD_MUTE_A, DSD_MUTE_B, DSD_INV_A, DSD_INV_B, DSD_ SWAP_CHAN, and DSD_COPY_CHAN. Refer to Section 7.4.1–Section 7.4.7 for control register details. 

# 4.2.2 Wideband Flatness Mode

The CS43131 specifically optimizes for wideband flatness playback, which is enabled by PCM_WBF_EN bit. This mode should only be enabled when PCM plays back at 192 kHz. When operating in other speeds or modes, this bit should be properly disabled. If wideband flatness mode enabled, the filter spec complies to Table 3-10. There is no option for filter roll-off or phase response in this mode. NOS filter mode should be disabled for proper operation. Note that wideband flatness mode can only be enabled or disabled when PDN_HP is set. 

# 4.2.3 Mono Mode

The CS43131 supports mono (differential) mode playback. Mono mode allows driving a differential interconnect such as a XLR connector or implementing a stereo differential headphone utilizing two CS43131 devices. Fig. 2-2 shows a typical connection of the CS43131 to a XLR connector in mono mode. 

# 4.3 Class H Amplifier Output


Fig. 4-2 shows the Class H operation.


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/e3ce0017a35ab1aeef4ffceaba10daba61d7d024724c389eca5bc07e242dbaf2.jpg)



Figure 4-2. Class H Operation


The CS43131 headphone output amplifiers use Cirrus Logic two-mode Class H technology. This technology maximizes operating efficiency of the typical Class AB amplifier while maintaining high performance. In a Class H amplifier design, the rail voltages supplied to the amplifier vary with the needs of the music passage that is being amplified. This prevents unnecessarily wasting energy during low power passages of program material or when the program material is played back at a low volume level. 

The internal charge pump, which creates the rail voltages for the headphone amplifiers, is the central component of the two-mode Class H technology implemented in the CS43131. The charge pump receives its input voltage from the voltage present on the VCP or VP pin. From this input voltage, the charge pump creates the differential rail voltages supplied to the amplifier output stages. The charge pump can supply two sets of differential rail voltages: ±VCP and ±VP_LDO. 

HV_EN setting, as shown in Fig. 4-3, determines the VP_LDO voltage as shown in Table 4-1. HV_EN = 1 setting is required to support the 1.7-V full-scale voltage for a 600- load and above. In this setting, minimum VP is required to be higher than $3 . 3 \lor$ , and any load below 600  is not supported. When HV_EN = 0, the max output voltage is 1.4-V RMS full-scale voltage. In this setting, minimum VP is required to be higher than $\textsf { 3 V }$ , and the full headphone load range is supported. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/625dac3bbc087c2025a1fa88e40a359cc67e5a7965f3a1bc508ad13fc139b82e.jpg)



Figure 4-3. Internal LDO Configuration



Table 4-1. VP_LDO Voltage Per HV_EN Setting


<table><tr><td>HV_EN</td><td>VP_LDO Voltage</td></tr><tr><td>0</td><td>2.6 V</td></tr><tr><td>1</td><td>3.0 V</td></tr></table>

Table 4-2 shows the nominal signal and volume level ranges when the output is set to the adapt modes explained in Section 4.3.1. If the signal level is greater than the maximum value of this range, then clipping can occur. 


Table 4-2. Class H Supply Modes


<table><tr><td>Mode</td><td>Class H Supply Level</td><td>Signal 1 or Volume Level Range 2,3,4</td></tr><tr><td>0</td><td>±VP_LDO V, internally regulated from VP</td><td>≥ -11 dB</td></tr><tr><td>1</td><td>±VCP</td><td>&lt; -11 dB</td></tr></table>


1.In adapt-to-signal, the volume level ranges are approximations but are within –0.5 dB from the values shown. 



2.Relative to digital full scale with output gain set to 0 dB. 



3.In fixed modes, clipping can occur if the signal level exceeds the maximum of this range due to setting the amplifier’s supply too low. 



4.Thresholds shown are nominal for a 16-Ω stereo load. 


# 4.3.1 Power Supply Control Options

This section describes the two types of operation: standard Class AB and adapt-to-output signal. The set of rail voltages supplied to the amplifier output stages depends on the ADPT_PWR (see p. 131) setting. 

# 4.3.1.1 Standard Class AB Operation (ADPT_PWR = 001 or 010)

If ADPT_PWR is set to 001 or 010, the rail voltages supplied to the amplifiers are held to ±VP_LDO or ±VCP, respectively. The rail voltages supplied to the output stages are held constant, regardless of the output signal level. The CS43131 amplifiers simply operate in a traditional Class AB configuration. 

# 4.3.1.2 Adapt-to-Output Signal (ADPT_PWR $\equiv$ 111)

If ADPT_PWR is set to 111, the rail voltage sent to the amplifiers is based solely on whether the signal sent to the amplifiers would cause the amplifiers to clip when operating on the lower set of rail voltages at certain threshold values. 

• If it would cause clipping, the control logic instructs the charge pump to provide the next higher set of rail voltages to the amplifiers. 

If it would not cause clipping, the control logic instructs the charge pump to provide the lower set of rail voltages to the amplifiers, eliminating the need to advise the CS43131 of volume settings external to the device. 

# 4.3.2 Power-Supply Transitions

Charge-pump transitions from the lower to the higher set of rail voltages occur on the next FLYN/FLYP clock cycle. Despite the system’s fast response time, the VCP_FILT pin’s capacitive elements prevent rail voltages from changing instantly. Instead, the rail voltages ramp up from the lower to the higher supply, based on the time constant created by the output impedance of the charge pump and the capacitor on the VCP_FILT pin (the transition time is approximately $2 0 \mu \mathsf { s } )$ . 

Fig. 4-4 shows Class H supply switching. During this charging transition, a high dv/dt transient on the inputs may briefly clip the outputs before the rail voltages charge to the full higher supply level. This transitory clipping has been found to be inaudible in listening tests. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/3faef4187d7798aeedc5716e43aca11ec13e8bbf82587bea05efdfdeaabac130.jpg)



Figure 4-4. VCP_FILT Transitions


When the charge pump transitions from the lower to higher set or rail voltage, there is no delay associated with the transition. 

When the charge pump transitions from the higher to the lower set of rail voltages, there is an approximate 5.5-s delay before the charge pump supplies the lower rail voltages to the amplifiers. This hysteresis ensures that the charge pump does not toggle between the two rail voltages as signals approach the clip threshold. It also prevents clipping in the instance of repetitive high-level transients in the input signal. Fig. 4-5 shows examples of this transitional behavior. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/59532525792e08b0d839bb047edf8ae12d57a6415cbcaf9a198077feebe760fa.jpg)



Figure 4-5. VCP_FILT Hysteresis


# 4.3.3 HP Current Limiter

The CS43131 features built-in current-limit protection for the headphone output. Table 3-18 lists the threshold for the current limit during the short-circuit conditions shown in Fig. 4-6. For the HP amplifiers, current is from the internal charge pump output, and, as such, applies the current from VCP or VP. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/857874ec3ea50750451d05a8d6fd23187231beb2f76cda191756c0b3f21f8ae5.jpg)



Figure 4-6. HP Short Circuit Setup


# 4.3.4 External VCP_FILT Supply Mode

To bypass the CS43131 Class-H charge-pump circuit, provide external VCP_FILT± supply with the following conditions: 

• When CS43131 is operating, apply $+ 3 . 0$ V with $\pm 5 \%$ accuracy to VCP_FILT $^ +$ and apply $- 3 . 0 \lor$ with $\pm 5 \%$ accuracy to VCP_FILT–. 

When CS43131 is powered down, external circuits present Hi-Z state to the VCP_FILT $^ +$ pin ${ \tt ( > 1 k }$ impedance) and VCP_FILT– pin $( > 1 0 \mathsf { k }$ impedance). 

• To avoid possible damage, VCP_FILT± pins must remain within the absolute maximum rating specified. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/540f2d253bb4d255b4933fdc2781fafe942512906915b473b6f93a2cff5f0224.jpg)



Figure 4-7. External VCP_FILT Power-Up Sequence


For powering up CS43131 in this mode, the recommended sequence must be followed. This assumes that the CS43131 starts from the status where VCP_FILT± pins are presented with Hi-Z. 

1. Set EXT_VCPFILT and HV_EN bits. 

2. Wait 8 ms after I2C ACK. 

3. Release and start to ramp external voltage on VCP_FILT± pins. 

4. Wait until VCP_FILT+ pin voltage to be greater than $+ 2 . 6 \lor$ and VCP_FILT– to be less than –2.6 V. 

# 5. Clear the PDN_HP bit.

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/ea6b4b8147da2955f8fd5d6324983e22b2a908c4de017303b6ae4f557035d9d5.jpg)



Figure 4-8. External VCP_FILT Power-Down Sequence


For powering down in this mode, use the following recommended sequence. This assumes that the CS43131 starts from the status where VCP_FILT± pins are presented with $\pm 3 . 0 \lor$ , respectively. 

1. Set PDN_HP. 

2. Wait 8 ms after I2C ACK. 

3. Start to shut-off external supply to VCP_FILT± pins. 

4. Wait until Hi-Z mode is presented on VCP_FILT± pins. 

5. Clear EXT_VCPFILT and HV_EN bits. 

# 4.4 Alternate Headphone Inputs

The top-level schematic of the alternate headphone inputs is shown in Fig. 4-9. Bits PDN_HP and HP_IN_EN configure the audio source for the HPOUT pins. The switches connected to HPINx are controlled by HP_IN_EN. The switches connected to the internal headphone driver are controlled by PDN_HP. When the alternate headphone inputs are selected $( \mathsf { H P \_ l N \_ E N } = 1 )$ , the CS43131 internal headphone driver output needs to be disconnected $( \mathsf { P D N \_ H P } = 1 )$ ). Likewise, when the CS43131 internal headphone drivers are enabled, the HPINx switch needs to be open and not in the signal path. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/4c28ca1b35fdb17e8fcf343b47e864649662f07a350143e5a540891d0b9cb8c8.jpg)



HPINB


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/12e984198a22a4880d06c7634d3fe199ef3f794e410044a50d6a0a97aabad65b.jpg)



HPINB


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/bb403392d2e83e14225379939b956e9d4b7afd93f2d06a4310be65b1fddacb7e.jpg)



HPINB



Figure 4-9. Alternative Headphone Input Setup


Before opening the HPINx switches, ramp down any active signal on HPINx pins to a voltage less than the $\mathsf { V } _ { \mathsf { I N O F F } }$ value specified in Table 3-8. Similarly, the voltage cannot exceed the same voltage requirement before the switches are closed. To prevent any pop on the headphone, the input should be muted during these transition. The CS43131 has ultralow offset when muted. For pop-free transition on the headphone, it is expected that the source on HPINx pins have low offset to ground when muted. 

The recommended sequence to switch from CS43131 to HPINx is as follows: 

1. Soft ramp content on CS43131 down to mute. 

2. Set PDN_HP and wait for PDN_DONE_INT event. 

3. If saving power is desired, switch MCLK_INT source to RCO. 

4. Set HP_IN_EN. 

The recommended sequence to switch from HPINx to CS43131 is as follows: 

1. Setup CS43131 intended MCLK source for DAC operation (if needed) 

2. Soft ramp content on HPINx down to mute. 

3. Clear HP_IN_EN. 

4. Switch MCLK_INT to the intended MCLK source when ready. 

5. Clear PDN_HP. 

The CS43131 has a HP_IN_LP setting to further reduce power when HPINx is enabled. This low power mode is only supported if EXT_VCPFILT $= 0$ . When selected, the HPINx path is placed into low power mode. This setting is only in effect when HP_IN_EN = 1. It should only be set after HP_IN_EN = 1, and the user must wait for tHPIN_ON (EXT VCPFILT $= 1$ ) before enabling HP_IN_LP bit. HP_IN_LP should be cleared before HP_IN_EN is cleared. When HP_IN_ $\mathsf { L } \mathsf { P } = 1$ , the maximum supported clock speed for I2C is 400 kHz. 

# 4.5 Headphone Presence Detect and Output Load Detection

The CS43131 provides headphone presence-detect and load-detection functionalities. 

# 4.5.1 Headphone Presence Detect

The CS43131 supports headphone presence-detect capability via the HP_DETECT sense pin. HP_DETECT is debounced to filter out brief events before being reported to the corresponding presence-detect status bit and generating an interrupt if appropriate. 

# 4.5.1.1 Headphone Plug Types

The presence detect scheme is designed to support the following plug types: 

Tip-Ring-Sleeve (TRS). Consists of a segmented metal barrel with the tip connector used for HPOUTA, a ring connector used for HPOUTB, and a sleeve connector used for HPGND. 

Tip-Ring-Ring-Sleeve (TRRS). Similar to TRS, with an additional ring connector for the HSIN connection. There are two common pinouts for TRRS plugs: 

— The tip is used for HPOUTA, the first ring for HPOUTB, the second ring for HSGND, and the sleeve for HSIN. 

— An alternate pinout, OMTP (open mobile terminal platform), also called “China headset,” swaps the third and fourth connections so that the second ring carries HSIN and the sleeve carries HSGND. 

Note that if both TRRS plug types need to be supported at the same time, the CS43131 requires an additional IC to perform the OMTP detect functions and to present the identified HSGND to the CS43131 HPREFx. However, the switch inside the detect IC may degrade the CS43131 performance. 

# 4.5.1.2 Headphone Detect Methods

CS43131 can detect the presence or absence of a plug. For a headphone-presence detect, a sense pin is connected to a terminal on the receptacle such that, if no plug is inserted, the pin is floating. If a plug is inserted, the pin is shorted to the tip (T) terminal. The presence detect function is accomplished by having a small current source inside the CS43131 to pull up the pin if it is left floating (no plug). If a plug is inserted and the sense pin is shorted to HPOUTA, when HP amp is powered down, it is assumed that the sense pin is pulled low via clamps at the HP amp output. If the HP amp is running, the sense pin is shorted to the output signal and, therefore, is pulled below a certain threshold via the output stage of the HP amp. Thus, a low level at the sense pin indicates plug inserted, and a high level at the sense pin indicates plug removed. 

# 4.5.1.3 Headphone Detect Registers

This section describes the behavior and interaction of the headphone-detect debounce register fields. See Fig. 4-10 for reference. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/34901fb406b218cd0d1608c4459a91a72f41282fe41751867feceee68de2d9a4.jpg)



Figure 4-10. Headphone Detect Block Diagram


• HPDETECT_CTRL configures the operation of the HP detect circuit. 

• HPDETECT_INV inverts the signal from the HP detect circuit. 

• HPDETECT_FALL_DBC_TIME configures the HP_DETECT falling debounce time. 

• HPDETECT_RISE_DBC_TIME configures the HP_DETECT rising debounce time. 

• HPDETECT_PLUG_DBC shows the falling-edge-debounced version of HP_DETECT signal. 

• HPDETECT_UNPLUG_DBC shows the rising-edge-debounced version of HP_DETECT signal. 

• HPDETECT_PLUG_INT shows the headphone plug-in event status. 

• HPDETECT_UNPLUG_INT shows the headphone unplug event status. 

• HPDETECT_PLUG_INT_MASK is the interrupt mask of headphone plug-in event status. 

• HPDETECT_UNPLUG_INT_MASK is the interrupt mask of headphone unplug event status. 

# 4.5.1.4 Headphone Detect and Interrupts Setup Instructions

The following steps are required for activation of headphone-detect debounce interrupt status: 

1. Ensure the I2C is ready to respond to control port command. 

2. Clear the interrupt masks. 

3. Write to HPDETECT_RISE_DBC_TIME and HPDETECT_FALL_DBC_TIME (see p. 131) to enable debounce for presence detect plug/unplug. 

4. Set HPDETECT_CTRL to 11 to enable the HPDETECT functions. 

The interrupt status bits can be found in Section 7.6.1. 

# 4.5.2 HP Load Detection

The CS43131 can measure the impedance of headphone DC load. Before taking measurements, the following criteria must be met: 

• The CS43131 is out of reset. 

• XTAL is powered on, an external MCLK is provided or PLL mode is used to generate internal MCLK. MCLK_INT is properly configured. 

• The headphone output is powered down $( \mathsf { P D N \_ H P } = 1$ ). 

• The alternate headphone input is powered down $( \mathsf { H P \_ } \mathsf { I N \_ E N } = 0 )$ . 

• HPDETECT is high to indicate a headphone is plugged in. 

The HPLOAD_EN bit is set to turn on the impedance measurement subsystem. HPLOAD_ON_INT is unmasked and there has been a long enough wait to confirm the subsystem is properly started. 

• The HPLOAD_DC_DONE interrupt is unmasked. 

Either Channel A or Channel B to be measured by setting HPLOAD_CHN_SEL. The measurement process by clearing and setting the HPLOAD_DC_START bit. Once started, HPLOAD_DC_BUSY bit is set and a slowly ramping voltage is asserted on the headphone load for a maximum of 200 ms, then holds constant for 100 ms. Fig. 4-11 shows the a waveform of the impedance detection voltage. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/5320eadff30ef5c5a40bf7cdd15a87bfac26ae3a53e4bc9c89fcb61ebd768d15.jpg)



Figure 4-11. Impedance Detection Voltage


Upon measurement completion, the following occurs: 

1. The voltage asserted ramps down for 200 ms and is then removed. 

2. The result of the measured resistance is reported in RL_DC_STAT. 

3. HPLOAD_DC_DONE bit is set and the interrupt is triggered. 

4. If HPLOAD_DC_ONCE bit has not been set, it is set. This bit is sticky until an HP unplug event has happened. 

Once interrupted, the application processor services the interrupt by reading HPLOAD_DC_DONE_INT. At this point, another measurement process can be initiated by clearing and setting the HPLOAD_DC_START bit. The impedance measurement subsystem can also be turned off by clearing the HPLOAD_EN bit. HPLOAD_EN must be cleared (and confirmed by unmasked HPLOAD_OFF_INT) before enabling the headphone output or the alternate headphone input. 

During the impedance measurement process, the following conditions trigger the error interrupt bits: 

The headphone load is not present or is unplugged before the impedance measurement is complete (HPLOAD_ UNPLUG_INT). 

• The headphone load is out of range, as specified in Table 3-7 (HPLOAD_OOR_INT). 

• The headphone load measurement process is started without HP being properly turned off (HPLOAD_HPON_INT). 

• The AC headphone load measurement process is initiated before the HPLOAD_DC_ONCE bit is set (HPLOAD_ NO_DC_INT). 

The HPLOAD error interrupt bits are sticky. If any HPLOAD error interrupt bits are flagged, the RL_DC_STAT value should be treated as invalid. 

# 4.5.2.1 AC Load Detection

The CS43131 can also measure the headphone load impedance in the frequency range of $2 0 \mathsf { H z }$ to $2 0 ~ \mathsf { k H z }$ . The required conditions before the measurement is similar to the low frequency load measurement, with one exception—HPLOAD_ MEAS_FREQ is set at the frequency of interest. Refer to Section 7.5.14 and Section 7.5.15 for details. 

After HPLOAD_AC_START bit is cleared and set: 

1. HPLOAD_AC_BUSY bit is set 

2. The result of the measured resistance is reported in RL_AC_STAT. 

3. HPLOAD_AC_DONE_INT is set and the interrupt is triggered. 

For each headphone, the low-frequency load measurement must be performed (as indicated by the HPLOAD_DC_ONCE bit) before any impedance is measured at other frequencies. If the low-frequency load measurement is not performed and the process is initiated by pulsing the HPLOAD_AC_START bit low and high, the CS43131 can not generate a test signal and sets the HPLOAD_NO_DC_INT error interrupt bit. Any RL_AC_STAT value should be treated as invalid. 

Once the measurement begins, a tone at the specified frequency is applied on the headphone load. Because the test tone is in the audio frequency range, it can be audible by the headphone user. It is recommended that the user system notify the headphone user of the expected events before initiating this measurement. 

For each frequency, the measurement completion time is affected by the frequency of interest. The lower the frequency, the longer the measurement time. For the relationship between the frequency under test and the measurement time, the following applies: 

• For frequencies under test less than 6 kHz or when the CS43131 comes out of reset, 10 periods of the test tone is the measurement time. 

• For frequencies under test between 6 and 13 kHz, 20 periods of the test tone is the measurement time. 

• For frequencies under test between 13 and 20 kHz, 30 periods of the test tone is the measurement time. 

See Section 5.14.2 for example code of AC impedance measurement. 

# 4.6 Clocking Architecture

# 4.6.1 Master Clock (MCLK) Sources

The MCLK is required by the CS43131 to operate any functionality associated with control, serial-port operation, or data conversion. Depending on the setting of MCLK_SRC_SEL (see p. 114), the MCLK can be provided by one of following methods: 

• Sourced from a crystal oscillator between XTI/MCLK and XTO pins (see Fig. 4-12), then used directly as MCLK_INT 

• Externally sourced through the XTI/MCLK input pin (see Fig. 4-13) 

• PLL reference clock is provided through the XTI/MCLK input pin (see Fig. 4-13), then use internal PLL to convert into MCLK_INT 

Use internal RCO as MCLK. Note that for optimized power consumption, the HPIN input path is the only supported audio playback feature in this mode. This mode can also support HP detection and I2C communication. DAC playback and headphone impedance measurement functions are not supported. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/97f5d0f412dc5980761d1d131749a5c81f1995f8fd11f1f9b7344e16d1d420d4.jpg)



Figure 4-12. System Clocking—Crystal Mode


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/27b631dc70e0bbd575b3756a4b87232dc3d0d0687c969a9a09b0d7384e227b96.jpg)



Figure 4-13. System Clocking—External MCLK Mode


If XTAL is used, the supported crystal characteristics and frequencies are listed in Table 3-16. Based on the crystal selection, XTAL_IBIAS must be set properly before powering up. The XTAL_IBIAS information can be found in Section 5.3. PDN_XTAL is cleared to start the crystal oscillator. PDN_XTAL is set to power down the crystal oscillator. The XTAL_READY_INT and XTAL_ERROR_INT status bits indicate the status of crystal operation after power-up. At tXTAL_pup after the crystal oscillator is powered up, if the crystal is started successfully and ready to be used, XTAL_READY_INT is set; if the crystal is started unsuccessfully, XTAL_ERROR_INT is set. The two bits are mutually exclusive when set. Both status bits have corresponding interrupt status bits and interrupt mask bits. To be informed on the crystal status at tXTAL_ pup after power-up, unmask both interrupts before powering up the crystal. 

When the MCLK is supplied to the device through the XTI/MCLK pin, it must comply with the phase-noise mask shown in Fig. 4-14. Its frequency must be one of the nominal MCLK_INT frequencies (22.5792 or 24.576 MHz), and its duty cycle must be between $45 \%$ to $5 5 \%$ . 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/03eaf1f6ffc57c97618b4f6d34cf5291dc199088c2f9eaf89e8ec89842800733.jpg)



Figure 4-14. MCLK Phase Noise Mask Without PLL


When the PLL reference clock is supplied to the device through the XTI/MCLK pin, it must comply with the phase-noise mask shown in Fig. 4-15. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/4d7eb5f60ba5424a74b86d8caae6b3e40868374079fae4510df62f522d52b864.jpg)



Figure 4-15. MCLK Phase Noise Mask With PLL


Further restrictions are listed in Table 4-3. 


Table 4-3. MCLK Source Restrictions


<table><tr><td>Internal MCLK Source</td><td>MCLK_SRC_SEL</td><td>MCLK_INT</td><td>Restrictions</td></tr><tr><td rowspan="2">Direct MCLK or XTAL</td><td rowspan="2">00</td><td>0</td><td>Nominal MCLK_INT frequency = 24.576 MHzAll specified CLKOUT frequencies (generated by PLL or XTAL) are supportedCLKOUT outputs (/2, /3, /4, /8 divide) optionally</td></tr><tr><td>1</td><td>Nominal MCLK_INT frequency = 22.5792 MHzAll specified CLKOUT frequencies (generated by PLL or XTAL) are supportedCLKOUT outputs (/2, /3, /4, /8 divide) optionally</td></tr><tr><td rowspan="2">PLL</td><td rowspan="2">01</td><td>0</td><td>Nominal MCLK_INT frequency = 24.576 MHzPDN_PLL = 0 and PLL properly configured to generate 24.576 MHz given reference input frequency on XTI/MCLK pinOnly MCLK_INT on CLKOUT is supported on CLKOUT pinCLKOUT outputs (/2, /3, /4, /8 divide) optionally</td></tr><tr><td>1</td><td>Nominal MCLK_INT frequency = 22.5792MHzPDN_PLL = 0 and PLL properly configured to generate 22.5792 MHz given reference input frequency on XTI/MCLK pinOnly MCLK_INT on CLKOUT is supported on CLKOUT pinCLKOUT outputs (/2, /3, /4, /8 divide) optionally</td></tr><tr><td>RCO</td><td>10</td><td>X</td><td>No MCLK_INT selection necessary. DAC playback is not supported. I2C port and HPIN_x pins are supported.</td></tr></table>

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/14bf6bdd583b817edc968b6c55022bec7d911345b0fe65f7a2a7a839badbdfc8.jpg)



Figure 4-16. MCLK Source Switching


A source to MCLK_INT, either the XTAL (or external MCLK), PLL, or the RCO, must be provided as long as CS43131 is operating; otherwise, the CS43131 will enter a non-responsive state. The only way to recover from this non-responsive state is either through a reset or POR event. Switching MCLK sources during DAC operation causes audible artifacts, but does not put the device in an unrecoverable state. In an MCLK source-switching event, the destined clock source must be present and ready before switching occurs. 

After POR or reset event, RCO is selected as default source of MCLK_INT. 

# 4.6.1.1 Internal RC Oscillator

As described in Section 4.6.1, the CS43131 includes an internal RC oscillator that can be used as a clock source for peripheral circuit such as control port or charge pump. 

# 4.7 Clock Output and Fractional-N PLL

The CS43131 clock output can be used as a master clock for other data-conversion or signal-processing components, which requires synchronous timing to the CS43131. 

The CLKOUT output is enabled by clearing PDN_CLKOUT. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/d4a1d22949b21c45b230057ff3fcaa69f0199ba4f3d71f1ca00fd955ed1cf1dd.jpg)



Figure 4-17. CLKOUT Source Selection


Once enabled, CLKOUT is generated either from the internal crystal oscillator output (when used) or from the integrated fractional-N PLL; it can be selected by CLKOUT_SEL. CLKOUT_DIV can be used to set /2, /3, /4, or /8 to divide the selected clock source to targeted frequency. 

# 4.7.1 Fractional-N PLL

The CS43131 has an integrated fractional-N PLL to support the clocking requirements of various applications. This PLL can be enabled or disabled by clearing or setting PDN_PLL bit. The input reference clock for the PLL is signal on XTI/ MCLK pin (crystal-generated or external-feed). 

# 4.7.2 Fractional-N PLL Internal Interface

Fig. 4-18 shows how PLL operation can be configured. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/a7356faafcf46b9415a80d4718542715fd722cb2435d43fc03af828d532f460f.jpg)



Figure 4-18. Fractional-N PLL


Use Eq. 4-1 to calculate the PLL output frequency. 

$$
\text {P L L} _ {-} \text {O U T} = \frac {\text {P L L} _ {-} \text {R E F}}{\text {P L L} _ {-} \text {R E F} _ {-} \text {P R E D I V}} \times \frac {\text {P L L} _ {-} \text {D I V} _ {-} \text {I N T} + \text {P L L} _ {-} \text {D I V} _ {-} \text {F R A C}}{\frac {5 0 0}{5 1 2} \text {o r 1 , s e l e c t e d b y P L L} _ {-} \text {M o d e}} \times \frac {1}{\text {P L L} _ {-} \text {O U T} _ {-} \text {D I V}}
$$

# Equation 4-1. PLL Output Frequency Equation

PLL_REF source must be in range below: 

<table><tr><td rowspan="2">PLL_REF Source</td><td colspan="2">PLL_REF_PREDIV Input</td></tr><tr><td>Minimum</td><td>Maximum</td></tr><tr><td>MCLK/XIN pin</td><td>9.6 MHz</td><td>26 MHz</td></tr></table>

Table 4-4 lists common settings with XTAL input as PLL reference. 


Table 4-4. PLL Configuration for Typical Use Case (XTAL as the PLL Reference)


<table><tr><td>XTAL (MHz)</td><td>PLL_REF_PREDIV (Divide-by Value)</td><td>PLL_REF_PREDIV (Setting)</td><td>PLLDIV_INT</td><td>PLL_DIV_FRAC</td><td>PLL_OUT_DIV</td><td>PLL_MODE</td><td>PLL OUT (MHz)</td><td>PLL_CAL_RATIO</td></tr><tr><td>22.5792</td><td>8</td><td>0x3</td><td>0x44</td><td>0x06 F700</td><td>0x08</td><td>0</td><td>24.576</td><td>139</td></tr><tr><td>24.576</td><td>8</td><td>0x3</td><td>0x49</td><td>0x80 0000</td><td>0x0A</td><td>1</td><td>22.5792</td><td>118</td></tr></table>

Table 4-5 lists common settings with MCLK input as PLL reference. 


Table 4-5. PLL Configuration for Typical Use Case (XIN/MCLK as the PLL Reference)


<table><tr><td>XIN/MCLK (MHz)</td><td>PLL_REF_PREDIV (Divide-by Value)</td><td>PLL_REF_PREDIV (Setting)</td><td>PLL_DIV_INT</td><td>PLL_DIV_FRAC</td><td>PLL_OUT_DIV</td><td>PLL_MODE</td><td>PLL_OUT (MHz)</td><td>PLL_CAL_RATIO</td></tr><tr><td rowspan="2">11.2896</td><td>4</td><td>0x2</td><td>0x40</td><td>0x00 0000</td><td>0x08</td><td>1</td><td>22.5792</td><td>128</td></tr><tr><td>4</td><td>0x2</td><td>0x44</td><td>0x06 F700</td><td>0x08</td><td>0</td><td>24.576</td><td>139</td></tr><tr><td>22.5792</td><td>8</td><td>0x3</td><td>0x44</td><td>0x06 F700</td><td>0x08</td><td>0</td><td>24.576</td><td>139</td></tr><tr><td rowspan="2">12.000</td><td>4</td><td>0x2</td><td>0x49</td><td>0x80 0000</td><td>0x0A</td><td>0</td><td>22.5792</td><td>120</td></tr><tr><td>4</td><td>0x2</td><td>0x40</td><td>0x00 0000</td><td>0x08</td><td>0</td><td>24.576</td><td>131</td></tr><tr><td rowspan="2">24.000</td><td>8</td><td>0x3</td><td>0x49</td><td>0x80 0000</td><td>0x0A</td><td>0</td><td>22.5792</td><td>120</td></tr><tr><td>8</td><td>0x3</td><td>0x40</td><td>0x00 0000</td><td>0x08</td><td>0</td><td>24.576</td><td>131</td></tr><tr><td rowspan="2">12.288</td><td>4</td><td>0x2</td><td>0x49</td><td>0x80 0000</td><td>0x0A</td><td>1</td><td>22.5792</td><td>118</td></tr><tr><td>4</td><td>0x2</td><td>0x40</td><td>0x00 0000</td><td>0x08</td><td>1</td><td>24.576</td><td>128</td></tr><tr><td>24.576</td><td>8</td><td>0x3</td><td>0x49</td><td>0x80 0000</td><td>0x0A</td><td>1</td><td>22.5792</td><td>118</td></tr><tr><td rowspan="2">9.600</td><td>4</td><td>0x2</td><td>0x49</td><td>0x80 0000</td><td>0x08</td><td>0</td><td>22.5792</td><td>151</td></tr><tr><td>4</td><td>0x2</td><td>0x50</td><td>0x00 0000</td><td>0x08</td><td>0</td><td>24.576</td><td>164</td></tr><tr><td rowspan="2">19.200</td><td>8</td><td>0x3</td><td>0x49</td><td>0x80 0000</td><td>0x08</td><td>0</td><td>22.5792</td><td>151</td></tr><tr><td>8</td><td>0x3</td><td>0x50</td><td>0x00 0000</td><td>0x08</td><td>0</td><td>24.576</td><td>164</td></tr><tr><td rowspan="2">13.000</td><td>4</td><td>0x2</td><td>0x45</td><td>0x79 7680</td><td>0x0A</td><td>1</td><td>22.5792</td><td>111</td></tr><tr><td>4</td><td>0x2</td><td>0x3C</td><td>0x7E A940</td><td>0x08</td><td>1</td><td>24.576</td><td>121</td></tr><tr><td rowspan="2">26.000</td><td>8</td><td>0x3</td><td>0x45</td><td>0x79 7680</td><td>0x0A</td><td>1</td><td>22.5792</td><td>111</td></tr><tr><td>8</td><td>0x3</td><td>0x3C</td><td>0x7E A940</td><td>0x08</td><td>1</td><td>24.576</td><td>121</td></tr></table>

Note that in Table 4-4 and Table 4-5: 

• The PLL_OUT_DIV value must be even. 

PLL_OUT frequencies are at 22.5792 or 24.576 MHz. CLKOUT frequencies can be obtained by configuring the CLK_OUT_DIV value: 

<table><tr><td>PLL_OUT</td><td>CLK_OUT_DIV (2)</td><td>CLK_OUT_DIV (3)</td><td>CLK_OUT_DIV (4)</td><td>CLK_OUT_DIV (8)</td></tr><tr><td>22.5792 MHz</td><td>11.2896 MHz</td><td>7.5264 MHz</td><td>5.6448 MHz</td><td>2.8224 MHz</td></tr><tr><td>24.576 MHz</td><td>12.288 MHz</td><td>8.192 MHz</td><td>6.144 MHz</td><td>4.096 MHz</td></tr></table>

PLL_ERROR_INT constantly monitors the PLL error status after PLL_START is set, assuming the PLL reference input is stable and accurate. 

# 4.7.2.1 Powering Up the PLLs

To power up the PLL, use the following default sequence: 

1. Enable the PLL by clearing PDN_PLL. 

2. Configure PLL_REF_PREDIV. 

3. Configure PLL_OUT_DIV. 

4. Configure the three fractional factor registers, PLL_DIV_FRAC. 

5. Set the integer factor, PLL_DIV_INT, to the desired value. 

6. Configure PLL_MODE and PLL_CAL_RATIO. 

7. After properly unmasked (clearing PLL_READY_INT_MASK and PLL_ERROR_INT_MASK), PLL_READY_INT, and PLL_ERROR_INT are used to monitor if PLL has been successfully started. 

8. Turn on the PLL by setting PLL_START. 

# 4.7.2.2 Powering Down the PLL

1. Clear PLL_START to stop the PLL operation. 

2. For further power saving, set PDN_PLL to disable the PLL block. 

# 4.8 Filtering Options

To accommodate the increasingly complex requirements of digital audio systems, the CS43131 incorporates selectable filters in different playback modes. 

For PCM/TDM mode, the following interpolation filtering options can be selected: 

• Fast roll-off and slow roll-off interpolation filter options. 

• In each option above, both low-latency and normal phase-compensation filtering options can be used. 

Nonoversampling (NOS) mode is provided, which minimizes the internal digital processing. Once NOS mode is set, the settings on the above two options are ignored. 

The combination of the options results in five different filter combinations. The specifications for each filter can be found in Table 3-9, and response plots can be found in Section 9. These filters have been designed to accommodate a variety of musical tastes and styles. The PCM filter option register (see Section 7.5.2) is used to select filter options. 

When in octuple-speed mode, the filter options above are not available and the internal digital processing is minimized. See the specification in Table 3-9 for filter characteristics. 

The DSD processor mode uses a decimation-free DSD processing technique that allows for features such as matched PCM level output, DSD volume control, and 50-kHz on-chip filter. 

# 4.9 Audio Serial Port (ASP)

The independent, highly configurable ASPs and auxiliary serial ports (XSPs) communicate audio data from other system devices, such as applications processors. Both ports can be configured to support common audio interfaces, TDM/I2S and left-justified (LJ). 

ASP supports both PCM and DoP stream playback. XSP can only support DoP stream playback. For DAC playback, only one port needs to be enabled. Both ports are enabled only in specific application, such as PCM notification mixing with DSD/DoP content. Details regarding this application setup can be found in Section 4.12. 

In this section, the reference to both ports is generalized as “xSP” to explain the common settings between the two ports. 

# 4.9.1 Master and Slave Timing

Each serial port can operate as either the master of timing or as a slave to another device’s timing. If xSP_M/S is set, the serial port acts as a clock master. If xSP_M/S is cleared, the serial port acts as a clock slave. 

• In Master Mode, xSP_SCLK and xSP_LRCK are outputs derived from the internal MCLK. 

In Slave Mode, xSP_SCLK and xSP_LRCK are inputs. Although the CS43131 does not generate the interface timings in Slave Mode, the expected LRCK and SCLK format must be programmed in the same way as in Master Mode (see Table 3-20). 

• In both modes, the serial port sample rate register (xSP_SPRATE) must be set per audio content before enabling the serial port. 

• When using ASP for PCM playback, the audio serial port sample bit size register (ASP_SPSIZE) must be set per audio content before enabling the ASP. 

When using XSP or ASP for DoP playback, the serial port sample bit size register (XSP_SPSIZE or ASP_SPSIZE) must be set per audio content before enabling the XSP or ASP. Note that the XSP_SPSIZE or ASP_SPSIZE must reflect the length of both DSD marker bits together with audio bits. 

# 4.9.2 Power-Up, Power-Down, and Tristate

The xSP has separate power-down and tristate controls (PDN_xSP and xSP_3ST) for input data paths, which minimizes power consumption if the input port is not used. xSP master/slave operation is controlled only by the xSP_M/S setting, irrespective of the PDN_xSP and xSP_3ST settings. 

PDN_xSP. If a serial port’s SDIN functionality is not required, xSP can be powered down by setting PDN_xSP, which powers down the input data path and clocks of the serial port. 

• xSP_3ST. In Master Mode, setting xSP_3ST tri-states the SCLK and LRCK clocks. Before setting an xSP_3ST bit, the associated serial port must be powered down and must not be powered up until the xSP_3ST bit is cleared. In Slave Mode, xSP_3ST does not affect the functionality of SCLK and LRCK clocks, given both pins are input pins. 

# 4.9.3 I/O

The ASP port is associated with SDIN1, SCLK1, and LRCK1. The XSP port is associated with SDIN2, SCLK2, and LRCK2, which are shared with DSD interface: 

• SCLKx—Serial data shift clock 

LRCKx—Toggles at external sample rate $( \mathsf { F s } _ { \mathsf { e x t } } )$ . LRCK (left/right, I²S) identifies each channel’s (left or right) location in the data word when I²S format is used. LRCK identifies the start of each serialized data word. FSYNC (frame sync clock, TDM) identifies the start of each TDM frame. 

• SDINx—Serial data input 

# 4.9.4 High-Impedance Mode

Serial ports can be placed on a clock bus that allows multiple masters without the need for external buffers. xSP_3ST bits place the internal buffers for the respective serial-port interface signals in a high-impedance state, allowing another device to transmit clocks without bus contention. When the CS43131 serial port is a timing slave, its SCLK and LRCK I/Os are always inputs and are thus unaffected by the xSP_3ST control. Fig. 4-19 shows the busing for CS43131 master timing serial-port use case. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/367f08a6accc459803d100cb4949786c33f945c4e65bd3f762657f34fe1f84a9.jpg)



Note: $\mathsf { x } = \mathsf { X } \mathsf { S } \mathsf { P }$ or ASP



Figure 4-19. Serial Port Busing when Master Timed


# 4.9.5 Clock Generation and Control

The CS43131 has a flexible serial port clock generation subsystem that allows independent clocking of the two serial ports. When operating as a master port, the serial port provides a bit clock (xSP_SCLK) and a left-right/frame sync signal (xSP_ LRCK/FSYNC). 

Fig. 4-20 and Fig. 4-21 show the serial port clocking architecture. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/2e6ee78d652d513783c366b22524a6561da36b8183a830ca25ff138a92df2e64.jpg)



Figure 4-20. xSP SCLK and MCLK Architecture


As shown in Fig. 4-20, the master-mode SCLK output for each serial port is derived from the internal MCLK. The SCLK output can be configured to various frequencies to accommodate many sample rates, sample sizes, and channel counts. The SCLK is output of a fractional divide from the internal MCLK input, where N is the numerator and M is the denominator. 

Note: Depending on the chosen fractional divide configuration, the SCLK duty cycle can vary by one MCLK period. 

Input and output SCLK polarity controls (xSP_SCPOL_IN and xSP_SCPOL_OUT) are also available. As shown in Fig. 4-20, if Master Mode is used, both polarity controls affect the SCLK used by the serial port module. For example, both polarity controls must be set (xSP_SCPOL_IN $=$ xSP_SCPOL_OUT $= 1$ ) to invert the SCLK output and output data on the falling edge. In typical use cases, the values of xSP_SCPOL_IN equals xSP_SCPOL_OUT in each serial port. See Fig. 4-23 for example waveforms showing the various settings of the SCLK polarity controls. 

Likewise, input and output LRCK polarity controls (xSP_LCPOL_IN and xSP_LCPOL_OUT) are available. In Master Mode, both LRCK polarity controls affect the LRCK used by the serial-port module as shown in Fig. 4-21. In typical-use cases, the value of xSP_LCPOL_IN equals xSP_LCPOL_OUT in each serial port. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/a35479f2fee66ccf19d6b081eab147e9f457cf06f010574840ff843440a754dc.jpg)



Figure 4-21. xSP LRCK Architecture


As shown in Fig. 4-22, xSP_LCPR determines the LRCK/FSYNC period, in units of SCLK periods. The LRCK period effectively sets the length of the frame and the number of SCLK periods per Fs. Frame length may be programmed in single SCLK period multiples from a minimum of 16 SCLK:Fs up to 1536 SCLK:Fs. 

The LRCK-high width (xSP_LCHI) controls the number of SCLK periods for which the LRCK signal is held high during each frame. Like the LRCK period, the LRCK-high width is programmable in single SCLK periods, from a minimum of one period to a maximum of the LRCK period minus one (and an absolute maximum of 768 SCLK periods). That is, LRCK-high width must be less than the LRCK period. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/f648b30ea65bfc8682a106b3006d427385ee0b2fc4af8c148d6bd420ad56ffe3.jpg)



Figure 4-22. xSP LRCK Period, High Width


As shown in Fig. 4-23, if Serial Port 50/50 Mode is enabled $( \mathsf { x S P \_ 5 0 5 0 } = 1 )$ ), the LRCK high duration must be programmed to the LRCK period divided by two (rounded down to the nearest integer when the LRCK period is odd). When the serial port is in 50/50 Mode, setting the LRCK high duration to a value other than half of the period results in erroneous operation. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/b832d4d245c4c1b79b108e065e4f157d555147bd12d4e5c3990a7902ba33d4f2.jpg)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/32de98eabe48d00cf7836bc071cdc7bacc2fd98d2366e51294406cfc7ad8ca51.jpg)



Figure 4-23. xSP_LRCK Period, High Width, 50/50 Mode



Fig. 4-24 shows how LRCK frame start delay (xSP_FSD) controls the number of SCLK periods delay from the LRCK synchronization edge to the start of frame data.


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/2770ae123a5faca8ca5e0bcce3ef872d5e6a73d6e2cb02da43db77e7b2cdbc52.jpg)



Figure 4-24. LRCK FSD and SCLK Polarity Example Diagram



Table 4-6. Serial Port Clock Generation—Supported Configurations for 32 bits and 2 Channels


<table><tr><td rowspan="2">Frequency (MHz)</td><td rowspan="2">LRCK/FSYNC Rate (kHz)</td><td colspan="2">SCLKs per LRCK Frame</td><td rowspan="2">xSP_N[15:0]</td><td rowspan="2">xSP_M[15:0]</td></tr><tr><td>xSP_LCPR + 1</td><td>xSP_LCPR[10:0]</td></tr><tr><td rowspan="8">22.5792</td><td>32.000</td><td>64</td><td>63</td><td>40</td><td>441</td></tr><tr><td>44.100</td><td>64</td><td>63</td><td>1</td><td>8</td></tr><tr><td>48.000</td><td>64</td><td>63</td><td>20</td><td>147</td></tr><tr><td>88.200</td><td>64</td><td>63</td><td>1</td><td>4</td></tr><tr><td>96.000</td><td>64</td><td>63</td><td>40</td><td>147</td></tr><tr><td>176.400</td><td>64</td><td>63</td><td>1</td><td>2</td></tr><tr><td>192.000</td><td>64</td><td>63</td><td>80</td><td>147</td></tr><tr><td>352.800</td><td>64</td><td>63</td><td>1</td><td>1</td></tr><tr><td rowspan="9">24.576</td><td>32.000</td><td>64</td><td>63</td><td>1</td><td>12</td></tr><tr><td>44.100</td><td>64</td><td>63</td><td>147</td><td>1280</td></tr><tr><td>48.000</td><td>64</td><td>63</td><td>1</td><td>8</td></tr><tr><td>88.200</td><td>64</td><td>63</td><td>147</td><td>640</td></tr><tr><td>96.000</td><td>64</td><td>63</td><td>1</td><td>4</td></tr><tr><td>176.400</td><td>64</td><td>63</td><td>147</td><td>320</td></tr><tr><td>192.000</td><td>64</td><td>63</td><td>1</td><td>2</td></tr><tr><td>352.800</td><td>64</td><td>63</td><td>147</td><td>160</td></tr><tr><td>384.000</td><td>64</td><td>63</td><td>1</td><td>1</td></tr></table>


Table 4-7. Serial Port Clock Generation—Supported Configurations for 32-bits and 4-Channels


<table><tr><td rowspan="2">Frequency (MHz)</td><td rowspan="2">LRCK/FSYNC Rate (kHz)</td><td colspan="2">SCLKs per LRCK Frame</td><td rowspan="2">xSP_N[15:0]</td><td rowspan="2">xSP_M[15:0]</td></tr><tr><td>xSP_LCPR + 1</td><td>xSP_LCPR[10:0]</td></tr><tr><td rowspan="6">22.5792</td><td>32.000</td><td>128</td><td>127</td><td>80</td><td>441</td></tr><tr><td>44.100</td><td>128</td><td>127</td><td>1</td><td>4</td></tr><tr><td>48.000</td><td>128</td><td>127</td><td>40</td><td>147</td></tr><tr><td>88.200</td><td>128</td><td>127</td><td>1</td><td>2</td></tr><tr><td>96.000</td><td>128</td><td>127</td><td>80</td><td>147</td></tr><tr><td>176.400</td><td>128</td><td>127</td><td>1</td><td>1</td></tr><tr><td rowspan="7">24.576</td><td>32.000</td><td>128</td><td>127</td><td>1</td><td>6</td></tr><tr><td>44.100</td><td>128</td><td>127</td><td>147</td><td>640</td></tr><tr><td>48.000</td><td>128</td><td>127</td><td>1</td><td>4</td></tr><tr><td>88.200</td><td>128</td><td>127</td><td>147</td><td>320</td></tr><tr><td>96.000</td><td>128</td><td>127</td><td>1</td><td>2</td></tr><tr><td>176.400</td><td>128</td><td>127</td><td>147</td><td>160</td></tr><tr><td>192.000</td><td>128</td><td>127</td><td>1</td><td>1</td></tr></table>

# 4.9.6 Channel Location and Size

Each serial-port channel has a programmable location offset (xSP_RX_CHn). Channel location is programmable in single SCLK period resolution. When set to the minimum location offset, the channel transmits or receives on the first SCLK period of a new frame. 

Channel size is programmable in byte resolution from 8 to 32 bits using xSP_RX_CHn_RES. Channel size and location must not be programmed such that channel data extends beyond the frame boundary. Size and location must not be programmed such that data from a given SCLK period is assigned to more than one channel. The example in Fig. 4-25 shows channel location and size. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/384d99c707c6ca09c9245bac80dc50453824b68926e6ce8b001cabed266c2690.jpg)



Figure 4-25. Example Channel Location and Size


# 4.9.7 Frame Start Phase

The serial port can start a frame when xSP_LRCK/FSYNC is high or low, depending on xSP_STP. In typical TDM use cases, a frame starts when FSYNC is high (xSP_STP = 1). 

• If xSP_STP $= 0$ , the frame begins when LRCK/FSYNC transitions from high to low. See Fig. 4-26 for an example in 50/50 mode. The TDM Mode behaves similarly. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/6cc34f10931a1ec7e5b58273868e1646a6e9462085905a4bd36aa7c3dbc5533e.jpg)



Note: This diagram assumes xSP _FSD ${ \tt = } 0$ .



Figure 4-26. Example 50/50 Mode (ASP_STP ${ \bf \beta } = { \bf 0 }$ )


• If xSP_STP $= 1$ , the frame begins when LRCK/FSYNC transitions from low to high. See Fig. 4-27 for an example in 50/50 mode. TDM mode is similar. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/6881ed2ab7fddf450cd11008c3f2828e8692157810afe635527a77375add9233.jpg)



Note: This diagram assumes $\mathsf { x S P \_ F S D } = 0$ .



Figure 4-27. Example 50/50 Mode (ASP_STP = 1)


# 4.9.8 50/50 Mode

In typical two-channel I2S operation (50/50 Mode, $\mathsf { x S P } _ { - } 5 0 5 0 = 1$ ), the LRCK duty cycle is $50 \%$ , and each channel is transferred during one of the two LRCK phases. In this mode, each serial port channel can be independently programmed to output when LRCK/FSYNC is high or low; this is called the channel-active phase. 

If the active-phase control bit (xSP_RX_CHn_AP) is set, the respective channel is output when LRCK/FSYNC is high. If xSP_RX_CHn_AP is cleared, the respective channel is output if LRCK/FSYNC is low. Examples of each setting of xSP_ RX_CHn_AP are shown in Fig. 4-26 and Fig. 4-27. 

In 50/50 Mode, the channel location (see Section 4.9.6) is calculated within the channel-active phase. If there are N bits in a frame, the location of the last bit of each active phase is equal to $( \mathsf { N } / 2 ) - 1$ . 

Note: If xSP_5050 is set, xSP_LCHI must be programmed to half of xSP_LCPR for a $50 \%$ duty cycle. Also, only two channels can be enabled for the corresponding serial port. 

# 4.9.9 Serial Port Status

Each serial port has five status bits. Each bit is sticky and must be read to be cleared. The status bits have associated mask bits to mask setting the INT pin when the status bit sets. A brief description of each status bit is shown in Table 4-8. 


Table 4-8. Serial Port Status


<table><tr><td>Name</td><td>Description</td><td>Register Reference</td></tr><tr><td>Request Overload</td><td>Set when too many input buffers request processing at the same time. If all channel size and location registers are properly configured to non-overlapping values, this error status must never set.</td><td>ASP_OVFL_INT p. 134 XSP_OVFL_INT p. 135</td></tr><tr><td>LRCK Error</td><td>Logical OR of LRCK early and LRCK late (see below).</td><td>ASP_ERROR_INT p. 135 XSP_ERROR_INT p. 135</td></tr><tr><td>LRCK Early</td><td>Set when the number of SCLK periods per LRCK phase (high or low) is less than the expected count as determined by xSP_LCPR and xSP_LCHI. Note: The Rx LRCK early interrupt status is set during the first receive LRCK early event. Subsequent receive LRCK early events are not indicated until after valid LRCK transitions are detected.</td><td>ASP_EARLY_INT p. 135 XSP_EARLY_INT p. 135</td></tr><tr><td>LRCK Late</td><td>Set when the number of SCLK periods per LRCK phase (high or low) is greater than the expected count as determined by xSP_LCPR and xSP_LCHI.</td><td>ASP_LATE_INT p. 135 XSP_LATE_INT p. 135</td></tr><tr><td>No LRCK</td><td>Set when the number of SCLK periods counted exceeds twice the value of LRCK period (xSP_LCPR) without an LRCK edge. The Tx No LRCK interrupt status is set during the first instance of a no transmit LRCK condition. Subsequent no transmit LRCK conditions are not indicated until after valid LRCK transitions are detected.</td><td>ASP_NOLRCK_INT p. 135 XSP_NOLRCK_INT p. 135</td></tr></table>

# 4.9.10 Serial Port Clock Pin Status

There are various control bits available that affect the output state of the serial port clock and data pins. Table 4-9 summarizes the possible states depending on these bit settings. 


Table 4-9. xSP_SCLK and xSP_LRCK/FSYNC Pin States


<table><tr><td>xSP_3ST</td><td>xSP_M/S</td><td>PDN_xSP</td><td>xSP_SCLK
Pin State</td><td>xSP_LRCK/FSYNC
Pin State</td></tr><tr><td>1</td><td>x</td><td>x</td><td>Hi-Z with weak pull-down</td><td>Hi-Z with weak pull-down</td></tr><tr><td>0</td><td>0</td><td>x</td><td>Hi-Z with weak pull-down</td><td>Hi-Z with weak pull-down</td></tr><tr><td>0</td><td>1</td><td>0</td><td>Active</td><td>Active</td></tr><tr><td>0</td><td>1</td><td>1</td><td>Inactive</td><td>Inactive 1</td></tr></table>


1.If xSP_LCPOL_OUT is set, xSP_LRCK/FSYNC inactive output is high. If xSP_LCPOL_OUT is cleared, xSP_LRCK/FSYNC inactive output is low. 


# 4.9.11 DoP (DSD over PCM) Mode

DoP is a protocol for packetizing DSD data into a PCM frame for transmission over an existing I2S interface. The ASP or XSP can accept DSD data in DoP format. 

To use the DoP interface in Slave Mode, if MCLK_INT $=$ 22.5792 MHz, the DoP interface clocks are required to be synchronous to MCLK_INT. 

Each sample is 24 bits, as shown in Fig. 4-28, where the 8 most significant bits are used for the DSD marker and alternate with each sample between 0x05/0xFA. Each channel within a sample contains the same marker. The remaining 16 lower bits are then used for the DSD data, with the first or oldest bit in Slot t0. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/173413581e29204c9022981f1127f4a395c5accae190f3d4be0fcfcff3104e76.jpg)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/c5918a6f6e36be72c0e2fb0bee23ae452fc790e9b024e9d51f54a4df411e937a.jpg)



Figure 4-28. DoP Data Sample and Stereo Stream Example


Each PCM frame is assigned to a specific channel (left or right), and when used for DSD streaming, each PCM frame contains only DSD data corresponding to its assigned channel. The CS43131 unpacks the received DoP data and reforms it into a DSD stream to feed the internal DSD data paths. 

It includes the following features: 

• 24 bits per PCM data sample 

• I2S format is supported 

• DoP data is unpacketed internally for DSD playback 

• Clock Master and Slave Mode 

• Up to 128•Fs DSD stream 

— Accepts a 64•Fs DSD stream with LRCK@176.4 kHz 

— Accepts a 128•Fs DSD stream with LRCK@352.8 kHz 

To enable DoP interface on the ASP to take in DSD source: 

1. Configure the ASP per clocking/format required by DoP content. 

2. Configure DSD_SPEED per DoP content. 

3. Set DSD_PRC_SRC = 10 and DSD_EN $= 1$ 

# 4.10 DSD Interface

The DSD interface is enabled or disabled by PDN_DSDIF bit. When cleared, the DSD data interface is enabled. When using this interface, the DSD interface clock can be mastered by the CS43131 (DSD_M/SB=1). If set to Master Mode, DSDCLK toggles if both PDN_DSDIF and XSP_3ST bits are cleared, and DSD_EN is set. 

If the DSD interface clock is slaved (DSD_M/SB=0), when MCLK_INT is set as 22.5792 MHz, DSDCLK is required to be synchronous to MCLK_INT. The DSDCLK can be derived by either: 

• Exporting 1/2, 1/4, or 1/8 the frequency of the CS43131 crystal to CLKOUT, or 

• Sourcing MCLK_INT and DSDCLK from the same external clock source 

The DSD_EN bit, when set, is used to configure the device for processing DSD sources. DSD_PRC_SRC configures the DSD interface used for feeding into the DSD processor. DSD_SPEED specifies if a 64•Fs, 128•Fs, or 256•Fs DSD stream is provided. If PDN_DSDIF $= 0$ and DSD_M/SB = 1, DSD_SPEED determines the DSDCLK clock frequency generated. When configuring the DSD interface, follow these steps: 

1. Configure the DSD_M/SB, DSD_SPEED, DSD_PRC_SRC, and XSP_3ST. 

2. Release PDN_DSDIF. 

3. Enable DSD_EN. 

The DSD_PM_EN bit selects phase modulation (data plus data inverted) as the style of data input. In this mode, the DSD_ PM_SEL bit selects whether a 2x or 1x data rate clock is used for phase-modulated data (see Fig. 4-29). Use of phase modulation mode may not directly affect the performance of the CS43131, but may lower the sensitivity of other board-level components to the DSD data signals. Note that phase modulation mode is supported only for DSD 64•Fs and DSD 128•Fs data rates. If the 2x data rate mode is used, DSD_INV_B and DSD_INV_A need to be set before the mode is enabled. After the 2x data rate mode is disabled, DSD_INV_B and DSD_INV_A need to be cleared appropriately. 

The CS43131 can detect overmodulation errors in the DSD data that do not comply to the SACD specification. Setting INV_DSD_DET enables detection of overmodulation errors. This condition is reported through the DSD_INVAL_A_INT and DSD_INVAL_B_INT status bits. Overmodulated DSD data is converted as received without intervention, but performance at these levels cannot be guaranteed. Setting STA_DSD_DET allows the CS43131 to mute a DSD stream that is stuck at 1 or 0. This condition is reported through the DSD_STUCK_INT status bit. See Section 7.6.5 for descriptions of the DSD error reporting bits. 

More information for these register bits can be found in Section 7. 

The DSD input structure and analog outputs are designed to handle a nominal 0 dB-SACD $5 0 \%$ modulation index) at full-rated performance. When 0 dB-SACD and 0 dBFS PCM need to be level matched, DSD_ZERODB must be set. In this mode, signals of $^ { + 3 }$ -dB SACD may be applied for brief periods of time; however, performance at these levels is not guaranteed. If sustained levels approaching $^ { + 3 }$ -dB SACD levels are required, DSD_ZERODB must be cleared, which matches a $^ { + 3 }$ -dB SACD output level. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/c56343a8417e1423bd58e54db5421661c8de466338b40cd0b0bd6968f2decb47.jpg)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/bf5acbea6d377c07c6f244903ebed3fb51fe762a595fc90f440b5cc69bd28b6c.jpg)



Figure 4-29. DSD Phase Modulation Mode Diagram


# 4.11 DSD and PCM Mixing

For mobile application, the CS43131 provides a feature for mixing in PCM notification during DSD playback, with the setup in Table 4-10. 


Table 4-10. Mixing Configurations Supported by the CS43131


<table><tr><td colspan="3">PCM Input Configuration</td><td colspan="3">DSD Input Configuration</td></tr><tr><td rowspan="4">I2S or TDM on ASP</td><td rowspan="4">44.1 kHz</td><td>Master</td><td rowspan="2">DSD on DSD IF</td><td rowspan="2">2.8224, 5.6448, or 11.2896 MHz on DSDCLK</td><td>Master</td></tr><tr><td>Slave 1</td><td>Slave 1</td></tr><tr><td>Master</td><td rowspan="2">DoP on XSP</td><td rowspan="2">176.4 or 352.8 kHz</td><td>Master</td></tr><tr><td>Slave 1</td><td>Slave 1</td></tr></table>


1.The ASP/XSP subclocks and DSDCLK are required to be synchronous. 


It is assumed that the DSD path has been properly configured for DSD playback. 

During normal DSD playback, the ASP can be shut down. At the PCM notification event, the ASP must be properly configured to receive PCM samples at 44.1 kHz. After the ASP subclocks are running, set MIX_PCM_PREP to indicate to the CS43131 that the PCM mixing event is imminent. After 1.6 ms, MIX_PCM_DSD can be safely set to initiate the mixing process. After the PCM notification mixing is complete, clear both MIX_PCM_DSD and MIX_PCM_PREP at the same time. If desired, the ASP can be shut down to save power. 

When mixing, use both PCM and DSD volume controls to attenuate the signal content on both paths (e.g., at least –6-dB attenuation on each) to avoid clipping on the mixing product. Use PCM_VOLUMEx to adjust the PCM path and DSD_ VOLUMEx to adjust the DSD path. All the signal path settings apply to both path’s individual settings. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/729a76ed27601b1bcd8f9c5d4fa84de49a911d480b802dfdb6a0bfed0e56f039.jpg)



Figure 4-30. PCM and DSD Mixing Signal Flow


# 4.12 Standard Interrupts

The interrupt output pin, $\overline { { { \sf I N T } } }$ , is used to signal the occurrence of events within the device’s interrupt status registers. Events can be masked individually by setting corresponding bits in the interrupt mask registers. Table 4-11 lists interrupt status and mask registers. The configuration of mask bits determines which events cause the immediate assertion of INT: 

• When an unmasked interrupt status event is detected, the status bit is set, and $\overline { { | \mathsf { N } | } }$ is asserted. 

• When a masked interrupt status event is detected, the interrupt status bit is set, but INT is not affected. 

Once INT is asserted, it remains asserted until all status bits that are unmasked and set have been read. Interrupt status bits are sticky and read-to-clear. Once set, they remain set until the register is read and the associated interrupt condition is not present. If a condition is still present and the status bit is read, although INT is deasserted, the status bit remains set. 

To clear status bits set due to the initiation of a block, all interrupt status bits must be read after the corresponding module is enabled and before normal operation begins. Otherwise, unmasking these previously set status bits causes assertion of INT. 

Interrupt source bits are set when edge-detect interrupts is detected, and they remain set until the register is read and the condition that caused the bit to assert is no longer present. 


Fig. 4-31 shows sticky-bit behavior.


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/d1b73b07af0e899fc5c767406c4327b21d6da698955079bfd8f999c6f7650019.jpg)



Figure 4-31. Example of Rising-Edge-Sensitive, Sticky, Interrupt-Status-Bit Behavior



Table 4-11. Interrupts Events and Register Bit Fields


<table><tr><td>Interrupt</td><td>Register Bit Field</td><td>Interrupt Mask Field</td></tr><tr><td>DAC overflow</td><td>DAC_OVFL_INT</td><td>DAC_OVFL_INT_MASK</td></tr><tr><td>HP unplug detect</td><td>HPDETECT_UNPLUG_INT</td><td>HPDETECT_UNPLUG_INT_MASK</td></tr><tr><td>HP plug detect</td><td>HPDETECT_PLUG_INT</td><td>HPDETECT_PLUG_INT_MASK</td></tr><tr><td>XTAL is ready</td><td>XTAL_READY_INT</td><td>XTAL READY_INT_MASK</td></tr><tr><td>XTAL error detected</td><td>XTAL_ERROR_INT</td><td>XTAL_ERROR_INT_MASK</td></tr><tr><td>ASP overload</td><td>ASP_OVLD_INT</td><td>ASP_OVLD_INT_MASK</td></tr><tr><td>ASP error</td><td>ASP_ERR_INT</td><td>ASP_ERR_INT_MASK</td></tr><tr><td>ASP late</td><td>ASP_LATE_INT</td><td>ASP_LATE_INT_MASK</td></tr><tr><td>ASP early</td><td>ASP_EARLY_INT</td><td>ASP_EARLY_INT_MASK</td></tr><tr><td>ASP no LRCK</td><td>ASP_NOLRCK_INT</td><td>ASP_NOLRCK_INT_MASK</td></tr><tr><td>XSP overload</td><td>XSP_OVLD_INT</td><td>XSP_OVLD_INT_MASK</td></tr><tr><td>XSP error</td><td>XSP_ERR_INT</td><td>XSP_ERR_INT_MASK</td></tr><tr><td>XSP late</td><td>XSP_LATE_INT</td><td>XSP_LATE_INT_MASK</td></tr><tr><td>XSP early</td><td>XSP_EARLY_INT</td><td>XSP_EARLY_INT_MASK</td></tr><tr><td>XSP no LRCK</td><td>XSP_NOLRCK_INT</td><td>XSP_NOLRCK_INT_MASK</td></tr><tr><td>PLL is ready</td><td>PLL_READY_INT</td><td>PLL_READY_INT_MASK</td></tr><tr><td>PLL error detected</td><td>PLL_ERROR_INT</td><td>PLL_ERROR_INT_MASK</td></tr><tr><td>Power down done</td><td>PDN_DONE_INT</td><td>PDN_DONE_INT_MASK</td></tr><tr><td>HP load error: DC measurement is not performed before AC measurement is initiated</td><td>HPLOAD_NO_DC_INT</td><td>HPLOAD_NO_DC_INT_MASK</td></tr><tr><td>HP load error: HP is unplugged during the measurement process</td><td>HPLOAD_UNPLUG_INT</td><td>HPLOAD_UNPLUG_INT_MASK</td></tr><tr><td>HP load error: PDN_HP is not properly set before HP load measurement is started</td><td>HPLOAD_HPON_INT</td><td>HPLOAD_HPON_INT_MASK</td></tr><tr><td>HP load error: out of range result is measured</td><td>HPLOAD_OOR_INT</td><td>HPLOAD_OOR_INT_MASK</td></tr><tr><td>HP load AC detection done</td><td>HPLOAD_AC_DONE_INT</td><td>HPLOAD_AC_DONE_INT_MASK</td></tr><tr><td>HP load DC detection done</td><td>HPLOAD_DC_DONE_INT</td><td>HPLOAD_DC_DONE_INT_MASK</td></tr><tr><td>HP load state machine turned off properly</td><td>HPLOAD_OFF_INT</td><td>HPLOAD_OFF_INT_MASK</td></tr><tr><td>HP load state machine turned on properly</td><td>HPLOAD_ON_INT</td><td>HPLOAD_ON_INT_MASK</td></tr><tr><td>DSD stuck Error</td><td>DSD_STUCK_INT</td><td>DSD_STUCK_INT_MASK</td></tr><tr><td>DSD channel A invalid error</td><td>DSD_INVALID_A_INT</td><td>DSD_INVALID_A_INT_MASK</td></tr><tr><td>DSD channel B invalid error</td><td>DSD_INVALID_B_INT</td><td>DSD_INVALID_B_INT_MASK</td></tr><tr><td>DSD channel A silence pattern detected</td><td>DSD_SILENCE_A_INT</td><td>DSD_SILENCE_A_INT_MASK</td></tr><tr><td>DSD channel B silence pattern detected</td><td>DSD_SILENCE_B_INT</td><td>DSD_SILENCE_B_INT_MASK</td></tr><tr><td>DSD rate error detected</td><td>DSD_RATE_INT</td><td>DSD_RATE_INT_MASK</td></tr><tr><td>DoP marker detected</td><td>DOP_MRK_DET_INT</td><td>DOP_MRK_DET_INT_MASK</td></tr><tr><td>DoP engine on</td><td>DOP_ON_INT</td><td>DOP_ON_INT_MASK</td></tr></table>

# 4.13 Control Port Operation

The control port is used to access control registers and on-chip memory locations, allowing the device to be configured for desired operational modes and formats. Control port operation may be completely asynchronous with respect to the audio sample rates. However, to avoid potential interference problems, control port pins must remain static if no operation is required. 

The control port operates using a I2C interface with the CS43131 acting as a slave device. Device communication must not begin until tPUD (refer to Table 3-22) after power conditions are ready and RESET is released. 

# 4.13.1 I2C Control Port Operation

The I2C control port operates completely asynchronously with the audio sample rates. However, to avoid interference problems, the I2C control-port pins must remain static if no operation is required. 

The control-port uses the I2C interface, with the chip acting as a slave device. The I2C control port can operate in the following modes: 

• Standard Mode (SM), with a bit rate of up to 100 kbit/s 

• Fast Mode (FM), with a bit rate of up to 400 kbit/s 

• Fast Mode Plus $( \mathsf { F M } + )$ , with a bit rate of up to 1 Mbit/s 

SDA is a bidirectional data line. Data is clocked into and out of the CS43131 by the SCL clock. Fig. 4-32, Fig. 4-33, and Fig. 4-34 show signal timings for read and write cycles. A Start condition is defined as a falling transition of SDA while SCL is high. A stop condition is defined as a rising transition of SDA while SCL is high. All other transitions of SDA must occur while SCL is low. Note that when HP_IN_LP is set, only SM and FM modes are supported. 

To configure the last two bits of I2C address, CS43131 detects the ADR resistor connection type and measures the resistance upon a device power up (POR event) or after a hardware reset event (RESET deasserted). Based on the detected resistance, the I2C address is latched and cannot be changed until the next hardware reset event. The I2C address configuration is not ready until tPUD after the hardware reset event. During this period, the CS43131 does not respond to any user-issued I2C command. After configuration, the IC tristates the ADR pin and becomes high impedance internally to avoid a constant bias current. 

To directly connect the ADR pin and ground, the last two bits of the I2C address are configured as the default 00. For the other options, use a resistor (with $5 \%$ accuracy) as suggested in the Table 4-12. 


Table 4-12. I2C Address Configurations


<table><tr><td>Connection Type</td><td>Resistor Value (Ω)</td><td>Last Two Bits of I²C Address</td></tr><tr><td>Pull-up to VL</td><td>0</td><td>11</td></tr><tr><td>Pull-up to VL</td><td>4990</td><td>10</td></tr><tr><td>Pull-down to GND</td><td>4990</td><td>01</td></tr><tr><td>Pull-down to GND</td><td>0</td><td>00 (Default)</td></tr></table>

If the operation is a write, the 3 bytes after the chip address are the memory address pointer (MAP) that select the address of the register to be read or written to next. The byte following the MAP is the control byte. Bit[0] of the control byte, INCR, selects whether autoincrementing is to be used $( { \mathsf { I N C R } } = 1 ) .$ ), allowing successive reads or writes of consecutive registers. Bits[2:1] of the control byte indicate the size of the data for the autoincrement to be acted on. Table 4-13 explains the format for the I2C control byte. 


Table 4-13. I2C Control-Byte Format


<table><tr><td>Bit</td><td>Name</td><td>Description</td></tr><tr><td>7:3</td><td>—</td><td>Reserved
Default: 0</td></tr><tr><td>2:1</td><td>SIZE</td><td>Register access width. Specifies the width of the register access.
00 8-bit (1 byte)
01-11 Reserved</td></tr><tr><td>0</td><td>INCR</td><td>Setting this bit allows the MAP address to autoincrement. The MAP address automatically increments every SIZE + 1 bytes accessed consecutively.
0 Disabled
1 Enabled</td></tr></table>

Each byte transferred on the I2C bus is separated by an acknowledge (ACK) bit. The CS43131 acknowledges each input byte read from the host, and the host must acknowledge each byte transmitted from the CS43131. 

For write operations, the data bytes following the MAP byte are written to the CS43131 register addresses pointed to by the last received MAP address, plus however many autoincrements have occurred. Fig. 4-32 shows a write pattern with autoincrementing. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/54dfebd9caf2ef6443d73a9dcf79bbb37fbcf455cfe08d92050b947106dd03ff.jpg)



Figure 4-32. Control Port Timing, I2C Writes with Autoincrement (8-bit Data Access)


For read operations, the contents of the register pointed to by the last received MAP address (plus however many autoincrements have occurred if INCR was previously set) are output in the next byte. Fig. 4-33 shows a read pattern following the write pattern in Fig. 4-32. Notice how read addresses are based on the MAP bytes from Fig. 4-32. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/dd44eeb542a4d67fd28fb5a0fbd0553f4d0c7ca2fc1018046739f080fabc0a31.jpg)



Figure 4-33. Control Port Timing, I2C Reads with Autoincrement (8-Bit Data Access)


To generate a read address not based on the last received MAP address, an aborted write operation can be used as a preamble (see Fig. 4-34). Here, a write operation is aborted (after the ACK for the control byte) by sending a Stop condition. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/17ff17b04eb7a143d30ec528517e59c9d63f638c974d6c5dca82753c7abaf358.jpg)



Figure 4-34. Control Port Timing, I2C Reads with Preamble and Autoincrement (8-Bit Data Access)


# 4.14 Programmable Filter

In the CS43131, there are a series of programmable filters which is open for user's customization. The filter coefficients can be programmed for altering frequency response or other characteristics to fit the design intention. The filter runs at the input sample rate as set by xSP. This feature is intended to be used for normal PCM playback under single-, double-, and quad-speed settings. (If operating at 192 kHz, MCLK_INT is required to be at 24.576 MHz.) For WBF mode and impedance measurement mode, the filter should be properly turned off. 

The filter series are composed of 1 first-order IIR system (FOS) and 3 second-order IIR system (SOS), which effectively is a seventh-order system. FOS and SOS structures are illustrated as in Fig. 4-35 and Fig. 4-36, respectively. Any filter stage can be chosen to be either utilized or bypassed through coefficient settings. Each stage is represented by filter coefficients, which is accessed through I2C writes. The filter coefficients are located in register address 0x09 000C to 0x09 0041. Each coefficient is comprised of a most-significant byte, a least-significant byte, and a sign byte. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/943b7f030f11b563bed0978433f36656e879426c809bdfad24569ffe968fcf12.jpg)



Figure 4-35. First-Order IIR System


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/29d10dd8f76d8e7cc0a4f59d51b152b16c682e77be9d40aa972acfcd92082587.jpg)



Figure 4-36. Second-Order IIR System


The filter can only be programmed when PDN_HP is set. Program the filter coefficients when PDN_HP is cleared will result in non-expected behavior. 

To properly enable each filter's coefficients, after the coefficients is programmed in control port, user enable the control port filter coefficients through registers Programmable Filter Control 1 and Programmable Filter Control 2. When user not using the programmable filters, the filter should be disabled properly. 

# 5 Applications

This section provides recommended application procedures and instruction sequences for standard CS43131 operations. 

# 5.1 PLL Clocking

Data-path logic is in the MCLK_INT domain, where MCLK_INT is expected to be 22.5792 or 24.576 MHz. For clocking scenarios in which the external system MCLK provided to CS43131 is neither 22.5792 nor 24.576 MHz, the PLL must be turned on to provide the desired internal MCLK. At start up, the system uses RCO as the internal MCLK for PLL programming over I2C and switches to the PLL output after it settles. PLL start-up time is a maximum of 1 ms. 

# 5.2 Power Sequencing

Note the following for power-up sequencing on the CS43131: 

• VP must be powered up first. 

• All other supplies can come up in any order before RESET is released. 

Note the following for power-down sequencing on the CS43131: 

• After RESET is asserted, VA/VCP/VL/VD can be removed in any order. 

• VP must be powered down last. 

# 5.3 Crystal Tuning

The CS43131 uses an external crystal as the source for internal MCLK. Refer to Table 3-16 for the load capacitance that is supported by CS43131. Table 5-1 lists supported crystals that meet the requirements for CS43131 and also shows also shows the XTAL_IBIAS settings for different crystals. 


Table 5-1. Example List of Supported Crystals


<table><tr><td>Manufacturer 1</td><td>Part Number 1</td><td>Frequency (MHz)</td><td>Bias Current Strength (μA)</td><td>Crystal Setting Register (0x20052)</td></tr><tr><td rowspan="2">River Electronics</td><td>FCX-06-22.5792J51933</td><td>22.5792</td><td>12.5</td><td>0x04</td></tr><tr><td>FCX-06-24.5760J51930</td><td>24.576</td><td>7.5</td><td>0x06</td></tr><tr><td rowspan="2">NDK</td><td>NX2016SA 22.5792M EXS00A-CS09116</td><td>22.5792</td><td rowspan="2">15</td><td rowspan="2">0x02</td></tr><tr><td>NX2016SA 24.576M EXS00A-CS09117</td><td>24.576</td></tr><tr><td rowspan="2">TXC</td><td>8Y22570001</td><td>22.5792</td><td rowspan="2">12.5</td><td rowspan="2">0x04</td></tr><tr><td>8Y24570001</td><td>24.576</td></tr></table>


1.Contact your local Cirrus Logic representative for a list of supported manufacturers and part numbers. 


The crystal setting register (0x20052) must be set appropriately based on the crystal used. 

The frequency at which the crystal eventually oscillates can be calculated using the formula below: 

$$
F _ {\text {o s c}} = 1 / \left(2 ^ {*} \pi^ {*} \operatorname {s q r t} \left[ L m ^ {*} \left(C _ {m} \left(C _ {0} + C _ {L}\right)\right) / \left(C _ {m} + C _ {0} + C _ {L}\right) \right]\right),
$$

where 

$$
\begin{array}{l} L _ {m} = \text {m o t i o n a l} \\ C _ {m} = \text {m o t i o n a l c a p a c i t a n c e o f c r y s t a l} \\ C _ {0} = \text {s h u n t c a p a c i t a n c e} \\ C _ {L} = \text {l o a d c a p a c i t a n c e} \\ \end{array}
$$

Trace capacitance and pad capacitance (approximately 0.5 pF) must also be taken into account while calculating the value of the load capacitors. Below are the steps to tune the crystal to the correct frequency: 

1. Select load capacitor values that match the load capacitance spec in crystal manufacturer's data sheet. 

2. Power up and verify communication with CS43131. If there is no communication, it is possible that the crystal did not start. Check power rails and load capacitance and try again. 

3. Clear PDN_CLKOUT in the Power Down Control (0x20000) register. This sets the clock output at MCLK_INT/2 frequency from CLKOUT pin. 

4. Measure the frequency and verify that it is within acceptable range of the desired frequency. If yes, continue normal operation. If not, power down the chip, change the load capacitor values and go back to step 2. 

Note: These steps need to be performed only once per PCB. 

# 5.4 Alert Mixing Shutdown

To prevent a DSD mute pattern from turning off the DAC while mixing DSD data with PCM data, turn off the auto mute by clearing the DSD_AMUTE bit. 

# 5.5 Enable/Disable Alternate Headphone Path (HPINx)

If the user decides to use the HPINx path, the following sequences must be followed to enable/disable the alternate headphone path (HPINx). 

# 5.5.1 HPINx Alternate Headphone Path Enable Sequence

To enable the HPINx path, follow the sequence in Ex. 5-1. 


Example 5-1. HPINx Enable Sequence


<table><tr><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="8">Enable headphone input</td><td>HP Output Control 1. 0x80000</td><td>0x38</td><td></td></tr><tr><td>HP_CLAMPA</td><td>0</td><td>Function disabled</td></tr><tr><td>HP_CLAMPB</td><td>0</td><td>Function disabled</td></tr><tr><td>OUT_FS</td><td>11</td><td>Headphone output voltage setting is irrelevant</td></tr><tr><td>HP_IN_EN</td><td>1</td><td>Enable HPIN switch</td></tr><tr><td>HP_IN_LP</td><td>0</td><td>Function disabled</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>+1dB_EN</td><td>0</td><td></td></tr><tr><td colspan="4">Wait for 1.1 ms.</td></tr><tr><td rowspan="8">Enable low power mode</td><td>HP Output Control 1. 0x80000</td><td>0x3C</td><td></td></tr><tr><td>HP_CLAMPA</td><td>0</td><td>Function disabled</td></tr><tr><td>HP_CLAMPB</td><td>0</td><td>Function disabled</td></tr><tr><td>OUT_FS</td><td>11</td><td>Headphone output voltage setting is irrelevant</td></tr><tr><td>HP_IN_EN</td><td>1</td><td>Enable HPIN switch</td></tr><tr><td>HP_IN_LP</td><td>1</td><td>Function enabled</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>+1dB_EN</td><td>0</td><td></td></tr></table>

# 5.5.2 HPINx Disable Sequence

To disable the HPINx path, follow the sequence in Ex. 5-2. For pop-free operation, the audio input must be completely ramped down before executing this sequence. 


Example 5-2. HPINx Disable


<table><tr><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="8">Disable HPINx low power mode</td><td>HP Output Control 1. 0x80000</td><td>0x38</td><td></td></tr><tr><td>HP_CLAMPA</td><td>0</td><td>Function disabled</td></tr><tr><td>HP_CLAMPB</td><td>0</td><td>Function disabled</td></tr><tr><td>OUT_FS</td><td>11</td><td>Headphone output voltage setting is irrelevant</td></tr><tr><td>HP_IN_EN</td><td>1</td><td>Enable HPIN switch</td></tr><tr><td>HP_IN_LP</td><td>0</td><td>Function disabled</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>+1dB_EN</td><td>0</td><td></td></tr><tr><td rowspan="8">Disable headphone input</td><td>HP Output Control 1. 0x80000</td><td>0x30</td><td></td></tr><tr><td>HP_CLAMPPA</td><td>0</td><td></td></tr><tr><td>HP_CLAMPPB</td><td>0</td><td></td></tr><tr><td>OUT_FS</td><td>11</td><td></td></tr><tr><td>HP_IN_EN</td><td>0</td><td>Disable HPIN</td></tr><tr><td>HP_IN_LP</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>+1dB_EN</td><td>0</td><td></td></tr></table>

# 5.6 Headphone Power Down Sequences

Examples of power down sequences for PCM and DSD are shown in Ex. 5-3 and Ex. 5-4, respectively. Follow the stated sequence every time to shut down the headphone output. The sequence assumes that the PDN_DONE_INT interrupt bit is unmasked. 

# 5.6.1 PCM Power Down Sequence


Example 5-3. PCM Power Down Sequence


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="9">1</td><td rowspan="9">Enable PDN_DONE interrupt</td><td>Interrupt Mask 1. 0xF0010</td><td>data(0xF0010) AND (0xFE)</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>x</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>x</td><td></td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>x</td><td></td></tr><tr><td>XTALREADY_INT_MASK</td><td>x</td><td></td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>x</td><td></td></tr><tr><td>PLL_READY_INT_MASK</td><td>x</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>x</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>0</td><td>Enable PDN_DONE interrupt</td></tr><tr><td rowspan="9">2</td><td rowspan="9">Power down amplifier</td><td>Power Down Control. 0x20000</td><td>data(0x20000) OR (0x10)</td><td></td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN.asp</td><td>x</td><td></td></tr><tr><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td>Turn off HP</td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>x</td><td></td></tr><tr><td>3</td><td colspan="4">Wait for interrupt. Check for PDN_DONE_INT = 1 in Interrupt Status 1 register (0xF0000).</td></tr><tr><td rowspan="9">4</td><td rowspan="9">Power down ASP</td><td>Power Down Control. 0x20000</td><td>data(0x20000) OR (0x40)</td><td></td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN.asp</td><td>1</td><td>Turn off ASP</td></tr><tr><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td>PDN_HP</td><td>x</td><td></td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>x</td><td></td></tr></table>

# 5.6.2 DSD Power Down Sequence


Example 5-4. DSD Power Down Sequence


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td>Enable PDN_DONE interrupt</td><td>Interrupt Mask 1.0xF0010</td><td>data(0xF0010) AND (0xFE)</td><td></td></tr><tr><td></td><td></td><td>DAC_OVFL_INT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>HPDetect_PLUG_INT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>HPDetect_UNPLUG_INT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>XTAL_READINT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>XTAL_ERROR_INT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PLL_READINT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PLL_ERROR_INT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PDN_DONE_INT_MASK</td><td>0</td><td>Enable PDN_DONE interrupt</td></tr><tr><td rowspan="9">2</td><td rowspan="9">Power down amplifier</td><td>Power Down Control. 0x20000</td><td>data(0x20000)OR (0x10)</td><td></td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN_ ASP</td><td>x</td><td></td></tr><tr><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td>Turn off HP</td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>x</td><td></td></tr><tr><td>3</td><td colspan="4">Wait for interrupt. Check for PDN_DONE_INT = 1 in Interrupt Status 1 register (0xF0000).</td></tr><tr><td rowspan="9">4</td><td rowspan="9">Power down XSP/ASP/DSDIF interfaces</td><td>Power Down Control. 0x20000</td><td>data(0x20000)OR (0xE0)</td><td></td></tr><tr><td>PDN_XSP</td><td>1</td><td></td></tr><tr><td>PDN_ ASP</td><td>1</td><td></td></tr><tr><td>PDN_DSDIF</td><td>1</td><td></td></tr><tr><td>PDN_HP</td><td>x</td><td></td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>x</td><td></td></tr></table>

# 5.7 Headphone Power-Up Sequence

An example of the power-up sequence for PCM and DSD are shown in Ex. 5-5 and Ex. 5-6, respectively. Follow the stated sequence every time to power up the headphone output. 

# 5.7.1 PCM Power-Up Sequence


Example 5-5. PCM Power-Up Sequence


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="2">1</td><td rowspan="2">Pop-free power-up settings</td><td>0x10010</td><td>0x99</td><td></td></tr><tr><td>0x80032</td><td>0x20</td><td></td></tr><tr><td rowspan="9">2</td><td rowspan="9" colspan="2">Power on appropriate interface. Power Down Control. 0x20000</td><td>data (0x20000) AND (0xBF)</td><td></td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN ASAP</td><td>0</td><td>Power up ASP</td></tr><tr><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td>PDN_HP</td><td>x</td><td></td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td rowspan="9">3</td><td rowspan="9">Power on amplifier</td><td>Power Down Control. 0x20000</td><td>data (0x20000) AND (0xEF)</td><td></td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN ASAP</td><td>x</td><td></td></tr><tr><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td>PDN_HP</td><td>0</td><td>Power up HP</td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>4</td><td colspan="4">Wait for 12 ms</td></tr><tr><td rowspan="2">5</td><td rowspan="2">Restore default settings</td><td>0x80032</td><td>0x00</td><td></td></tr><tr><td>0x10010</td><td>0x00</td><td></td></tr></table>

# 5.7.2 DSD Power-Up Sequence


Example 5-6. DSD Power-Up Sequence


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="2">1</td><td rowspan="2">Pop-free power-up settings</td><td>0x10010</td><td>0x99</td><td></td></tr><tr><td>0x80032</td><td>0x20</td><td></td></tr><tr><td rowspan="9">2</td><td rowspan="9" colspan="2">Power on appropriate interface. Power Down Control. 0x20000</td><td>data (0x20000) AND (0xHH)</td><td>For DoP on XSP, HH = 7F. For DoP on ASP, HH = BF. For DSD interface, HH = DF.</td></tr><tr><td>PDN_XSP</td><td>B</td><td>Enable XSP, ASP, or DSDIF interface</td></tr><tr><td>PDN_ASPP</td><td>B</td><td></td></tr><tr><td>PDN_DSDIF</td><td>B</td><td></td></tr><tr><td>PDN_HP</td><td>x</td><td></td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>x</td><td></td></tr><tr><td rowspan="9">3</td><td rowspan="9">Power on amplifier</td><td>Power Down Control. 0x20000</td><td>data (0x20000) AND (0xEF)</td><td></td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN_ASPP</td><td>x</td><td></td></tr><tr><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td>PDN_HP</td><td>0</td><td>Power up HP</td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>4</td><td colspan="4">Wait for 12 ms</td></tr><tr><td rowspan="2">5</td><td rowspan="2">Restore default settings</td><td>0x80032</td><td>0x00</td><td></td></tr><tr><td>0x10010</td><td>0x00</td><td></td></tr></table>

# 5.8 Power-Down Sequence in External VCPFILT Mode

These sequences allow the CS43131 to be powered down in external VCPFILT mode without any audible pops. 

# 5.8.1 PCM Pop-Free Power-Down Sequence in External VCPFILT Mode

<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td>Pop-free power-down settings</td><td>0x10010</td><td>0x99</td><td></td></tr><tr><td></td><td></td><td>0x80046</td><td>0x21</td><td></td></tr><tr><td>2</td><td>Mute both channels</td><td>PCM Path Signal Control 1. 0x90003</td><td>data(0x90003)OR (0x03)</td><td></td></tr><tr><td></td><td></td><td>PCM RAMP DOWN</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PCM_VOL_BEQA</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PCM_SZC</td><td>xx</td><td></td></tr><tr><td></td><td></td><td>PCM_AMUTE</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PCM_AMUTEBEQA</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PCM_MUTE_A</td><td>1</td><td>Channel A is muted</td></tr><tr><td></td><td></td><td>PCM_MUTE_B</td><td>1</td><td>Channel B is muted</td></tr><tr><td>3</td><td>Wait 150 ms for mute to occur</td><td></td><td></td><td></td></tr><tr><td>4</td><td>Enable PDN_DONE interrupt</td><td>Interrupt Mask 1. 0xF0010</td><td>data(0xF0010)AND (0xFE)</td><td></td></tr><tr><td></td><td></td><td>DAC_OVFL_INT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>HPDETECT_PLUG_INT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>HPDETECT_UNPLUG_INT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>XTAL_READY_INT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>XTAL_ERROR_INT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PLL_READY_INT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PLL_ERROR_INT_MASK</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PDN_DONE_INT_MASK</td><td>0</td><td>Enable PDN_DONE interrupt</td></tr><tr><td>5</td><td>Power down amplifier</td><td>Power Down Control. 0x20000</td><td>data(0x20000)OR (0x10)</td><td></td></tr><tr><td></td><td></td><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PDN.asp</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PDN_HP</td><td>1</td><td></td></tr><tr><td></td><td></td><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td></td><td></td><td>PDN_CLKOUT</td><td>x</td><td>Turn off HP</td></tr><tr><td></td><td></td><td>Reserved</td><td>x</td><td></td></tr></table>


6 Wait for interrupt. Check for PDN_DONE_INT = 1 in Interrupt Status 1 register (0xF0000). 


<table><tr><td rowspan="9">7</td><td rowspan="9">Power down ASP</td><td>Power Down Control. 0x20000</td><td colspan="2">data(0x20000)OR (0x40)</td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN ASAP</td><td>1</td><td></td></tr><tr><td>PDN_DSDIF</td><td>x</td><td>Turn off ASP</td></tr><tr><td>PDN_HP</td><td>x</td><td></td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>x</td><td></td></tr><tr><td rowspan="8">8</td><td rowspan="8">Unmute both channels</td><td>PCM Path Signal Control 1. 0x90003</td><td colspan="2">data(0x90003)AND (0xFC)</td></tr><tr><td>PCM_RAMP_DOWN</td><td>x</td><td></td></tr><tr><td>PCM_VOL_BEQA</td><td>x</td><td></td></tr><tr><td>PCM_SZC</td><td>xx</td><td></td></tr><tr><td>PCM_AMUTE</td><td>x</td><td></td></tr><tr><td>PCM_AMUTEBEQA</td><td>x</td><td></td></tr><tr><td>PCM_MUTE_A</td><td>0</td><td>Channel A is unmuted</td></tr><tr><td>PCM_MUTE_B</td><td>0</td><td>Channel B is unmuted</td></tr><tr><td rowspan="2">9</td><td rowspan="2">Restore default settings</td><td>0x80046</td><td>0x20</td><td></td></tr><tr><td>0x10010</td><td>0x00</td><td></td></tr></table>


5.8.2 DSD Pop-Free Power-Down Sequence in External VCPFILT Mode


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="2">1</td><td rowspan="2">Pop-free power-down settings</td><td>0x10010</td><td>0x99</td><td></td></tr><tr><td>0x80046</td><td>0x21</td><td></td></tr><tr><td rowspan="10">2</td><td rowspan="10">Mute both channels</td><td>DSD Processor Path Signal Control 1.</td><td>data(0x70002)</td><td></td></tr><tr><td>0x70002</td><td>OR (0x03)</td><td></td></tr><tr><td>DSD_RAMP_UP</td><td>x</td><td></td></tr><tr><td>DSD_VOL_BEQA</td><td>x</td><td></td></tr><tr><td>DSD_SZC</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>x</td><td></td></tr><tr><td>DSD_AMUTE</td><td>x</td><td></td></tr><tr><td>DSD_AMUTE_BEQA</td><td>x</td><td></td></tr><tr><td>DSD_MUTE_A</td><td>1</td><td>Channel A is muted</td></tr><tr><td>DSD_MUTE_B</td><td>1</td><td>Channel B is muted</td></tr><tr><td>3</td><td colspan="4">Wait 150 ms for mute to occur</td></tr><tr><td rowspan="9">4</td><td rowspan="9">Enable PDN_DONE interrupt</td><td>Interrupt Mask 1. 0xF0010</td><td>data(0xF0010) AND (0xFE)</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>x</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>x</td><td></td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>x</td><td></td></tr><tr><td>XTAL_READY_INT_MASK</td><td>x</td><td></td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>x</td><td></td></tr><tr><td>PLL_READY_INT_MASK</td><td>x</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>x</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>0</td><td>Enable PDN_DONE interrupt</td></tr><tr><td rowspan="9">5</td><td rowspan="9">Power down amplifier</td><td>Power Down Control. 0x20000</td><td>data(0x20000) OR (0x10)</td><td></td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN_ ASP</td><td>x</td><td></td></tr><tr><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td>Turn off HP</td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>x</td><td></td></tr><tr><td>6</td><td colspan="4">Wait for interrupt. Check for PDN_DONE_INT = 1 in Interrupt Status 1 register (0xF0000).</td></tr><tr><td rowspan="9">7</td><td rowspan="9">Power down XSP/ASP/DSDIF interfaces</td><td>Power Down Control. 0x20000</td><td>data(0x20000) OR (0XE0)</td><td></td></tr><tr><td>PDN_XSP</td><td>1</td><td></td></tr><tr><td>PDN_ ASP</td><td>1</td><td></td></tr><tr><td>PDN_DSDIF</td><td>1</td><td></td></tr><tr><td>PDN_HP</td><td>x</td><td></td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>x</td><td></td></tr></table>

<table><tr><td rowspan="9">8 Unmute both channels</td><td>DSD Processor Path Signal Control 1. 0x70002</td><td>data(0x70002) AND (0xFC)</td><td></td></tr><tr><td>DSD_RAMP_UP</td><td>x</td><td></td></tr><tr><td>DSD_VOL_BEQA</td><td>x</td><td></td></tr><tr><td>DSD_SZC</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>x</td><td></td></tr><tr><td>DSD_AMUTE</td><td>x</td><td></td></tr><tr><td>DSD_AMUTE_BEQA</td><td>x</td><td></td></tr><tr><td>DSD_MUTE_A</td><td>0</td><td>Channel A is unmuted</td></tr><tr><td>DSD_MUTE_B</td><td>0</td><td>Channel B is unmuted</td></tr><tr><td rowspan="2">9 Restore default settings</td><td>0x80046</td><td>0x20</td><td></td></tr><tr><td>0x10010</td><td>0x00</td><td></td></tr></table>

# 5.9 Enabling and Disabling NOS Filter

Section 5.9.1 and Section 5.9.2 describe pop-free sequences for enabling and disabling the NOS filter, respectively. 

# 5.9.1 Sequence for Enabling NOS Filter

<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="8">1</td><td rowspan="8">Set mute to occur with soft ramp only</td><td>PCM Path Signal Control 1. 0x90003</td><td>data (0x90003) AND (0xEF) OR (0x20)</td><td></td></tr><tr><td>PCM_RAMP_DOWN</td><td>x</td><td></td></tr><tr><td>PCM_VOL_BEQA</td><td>x</td><td></td></tr><tr><td>PCM_SZC</td><td>10</td><td>Enable soft ramp</td></tr><tr><td>PCM_AMUTE</td><td>x</td><td></td></tr><tr><td>PCM_AMUTEBEQA</td><td>x</td><td></td></tr><tr><td>PCM_MUTE_A</td><td>x</td><td></td></tr><tr><td>PCM_MUTE_B</td><td>x</td><td></td></tr><tr><td rowspan="8">2</td><td rowspan="8">Mute both channels</td><td>PCM Path Signal Control 1. 0x90003</td><td>data (0x90003) OR (0x03)</td><td></td></tr><tr><td>PCM_RAMP_DOWN</td><td>x</td><td></td></tr><tr><td>PCM_VOL_BEQA</td><td>x</td><td></td></tr><tr><td>PCM_SZC</td><td>xx</td><td></td></tr><tr><td>PCM_AMUTE</td><td>x</td><td></td></tr><tr><td>PCM_AMUTEBEQA</td><td>x</td><td></td></tr><tr><td>PCM_MUTE_A</td><td>1</td><td>Channel A output is muted</td></tr><tr><td>PCM_MUTE_B</td><td>1</td><td>Channel B output is muted</td></tr><tr><td>3</td><td colspan="4">Wait for 150 ms for mute to occur</td></tr><tr><td rowspan="8">4</td><td rowspan="8">Enable NOS filter</td><td>PCM Filter Option. 0x90000</td><td>data (0x90000) OR (0x20)</td><td></td></tr><tr><td>FILTER_SLOW_FASTB</td><td>x</td><td></td></tr><tr><td>PHCOMP_LOWLATB</td><td>x</td><td></td></tr><tr><td>NOS</td><td>1</td><td>NOS emulation mode is on</td></tr><tr><td>Reserved</td><td>0 0</td><td></td></tr><tr><td>PCM_WBF_EN</td><td>x</td><td></td></tr><tr><td>HIGH_PASS</td><td>x</td><td></td></tr><tr><td>DEEMP_ON</td><td>x</td><td></td></tr><tr><td rowspan="8">5</td><td rowspan="8">Restore PCM_SZC mode if desired</td><td>PCM Path Signal Control 1. 0x90003</td><td>0xHH</td><td></td></tr><tr><td>PCM_RAMP_DOWN</td><td>x</td><td></td></tr><tr><td>PCM_VOL_BEQA</td><td>x</td><td></td></tr><tr><td>PCM_SZC</td><td>BB</td><td>Restore PCM_SZC to desired value</td></tr><tr><td>PCM_AMUTE</td><td>x</td><td></td></tr><tr><td>PCM_AMUTEBEQA</td><td>x</td><td></td></tr><tr><td>PCM_MUTE_A</td><td>x</td><td></td></tr><tr><td>PCM_MUTE_B</td><td>x</td><td></td></tr><tr><td rowspan="8">6</td><td rowspan="8">Unmute both channels</td><td>PCM Path Signal Control 1. 0x90003</td><td>data (0x90003) AND (0xFC)</td><td></td></tr><tr><td>PCM_RAMP_DOWN</td><td>x</td><td></td></tr><tr><td>PCM_VOL_BEQA</td><td>x</td><td></td></tr><tr><td>PCM_SZC</td><td>xx</td><td></td></tr><tr><td>PCM_AMUTE</td><td>x</td><td></td></tr><tr><td>PCM_AMUTEBEQA</td><td>x</td><td></td></tr><tr><td>PCM_MUTE_A</td><td>0</td><td>Function is disabled</td></tr><tr><td>PCM_MUTE_B</td><td>0</td><td>Function is disabled</td></tr></table>


5.9.2 Sequence for Disabling NOS Filter


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="8">1</td><td rowspan="8">Set mute to occur with soft ramp only</td><td>PCM Path Signal Control 1. 0x90003</td><td>data (0x90003) AND (0xEF) OR (0x20)</td><td></td></tr><tr><td>PCM RAMP DOWN</td><td>x</td><td></td></tr><tr><td>PCM VOL BEQA</td><td>x</td><td></td></tr><tr><td>PCM SZC</td><td>10</td><td>Enable soft ramp</td></tr><tr><td>PCM AMUTE</td><td>x</td><td></td></tr><tr><td>PCM AMUTEBEQA</td><td>x</td><td></td></tr><tr><td>PCM MUTE_A</td><td>x</td><td></td></tr><tr><td>PCM MUTE_B</td><td>x</td><td></td></tr><tr><td rowspan="8">2</td><td rowspan="8">Mute both channels</td><td>PCM Path Signal Control 1. 0x90003</td><td>data (0x90003) OR (0x03)</td><td></td></tr><tr><td>PCM RAMP DOWN</td><td>x</td><td></td></tr><tr><td>PCM VOL BEQA</td><td>x</td><td></td></tr><tr><td>PCM SZC</td><td>xx</td><td></td></tr><tr><td>PCM AMUTE</td><td>x</td><td></td></tr><tr><td>PCM AMUTEBEQA</td><td>x</td><td></td></tr><tr><td>PCM MUTE_A</td><td>1</td><td>Channel A output is muted</td></tr><tr><td>PCM MUTE_B</td><td>1</td><td>Channel B output is muted</td></tr><tr><td>3</td><td colspan="4">Wait for 150 ms for mute to occur</td></tr><tr><td rowspan="8">4</td><td rowspan="8">Disable NOS filter</td><td>PCM Filter Option. 0x90000</td><td>data (0x90000) AND (0xDF)</td><td></td></tr><tr><td>FILTER SLOW_FASTB</td><td>x</td><td></td></tr><tr><td>PHCOMP_LOWLATB</td><td>x</td><td></td></tr><tr><td>NOS</td><td>0</td><td>NOS emulation mode is off</td></tr><tr><td>Reserved</td><td>0 0</td><td></td></tr><tr><td>PCM WBF_EN</td><td>x</td><td></td></tr><tr><td>HIGH_PASS</td><td>x</td><td></td></tr><tr><td>DEEMP_ON</td><td>x</td><td></td></tr><tr><td rowspan="8">5</td><td rowspan="8">Restore PCM_SZC mode if desired</td><td>PCM Path Signal Control 1. 0x90003</td><td>0xHH</td><td></td></tr><tr><td>PCM RAMP DOWN</td><td>x</td><td></td></tr><tr><td>PCM VOL BEQA</td><td>x</td><td></td></tr><tr><td>PCM SZC</td><td>BB</td><td>Restore PCM_SZC to desired value</td></tr><tr><td>PCM AMUTE</td><td>x</td><td></td></tr><tr><td>PCM AMUTEBEQA</td><td>x</td><td></td></tr><tr><td>PCM MUTE_A</td><td>x</td><td></td></tr><tr><td>PCM MUTE_B</td><td>x</td><td></td></tr><tr><td rowspan="8">6</td><td rowspan="8">Unmute both channels</td><td>PCM Path Signal Control 1. 0x90003</td><td>data (0x90003) AND (0xFC)</td><td></td></tr><tr><td>PCM RAMP DOWN</td><td>x</td><td></td></tr><tr><td>PCM VOL BEQA</td><td>x</td><td></td></tr><tr><td>PCM SZC</td><td>xx</td><td></td></tr><tr><td>PCM AMUTE</td><td>x</td><td></td></tr><tr><td>PCM AMUTEBEQA</td><td>x</td><td></td></tr><tr><td>PCM MUTE_A</td><td>0</td><td>Function is disabled</td></tr><tr><td>PCM MUTE_B</td><td>0</td><td>Function is disabled</td></tr></table>

# 5.10 Sequence for Using PCM Invert Bits

Section 5.10.1 and Section 5.10.2 describe sequences for enabling the PCM_INV_A and PCM_INV_B bits, respectively. 


5.10.1 Sequence for Enabling Channel A Invert


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="8">1</td><td rowspan="8">Invert channel A calibration</td><td>0x180005</td><td>0xCC</td><td></td></tr><tr><td>0x180006</td><td>0xAA</td><td></td></tr><tr><td>0x180015</td><td>0xFB</td><td></td></tr><tr><td>0x180016</td><td>0xFB</td><td></td></tr><tr><td>0x180025</td><td>0xF5</td><td></td></tr><tr><td>0x180026</td><td>0xFE</td><td></td></tr><tr><td>0x180035</td><td>0x8F</td><td></td></tr><tr><td>0x180036</td><td>0xFC</td><td></td></tr><tr><td rowspan="7">2</td><td rowspan="7">Enable channel A invert</td><td rowspan="2">PCM Path Signal Control 2. 0x90004</td><td>data (0x90004)</td><td></td></tr><tr><td>OR (0x08)</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>PCM_INV_A</td><td>1</td><td>Enable Channel A invert</td></tr><tr><td>PCM_INV_B</td><td>x</td><td></td></tr><tr><td>PCM_SWAPChan</td><td>x</td><td></td></tr><tr><td>PCM copying Chan</td><td>x</td><td></td></tr></table>


5.10.2 Sequence for Disabling Channel A Invert


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="8">1</td><td rowspan="8">Restore channel A calibration</td><td>0x180005</td><td>0x24</td><td></td></tr><tr><td>0x180006</td><td>0x05</td><td></td></tr><tr><td>0x180015</td><td>0x05</td><td></td></tr><tr><td>0x180016</td><td>0x04</td><td></td></tr><tr><td>0x180025</td><td>0x0B</td><td></td></tr><tr><td>0x180026</td><td>0x01</td><td></td></tr><tr><td>0x180035</td><td>0x71</td><td></td></tr><tr><td>0x180036</td><td>0x03</td><td></td></tr><tr><td rowspan="6">2</td><td rowspan="6">Disable channel A invert</td><td>PCM Path Signal Control 2. 0x90004</td><td>data (0x90004) AND (0xF7)</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>PCM_INV_A</td><td>0</td><td>Disable Channel A invert</td></tr><tr><td>PCM_INV_B</td><td>x</td><td></td></tr><tr><td>PCM_SWAPChan</td><td>x</td><td></td></tr><tr><td>PCM_COPYChan</td><td>x</td><td></td></tr></table>


5.10.3 Sequence for Enabling Channel B Invert


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="8">1</td><td rowspan="8">Invert channel B calibration</td><td>0x18000D</td><td>0x74</td><td></td></tr><tr><td>0x18000E</td><td>0xAA</td><td></td></tr><tr><td>0x18001D</td><td>0xEF</td><td></td></tr><tr><td>0x18001E</td><td>0xFB</td><td></td></tr><tr><td>0x18002D</td><td>0xD0</td><td></td></tr><tr><td>0x18002E</td><td>0xFE</td><td></td></tr><tr><td>0x18003D</td><td>0x64</td><td></td></tr><tr><td>0x18003E</td><td>0xFC</td><td></td></tr><tr><td rowspan="6">2</td><td rowspan="6">Enable channel B invert</td><td>PCM Path Signal Control 2. 0x90004</td><td>data (0x90004)OR (0x04)</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>PCM_INV_A</td><td>x</td><td></td></tr><tr><td>PCM_INV_B</td><td>1</td><td>Enable Channel B invert</td></tr><tr><td>PCM_SWAPChan</td><td>x</td><td></td></tr><tr><td>PCM copying Chan</td><td>x</td><td></td></tr></table>


5.10.4 Sequence for Disabling Channel B Invert


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="8">1</td><td rowspan="8">Restore channel B calibration</td><td>0x18000D</td><td>0x8C</td><td></td></tr><tr><td>0x18000E</td><td>0x05</td><td></td></tr><tr><td>0x18001D</td><td>0x31</td><td></td></tr><tr><td>0x18001E</td><td>0x04</td><td></td></tr><tr><td>0x18002D</td><td>0x30</td><td></td></tr><tr><td>0x18002E</td><td>0x01</td><td></td></tr><tr><td>0x18003D</td><td>0x9C</td><td></td></tr><tr><td>0x18003E</td><td>0x03</td><td></td></tr><tr><td rowspan="6">2</td><td rowspan="6">Disable channel B invert</td><td>PCM Path Signal Control 2. 0x90004</td><td>data (0x90004) AND (0xFB)</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>PCM_INV_A</td><td>x</td><td></td></tr><tr><td>PCM_INV_B</td><td>0</td><td>Disable Channel B invert</td></tr><tr><td>PCM_SWAPChan</td><td>x</td><td></td></tr><tr><td>PCM copying Chan</td><td>x</td><td></td></tr></table>

# 5.11 Sequences for Using the PCM Channel Swap Bit

The following subsections describe sequences for enabling and disabling the PCM_SWAP_CHAN bit. 

# 5.11.1 Sequence for Enabling the PCM_SWAP_CHAN Bit

<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="16">1</td><td rowspan="16">Swap channel A/B calibration</td><td>0x180005</td><td>0x8C</td><td></td></tr><tr><td>0x180007</td><td>0xAB</td><td></td></tr><tr><td>0x180015</td><td>0x31</td><td></td></tr><tr><td>0x180017</td><td>0xB2</td><td></td></tr><tr><td>0x180025</td><td>0x30</td><td></td></tr><tr><td>0x180027</td><td>0x84</td><td></td></tr><tr><td>0x180035</td><td>0x9C</td><td></td></tr><tr><td>0x180037</td><td>0xAE</td><td></td></tr><tr><td>0x18000D</td><td>0x24</td><td></td></tr><tr><td>0x18000F</td><td>0xA3</td><td></td></tr><tr><td>0x18001D</td><td>0x05</td><td></td></tr><tr><td>0x18001F</td><td>0xD4</td><td></td></tr><tr><td>0x18002D</td><td>0x0B</td><td></td></tr><tr><td>0x18002F</td><td>0xC7</td><td></td></tr><tr><td>0x18003D</td><td>0x71</td><td></td></tr><tr><td>0x18003F</td><td>0xE7</td><td></td></tr><tr><td rowspan="6">2</td><td rowspan="6">Enable PCM channel swap</td><td>PCM Path Signal Control 2. 0x90004</td><td>data (0x90004)OR (0x02)</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>PCM_INV_A</td><td>x</td><td></td></tr><tr><td>PCM_INV_B</td><td>x</td><td></td></tr><tr><td>PCM_SWAPChan</td><td>1</td><td>Enable PCM channel swap</td></tr><tr><td>PCM copying Chan</td><td>x</td><td></td></tr></table>

# 5.11.2 Sequence for Disabling the PCM_SWAP_CHAN Bit

<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="16">1</td><td rowspan="16">Restore channel A/B calibration</td><td>0x180005</td><td>0x24</td><td></td></tr><tr><td>0x180007</td><td>0xA3</td><td></td></tr><tr><td>0x180015</td><td>0x05</td><td></td></tr><tr><td>0x180017</td><td>0xD4</td><td></td></tr><tr><td>0x180025</td><td>0x0B</td><td></td></tr><tr><td>0x180027</td><td>0xC7</td><td></td></tr><tr><td>0x180035</td><td>0x71</td><td></td></tr><tr><td>0x180037</td><td>0xE7</td><td></td></tr><tr><td>0x18000D</td><td>0x8C</td><td></td></tr><tr><td>0x18000F</td><td>0xAB</td><td></td></tr><tr><td>0x18001D</td><td>0x31</td><td></td></tr><tr><td>0x18001F</td><td>0xB2</td><td></td></tr><tr><td>0x18002D</td><td>0x30</td><td></td></tr><tr><td>0x18002F</td><td>0x84</td><td></td></tr><tr><td>0x18003D</td><td>0x9C</td><td></td></tr><tr><td>0x18003F</td><td>0xAA</td><td></td></tr><tr><td rowspan="6">2</td><td rowspan="6">Disable PCM channel swap</td><td>PCM Path Signal Control 2. 0x90004</td><td>data (0x90004) AND (0xFD)</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>PCM_INV_A</td><td>x</td><td></td></tr><tr><td>PCM_INV_B</td><td>x</td><td></td></tr><tr><td>PCM_SWAPChan</td><td>0</td><td>Disable PCM channel swap</td></tr><tr><td>PCM copying Chan</td><td>x</td><td></td></tr></table>

# 5.12 Sequences for Enabling and Disabling Mono Mode for PCM Playback

The following subsections describe sequences for enabling and disabling mono mode for PCM playback. 

# 5.12.1 Sequence for Enabling Mono Mode for PCM Playback

<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td></tr><tr><td>1</td><td>Enable mono mode</td><td>0x180009</td><td>0x2F</td></tr><tr><td></td><td></td><td>0x18000A</td><td>0xB4</td></tr><tr><td></td><td></td><td>0x18000B</td><td>0x25</td></tr><tr><td></td><td></td><td>0x18000C</td><td>0x80</td></tr><tr><td></td><td></td><td>0x18000F</td><td>0x55</td></tr><tr><td></td><td></td><td>0x180010</td><td>0xAA</td></tr><tr><td></td><td></td><td>0x180019</td><td>0x2F</td></tr><tr><td></td><td></td><td>0x18001A</td><td>0xB4</td></tr><tr><td></td><td></td><td>0x18001B</td><td>0x25</td></tr><tr><td></td><td></td><td>0x18001C</td><td>0x80</td></tr><tr><td></td><td></td><td>0x18001F</td><td>0x4E</td></tr><tr><td></td><td></td><td>0x180020</td><td>0xFD</td></tr><tr><td></td><td></td><td>0x180029</td><td>0x2F</td></tr><tr><td></td><td></td><td>0x18002A</td><td>0xB4</td></tr><tr><td></td><td></td><td>0x18002B</td><td>0x25</td></tr><tr><td></td><td></td><td>0x18002C</td><td>0x80</td></tr><tr><td></td><td></td><td>0x18002F</td><td>0x7C</td></tr><tr><td></td><td></td><td>0x180030</td><td>0xFD</td></tr><tr><td></td><td></td><td>0x180039</td><td>0x2F</td></tr><tr><td></td><td></td><td>0x18003A</td><td>0xB4</td></tr><tr><td></td><td></td><td>0x18003B</td><td>0x25</td></tr><tr><td></td><td></td><td>0x18003C</td><td>0x80</td></tr><tr><td></td><td></td><td>0x18003F</td><td>0x52</td></tr><tr><td></td><td></td><td>0x180040</td><td>0xFE</td></tr></table>

# 5.12.2 Sequence for Disabling Mono Mode for PCM Playback

<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td></tr><tr><td>1</td><td>Disable mono mode</td><td>0x180009</td><td>0xD1</td></tr><tr><td></td><td></td><td>0x18000A</td><td>0x4B</td></tr><tr><td></td><td></td><td>0x18000B</td><td>0xAA</td></tr><tr><td></td><td></td><td>0x18000C</td><td>0x7F</td></tr><tr><td></td><td></td><td>0x18000F</td><td>0xAB</td></tr><tr><td></td><td></td><td>0x180010</td><td>0x05</td></tr><tr><td></td><td></td><td>0x180019</td><td>0xD1</td></tr><tr><td></td><td></td><td>0x18001A</td><td>0x4B</td></tr><tr><td></td><td></td><td>0x18001B</td><td>0xAA</td></tr><tr><td></td><td></td><td>0x18001C</td><td>0x7F</td></tr><tr><td></td><td></td><td>0x18001F</td><td>0xB2</td></tr><tr><td></td><td></td><td>0x180020</td><td>0x02</td></tr><tr><td></td><td></td><td>0x180029</td><td>0xD1</td></tr><tr><td></td><td></td><td>0x18002A</td><td>0x4B</td></tr><tr><td></td><td></td><td>0x18002B</td><td>0xAA</td></tr><tr><td></td><td></td><td>0x18002C</td><td>0x7F</td></tr><tr><td></td><td></td><td>0x18002F</td><td>0x84</td></tr><tr><td></td><td></td><td>0x180030</td><td>0x02</td></tr><tr><td></td><td></td><td>0x180039</td><td>0xD1</td></tr><tr><td></td><td></td><td>0x18003A</td><td>0x4B</td></tr><tr><td></td><td></td><td>0x18003B</td><td>0xAA</td></tr><tr><td></td><td></td><td>0x18003C</td><td>0x7F</td></tr><tr><td></td><td></td><td>0x18003F</td><td>0xAE</td></tr><tr><td></td><td></td><td>0x180040</td><td>0x01</td></tr></table>

# 5.13 Example Sequences

This section provides recommended instruction sequences for standard CS43131 operations. 

# 5.13.1 Power-up Sequence to I2S Playback

In Ex. 5-7, a 22.5792-MHz crystal is used, ASP is set to I2S master at 44.1 kHz, and full-scale output is 1.732 Vrms. 


Example 5-7. Startup to I2S Playback


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td colspan="4">Apply all relevant power supplies, then assert RESET.</td></tr><tr><td>2</td><td colspan="4">Wait for 1.5 ms.</td></tr><tr><td>3</td><td colspan="4">Configure XTAL driver</td></tr><tr><td rowspan="3">4</td><td rowspan="3">Configure XTAL bias current strength (assuming River Crystal at 22.5792 MHz)</td><td>Crystal Setting. 0x20052</td><td>0x04</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>XTAL_IBIAS</td><td>100</td><td>Bias current set to 12.5 μA</td></tr><tr><td>5</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) to clear any pending interrupts.</td></tr><tr><td rowspan="9">6</td><td rowspan="9">Enable XTAL interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0xE7</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>1</td><td>Enable XTAL_READY interrupt</td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>1</td><td>Enable XTAL_ERROR interrupt</td></tr><tr><td>XTALREADY_INT_MASK</td><td>0</td><td></td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>0</td><td></td></tr><tr><td>PLL_READY_INT_MASK</td><td>1</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>1</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td></td></tr><tr><td rowspan="9">7</td><td rowspan="9">Start XTAL</td><td>Power Down Control. 0x20000</td><td>0xF6</td><td></td></tr><tr><td>PDN_XSP</td><td>1</td><td></td></tr><tr><td>PDN ASAP</td><td>1</td><td></td></tr><tr><td>PDN_DSDIF</td><td>1</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td></td></tr><tr><td>PDN_XTAL</td><td>0</td><td>Power up XTAL driver</td></tr><tr><td>PDN_PLL</td><td>1</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>8</td><td colspan="4">Configure ASP interface. Sample rate set to 44.1 kHz. ASP is clock master.</td></tr><tr><td rowspan="3">9</td><td rowspan="3">Set ASP sample rate</td><td>Serial Port Sample Rate. 0x1000B</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>ASP_SPRATE</td><td>0001</td><td>Set sample rate to 44.1 kHz</td></tr><tr><td rowspan="4">10</td><td rowspan="4">Set ASP sample bit size. XSP is don't care</td><td>Serial Port Sample Bit Size. 0x1000C</td><td>0x04</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>XSP_SPSIZE</td><td>01</td><td>XSP sample bit size set to 24 bits</td></tr><tr><td>ASP_SPSIZE</td><td>00</td><td>ASP sample bit size set to 32 bits</td></tr><tr><td rowspan="4">11</td><td rowspan="4">Set ASP numerator</td><td>ASP Numerator 1. 0x40010</td><td>0x01</td><td></td></tr><tr><td>ASP_N_LSB</td><td>0x01</td><td>LSB of ASP sample rate fractional divide numerator</td></tr><tr><td>ASP Numerator 2. 0x40011</td><td>0x00</td><td></td></tr><tr><td>ASP_N_MSB</td><td>0x00</td><td>MSB of ASP sample rate fractional divide numerator</td></tr><tr><td rowspan="4">12</td><td rowspan="4">Set ASP denominator</td><td>ASP Denominator 1. 0x40012</td><td>0x08</td><td></td></tr><tr><td>ASP_M_LSB</td><td>0x08</td><td>LSB of ASP sample rate fractional divide denominator</td></tr><tr><td>ASP Denominator 2. 0x40013</td><td>0x00</td><td></td></tr><tr><td>ASP_M_MSB</td><td>0x00</td><td>MSB of ASP sample rate fractional divide denominator</td></tr><tr><td rowspan="4">13</td><td rowspan="4">Set ASP LRCK high time</td><td>ASP LRCK High Time 1. 0x40014</td><td>0x1F</td><td></td></tr><tr><td>ASP_LCHI_LSB</td><td>0x1F</td><td>LSB of ASP LRCK high time duration</td></tr><tr><td>ASP LRCK High Time 2. 0x40015</td><td>0x00</td><td></td></tr><tr><td>ASP_LCHI_MSB</td><td>0x00</td><td>MSB of ASP LRCK high time duration</td></tr><tr><td rowspan="4">14</td><td rowspan="4">Set ASP LRCK period</td><td>ASP LRCK Period 1. 0x40016</td><td>0x3F</td><td></td></tr><tr><td>ASP_LCPR_LSB</td><td>0x3F</td><td>LSB of ASP LRCK period</td></tr><tr><td>ASP LRCK Period 2. 0x40017</td><td>0x00</td><td></td></tr><tr><td>ASP_LCPR_MSB</td><td>0x00</td><td>MSB of ASP LRCK period</td></tr><tr><td rowspan="7">15</td><td rowspan="7">Configure ASP clock</td><td>ASP Clock Configuration. 0x40018</td><td>0x1C</td><td></td></tr><tr><td>Reserved</td><td>000</td><td></td></tr><tr><td>ASP_M/SB</td><td>1</td><td>Set ASP port to be master</td></tr><tr><td>ASP_SCPOL_OUT</td><td>1</td><td>Configure clock polarity for I²S input</td></tr><tr><td>ASP_SCPOL_IN</td><td>1</td><td></td></tr><tr><td>ASP_LCPOL_OUT</td><td>0</td><td></td></tr><tr><td>ASP_LCPOL_IN</td><td>0</td><td></td></tr><tr><td>16</td><td>Configure ASP frame</td><td>ASP Frame Configuration. 0x40019</td><td>0x0A</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td>Configure ASP port to accept I2S input</td></tr><tr><td></td><td></td><td>ASP_STP</td><td>0</td><td></td></tr><tr><td></td><td></td><td>ASP_5050</td><td>1</td><td></td></tr><tr><td></td><td></td><td>ASP_FSD</td><td>010</td><td></td></tr><tr><td>17</td><td>Set ASP channel location</td><td>ASP Channel 1 Location. 0x50000</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH1</td><td>0x00</td><td>ASP Channel 1 starts on SCLK0</td></tr><tr><td></td><td></td><td>ASP Channel 2 Location. 0x50001</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH2</td><td>0x00</td><td>ASP Channel 2 starts on SCLK0</td></tr><tr><td>18</td><td>Set ASP channel size and enable</td><td>ASP Channel 1 Size and Enable. 0x5000A</td><td>0x07</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH1_AP</td><td>0</td><td>ASP Channel 1 Active Phase</td></tr><tr><td></td><td></td><td>ASP_RX_CH1_EN</td><td>1</td><td>ASP Channel 1 Enable</td></tr><tr><td></td><td></td><td>ASP_RX_CH1_RES</td><td>11</td><td>ASP Channel 1 Size is 32 bits</td></tr><tr><td></td><td></td><td>ASP Channel 2 Size and Enable. 0x5000B</td><td>0x0F</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH2_AP</td><td>1</td><td>ASP Channel 2 Active Phase</td></tr><tr><td></td><td></td><td>ASP_RX_CH2_EN</td><td>1</td><td>ASP Channel 2 Enable</td></tr><tr><td></td><td></td><td>ASP_RX_CH2_RES</td><td>11</td><td>ASP Channel 2 Size is 32 bits</td></tr><tr><td>19</td><td colspan="4">Configure PCM interface. HPF filter is used. Deemphasis off.</td></tr><tr><td>20</td><td>Configure PCM filter</td><td>PCM Filter Option. 0x90000</td><td>0x02</td><td></td></tr><tr><td></td><td></td><td>FILTER_SLOW_FASTB</td><td>0</td><td></td></tr><tr><td></td><td></td><td>PHCOMP_LOWLATB</td><td>0</td><td></td></tr><tr><td></td><td></td><td>NOS</td><td>0</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>00</td><td></td></tr><tr><td></td><td></td><td>PCM_WBF_EN</td><td>0</td><td></td></tr><tr><td></td><td></td><td>HIGH_PASS</td><td>1</td><td>High pass filter is selected</td></tr><tr><td></td><td></td><td>DEEMP_ON</td><td>0</td><td></td></tr><tr><td>21</td><td>Set volume for channel B</td><td>PCM Volume B. 0x90001</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>PCM_volume_B</td><td>0x00</td><td>Set volume to 0 dB</td></tr><tr><td>22</td><td>Set volume for channel A</td><td>PCM Volume A. 0x90002</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>PCM_volume_A</td><td>0x00</td><td>Set volume to 0 dB</td></tr><tr><td>23</td><td>Configure PCM path signal control</td><td>PCM Path Signal Control 1. 0x90003</td><td>0xEC</td><td></td></tr><tr><td></td><td></td><td>PCM_RAMP_DOWN</td><td>1</td><td>Soft ramp down of volume on filter change</td></tr><tr><td></td><td></td><td>PCM_VOL_BEQA</td><td>1</td><td>Volume setting on both channels controlled by PCM_VOLUME_A</td></tr><tr><td></td><td></td><td>PCM_SZC</td><td>10</td><td>Enable soft ramp</td></tr><tr><td></td><td></td><td>PCM_AMUTE</td><td>1</td><td>Mute after reception of 8192 samples of 0 or -1.</td></tr><tr><td></td><td></td><td>PCM_AMUTEBEQA</td><td>1</td><td>Mute only when AMUTE condition is detected on both channels</td></tr><tr><td></td><td></td><td>PCM_MUTE_A</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>PCM_MUTE_B</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>PCM_path Signal Control 2. 0x90004</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>PCM_INV_A</td><td>0</td><td>Disable all functions in this register</td></tr><tr><td></td><td></td><td>PCM_INV_B</td><td>0</td><td></td></tr><tr><td></td><td></td><td>PCM_SWAPChan</td><td>0</td><td></td></tr><tr><td></td><td></td><td>PCM copyingChan</td><td>0</td><td></td></tr><tr><td>24</td><td colspan="4">Configure HP</td></tr><tr><td>25</td><td>Configure Class H amplifierClass H Control. 0xB0000</td><td>0x1E</td><td></td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td></td></tr><tr><td></td><td></td><td>ADPT_PWR</td><td>111</td><td>Output signal determines voltage level</td></tr><tr><td></td><td></td><td>HV_EN</td><td>1</td><td>High voltage mode enabled</td></tr><tr><td></td><td></td><td>EXT_VCPFILT</td><td>0</td><td>Using internal VCPFILT source.</td></tr><tr><td>26</td><td>Set HP output to full scale</td><td>HP Output Control 1. 0x80000</td><td>0x30</td><td></td></tr><tr><td></td><td></td><td>HP_CLAMPPA</td><td>0</td><td></td></tr><tr><td></td><td></td><td>HP_CLAMPPB</td><td>0</td><td></td></tr><tr><td></td><td></td><td>OUT_FS</td><td>11</td><td>Set headphone output to full scale (1.732 V rms)</td></tr><tr><td></td><td></td><td>HP_IN_EN</td><td>0</td><td></td></tr><tr><td></td><td></td><td>HP_IN_LP</td><td>0</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>+1dB_EN</td><td>0</td><td></td></tr><tr><td>27</td><td>Configure Headphone detect</td><td>HP Detect. 0xD0000</td><td>0x04</td><td></td></tr><tr><td></td><td></td><td>HPDETECT_CTRL</td><td>00</td><td>HP detect disabled</td></tr><tr><td></td><td></td><td>HPDETECT_INV</td><td>0</td><td>HP detect input is not inverted</td></tr><tr><td></td><td></td><td>HPDETECT_RISE_DBC_TIME</td><td>0.0</td><td>Tip sense rising debounce time set to 0 ms</td></tr><tr><td></td><td></td><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Tip sense falling debounce time set to 500 ms</td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td rowspan="6">28</td><td rowspan="6">Headphone detect</td><td>HP Detect. 0xD0000</td><td>0xC4</td><td></td></tr><tr><td>HPDETECT_CTRL</td><td>11</td><td>HP detect enabled</td></tr><tr><td>HPDETECT_INV</td><td>0</td><td>HP detect input is not inverted</td></tr><tr><td>HPDETECT_RISE_DBC_TIME</td><td>00</td><td>Tip sense rising debounce time set to 0 ms</td></tr><tr><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Tip sense falling debounce time set to 500 ms</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>29</td><td colspan="4">Enable interrupts</td></tr><tr><td>30</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) and Interrupt Status 2 register (0xF0001) to clear sticky bits.</td></tr><tr><td rowspan="9">31</td><td rowspan="9">Enable headphone detect interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0x87</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>0</td><td>Enable HPDETECT_PLUG interrupt</td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>0</td><td>Enable HPDETECT_UNPLUG interrupt</td></tr><tr><td>XTAL_READY_INT_MASK</td><td>0</td><td></td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>0</td><td></td></tr><tr><td>PLL_READY_INT_MASK</td><td>1</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>1</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td></td></tr><tr><td rowspan="7">32</td><td rowspan="7">Enable ASP interrupts</td><td>Interrupt Mask 2. 0xF0011</td><td>0x07</td><td></td></tr><tr><td>ASP_OVFL_INT_MASK</td><td>0</td><td>Enable ASP_OVFL interrupt</td></tr><tr><td>ASP_ERROR_INT_MASK</td><td>0</td><td>Enable ASP_ERROR interrupt</td></tr><tr><td>ASP_LATE_INT_MASK</td><td>0</td><td>Enable ASP_LATE interrupt</td></tr><tr><td>ASP_EARLY_INT_MASK</td><td>0</td><td>Enable ASP_EARLY interrupt</td></tr><tr><td>ASP_NOLRCK_INT_MASK</td><td>0</td><td>Enable ASP_NOLRCK interrupt</td></tr><tr><td>Reserved</td><td>111</td><td></td></tr><tr><td>33</td><td colspan="4">Wait for interrupt. Check if XTAL_READY_INT = 1 in Interrupt Status 1 register (0xF0000).</td></tr><tr><td rowspan="4">34</td><td rowspan="4">Switch MCLK source to XTAL</td><td>System Clocking Control 1. 0x10006</td><td>0x04</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td rowspan="3">MCLK Source set to XTAL. MCLK_INT frequency set to 22.5792 MHz</td></tr><tr><td>MCLK_INT</td><td>1</td></tr><tr><td>MCLK_SRC_SEL</td><td>00</td></tr><tr><td>35</td><td colspan="4">Wait at least 150 μs.</td></tr><tr><td rowspan="4">36</td><td rowspan="4">Enable ASP clocks</td><td>Pad Interface Configuration. 0x1000D</td><td>0x02</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>XSP_3ST</td><td>1</td><td>XSP Interface status is don't care (set to default)</td></tr><tr><td>ASP_3ST</td><td>0</td><td>Enable serial clocks in Master Mode</td></tr><tr><td>37</td><td>Power up HP</td><td colspan="3">Refer to Ex. 5-5 for PCM power-up sequence</td></tr></table>

# 5.13.2 Power-Up Sequence to DSD Playback

In Ex. 5-8, a 22.5792-MHz crystal is used, the PLL is used to create a 24.576-MHz MCLK, XSP is set as DSD slave at 2.8224 MHz, and full-scale output is 1.732 Vrms. 


Example 5-8. Startup to DSD Playback


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td colspan="4">Apply all relevant power supplies, then assert RESET.</td></tr><tr><td>2</td><td colspan="4">Wait for 1.5 ms.</td></tr><tr><td>3</td><td colspan="4">Configure XTAL driver</td></tr><tr><td rowspan="3">4</td><td rowspan="3">Configure XTAL bias current strength (assuming River Crystal at 22.5792 MHz)</td><td>Crystal Setting. 0x20052</td><td>0x04</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>XTAL_IBIAS</td><td>100</td><td>Bias current set to 12.5 μA</td></tr><tr><td>5</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) to clear any pending interrupts.</td></tr><tr><td rowspan="9">6</td><td rowspan="9">Enable XTAL interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0xE7</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>1</td><td></td></tr><tr><td>XTALREADY_INT_MASK</td><td>0</td><td>Enable XTAL_READY interrupt</td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>0</td><td>Enable XTAL_ERROR interrupt</td></tr><tr><td>PLL_READY_INT_MASK</td><td>1</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>1</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td></td></tr><tr><td rowspan="9">7</td><td rowspan="9">Start XTAL</td><td>Power Down Control. 0x20000</td><td>0xF6</td><td></td></tr><tr><td>PDN_XSP</td><td>1</td><td></td></tr><tr><td>PDN_ ASP</td><td>1</td><td></td></tr><tr><td>PDN_DSDIF</td><td>1</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td></td></tr><tr><td>PDN_XTAL</td><td>0</td><td>Power up XTAL driver</td></tr><tr><td>PDN_PLL</td><td>1</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>8</td><td colspan="4">Configure PLL. Input is 22.5792 MHz. Output is 24.576 MHz.</td></tr><tr><td rowspan="9">9</td><td rowspan="9">Power up PLL</td><td>Power Down Control. 0x20000</td><td>0xF2</td><td></td></tr><tr><td>PDN_XSP</td><td>1</td><td></td></tr><tr><td>PDN_ ASP</td><td>1</td><td></td></tr><tr><td>PDN_DSDIF</td><td>1</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td></td></tr><tr><td>PDN_XTAL</td><td>0</td><td></td></tr><tr><td>PDN_PLL</td><td>0</td><td>Power up PLL</td></tr><tr><td>PDN_CLKOUT</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td rowspan="3">10</td><td rowspan="3">Set PLL predivide</td><td>PLL Setting 9. 0x40002</td><td>0x03</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>PLL_REF_PREDIV</td><td>11</td><td>Divide PLL Reference by 8</td></tr><tr><td rowspan="2">11</td><td rowspan="2">Set PLL Output Divide</td><td>PLL Setting 6. 0x30008</td><td>0x08</td><td></td></tr><tr><td>PLL_OUT_DIV</td><td>0x08</td><td>Divide PLL output by 8</td></tr><tr><td rowspan="6">12</td><td rowspan="6">Set Fractional portion of PLL divide ratio</td><td>PLL Setting 2. 0x30002</td><td>0x00</td><td></td></tr><tr><td>PLL_DIV_FRAC_0</td><td>0x00</td><td></td></tr><tr><td>PLL Setting 3. 0x30003</td><td>0xF7</td><td></td></tr><tr><td>PLL_DIV_FRAC_1</td><td>0xF7</td><td></td></tr><tr><td>PLL Setting 4. 0x30004</td><td>0x06</td><td></td></tr><tr><td>PLL_DIV_FRAC_2</td><td>0x06</td><td></td></tr><tr><td rowspan="2">13</td><td rowspan="2">Set integer portion of PLL divide ratio</td><td>PLL Setting 5. 0x30005</td><td>0x44</td><td></td></tr><tr><td>PLL_DIV_INT</td><td>0x44</td><td></td></tr><tr><td rowspan="4">14</td><td rowspan="4">Set PLL Mode</td><td>PLL Setting 8. 0x3001B</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>PLL_MODE</td><td>0</td><td>Use 500/512 factor</td></tr><tr><td>Reserved</td><td>1</td><td></td></tr><tr><td rowspan="2">15</td><td rowspan="2">Set PLL Calibration Ratio</td><td>PLL Setting 7. 0x3000A</td><td>0x8B</td><td></td></tr><tr><td>PLL_CAL_RATIO</td><td>0x8B</td><td>Set PLL Cal Ratio to 139</td></tr><tr><td>16</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) to clear any pending interrupts.</td></tr><tr><td rowspan="9">17</td><td rowspan="9">Enable PLL Interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0xE1</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>1</td><td>Enable PLL Ready and Error Interrupts</td></tr><tr><td>XTAL READY_INT_MASK</td><td>0</td><td></td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>0</td><td></td></tr><tr><td>PLL READY_INT_MASK</td><td>0</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>0</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td></td></tr><tr><td rowspan="3">18</td><td rowspan="3">Start PLL</td><td>PLL Setting 1. 0x30001</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000 000</td><td></td></tr><tr><td>PLL_START</td><td>1</td><td>Start PLL</td></tr><tr><td>19</td><td colspan="4">Configure DSDIF to playback 64-Fs DSD stream. DSDIF is configured as Slave</td></tr><tr><td rowspan="2">20</td><td rowspan="2">Configure DSD Volume</td><td>DSD Volume A. 0x70001</td><td>0x00</td><td></td></tr><tr><td>DSDVolumes_A</td><td>0x00</td><td>Channel A volume set to 0dB</td></tr><tr><td rowspan="9">21</td><td rowspan="9">Configure DSD path Signal Control1</td><td>DSD Processor Path Signal Control 1. 0x70002</td><td>0xCC</td><td></td></tr><tr><td>DSD_RAMP_UP</td><td>1</td><td></td></tr><tr><td>DSD_VOL_BEQA</td><td>1</td><td>DSD Volume B equals DSD volume A</td></tr><tr><td>DSD_SZC</td><td>0</td><td>Immediate change</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>DSD_AMUTE</td><td>1</td><td>Mute occurs after 256 repeated 8-bit DSD mute patterns</td></tr><tr><td>DSD_AMUTE_BEQA</td><td>1</td><td>Mute happens only when mute pattern is detected in both channels</td></tr><tr><td>DSD_MUTE_A</td><td>0</td><td>Function is disabled</td></tr><tr><td>DSD_MUTE_B</td><td>0</td><td>Function is disabled</td></tr><tr><td rowspan="5">22</td><td rowspan="5">Configure DSD Interface</td><td>DSD Interface Configuration. 0x70003</td><td>0x00</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>DSD_M/SB</td><td>0</td><td>DSD is clock slave</td></tr><tr><td>DSD_PM_EN</td><td>0</td><td>Function is disabled</td></tr><tr><td>DSD_PM_SEL</td><td>0</td><td>Function is disabled</td></tr><tr><td rowspan="8">23</td><td rowspan="8">Configure DSD path Signal Control 2</td><td>DSD Processor Path Signal Control 2. 0x70004</td><td>0x13</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>DSD_PRC_SRC</td><td>00</td><td>Set source of DSD processor to DSDIF</td></tr><tr><td>DSD_EN</td><td>1</td><td>Enable DSD playback</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>DSD_SPEED</td><td>0</td><td>Set DSD clock speed to 64+FS</td></tr><tr><td>STA_DSD_DET</td><td>1</td><td>Static DSD detection enabled</td></tr><tr><td>INV_DSD_DET</td><td>1</td><td>Invalid DSD detection enabled</td></tr><tr><td>24</td><td colspan="4">Configure HP</td></tr><tr><td rowspan="5">25</td><td rowspan="5">Configure Class H Amplifier</td><td>Class H Control. 0xB0000</td><td>0x1E</td><td></td></tr><tr><td>Reserved</td><td>000</td><td></td></tr><tr><td>ADPT_PWR</td><td>111</td><td>Output signal determines voltage level</td></tr><tr><td>HV_EN</td><td>1</td><td>High Voltage Mode Enabled</td></tr><tr><td>EXT_VCPFILT</td><td>0</td><td>Using Internal VCPFILT source.</td></tr><tr><td rowspan="8">26</td><td rowspan="8">Set HP output to full scale</td><td>HP Output Control 1. 0x80000</td><td>0x30</td><td></td></tr><tr><td>HP_CLAMPPA</td><td>0</td><td></td></tr><tr><td>HP_CLAMPPB</td><td>0</td><td></td></tr><tr><td>OUT_FS</td><td>11</td><td>Set headphone output to Full Scale (1.732 V rms)</td></tr><tr><td>HP_IN_EN</td><td>0</td><td></td></tr><tr><td>HP_IN_LP</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>+1dB_EN</td><td>0</td><td></td></tr><tr><td rowspan="6">27</td><td rowspan="6">Configure Headphone Detect</td><td>HP Detect. 0xD0000</td><td>0x04</td><td></td></tr><tr><td>HPDETECT_CTRL</td><td>00</td><td>HP detect disabled</td></tr><tr><td>HPDETECT_INV</td><td>0</td><td>HP detect input is not inverted</td></tr><tr><td>HPDETECT_RISE_DBC_TIME</td><td>00</td><td>Tip Sense rising debounce time set to 0 ms</td></tr><tr><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Tip sense falling debounce time set to 500 ms</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td rowspan="6">28</td><td rowspan="6">Headphone Detect</td><td>HP Detect. 0xD0000</td><td>0xC4</td><td></td></tr><tr><td>HPDETECT_CTRL</td><td>11</td><td>HP detect enabled</td></tr><tr><td>HPDETECT_INV</td><td>0</td><td>HP detect input is not inverted</td></tr><tr><td>HPDETECT_RISE_DBC_TIME</td><td>00</td><td>Tip sense rising debounce time set to 0 ms</td></tr><tr><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Tip sense falling debounce time set to 500 ms</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>29</td><td colspan="4">Enable Interrupts</td></tr><tr><td>30</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) and Interrupt Status 5 register (0xF0004) to clear sticky bits</td></tr><tr><td rowspan="9">31</td><td rowspan="9">Enable Headphone Detect Interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0x81</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECTPlug_INT_MASK</td><td>0</td><td>Unmask HPDETECT Plug interrupt and</td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>0</td><td>HPDETECT_UNPLUG interrupt</td></tr><tr><td>XTALREADY_INT_MASK</td><td>0</td><td></td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>0</td><td></td></tr><tr><td>PLL READY_INT_MASK</td><td>0</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>0</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td></td></tr><tr><td rowspan="9">32</td><td rowspan="9">Enable DSD Interrupts</td><td>Interrupt Mask 5. 0xF0014</td><td>0x03</td><td></td></tr><tr><td>DSD_STUCK_INT_MASK</td><td>0</td><td>Enable DSD_STUCK interrupt</td></tr><tr><td>DSD_INVALID_A_INT_MASK</td><td>0</td><td>Enable DSD_INVALID_A interrupt</td></tr><tr><td>DSD_INVALID_B_INT_MASK</td><td>0</td><td>Enable DSD_INVALID_B interrupt</td></tr><tr><td>DSD_SILENCE_A_INT_MASK</td><td>0</td><td>Enable DSD_SILENCE_A interrupt</td></tr><tr><td>DSD_SILENCE_B_INT_MASK</td><td>0</td><td>Enable DSD_SILENCE_B interrupt</td></tr><tr><td>DSD_RATE_ERROR_INT_MASK</td><td>0</td><td>Enable DSD_RATE_ERROR interrupt</td></tr><tr><td>DOP_MRK_DET_INT_MASK</td><td>1</td><td>Disable DOP_MRK_DET interrupt</td></tr><tr><td>DOP_ON_INT_MASK</td><td>1</td><td>Disable DOP_ON interrupt</td></tr><tr><td>33</td><td colspan="4">Wait for interrupt. Check if PLL_READY_INT = 1 in Interrupt Status 1 register(0xF0000)</td></tr><tr><td rowspan="4">34</td><td rowspan="4">Switch MCLK source to PLL</td><td>System Clocking Control 1. 0x10006</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>00000</td><td></td></tr><tr><td>MCLK_INT</td><td>0</td><td>MCLK Source set to PLL. MCLK_INT frequency set to</td></tr><tr><td>MCLK_SRC_SEL</td><td>01</td><td>24.576 MHz</td></tr><tr><td>35</td><td colspan="4">Wait at least 150 μs.</td></tr><tr><td>36</td><td>Power up HP</td><td colspan="3">Refer to Ex. 5-6 for DSD power-up sequence. Note that in Step 1 of Ex. 5-6, use HH = DF for the DSD interface.</td></tr></table>

# 5.13.3 Power-Up Sequence to DoP Playback with PLL

In Ex. 5-9, an external 19.2-MHz MCLK is used with a PLL to generate an internal MCLK or 22.5792 MHz, and the ASP is in clock master receiving DoP data with LRCLK at 176.4 kHz and SCLK at 8.4672 MHz. 


Example 5-9. DoP Playback with PLL


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td colspan="4">Apply all relevant power supplies, then assert RESET.</td></tr><tr><td>2</td><td colspan="4">Wait for 1.5 ms.</td></tr><tr><td>3</td><td colspan="4">Configure PLL. XTI/MCLK input coming from an external 19.2 MHz source with PLL output set to 22.5792 MHz. Refer to Section 4.7.2 for register settings for other frequency combinations</td></tr><tr><td rowspan="9">4</td><td rowspan="9">Power up PLL</td><td>Power Down Control. 0x20000</td><td>0xAF</td><td></td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN ASAP</td><td>x</td><td></td></tr><tr><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td>PDN_HP</td><td>x</td><td></td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>0</td><td>Power up PLL block</td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td rowspan="3">5</td><td rowspan="3">Set PLL Predivide value</td><td>PLL Setting 9. 0x40002</td><td>0x03</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>PLL_REF_PREDIV</td><td>11</td><td>Set PLL predivide value to 8</td></tr><tr><td rowspan="2">6</td><td rowspan="2">Set PLL output divide</td><td>PLL Setting 6. 0x30008</td><td>0x08</td><td></td></tr><tr><td>PLL_OUT_DIV</td><td>0x08</td><td>Set PLL output divide value to 8</td></tr><tr><td rowspan="6">7</td><td rowspan="6">Set Fractional portion of PLL Divide Ratio</td><td>PLL Setting 2. 0x30002</td><td>0x00</td><td></td></tr><tr><td>PLL_DIV_FRAC_0</td><td>0x00</td><td>Set LSB of PLL fractional divider value to 0</td></tr><tr><td>PLL Setting 3. 0x30003</td><td>0x00</td><td></td></tr><tr><td>PLL_DIV_FRAC_1</td><td>0x00</td><td>Set Middle Byte of PLL fractional divider value to 0</td></tr><tr><td>PLL Setting 4. 0x30004</td><td>0x80</td><td></td></tr><tr><td>PLL_DIV_FRAC_2</td><td>0x80</td><td>Set MSB of PLL fractional divider value to 0x80</td></tr><tr><td rowspan="2">8</td><td rowspan="2">Set Integer portion of PLL Divide Ratio</td><td>PLL Setting 5. 0x30005</td><td>0x49</td><td></td></tr><tr><td>PLL_DIV_INT</td><td>0x49</td><td>Set PLL integer Divide value to 0x49</td></tr><tr><td rowspan="4">9</td><td rowspan="4">Set PLL mode</td><td>PLL Setting 8. 0x3001B</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>PLL_MODE</td><td>0</td><td>500/512 factor is used in PLL frequency calculation</td></tr><tr><td>Reserved</td><td>1</td><td></td></tr><tr><td>10</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) to clear sticky bits.</td></tr><tr><td rowspan="2">11</td><td rowspan="2">Set PLL calibration ratio</td><td>PLL Setting 7. 0x3000A</td><td>0x97</td><td></td></tr><tr><td>PLL_CAL_RATIO</td><td>0x97</td><td>PLL Calibration Ratio is set to 0x97 (151)</td></tr><tr><td rowspan="9">12</td><td rowspan="9">Enable PLL interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0xF9</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>1</td><td>DAC_OVFL_INT is don't care</td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>1</td><td>Unmask HPDETECT_PLUG interrupt</td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>1</td><td>Unmask HPDETECT_UNPLUG interrupt</td></tr><tr><td>XTAL_READY_INT_MASK</td><td>1</td><td>XTAL READY_INT is Don't Care</td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>1</td><td>XTAL_ERROR_INT is Don't Care</td></tr><tr><td>PLLready_INT_MASK</td><td>0</td><td>PLL-ready Interrupt is already unmasked</td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>0</td><td>PLL_ERROR Interrupt is already unmasked</td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td>PDN_DONE_INT is Don't Care</td></tr><tr><td rowspan="3">13</td><td rowspan="3">Start PLL</td><td>PLL Setting 1. 0x30001</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000 000</td><td></td></tr><tr><td>PLL_START</td><td>1</td><td>Enable PLL Output</td></tr><tr><td>14</td><td colspan="4">Playback DoP audio. Assuming 64*Fs DSD stream</td></tr><tr><td>15</td><td colspan="4">Configure ASP interface for DoP input</td></tr><tr><td rowspan="3">16</td><td rowspan="3">Set ASP sample rate</td><td>Serial Port Sample Rate. 0x1000B</td><td>0x05</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>ASP_SPRATE</td><td>0101</td><td>Set sample rate to 176.4 kHz</td></tr><tr><td rowspan="4">17</td><td rowspan="4">Set ASP sample bit size. XSP is don't care</td><td>Serial Port Sample Bit Size. 0x1000C</td><td>0x05</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>XSP_SPSIZE</td><td>01</td><td>XSP sample bit size set to 24 bits</td></tr><tr><td>ASP_SPSIZE</td><td>01</td><td>ASP sample bit size set to 24 bits</td></tr><tr><td rowspan="4">18</td><td rowspan="4">Set ASP numerator</td><td>ASP Numerator 1. 0x40010</td><td>0x03</td><td></td></tr><tr><td>ASP_N_LSB</td><td>0x03</td><td>LSB of ASP sample rate fractional divide numerator</td></tr><tr><td>ASP Numerator 2. 0x40011</td><td>0x00</td><td></td></tr><tr><td>ASP_N_MSB</td><td>0x00</td><td>MSB of ASP sample rate fractional divide numerator</td></tr><tr><td>19</td><td>Set ASP denominator</td><td>ASP Denominator 1.0x40012</td><td>0x08</td><td></td></tr><tr><td></td><td></td><td>ASP_M_LSB</td><td>0x08</td><td>LSB of ASP sample rate fractional divide denominator</td></tr><tr><td></td><td></td><td>ASP Denominator 2.0x40013</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_M_MSB</td><td>0x00</td><td>MSB of ASP sample rate fractional divide denominator</td></tr><tr><td>20</td><td>Set ASP LRCK high time</td><td>ASP LRCK High Time 1.0x40014</td><td>0x17</td><td></td></tr><tr><td></td><td></td><td>ASP_LCHI_LSB</td><td>0x17</td><td>LSB of ASP LRCK high time duration</td></tr><tr><td></td><td></td><td>ASP LRCK High Time 2.0x40015</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_LCHI_MSB</td><td>0x00</td><td>MSB of ASP LRCK high time duration</td></tr><tr><td>21</td><td>Set ASP LRCK period</td><td>ASP LRCK Period 1.0x40016</td><td>0x2F</td><td></td></tr><tr><td></td><td></td><td>ASP_LCPR_LSB</td><td>0x2F</td><td>LSB of ASP LRCK period</td></tr><tr><td></td><td></td><td>ASP LRCK Period 2.0x40017</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_LCPR_MSB</td><td>0x00</td><td>MSB of ASP LRCK period</td></tr><tr><td>22</td><td>Configure ASP clock</td><td>ASP Clock Configuration. 0x40018</td><td>0x1C</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td></td></tr><tr><td></td><td></td><td>ASP_M/SB</td><td>1</td><td>Set ASP port to be Master</td></tr><tr><td></td><td></td><td>ASP_SCPOL_OUT</td><td>1</td><td>Set output SCLK polarity</td></tr><tr><td></td><td></td><td>ASP_SCPOL_IN</td><td>1</td><td>Input SCLK polarity is don't care</td></tr><tr><td></td><td></td><td>ASP_LCPOL_OUT</td><td>0</td><td>Set Output LRCK polarity</td></tr><tr><td></td><td></td><td>ASP_LCPOL_IN</td><td>0</td><td>Input LRCK polarity is don't care</td></tr><tr><td>23</td><td>Configure ASP frame</td><td>ASP Frame Configuration. 0x40019</td><td>0x0A</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td></td></tr><tr><td></td><td></td><td>ASP_STP</td><td>0</td><td></td></tr><tr><td></td><td></td><td>ASP_5050</td><td>1</td><td>Configure ASP port to accept I2S input</td></tr><tr><td></td><td></td><td>ASP_FSD</td><td>010</td><td></td></tr><tr><td>24</td><td>Set ASP channel location</td><td>ASP Channel 1 Location. 0x50000</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH1</td><td>0x00</td><td>ASP Channel 1 starts on SCLK0</td></tr><tr><td></td><td></td><td>ASP Channel 2 Location. 0x50001</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH2</td><td>0x00</td><td>ASP Channel 2 starts on SCLK0</td></tr><tr><td>25</td><td>Set ASP channel size and enable</td><td>ASP Channel 1 Size and Enable. 0x5000A</td><td>0x06</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH1_AP</td><td>0</td><td>ASP Channel 1 active phase</td></tr><tr><td></td><td></td><td>ASP_RX_CH1_EN</td><td>1</td><td>ASP Channel 1 enable</td></tr><tr><td></td><td></td><td>ASP_RX_CH1_RES</td><td>10</td><td>ASP Channel 1 size is 24 bits</td></tr><tr><td></td><td></td><td>ASP Channel 2 Size and Enable. 0x5000B</td><td>0x0E</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH2_AP</td><td>1</td><td>ASP Channel 2 active phase</td></tr><tr><td></td><td></td><td>ASP_RX_CH2_EN</td><td>1</td><td>ASP Channel 2 enable</td></tr><tr><td></td><td></td><td>ASP_RX_CH2_RES</td><td>10</td><td>ASP Channel 2 size is 24 bits</td></tr><tr><td>26</td><td colspan="4">Wait for interrupt. Check if PLL_READY_INT = 1 in Interrupt Status 1 register(0xF0000).</td></tr><tr><td>27</td><td colspan="4">Configure DSD processor</td></tr><tr><td>28</td><td>Configure DSD volume</td><td>DSD Volume A. 0x70001</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>DSDVolumes_A</td><td>0x00</td><td>Channel A volume set to 0 dB</td></tr><tr><td>29</td><td>Configure DSD Path Signal Control 1</td><td>DSD Processor Path Signal Control 1. 0x70002</td><td>0xCC</td><td></td></tr><tr><td></td><td></td><td>DSD_RAMP_UP</td><td>1</td><td></td></tr><tr><td></td><td></td><td>DSD_VOL_BEQA</td><td>1</td><td>DSD Volume B equals DSD volume A</td></tr><tr><td></td><td></td><td>DSD_SZC</td><td>0</td><td>Immediate change</td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>DSD_AMUTE</td><td>1</td><td>Mute occurs after 256 repeated 8-bit DSD mute patterns</td></tr><tr><td></td><td></td><td>DSD_AMUTE_BEQA</td><td>1</td><td>Mute happens only when mute pattern is detected in both channels</td></tr><tr><td></td><td></td><td>DSD_MUTE_A</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_MUTE_B</td><td>0</td><td>Function is disabled</td></tr><tr><td>30</td><td>Configure DSD interface</td><td>DSD Interface Configuration. 0x70003</td><td>0x04</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td></td><td></td><td>DSD_M/SB</td><td>1</td><td>DSD is clock master</td></tr><tr><td></td><td></td><td>DSD_PM_EN</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_PM_SEL</td><td>0</td><td>Function is disabled</td></tr><tr><td>31</td><td>Configure DSD Path Signal Control 2</td><td>DSD Processor Path Signal Control 2.0x70004</td><td>0x50</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>DSD_PRC_SRC</td><td>10</td><td>Set source of DSD processor to ASP</td></tr><tr><td></td><td></td><td>DSD_EN</td><td>1</td><td>Enable DSD playback</td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>DSD_SPEED</td><td>0</td><td>Set DSD clock speed to 64-Fs</td></tr><tr><td></td><td></td><td>STA_DSD_DET</td><td>0</td><td>Static DSD detection disabled</td></tr><tr><td></td><td></td><td>INV_DSD_DET</td><td>0</td><td>Invalid DSD detection disabled</td></tr><tr><td>32</td><td>Configure DSD path Signal Control 3</td><td>DSD Processor Path Signal Control 3.0x70006</td><td>0xC0</td><td></td></tr><tr><td></td><td></td><td>DSD_ZERODB</td><td>1</td><td>The SACD 0-dB reference level (50%modulation index) matches PCM 0-dB full scale.</td></tr><tr><td></td><td></td><td>DSD_HPF_EN</td><td>1</td><td>Enable HPF in DSD processor</td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>SIGCTL_DSDEQPCM</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_INV_A</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_INV_B</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_SWAPChan</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_COPYChan</td><td>0</td><td>Function is disabled</td></tr><tr><td>33</td><td colspan="4">Configure headphone output for 1.732 V rms</td></tr><tr><td>34</td><td>Configure Class H amplifier</td><td>Class H Control.0xB0000</td><td>0x1E</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td></td></tr><tr><td></td><td></td><td>ADPT_PWR</td><td>111</td><td>Output signal determines voltage level</td></tr><tr><td></td><td></td><td>HV_EN</td><td>1</td><td>High voltage mode enabled</td></tr><tr><td></td><td></td><td>EXT_VCPFILT</td><td>0</td><td>Using internal VCPFILT source.</td></tr><tr><td>35</td><td>Set HP output to full scale</td><td>HP Output Control 1.0x80000</td><td>0x30</td><td></td></tr><tr><td></td><td></td><td>HP_CLAMPA</td><td>0</td><td></td></tr><tr><td></td><td></td><td>HP_CLAMPB</td><td>0</td><td></td></tr><tr><td></td><td></td><td>OUT_FS</td><td>11</td><td>Set headphone output to full scale (1.732 V rms)</td></tr><tr><td></td><td></td><td>HP_IN_EN</td><td>0</td><td></td></tr><tr><td></td><td></td><td>HP_IN_LP</td><td>0</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>+1dB_EN</td><td>0</td><td></td></tr><tr><td>36</td><td>Headphone detect</td><td>HP Detect.0xD0000</td><td>0xC4</td><td></td></tr><tr><td></td><td></td><td>HPDETECT_CTRL</td><td>11</td><td>HP detect enabled</td></tr><tr><td></td><td></td><td>HPDETECT_INV</td><td>0</td><td>HP detect input is not inverted</td></tr><tr><td></td><td></td><td>HPDETECT_RISE_DBC_TIME</td><td>00</td><td>Tip Sense rising debounce time set to 0 ms</td></tr><tr><td></td><td></td><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Tip sense falling debounce time set to 500 ms</td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td>37</td><td colspan="4">Enable interrupts</td></tr><tr><td>38</td><td colspan="4">Read Interrupt Status 1 register (0xF0000), Interrupt Status 2 register (0xF0001) and Interrupt Status 5 register (0xF0004) to clear sticky bits.</td></tr><tr><td>39</td><td>Enable headphone detect interrupts</td><td>Interrupt Mask 1.0xF0010</td><td>0x99</td><td></td></tr><tr><td></td><td></td><td>DAC_OVFL_INT_MASK</td><td>1</td><td>DAC_OVFL_INT is don't care</td></tr><tr><td></td><td></td><td>HPDETECT_PLUG_INT_MASK</td><td>0</td><td>Enable HPDETECT_PLUG interrupt</td></tr><tr><td></td><td></td><td>HPDETECT_UNPLUG_INT_MASK</td><td>0</td><td>Enable HPDETECT_UNPLUG interrupt</td></tr><tr><td></td><td></td><td>XTAL_READY_INT_MASK</td><td>1</td><td>XTAL READY_INT is don't care</td></tr><tr><td></td><td></td><td>XTAL_ERROR_INT_MASK</td><td>1</td><td>XTAL_ERROR_INT is don't care</td></tr><tr><td></td><td></td><td>PLL_READY_INT_MASK</td><td>0</td><td>PLL READY interrupt already enabled</td></tr><tr><td></td><td></td><td>PLL_ERROR_INT_MASK</td><td>0</td><td>PLL_ERROR interrupt already enabled</td></tr><tr><td></td><td></td><td>PDN_DONE_INT_MASK</td><td>1</td><td>PDN_DONE_INT is don't care</td></tr><tr><td>40</td><td>Enable ASP interrupts</td><td>Interrupt Mask 2.0xF0011</td><td>0x07</td><td></td></tr><tr><td></td><td></td><td>ASP_OVFL_INT_MASK</td><td>0</td><td>Enable ASP_OVFL interrupt</td></tr><tr><td></td><td></td><td>ASP_ERROR_INT_MASK</td><td>0</td><td>Enable ASP_ERROR interrupt</td></tr><tr><td></td><td></td><td>ASP_LATE_INT_MASK</td><td>0</td><td>Enable ASP_LATE interrupt</td></tr><tr><td></td><td></td><td>ASP_EARLY_INT_MASK</td><td>0</td><td>Enable ASP_EARLY interrupt</td></tr><tr><td></td><td></td><td>ASP_NOLRCK_INT_MASK</td><td>0</td><td>Enable ASP_NOLRCK interrupt</td></tr><tr><td></td><td></td><td>Reserved</td><td>111</td><td></td></tr><tr><td>41</td><td>Enable DSD and DoP interrupts</td><td>Interrupt Mask 5.0xF0014</td><td>0x01</td><td></td></tr><tr><td></td><td></td><td>DSD_STUCK_INT_MASK</td><td>0</td><td>Enable DSD_STUCK interrupt</td></tr><tr><td></td><td></td><td>DSD_INVALID_A_INT_MASK</td><td>0</td><td>Enable DSD_INVALID_A interrupt</td></tr><tr><td></td><td></td><td>DSD_INVALID_B_INT_MASK</td><td>0</td><td>Enable DSD_INVALID_B interrupt</td></tr><tr><td></td><td></td><td>DSD_SILENCE_A_INT_MASK</td><td>0</td><td>Enable DSD_SILENCE_A interrupt</td></tr><tr><td></td><td></td><td>DSD_SILENCE_B_INT_MASK</td><td>0</td><td>Enable DSD_SILENCE_B interrupt</td></tr><tr><td></td><td></td><td>DSD_RATE_ERROR_INT_MASK</td><td>0</td><td>Enable DSD_RATE_ERROR interrupt</td></tr><tr><td></td><td></td><td>DOP_MRK_DET_INT_MASK</td><td>0</td><td>Enable DOP_MRK_DET interrupt</td></tr><tr><td></td><td></td><td>DOP_ON_INT_MASK</td><td>1</td><td>Disable DOP_ON interrupt</td></tr><tr><td>42</td><td colspan="4">Wait for interrupt. Check if PLL_READY_INT = 1 in Interrupt Status 1 register(0xF0000).</td></tr><tr><td>43</td><td>Set MCLK source and frequency</td><td>System Clocking Control.0x10006</td><td>0x05</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>00000</td><td></td></tr><tr><td></td><td></td><td>MCLK_INT</td><td>1</td><td>MCLK Frequency is set to 22.5792 MHz</td></tr><tr><td></td><td></td><td>MCLK_SRC_SEL</td><td>01</td><td>MCLK Source is set to PLL</td></tr><tr><td>45</td><td>Enable ASP clocks</td><td>Pad Interface Configuration. 0x1000D</td><td>0x02</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td></td><td></td><td>XSP_3ST</td><td>1</td><td>XSP Interface status is don't care (set to default)</td></tr><tr><td></td><td></td><td>ASP_3ST</td><td>0</td><td>Enable serial clocks in Master Mode</td></tr><tr><td>46</td><td>Power up HP</td><td colspan="3">Refer to Ex. 5-6 for DSD power-up sequence. Note that in Step 1 of Ex. 5-6, use HH = BF for DoP over ASP interface.</td></tr></table>

# 5.13.4 Power-up Sequence to I2S Playback in Mono Mode

In Ex. 5-7, a 22.5792-MHz crystal is used, ASP is set to I2S master at 44.1 kHz, and full-scale output is 1.732 Vrms. 


Example 5-10. Startup to I2S Playback in Mono Mode


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td colspan="4">Apply all relevant power supplies, then assert RESET.</td></tr><tr><td>2</td><td colspan="4">Wait for 1.5 ms.</td></tr><tr><td>3</td><td colspan="4">Configure XTAL driver</td></tr><tr><td rowspan="3">4</td><td rowspan="3">Configure XTAL bias current strength (assuming River Crystal at 22.5792 MHz)</td><td>Crystal Setting. 0x20052</td><td>0x04</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>XTAL_IBIAS</td><td>100</td><td>Bias current set to 12.5 μA</td></tr><tr><td>5</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) to clear any pending interrupts.</td></tr><tr><td rowspan="9">6</td><td rowspan="9">Enable XTAL interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0xE7</td><td></td></tr><tr><td>DAC OVFL_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>1</td><td>Enable XTAL_READY interrupt</td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>1</td><td>Enable XTAL_ERROR interrupt</td></tr><tr><td>XTALREADY_INT_MASK</td><td>0</td><td></td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>0</td><td></td></tr><tr><td>PLL READY_INT_MASK</td><td>1</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>1</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td></td></tr><tr><td rowspan="9">7</td><td rowspan="9">Start XTAL</td><td>Power Down Control. 0x20000</td><td>0xF6</td><td></td></tr><tr><td>PDN_XSP</td><td>1</td><td></td></tr><tr><td>PDN_ESP</td><td>1</td><td></td></tr><tr><td>PDN_DSDIF</td><td>1</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td></td></tr><tr><td>PDN_XTAL</td><td>0</td><td>Power up XTAL driver</td></tr><tr><td>PDN_PLL</td><td>1</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>8</td><td colspan="4">Configure ASP interface. Sample rate set to 44.1 kHz. ASP is clock master.</td></tr><tr><td rowspan="3">9</td><td rowspan="3">Set ASP sample rate</td><td>Serial Port Sample Rate. 0x1000B</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>ASP_SPRATE</td><td>0001</td><td>Set sample rate to 44.1 kHz</td></tr><tr><td rowspan="4">10</td><td rowspan="4">Set ASP sample bit size. XSP is don't care</td><td>Serial Port Sample Bit Size. 0x1000C</td><td>0x04</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>XSP_SPSIZE</td><td>01</td><td>XSP sample bit size set to 24 bits</td></tr><tr><td>ASP_SPSIZE</td><td>00</td><td>ASP sample bit size set to 32 bits</td></tr><tr><td rowspan="4">11</td><td rowspan="4">Set ASP numerator</td><td>ASP Numerator 1. 0x40010</td><td>0x01</td><td></td></tr><tr><td>ASP_N_LSB</td><td>0x01</td><td>LSB of ASP sample rate fractional divide numerator</td></tr><tr><td>ASP Numerator 2. 0x40011</td><td>0x00</td><td></td></tr><tr><td>ASP_N_MSB</td><td>0x00</td><td>MSB of ASP sample rate fractional divide numerator</td></tr><tr><td rowspan="4">12</td><td rowspan="4">Set ASP denominator</td><td>ASP Denominator 1. 0x40012</td><td>0x08</td><td></td></tr><tr><td>ASP_M_LSB</td><td>0x08</td><td>LSB of ASP sample rate fractional divide denominator</td></tr><tr><td>ASP Denominator 2. 0x40013</td><td>0x00</td><td></td></tr><tr><td>ASP_M_MSB</td><td>0x00</td><td>MSB of ASP sample rate fractional divide denominator</td></tr><tr><td rowspan="4">13</td><td rowspan="4">Set ASP LRCK high time</td><td>ASP LRCK High Time 1. 0x40014</td><td>0x1F</td><td></td></tr><tr><td>ASP_LCHI_LSB</td><td>0x1F</td><td>LSB of ASP LRCK high time duration</td></tr><tr><td>ASP LRCK High Time 2. 0x40015</td><td>0x00</td><td></td></tr><tr><td>ASP_LCHI_MSB</td><td>0x00</td><td>MSB of ASP LRCK high time duration</td></tr><tr><td rowspan="4">14</td><td rowspan="4">Set ASP LRCK period</td><td>ASP LRCK Period 1. 0x40016</td><td>0x3F</td><td></td></tr><tr><td>ASP_LCPR_LSB</td><td>0x3F</td><td>LSB of ASP LRCK period</td></tr><tr><td>ASP LRCK Period 2. 0x40017</td><td>0x00</td><td></td></tr><tr><td>ASP_LCPR_MSB</td><td>0x00</td><td>MSB of ASP LRCK period</td></tr><tr><td rowspan="7">15</td><td rowspan="7">Configure ASP clock</td><td>ASP Clock Configuration. 0x40018</td><td>0x1C</td><td></td></tr><tr><td>Reserved</td><td>000</td><td></td></tr><tr><td>ASP M/SB</td><td>1</td><td>Set ASP port to be master</td></tr><tr><td>ASP-SCPOL_OUT</td><td>1</td><td>Configure clock polarity for I2S input</td></tr><tr><td>ASP-SCPOL_IN</td><td>1</td><td></td></tr><tr><td>ASP-LCPOL_OUT</td><td>0</td><td></td></tr><tr><td>ASP-LCPOL_IN</td><td>0</td><td></td></tr><tr><td rowspan="5">16</td><td rowspan="5">Configure ASP frame</td><td>ASP Frame Configuration. 0x40019</td><td>0x0A</td><td></td></tr><tr><td>Reserved</td><td>000</td><td>Configure ASP port to accept I2S input</td></tr><tr><td>ASP_STP</td><td>0</td><td></td></tr><tr><td>ASP-5050</td><td>1</td><td></td></tr><tr><td>ASP_FSD</td><td>010</td><td></td></tr><tr><td rowspan="4">17</td><td rowspan="4">Set ASP channel location</td><td>ASP Channel 1 Location. 0x50000</td><td>0x00</td><td></td></tr><tr><td>ASP_RX_CH1</td><td>0x00</td><td>ASP Channel 1 starts on SCLK0</td></tr><tr><td>ASP Channel 2 Location. 0x50001</td><td>0x00</td><td></td></tr><tr><td>ASP_RX_CH2</td><td>0x00</td><td>ASP Channel 2 starts on SCLK0</td></tr><tr><td rowspan="10">18</td><td rowspan="10">Set ASP channel size and enable. Set both Channel 1 and Channel 2 to the same active phase to get the same data for mono mode.</td><td>ASP Channel 1 Size and Enable. 0x5000A</td><td>0x07/0x0F for Left/Right channel</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>ASP_RX_CH1_AP</td><td>0/1</td><td>ASP Channel 1 Active Phase</td></tr><tr><td>ASP_RX_CH1_EN</td><td>1</td><td>ASP Channel 1 Enable</td></tr><tr><td>ASP_RX_CH1_RES</td><td>11</td><td>ASP Channel 1 Size is 32 bits</td></tr><tr><td>ASP Channel 2 Size and Enable. 0x5000B</td><td>0x07/0x0F for Left/Right channel</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>ASP_RX_CH2_AP</td><td>0/1</td><td>ASP Channel 2 Active Phase</td></tr><tr><td>ASP_RX_CH2_EN</td><td>1</td><td>ASP Channel 2 Enable</td></tr><tr><td>ASP_RX_CH2_RES</td><td>11</td><td>ASP Channel 2 Size is 32 bits</td></tr><tr><td>19</td><td colspan="4">Configure PCM interface. HPF filter is used. Deemphasis off.</td></tr><tr><td rowspan="8">20</td><td rowspan="8">Configure PCM filter</td><td>PCM Filter Option. 0x90000</td><td>0x02</td><td></td></tr><tr><td>FILTER_SLOW_FASTB</td><td>0</td><td></td></tr><tr><td>PHCOMP_LOWLATB</td><td>0</td><td></td></tr><tr><td>NOS</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>0 0</td><td></td></tr><tr><td>PCM_WBF_EN</td><td>0</td><td></td></tr><tr><td>HIGH_PASS</td><td>1</td><td>High pass filter is selected</td></tr><tr><td>DEEMP_ON</td><td>0</td><td></td></tr><tr><td rowspan="2">21</td><td rowspan="2">Set volume for channel B</td><td>PCM Volume B. 0x90001</td><td>0x00</td><td></td></tr><tr><td>PCM_VOLUME_B</td><td>0x00</td><td>Set volume to 0 dB</td></tr><tr><td rowspan="2">22</td><td rowspan="2">Set volume for channel A</td><td>PCM Volume A. 0x90002</td><td>0x00</td><td></td></tr><tr><td>PCM_VOLUME_A</td><td>0x00</td><td>Set volume to 0 dB</td></tr><tr><td rowspan="14">23</td><td rowspan="14">Configure PCM path signal control</td><td>PCM Path Signal Control 1. 0x90003</td><td>0xEC</td><td></td></tr><tr><td>PCM_RAMP_DOWN</td><td>1</td><td>Soft ramp down of volume on filter change</td></tr><tr><td>PCM_VOL_BEQA</td><td>1</td><td>Volume setting on both channels controlled by PCM_VOLUME_A</td></tr><tr><td>PCM_SZC</td><td>10</td><td>Enable soft ramp</td></tr><tr><td>PCM_AMUTE</td><td>1</td><td>Mute after reception of 8192 samples of 0 or -1.</td></tr><tr><td>PCM_AMUTEBEQA</td><td>1</td><td>Mute only when AMUTE condition is detected on both channels</td></tr><tr><td>PCM_MUTE_A</td><td>0</td><td>Function is disabled</td></tr><tr><td>PCM_MUTE_B</td><td>0</td><td>Function is disabled</td></tr><tr><td>PCM Path Signal Control 2. 0x90004</td><td>0x00</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>PCM_INV_A</td><td>0</td><td>Disable all functions in this register</td></tr><tr><td>PCM_INV_B</td><td>0</td><td></td></tr><tr><td>PCM_SWAPChan</td><td>0</td><td></td></tr><tr><td>PCM copyingChan</td><td>0</td><td></td></tr><tr><td>24</td><td colspan="4">Configure HP</td></tr><tr><td rowspan="5">25</td><td rowspan="5">Configure Class H amplifierClass H Control. 0xB0000</td><td>0x1E</td><td></td><td></td></tr><tr><td>Reserved</td><td>000</td><td></td></tr><tr><td>ADPT_PWR</td><td>1 11</td><td>Output signal determines voltage level</td></tr><tr><td>HV_EN</td><td>1</td><td>High voltage mode enabled</td></tr><tr><td>EXT_VCPFILT</td><td>0</td><td>Using internal VCPFILT source.</td></tr><tr><td rowspan="8">26</td><td rowspan="8">Set HP output to full scale</td><td>HP Output Control 1. 0x80000</td><td>0x30</td><td></td></tr><tr><td>HP_CLAMPPA</td><td>0</td><td></td></tr><tr><td>HP_CLAMPPB</td><td>0</td><td></td></tr><tr><td>OUT_FS</td><td>11</td><td>Set headphone output to full scale (1.732 V rms)</td></tr><tr><td>HP_IN_EN</td><td>0</td><td></td></tr><tr><td>HP_IN_LP</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>+1dB_EN</td><td>0</td><td></td></tr><tr><td rowspan="6">27</td><td rowspan="6">Configure Headphone detect</td><td>HP Detect. 0xD0000</td><td>0x04</td><td></td></tr><tr><td>HPDETECT_CTRL</td><td>00</td><td>HP detect disabled</td></tr><tr><td>HPDETECT_INV</td><td>0</td><td>HP detect input is not inverted</td></tr><tr><td>HPDETECT_RISE_DBC_TIME</td><td>00</td><td>Tip sense rising debounce time set to 0 ms</td></tr><tr><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Tip sense falling debounce time set to 500 ms</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td rowspan="6">28</td><td rowspan="6">Headphone detect</td><td>HP Detect. 0xD0000</td><td>0xC4</td><td></td></tr><tr><td>HPDETECT_CTRL</td><td>11</td><td>HP detect enabled</td></tr><tr><td>HPDETECT_INV</td><td>0</td><td>HP detect input is not inverted</td></tr><tr><td>HPDETECT_RISE_DBC_TIME</td><td>00</td><td>Tip sense rising debounce time set to 0 ms</td></tr><tr><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Tip sense falling debounce time set to 500 ms</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>29</td><td colspan="4">Enable interrupts</td></tr><tr><td>30</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) and Interrupt Status 2 register (0xF0001) to clear sticky bits.</td></tr><tr><td rowspan="9">31</td><td rowspan="9">Enable headphone detect interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0x87</td><td></td></tr><tr><td>DAC OVFL_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>0</td><td>Enable HPDETECT_PLUG interrupt</td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>0</td><td>Enable HPDETECT_UNPLUG interrupt</td></tr><tr><td>XTAL_READY_INT_MASK</td><td>0</td><td></td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>0</td><td></td></tr><tr><td>PLL READY_INT_MASK</td><td>1</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>1</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td></td></tr><tr><td rowspan="7">32</td><td rowspan="7">Enable ASP interrupts</td><td>Interrupt Mask 2. 0xF0011</td><td>0x07</td><td></td></tr><tr><td>ASP OVFL_INT_MASK</td><td>0</td><td>Enable ASP_OVFL interrupt</td></tr><tr><td>ASP_ERROR_INT_MASK</td><td>0</td><td>Enable ASP_ERROR interrupt</td></tr><tr><td>ASP_LATE_INT_MASK</td><td>0</td><td>Enable ASP_LATE interrupt</td></tr><tr><td>ASP_EARLY_INT_MASK</td><td>0</td><td>Enable ASP_EARLY interrupt</td></tr><tr><td>ASP_NOLRCK_INT_MASK</td><td>0</td><td>Enable ASP_NOLRCK interrupt</td></tr><tr><td>Reserved</td><td>111</td><td></td></tr><tr><td>33</td><td colspan="4">Wait for interrupt. Check if XTAL_READY_INT = 1 in Interrupt Status 1 register (0xF0000).</td></tr><tr><td rowspan="4">34</td><td rowspan="4">Switch MCLK source to XTAL</td><td>System Clocking Control 1. 0x10006</td><td>0x04</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td rowspan="2">MCLK Source set to XTAL. MCLK_INT frequency set to 22.5792 MHz</td></tr><tr><td>MCLK_INT</td><td>1</td></tr><tr><td>MCLK SRC SEL</td><td>00</td><td></td></tr><tr><td>35</td><td colspan="4">Wait at least 150 μs.</td></tr><tr><td rowspan="4">36</td><td rowspan="4">Enable ASP clocks</td><td>Pad Interface Configuration. 0x1000D</td><td>0x02</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>XSP_3ST</td><td>1</td><td>XSP Interface status is don't care (set to default)</td></tr><tr><td>ASP_3ST</td><td>0</td><td>Enable serial clocks in Master Mode</td></tr><tr><td>37</td><td>Enable mono mode</td><td colspan="3">Refer to Section 5.12.1 for the Sequence for Enabling Mono Mode</td></tr><tr><td>38</td><td>Power up HP</td><td colspan="3">Refer to Ex. 5-5 for PCM power-up sequence</td></tr></table>

# 5.13.5 Power-Up Sequence to DSD Playback in Mono Mode

In Ex. 5-8, a 22.5792-MHz crystal is used, the PLL is used to create a 24.576-MHz MCLK, XSP is set as DSD slave at 2.8224 MHz, and full-scale output is 1.732 Vrms. 


Example 5-11. Startup to DSD Playback in Mono Mode


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td colspan="4">Apply all relevant power supplies, then assert RESET.</td></tr><tr><td>2</td><td colspan="4">Wait for 1.5 ms.</td></tr><tr><td>3</td><td colspan="4">Configure XTAL driver</td></tr><tr><td rowspan="3">4</td><td rowspan="3">Configure XTAL bias current strength (assuming River Crystal at 22.5792 MHz)</td><td>Crystal Setting. 0x20052</td><td>0x04</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>XTAL_IBIAS</td><td>100</td><td>Bias current set to 12.5 μA</td></tr><tr><td>5</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) to clear any pending interrupts.</td></tr><tr><td rowspan="9">6</td><td rowspan="9">Enable XTAL interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0xE7</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDetect_PLUG_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDetect_UNPLUG_INT_MASK</td><td>1</td><td></td></tr><tr><td>XTAL_READY_INT_MASK</td><td>0</td><td>Enable XTAL READY interrupt</td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>0</td><td>Enable XTAL_ERROR interrupt</td></tr><tr><td>PLL_READY_INT_MASK</td><td>1</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>1</td><td></td></tr><tr><td>PDIN_DONE_INT_MASK</td><td>1</td><td></td></tr><tr><td rowspan="9">7</td><td rowspan="9">Start XTAL</td><td>Power Down Control. 0x20000</td><td>0xF6</td><td></td></tr><tr><td>PDN_XSP</td><td>1</td><td></td></tr><tr><td>PDN_AS</td><td>1</td><td></td></tr><tr><td>PDN_DSDIF</td><td>1</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td></td></tr><tr><td>PDN_XTAL</td><td>0</td><td>Power up XTAL driver</td></tr><tr><td>PDN_PLL</td><td>1</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>8</td><td colspan="4">Configure PLL. Input is 22.5792 MHz. Output is 24.576 MHz.</td></tr><tr><td rowspan="9">9</td><td rowspan="9">Power up PLL</td><td>Power Down Control. 0x20000</td><td>0xF2</td><td></td></tr><tr><td>PDN_XSP</td><td>1</td><td></td></tr><tr><td>PDN_AS</td><td>1</td><td></td></tr><tr><td>PDN_DSDIF</td><td>1</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td></td></tr><tr><td>PDN_XTAL</td><td>0</td><td>Power up PLL</td></tr><tr><td>PDN_PLL</td><td>0</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td rowspan="3">10</td><td rowspan="3">Set PLL predivide</td><td>PLL Setting 9. 0x40002</td><td>0x03</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>PLL_REF_PREDIV</td><td>11</td><td>Divide PLL Reference by 8</td></tr><tr><td rowspan="2">11</td><td rowspan="2">Set PLL Output Divide</td><td>PLL Setting 6. 0x30008</td><td>0x08</td><td></td></tr><tr><td>PLL_OUT_DIV</td><td>0x08</td><td>Divide PLL output by 8</td></tr><tr><td rowspan="6">12</td><td rowspan="6">Set Fractional portion of PLL divide ratio</td><td>PLL Setting 2. 0x30002</td><td>0x00</td><td></td></tr><tr><td>PLL_DIV_FRAC_0</td><td>0x00</td><td></td></tr><tr><td>PLL Setting 3. 0x30003</td><td>0xF7</td><td></td></tr><tr><td>PLL_DIV_FRAC_1</td><td>0xF7</td><td></td></tr><tr><td>PLL Setting 4. 0x30004</td><td>0x06</td><td></td></tr><tr><td>PLL_DIV_FRAC_2</td><td>0x06</td><td></td></tr><tr><td rowspan="2">13</td><td rowspan="2">Set integer portion of PLL divide ratio</td><td>PLL Setting 5. 0x30005</td><td>0x44</td><td></td></tr><tr><td>PLL_DIV_INT</td><td>0x44</td><td></td></tr><tr><td rowspan="4">14</td><td rowspan="4">Set PLL Mode</td><td>PLL Setting 8. 0x3001B</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>PLL_MODE</td><td>0</td><td>Use 500/512 factor</td></tr><tr><td>Reserved</td><td>1</td><td></td></tr><tr><td rowspan="2">15</td><td rowspan="2">Set PLL Calibration Ratio</td><td>PLL Setting 7. 0x3000A</td><td>0x8B</td><td></td></tr><tr><td>PLL_CAL_RATIO</td><td>0x8B</td><td>Set PLL Cal Ratio to 139</td></tr><tr><td>16</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) to clear any pending interrupts.</td></tr><tr><td rowspan="9">17</td><td rowspan="9">Enable PLL Interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0xE1</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>1</td><td>Enable PLL Ready and Error Interrupts</td></tr><tr><td>XTAL_READY_INT_MASK</td><td>0</td><td></td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>0</td><td></td></tr><tr><td>PLL READY_INT_MASK</td><td>0</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>0</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td></td></tr><tr><td rowspan="3">18</td><td rowspan="3">Start PLL</td><td>PLL Setting 1. 0x30001</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000 000</td><td></td></tr><tr><td>PLL_START</td><td>1</td><td>Start PLL</td></tr><tr><td>19</td><td colspan="4">Configure DSDIF to playback 64-Fs DSD stream. DSDIF is configured as Slave</td></tr><tr><td rowspan="2">20</td><td rowspan="2">Configure DSD Volume</td><td>DSD Processor Path Signal Control 1. 0x70002</td><td>0x00</td><td></td></tr><tr><td>DSD_VOLULE_A</td><td>0x00</td><td>Channel A volume set to 0dB</td></tr><tr><td rowspan="9">21</td><td rowspan="9">Configure DSD path Signal Control1</td><td>DSD Processor Path Signal Control 1. 0x70002</td><td>0xCC</td><td></td></tr><tr><td>DSD_RAMP_UP</td><td>1</td><td></td></tr><tr><td>DSD_VOLBEQA</td><td>1</td><td>DSD Volume B equals DSD volume A</td></tr><tr><td>DSD_SZC</td><td>0</td><td>Immediate change</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>DSD_AMUTE</td><td>1</td><td>Mute occurs after 256 repeated 8-bit DSD mute patterns</td></tr><tr><td>DSD_AMUTE_BEQA</td><td>1</td><td>Mute happens only when mute pattern is detected in both channels</td></tr><tr><td>DSD_MUTE_A</td><td>0</td><td>Function is disabled</td></tr><tr><td>DSD_MUTE_B</td><td>0</td><td>Function is disabled</td></tr><tr><td rowspan="5">22</td><td rowspan="5">Configure DSD Interface</td><td>DSD Interface Configuration. 0x70003</td><td>0x00</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>DSD_M/SB</td><td>0</td><td>DSD is clock slave</td></tr><tr><td>DSD_PM_EN</td><td>0</td><td>Function is disabled</td></tr><tr><td>DSD_PM_SEL</td><td>0</td><td>Function is disabled</td></tr><tr><td rowspan="8">23</td><td rowspan="8">Configure DSD path Signal Control 2</td><td>DSD Processor Path Signal Control 2. 0x70004</td><td>0x13</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>DSD_PRC_SRC</td><td>00</td><td>Set source of DSD processor to DSDIF</td></tr><tr><td>DSD_EN</td><td>1</td><td>Enable DSD playback</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>DSD_SPEED</td><td>0</td><td>Set DSD clock speed to 64-FS</td></tr><tr><td>STA_DSD_DET</td><td>1</td><td>Static DSD detection enabled</td></tr><tr><td>INV_DSD_DET</td><td>1</td><td>Invalid DSD detection enabled</td></tr><tr><td rowspan="9">24</td><td rowspan="9">Configure DSD path Signal Control 3. Enable mono mode: a. Select Channel A/B (DSD_SWAP_CHAN) b. Copy Channel A to B (DSD_COOPY_CHAN) c. Invert Channel B (DSD_INV_B)</td><td>DSD Processor Path Signal Control 3. 0xC5/0xC7 for Left/Right channel 0x70006</td><td>The SACD 0-dB reference level (50%modulation index) matches PCM 0-dB full scale.</td><td></td></tr><tr><td>DSD_ZERODB</td><td>1</td><td rowspan="2">Enable HPF in DSD processor</td></tr><tr><td>DSD_HPF_EN</td><td>1</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>SIGCTL_DSDEQPCM</td><td>0</td><td>Function is disabled</td></tr><tr><td>DSD_INV_A</td><td>0</td><td>Function is disabled</td></tr><tr><td>DSD_INV_B</td><td>1</td><td>Function is enabled</td></tr><tr><td>DSD_SWAP_CHAN</td><td>0/1</td><td>Function is enabled/disabled</td></tr><tr><td>DSD_COOPY_CHAN</td><td>1</td><td>Function is enabled</td></tr><tr><td>25</td><td colspan="4">Configure HP</td></tr><tr><td rowspan="5">26</td><td rowspan="5">Configure Class H Amplifier</td><td>Class H Control. 0xB0000</td><td>0x1E</td><td></td></tr><tr><td>Reserved</td><td>000</td><td></td></tr><tr><td>ADPT_PWR</td><td>111</td><td>Output signal determines voltage level</td></tr><tr><td>HV_EN</td><td>1</td><td>High Voltage Mode Enabled</td></tr><tr><td>EXT_VCPFILT</td><td>0</td><td>Using Internal VCPFILT source.</td></tr><tr><td rowspan="8">27</td><td rowspan="8">Set HP output to full scale</td><td>HP Output Control 1. 0x80000</td><td>0x30</td><td></td></tr><tr><td>HP_CLAMPPA</td><td>0</td><td></td></tr><tr><td>HP_CLAMPPB</td><td>0</td><td></td></tr><tr><td>OUT_FS</td><td>11</td><td>Set headphone output to Full Scale (1.732 V rms)</td></tr><tr><td>HP_IN_EN</td><td>0</td><td></td></tr><tr><td>HP_IN_LP</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>+1dB_EN</td><td>0</td><td></td></tr><tr><td rowspan="6">28</td><td rowspan="6">Configure Headphone Detect</td><td>HP Detect. 0xD0000</td><td>0x04</td><td></td></tr><tr><td>HPDETECT_CTRL</td><td>00</td><td>HP detect disabled</td></tr><tr><td>HPDETECT_INV</td><td>0</td><td>HP detect input is not inverted</td></tr><tr><td>HPDETECT_RISE_DBC_TIME</td><td>0.0</td><td>Tip Sense rising debounce time set to 0 ms</td></tr><tr><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Tip sense falling debounce time set to 500 ms</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td rowspan="6">29</td><td rowspan="6">Headphone Detect</td><td>HP Detect. 0xD0000</td><td>0xC4</td><td></td></tr><tr><td>HPDETECT_CTRL</td><td>11</td><td>HP detect enabled</td></tr><tr><td>HPDETECT_INV</td><td>0</td><td>HP detect input is not inverted</td></tr><tr><td>HPDETECT_RISE_DBC_TIME</td><td>0.0</td><td>Tip sense risingARDSounce time set to 0 ms</td></tr><tr><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Tip sense fallingARDSounce time set to 500 ms</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>30</td><td colspan="4">Enable Interrupts</td></tr><tr><td>31</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) and Interrupt Status 5 register (0xF0004) to clear sticky bits</td></tr><tr><td rowspan="9">32</td><td rowspan="9">Enable Headphone Detect Interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0x81</td><td></td></tr><tr><td>DAC OVFL INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>0</td><td>Unmask HPDETECT_PLUG interrupt and</td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>0</td><td>HPDETECT_UNPLUG interrupt</td></tr><tr><td>XTALREADY_INT_MASK</td><td>0</td><td></td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>0</td><td></td></tr><tr><td>PLL readiness_INT_MASK</td><td>0</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>0</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td></td></tr><tr><td rowspan="9">33</td><td rowspan="9">Enable DSD Interrupts</td><td>Interrupt Mask 5. 0xF0014</td><td>0x03</td><td></td></tr><tr><td>DSD_STUCK_INT_MASK</td><td>0</td><td>Enable DSD_STUCK interrupt</td></tr><tr><td>DSD_INVALID_A_INT_MASK</td><td>0</td><td>Enable DSD_INVALID_A interrupt</td></tr><tr><td>DSD_INVALID_B_INT_MASK</td><td>0</td><td>Enable DSD_INVALID_B interrupt</td></tr><tr><td>DSD_SILENCE_A_INT_MASK</td><td>0</td><td>Enable DSD_SILENCE_A interrupt</td></tr><tr><td>DSD_SILENCE_B_INT_MASK</td><td>0</td><td>Enable DSD_SILENCE_B interrupt</td></tr><tr><td>DSD_RATE_ERROR_INT_MASK</td><td>0</td><td>Enable DSD_RATE_ERROR interrupt</td></tr><tr><td>DOP_MRK_DET_INT_MASK</td><td>1</td><td>Disable DOP_MRK_DET interrupt</td></tr><tr><td>DOP_ON_INT_MASK</td><td>1</td><td>Disable DOP_ON interrupt</td></tr><tr><td>34</td><td colspan="4">Wait for interrupt. Check if PLL READY_INT = 1 in Interrupt Status 1 register(0xF0000)</td></tr><tr><td>35</td><td>Switch MCLK source to PLL</td><td>System Clocking Control 1. 0x10006</td><td>0x01</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td></td><td></td><td>MCLK_INT</td><td>0</td><td rowspan="2">MCLK Source set to PLL. MCLK_INT frequency set to 24.576 MHz</td></tr><tr><td></td><td></td><td>MCLK_SRC_SEL</td><td>01</td></tr><tr><td>36</td><td>Wait at least 150 μs.</td><td></td><td></td><td></td></tr><tr><td>37</td><td>Power up HP</td><td colspan="3">Refer to Ex. 5-6 for DSD power-up sequence. Note that in Step 1 of Ex. 5-6, use HH = DF for the DSD interface.</td></tr></table>

# 5.13.6 Power-Up Sequence to DoP Playback with PLL in Mono Mode

In Ex. 5-9, an external 19.2-MHz MCLK is used with a PLL to generate an internal MCLK or 22.5792 MHz, and the ASP is in clock master receiving DoP data with LRCLK at 176.4 kHz and SCLK at 8.4672 MHz. 


Example 5-12. DoP Playback with PLL in Mono Mode


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td colspan="4">Apply all relevant power supplies, then assert RESET.</td></tr><tr><td>2</td><td colspan="4">Wait for 1.5 ms.</td></tr><tr><td>3</td><td colspan="4">Configure PLL. XTI/MCLK input coming from an external 19.2 MHz source with PLL output set to 22.5792 MHz. Refer to Section 4.7.2 for register settings for other frequency combinations</td></tr><tr><td rowspan="9">4</td><td rowspan="9">Power up PLL</td><td>Power Down Control. 0x20000</td><td>0xFE</td><td></td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN ASAP</td><td>x</td><td></td></tr><tr><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td>PDN_HP</td><td>x</td><td></td></tr><tr><td>PDN_XTAL</td><td>x</td><td></td></tr><tr><td>PDN_PLL</td><td>0</td><td>Power up PLL block</td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td rowspan="3">5</td><td rowspan="3">Set PLL Predivide value</td><td>PLL Setting 9. 0x40002</td><td>0x03</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>PLL_REF_PREDIV</td><td>11</td><td>Set PLL predivide value to 8</td></tr><tr><td rowspan="2">6</td><td rowspan="2">Set PLL output divide</td><td>PLL Setting 6. 0x30008</td><td>0x08</td><td></td></tr><tr><td>PLL_OUT_DIV</td><td>0x08</td><td>Set PLL output divide value to 8</td></tr><tr><td rowspan="6">7</td><td rowspan="6">Set Fractional portion of PLL Divide Ratio</td><td>PLL Setting 2. 0x30002</td><td>0x00</td><td></td></tr><tr><td>PLL_DIV_FRAC_0</td><td>0x00</td><td>Set LSB of PLL fractional divider value to 0</td></tr><tr><td>PLL Setting 3. 0x30003</td><td>0x00</td><td></td></tr><tr><td>PLL_DIV_FRAC_1</td><td>0x00</td><td>Set Middle Byte of PLL fractional divider value to 0</td></tr><tr><td>PLL Setting 4. 0x30004</td><td>0x80</td><td></td></tr><tr><td>PLL_DIV_FRAC_2</td><td>0x80</td><td>Set MSB of PLL fractional divider value to 0x80</td></tr><tr><td rowspan="2">8</td><td rowspan="2">Set Integer portion of PLL Divide Ratio</td><td>PLL Setting 5. 0x30005</td><td>0x49</td><td></td></tr><tr><td>PLL_DIV_INT</td><td>0x49</td><td>Set PLL integer Divide value to 0x49</td></tr><tr><td rowspan="4">9</td><td rowspan="4">Set PLL mode</td><td>PLL Setting 8. 0x3001B</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>PLL_MODE</td><td>0</td><td>500/512 factor is used in PLL frequency calculation</td></tr><tr><td>Reserved</td><td>1</td><td></td></tr><tr><td>10</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) to clear sticky bits.</td></tr><tr><td rowspan="2">11</td><td rowspan="2">Set PLL calibration ratio</td><td>PLL Setting 7. 0x3000A</td><td>0x97</td><td></td></tr><tr><td>PLL_CAL_RATIO</td><td>0x97</td><td>PLL Calibration Ratio is set to 0x97 (151)</td></tr><tr><td rowspan="9">12</td><td rowspan="9">Enable PLL interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0xF9</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>1</td><td>DAC_OVFL_INT is don't care</td></tr><tr><td>HPDETECT_PLL_INT_MASK</td><td>1</td><td>Unmask HPDETECT_PLL interrupt</td></tr><tr><td>HPDETECT_UNPLL_INT_MASK</td><td>1</td><td>Unmask HPDETECT_UNPLL interrupt</td></tr><tr><td>XTAL_READY_INT_MASK</td><td>1</td><td>XTAL READY_INT is Don't Care</td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>1</td><td>XTAL_ERROR_INT is Don't Care</td></tr><tr><td>PLL Ready_INT_MASK</td><td>0</td><td>PLL Ready Interrupt is already unmasked</td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>0</td><td>PLL ERROR Interrupt is already unmasked</td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td>PDN_DONE_INT is Don't Care</td></tr><tr><td rowspan="3">13</td><td rowspan="3">Start PLL</td><td>PLL Setting 1. 0x30001</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000 000</td><td></td></tr><tr><td>PLL_START</td><td>1</td><td>Enable PLL Output</td></tr><tr><td>14</td><td colspan="4">Playback DoP audio. Assuming 64*Fs DSD stream</td></tr><tr><td>15</td><td colspan="4">Configure ASP interface for DoP input</td></tr><tr><td rowspan="3">16</td><td rowspan="3">Set ASP sample rate</td><td>Serial Port Sample Rate. 0x1000B</td><td>0x05</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>ASP_SPRATE</td><td>0101</td><td>Set sample rate to 176.4 kHz</td></tr><tr><td>17</td><td>Set ASP sample bit size. XSP is don't care</td><td>Serial Port Sample Bit Size. 0x1000C</td><td>0x05</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>XSP_SPSIZE</td><td>01</td><td>XSP sample bit size set to 24 bits</td></tr><tr><td></td><td></td><td>ASP_SPSIZE</td><td>01</td><td>ASP sample bit size set to 24 bits</td></tr><tr><td>18</td><td>Set ASP numerator</td><td>ASP Numerator 1. 0x40010</td><td>0x03</td><td></td></tr><tr><td></td><td></td><td>ASP_N_LSB</td><td>0x03</td><td>LSB of ASP sample rate fractional divide numerator</td></tr><tr><td></td><td></td><td>ASP Numerator 2. 0x40011</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_N_MSB</td><td>0x00</td><td>MSB of ASP sample rate fractional divide numerator</td></tr><tr><td>19</td><td>Set ASP denominator</td><td>ASP Denominator 1. 0x40012</td><td>0x08</td><td></td></tr><tr><td></td><td></td><td>ASP_M_LSB</td><td>0x08</td><td>LSB of ASP sample rate fractional divide denominator</td></tr><tr><td></td><td></td><td>ASP Denominator 2. 0x40013</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_M_MSB</td><td>0x00</td><td>MSB of ASP sample rate fractional divide denominator</td></tr><tr><td>20</td><td>Set ASP LRCK high time</td><td>ASP LRCK High Time 1. 0x40014</td><td>0x17</td><td></td></tr><tr><td></td><td></td><td>ASP_LCHI_LSB</td><td>0x17</td><td>LSB of ASP LRCK high time duration</td></tr><tr><td></td><td></td><td>ASP LRCK High Time 2. 0x40015</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_LCHI_MSB</td><td>0x00</td><td>MSB of ASP LRCK high time duration</td></tr><tr><td>21</td><td>Set ASP LRCK period</td><td>ASP LRCK Period 1. 0x40016</td><td>0x2F</td><td></td></tr><tr><td></td><td></td><td>ASP_LCPOL_LSB</td><td>0x2F</td><td>LSB of ASP LRCK period</td></tr><tr><td></td><td></td><td>ASP LRCK Period 2. 0x40017</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_LCPOL_IN</td><td>0x00</td><td>MSB of ASP LRCK period</td></tr><tr><td>22</td><td>Configure ASP clock</td><td>ASP Clock Configuration. 0x40018</td><td>0x1C</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td></td></tr><tr><td></td><td></td><td>ASP_M/SB</td><td>1</td><td>Set ASP port to be Master</td></tr><tr><td></td><td></td><td>ASP_SCPOL_OUT</td><td>1</td><td>Set output SCLK polarity</td></tr><tr><td></td><td></td><td>ASP_SCPOL_IN</td><td>1</td><td>Input SCLK polarity is don't care</td></tr><tr><td></td><td></td><td>ASP_LCPOL_OUT</td><td>0</td><td>Set Output LRCK polarity</td></tr><tr><td></td><td></td><td>ASP_LCPOL_IN</td><td>0</td><td>Input LRCK polarity is don't care</td></tr><tr><td>23</td><td>Configure ASP frame</td><td>ASP Frame Configuration. 0x40019</td><td>0x0A</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td></td></tr><tr><td></td><td></td><td>ASP_STP</td><td>0</td><td></td></tr><tr><td></td><td></td><td>ASP_5050</td><td>1</td><td></td></tr><tr><td></td><td></td><td>ASP_FSD</td><td>010</td><td></td></tr><tr><td>24</td><td>Set ASP channel location</td><td>ASP Channel 1 Location. 0x50000</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH1</td><td>0x00</td><td>ASP Channel 1 starts on SCLK0</td></tr><tr><td></td><td></td><td>ASP Channel 2 Location. 0x50001</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH2</td><td>0x00</td><td>ASP Channel 2 starts on SCLK0</td></tr><tr><td>25</td><td>Set ASP channel size and enable</td><td>ASP Channel 1 Size and Enable. 0x5000A</td><td>0x06</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH1_AP</td><td>0</td><td>ASP Channel 1 active phase</td></tr><tr><td></td><td></td><td>ASP_RX_CH1_EN</td><td>1</td><td>ASP Channel 1 enable</td></tr><tr><td></td><td></td><td>ASP_RX_CH1_RES</td><td>10</td><td>ASP Channel 1 size is 24 bits</td></tr><tr><td></td><td></td><td>ASP Channel 2 Size and Enable. 0x5000B</td><td>0x0E</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH2_AP</td><td>1</td><td>ASP Channel 2 active phase</td></tr><tr><td></td><td></td><td>ASP_RX_CH2_EN</td><td>1</td><td>ASP Channel 2 enable</td></tr><tr><td></td><td></td><td>ASP_RX_CH2_RES</td><td>10</td><td>ASP Channel 2 size is 24 bits</td></tr><tr><td>26</td><td colspan="4">Wait for interrupt. Check if PLL_READY_INT = 1 in Interrupt Status 1 register(0xF0000).</td></tr><tr><td>27</td><td colspan="4">Configure DSD processor</td></tr><tr><td>28</td><td>Configure DSD volume</td><td>DSD Volume A. 0x70001</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>DSDVolumes_A</td><td>0x00</td><td>Channel A volume set to 0 dB</td></tr><tr><td>29</td><td>Configure DSD Path Signal Control 1</td><td>DSD Processor Path Signal Control 1. 0x70002</td><td>0xCC</td><td></td></tr><tr><td></td><td></td><td>DSD_RAMP_UP</td><td>1</td><td></td></tr><tr><td></td><td></td><td>DSD_VOL_BEQA</td><td>1</td><td>DSD Volume B equals DSD volume A</td></tr><tr><td></td><td></td><td>DSD_SZC</td><td>0</td><td>Immediate change</td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>DSD_AMUTE</td><td>1</td><td>Mute occurs after 256 repeated 8-bit DSD mute patterns</td></tr><tr><td></td><td></td><td>DSD_AMUTE_BEQA</td><td>1</td><td>Mute happens only when mute pattern is detected in both channels</td></tr><tr><td></td><td></td><td>DSD_MUTE_A</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_MUTE_B</td><td>0</td><td>Function is disabled</td></tr><tr><td>30</td><td>Configure DSD interface</td><td>DSD Interface Configuration. 0x70003</td><td>0x04</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td></td><td></td><td>DSD_M/SB</td><td>1</td><td>DSD is clock master</td></tr><tr><td></td><td></td><td>DSD_PM_EN</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_PM_SEL</td><td>0</td><td>Function is disabled</td></tr><tr><td>31</td><td>Configure DSD Path Signal Control 2</td><td>DSD Processor Path Signal Control 2. 0x70004</td><td>0x50</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>DSD_PRC_SRC</td><td>10</td><td>Set source of DSD processor to ASP</td></tr><tr><td></td><td></td><td>DSD_EN</td><td>1</td><td>Enable DSD playback</td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>DSD_SPEED</td><td>0</td><td>Set DSD clock speed to 64+Fs</td></tr><tr><td></td><td></td><td>STA_DSD_DET</td><td>0</td><td>Static DSD detection disabled</td></tr><tr><td></td><td></td><td>INV_DSD_DET</td><td>0</td><td>Invalid DSD detection disabled</td></tr><tr><td>32</td><td>Configure DSD path Signal Control 3. Enable mono mode: a. Select Channel A/B (DSD_SWAPChan) b. Copy Channel A to B (DSD_COOPYCHAN) c. Invert Channel B (DSD_INV_B)</td><td>DSD Processor Path Signal Control 3. 0xC5/0xC7 for Left/Right channel 0x70006</td><td></td><td></td></tr><tr><td></td><td></td><td>DSD_ZERODB</td><td>1</td><td>The SACD 0-dB reference level (50%modulation index) matches PCM 0-dB full scale.</td></tr><tr><td></td><td></td><td>DSD_HPF_EN</td><td>1</td><td>Enable HPF in DSD processor</td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>SIGCTL_DSDEQPCM</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_INV_A</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_INV_B</td><td>1</td><td>Function is enabled</td></tr><tr><td></td><td></td><td>DSD_SWAPChan</td><td>0/1</td><td>Function is enabled/disabled</td></tr><tr><td></td><td></td><td>DSD_COOPYCHAN</td><td>1</td><td>Function is enabled</td></tr><tr><td>33</td><td>Configure telephone output for 1.732 V rms</td><td></td><td></td><td></td></tr><tr><td>34</td><td>Configure Class H amplifier</td><td>Class H Control. 0xB0000</td><td>0x1E</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td></td></tr><tr><td></td><td></td><td>ADPT_PWR</td><td>111</td><td>Output signal determines voltage level</td></tr><tr><td></td><td></td><td>HV_EN</td><td>1</td><td>High voltage mode enabled</td></tr><tr><td></td><td></td><td>EXT_VCPFILT</td><td>0</td><td>Using internal VCPFILT source.</td></tr><tr><td>35</td><td>Set HP output to full scale</td><td>HP Output Control 1. 0x80000</td><td>0x30</td><td></td></tr><tr><td></td><td></td><td>HP_CLAMPPA</td><td>0</td><td></td></tr><tr><td></td><td></td><td>HP_CLAMPPB</td><td>0</td><td></td></tr><tr><td></td><td></td><td>OUT_FS</td><td>11</td><td>Set headphone output to full scale (1.732 V rms)</td></tr><tr><td></td><td></td><td>HP_IN_EN</td><td>0</td><td></td></tr><tr><td></td><td></td><td>HP_IN_LP</td><td>0</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>+1dB_EN</td><td>0</td><td></td></tr><tr><td>36</td><td>Headphone detect</td><td>HP Detect. 0xD0000</td><td>0xC4</td><td></td></tr><tr><td></td><td></td><td>HPDETECT_CTRL</td><td>11</td><td>HP detect enabled</td></tr><tr><td></td><td></td><td>HPDETECT_INV</td><td>0</td><td>HP detect input is not inverted</td></tr><tr><td></td><td></td><td>HPDETECT_RISE_DBC_TIME</td><td>0.0</td><td>Tip Sense rising debounce time set to 0 ms</td></tr><tr><td></td><td></td><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Tip sense falling debounce time set to 500 ms</td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td>37</td><td>Enable interrupts</td><td></td><td></td><td></td></tr><tr><td>38</td><td colspan="4">Read Interrupt Status 1 register (0xF0000), Interrupt Status 2 register (0xF0001) and Interrupt Status 5 register (0xF0004) to clear sticky bits.</td></tr><tr><td>39</td><td>Enable headphone detect interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0x99</td><td></td></tr><tr><td></td><td></td><td>DAC_OVFL_INT_MASK</td><td>1</td><td>DAC_OVFL_INT is don't care</td></tr><tr><td></td><td></td><td>HPDETECTPlugINT_MASK</td><td>0</td><td>Enable HPDETECT Plug interrupt</td></tr><tr><td></td><td></td><td>HPDETECT_UNPLUG_INT_MASK</td><td>0</td><td>Enable HPDETECT_UNPLUG interrupt</td></tr><tr><td></td><td></td><td>XTAL_READY_INT_MASK</td><td>1</td><td>XTAL READY INT is don't care</td></tr><tr><td></td><td></td><td>XTAL_ERROR_INT_MASK</td><td>1</td><td>XTAL_ERROR INT is don't care</td></tr><tr><td></td><td></td><td>PLLReady_INT_MASK</td><td>0</td><td>PLL READY interrupt already enabled</td></tr><tr><td></td><td></td><td>PLL_ERROR_INT_MASK</td><td>0</td><td>PLL_ERROR interrupt already enabled</td></tr><tr><td></td><td></td><td>PDND_DONE_INT_MASK</td><td>1</td><td>PDND_DONE INT is don't care</td></tr><tr><td>40</td><td>Enable ASP interrupts</td><td>Interrupt Mask 2. 0xF0011</td><td>0x07</td><td></td></tr><tr><td></td><td></td><td>ASP_OVFL_INT_MASK</td><td>0</td><td>Enable ASP_OVFL interrupt</td></tr><tr><td></td><td></td><td>ASP_ERROR_INT_MASK</td><td>0</td><td>Enable ASP_ERROR interrupt</td></tr><tr><td></td><td></td><td>ASP_LATE_INT_MASK</td><td>0</td><td>Enable ASP_LATE interrupt</td></tr><tr><td></td><td></td><td>ASP_EARLY_INT_MASK</td><td>0</td><td>Enable ASP_EARLY interrupt</td></tr><tr><td></td><td></td><td>ASP_NOLRCK_INT_MASK</td><td>0</td><td>Enable ASP_NOLRCK interrupt</td></tr><tr><td></td><td></td><td>Reserved</td><td>111</td><td></td></tr><tr><td>41</td><td>Enable DSD and DoP interrupts</td><td>Interrupt Mask 5. 0xF0014</td><td>0x01</td><td></td></tr><tr><td></td><td></td><td>DSD_STUCK_INT_MASK</td><td>0</td><td>Enable DSD_STUCK interrupt</td></tr><tr><td></td><td></td><td>DSD_INVALID_A_INT_MASK</td><td>0</td><td>Enable DSD_INVALID_A interrupt</td></tr><tr><td></td><td></td><td>DSD_INVALID_B_INT_MASK</td><td>0</td><td>Enable DSD_INVALID_B interrupt</td></tr><tr><td></td><td></td><td>DSD_SILENCE_A_INT_MASK</td><td>0</td><td>Enable DSD_SILENCE_A interrupt</td></tr><tr><td></td><td></td><td>DSD_SILENCE_B_INT_MASK</td><td>0</td><td>Enable DSD_SILENCE_B interrupt</td></tr><tr><td></td><td></td><td>DSD_RATE_ERROR_INT_MASK</td><td>0</td><td>Enable DSD_RATE_ERROR interrupt</td></tr><tr><td></td><td></td><td>DOP_MDRT_DET_MASK</td><td>0</td><td>Enable DOP_MDRT_DET interrupt</td></tr><tr><td></td><td></td><td>DOP_ON_INT_MASK</td><td>1</td><td>Disable DOP_ON interrupt</td></tr><tr><td>42</td><td colspan="4">Wait for interrupt. Check if PLL_READY_INT = 1 in Interrupt Status 1 register(0xF0000).</td></tr><tr><td rowspan="4">43</td><td rowspan="4">Set MCLK source and frequency</td><td>System Clocking Control. 0x10006</td><td>0x05</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>MCLK_INT</td><td>1</td><td>MCLK Frequency is set to 22.5792 MHz</td></tr><tr><td>MCLK_SRC_SEL</td><td>01</td><td>MCLK Source is set to PLL</td></tr><tr><td>44</td><td colspan="4">Wait for at least 150 μs.</td></tr><tr><td rowspan="4">45</td><td rowspan="4">Enable ASP clocks</td><td>Pad Interface Configuration. 0x1000D</td><td>0x02</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>XSP_3ST</td><td>1</td><td>XSP Interface status is don't care (set to default)</td></tr><tr><td>ASP_3ST</td><td>0</td><td>Enable serial clocks in Master Mode</td></tr><tr><td>46</td><td>Power up HP</td><td colspan="3">Refer to Ex. 5-6 for DSD power-up sequence. Note that in Step 1 of Ex. 5-6, use HH = BF for DoP over ASP interface.</td></tr></table>

# 5.13.7 Analog-In Startup

Ex. 5-13 shows an example sequence of starting up the CS43131 in analog passthrough mode. 


Example 5-13. Start Up to Analog-In


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td colspan="4">Apply all relevant power supplies, then assert RESET.</td></tr><tr><td>2</td><td colspan="4">Wait for 1.5 ms. MCLK Source is set to RCO by default.</td></tr><tr><td>3</td><td colspan="4">Enable Headphone detect. Refer to Section 5.13.11 “Headphone Detection”</td></tr><tr><td>4</td><td colspan="4">Enable HPINx path. Refer to Section 5.5.1 “HPINx Alternate Headphone Path Enable Sequence”</td></tr></table>

# 5.13.8 Switching from Analog-In to PCM Playback

Ex. 5-14 assumes that: 

• The CS43131 is powered up, out of reset, and is currently operating in analog passthrough mode as in Ex. 5-13. 

• The ASP and PCM interfaces are not yet configured. 

• CS43131 XTI/XTO is connected to a 22.5792-MHz crystal. 

• ASP interface is slave. 


Example 5-14. Switching from Analog-In to PCM Playback


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td>Configure XTAL driver.</td><td></td><td></td><td></td></tr><tr><td rowspan="3">2</td><td rowspan="3">Configure XTAL bias current strength (assuming River Crystal at 22.5792 MHz)</td><td>Crystal Setting. 0x20052</td><td>0x04</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>XTAL_IBIAS</td><td>100</td><td>Bias current set to 12.5 μA</td></tr><tr><td>3</td><td>Read Interrupt Status 1 register (0xF0000) to clear sticky bits.</td><td></td><td></td><td></td></tr><tr><td rowspan="9">4</td><td rowspan="9">Enable XTAL interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>data(0xF0010) AND 0xE7</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>x</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>x</td><td></td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>x</td><td></td></tr><tr><td>XTAL_READINT_MASK</td><td>0</td><td>Enable XTAL_READY interrupt</td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>0</td><td>Enable XTAL_ERROR interrupt</td></tr><tr><td>PLL_READY_INT_MASK</td><td>x</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>x</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>x</td><td></td></tr><tr><td rowspan="9">5</td><td rowspan="9">Start XTAL</td><td>Power Down Control. 0x20000</td><td>data (0x20000) AND 0xF6</td><td></td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN_ESP</td><td>x</td><td></td></tr><tr><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td>PDN_HP</td><td>x</td><td></td></tr><tr><td>PDN_XTAL</td><td>0</td><td>Power up XTAL driver</td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>6</td><td colspan="4">Configure ASP interface. Sample rate set to 44.1 kHz. ASP is slave to incoming clock.</td></tr><tr><td rowspan="3">7</td><td rowspan="3">Set ASP sample rate</td><td>Serial Port Sample Rate. 0x1000B</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>ASP_SPRATE</td><td>0001</td><td>Set sample rate to 44.1 kHz</td></tr><tr><td>8</td><td>Set ASP sample bit size. XSP is don't care</td><td>Serial Port Sample Bit Size. 0x1000C</td><td>0x04</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>XSP_SPSIZE</td><td>01</td><td>XSP sample bit size is don't care</td></tr><tr><td></td><td></td><td>ASP_SPSIZE</td><td>00</td><td>ASP sample bit size set to 32 bits</td></tr><tr><td>9</td><td>Set ASP numerator</td><td>ASP Numerator 1. 0x40010</td><td>0x01</td><td></td></tr><tr><td></td><td></td><td>ASP_N_LSB</td><td>0x01</td><td>LSB of ASP sample rate fractional divide numerator</td></tr><tr><td></td><td></td><td>ASP Numerator 2. 0x40011</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_N_MSB</td><td>0x00</td><td>MSB of ASP sample rate fractional divide numerator</td></tr><tr><td>10</td><td>Set ASP denominator</td><td>ASP Denominator 1. 0x40012</td><td>0x08</td><td></td></tr><tr><td></td><td></td><td>ASP_M_LSB</td><td>0x08</td><td>LSB of ASP sample rate fractional divide denominator</td></tr><tr><td></td><td></td><td>ASP Denominator 2. 0x40013</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_M_MSB</td><td>0x00</td><td>MSB of ASP sample rate fractional divide denominator</td></tr><tr><td>11</td><td>Set ASP LRCK high time</td><td>ASP LRCK High Time 1. 0x40014</td><td>0x1F</td><td></td></tr><tr><td></td><td></td><td>ASP_LCHI_LSB</td><td>0x1F</td><td>LSB of ASP LRCK high time duration</td></tr><tr><td></td><td></td><td>ASP LRCK High Time 2. 0x40015</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_LCHI_MSB</td><td>0x00</td><td>MSB of ASP LRCK high time duration</td></tr><tr><td>12</td><td>Set ASP LRCK period</td><td>ASP LRCK Period 1. 0x40016</td><td>0x3F</td><td></td></tr><tr><td></td><td></td><td>ASP_LCPR_LSB</td><td>0x3F</td><td>LSB of ASP LRCK period</td></tr><tr><td></td><td></td><td>ASP LRCK Period 2. 0x40017</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_LCPR_MSB</td><td>0x00</td><td>MSB of ASP LRCK period</td></tr><tr><td>13</td><td>Configure ASP clock</td><td>ASP Clock Configuration. 0x40018</td><td>0x0C</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td></td></tr><tr><td></td><td></td><td>ASP_M/SB</td><td>0</td><td>Set ASP port to be Slave</td></tr><tr><td></td><td></td><td>ASP_SCPOL_OUT</td><td>1</td><td>Configure clock polarity for I2S input</td></tr><tr><td></td><td></td><td>ASP_SCPOL_IN</td><td>1</td><td></td></tr><tr><td></td><td></td><td>ASP_LCPOL_OUT</td><td>0</td><td></td></tr><tr><td></td><td></td><td>ASP_LCPOL_IN</td><td>0</td><td></td></tr><tr><td>14</td><td>Configure ASP frame</td><td>ASP Frame Configuration. 0x40019</td><td>0x0A</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td>Configure ASP port to accept I2S input</td></tr><tr><td></td><td></td><td>ASP_STP</td><td>0</td><td></td></tr><tr><td></td><td></td><td>ASP_5050</td><td>1</td><td></td></tr><tr><td></td><td></td><td>ASP_FSD</td><td>010</td><td></td></tr><tr><td>15</td><td>Set ASP channel location</td><td>ASP Channel 1 Location. 0x50000</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH1</td><td>0x00</td><td>ASP Channel 1 starts on SCLK0</td></tr><tr><td></td><td></td><td>ASP Channel 2 Location. 0x50001</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH2</td><td>0x00</td><td>ASP Channel 2 starts on SCLK0</td></tr><tr><td>16</td><td colspan="2">Set ASP channel size and enable ASP Channel 1 Size and Enable. 0x5000A</td><td>0x07</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH1_AP</td><td>0</td><td>ASP Channel 1 active phase</td></tr><tr><td></td><td></td><td>ASP_RX_CH1_EN</td><td>1</td><td>ASP Channel 1 enable</td></tr><tr><td></td><td></td><td>ASP_RX_CH1_RES</td><td>11</td><td>ASP Channel 1 size is 32 bits</td></tr><tr><td></td><td></td><td>ASP Channel 2 Size and Enable. 0x5000B</td><td>0x0F</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH2_AP</td><td>1</td><td>ASP Channel 2 active phase</td></tr><tr><td></td><td></td><td>ASP_RX_CH2_EN</td><td>1</td><td>ASP Channel 2 enable</td></tr><tr><td></td><td></td><td>ASP_RX_CH2_RES</td><td>11</td><td>ASP Channel 2 size is 32 bits</td></tr><tr><td>17</td><td colspan="4">Configure PCM interface. HPF filter is used. Deemphasis off.</td></tr><tr><td>18</td><td>Configure PCM Filter</td><td>PCM Filter Option. 0x90000</td><td>0x02</td><td></td></tr><tr><td></td><td></td><td>FILTER_SLOW_FASTB</td><td>0</td><td></td></tr><tr><td></td><td></td><td>PHCOMP_LOWLATB</td><td>0</td><td></td></tr><tr><td></td><td></td><td>NOS</td><td>0</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>00</td><td></td></tr><tr><td></td><td></td><td>PCM_WBF_EN</td><td>0</td><td></td></tr><tr><td></td><td></td><td>HIGH_PASS</td><td>1</td><td>High Pass Filter is selected</td></tr><tr><td></td><td></td><td>DEEMP_ON</td><td>0</td><td></td></tr><tr><td>19</td><td>Set Volume for Channel B</td><td>PCM Volume B. 0x90001</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>PCM_volume_B</td><td>0x00</td><td>Set volume to 0 dB</td></tr><tr><td>20</td><td>Set Volume for Channel A</td><td>PCM Volume A. 0x90002</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>PCM_volume_A</td><td>0x00</td><td>Set volume to 0 dB</td></tr><tr><td rowspan="14">21</td><td rowspan="14">Configure PCM Path Signal Control</td><td>PCM Path Signal Control 1. 0x90003</td><td>0xED</td><td></td></tr><tr><td>PCM_RAMP_DOWN</td><td>1</td><td>Soft ramp down of volume on filter change</td></tr><tr><td>PCM_VOL_BEQA</td><td>1</td><td>Volume setting on both channels controlled by PCM_VOLUME_A</td></tr><tr><td>PCM_SZC</td><td>10</td><td>Enable soft ramp</td></tr><tr><td>PCM_AMUTE</td><td>1</td><td>Mute after reception of 8192 samples of 0 or -1.</td></tr><tr><td>PCM_AMUTEBEQA</td><td>1</td><td>Mute only when AMUTE condition is detected on both channels</td></tr><tr><td>PCM_MUTE_A</td><td>0</td><td>Function is disabled</td></tr><tr><td>PCM_MUTE_B</td><td>0</td><td>Function is disabled</td></tr><tr><td>PCM Path Signal Control 2. 0x90004</td><td>0x00</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td>Disable all functions in this register</td></tr><tr><td>PCM_INV_A</td><td>0</td><td></td></tr><tr><td>PCM_INV_B</td><td>0</td><td></td></tr><tr><td>PCM_SWAPChan</td><td>0</td><td></td></tr><tr><td>PCM copyingChan</td><td>0</td><td></td></tr><tr><td>22</td><td>Configure HP interface</td><td></td><td></td><td></td></tr><tr><td rowspan="5">23</td><td rowspan="5">Configure Class H Amplifier</td><td>Class H Control. 0xB0000</td><td>0x1E</td><td></td></tr><tr><td>Reserved</td><td>000</td><td></td></tr><tr><td>ADPT_PWR</td><td>111</td><td>Output signal determines voltage level</td></tr><tr><td>HV_EN</td><td>1</td><td>High voltage mode enabled</td></tr><tr><td>EXT_VCPFILT</td><td>0</td><td>Using Internal VCPFILT source.</td></tr><tr><td rowspan="6">24</td><td rowspan="6">Headphone Detect</td><td>HP Detect. 0xD0000</td><td>0xC4</td><td></td></tr><tr><td>HPDETECT_CTRL</td><td>11</td><td>HP Detect enabled</td></tr><tr><td>HPDETECT_INV</td><td>0</td><td>HP detect input is not inverted</td></tr><tr><td>HPDETECT_RISE_DBC_TIME</td><td>00</td><td>Tip Sense rising debounce time set to 0 ms</td></tr><tr><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Tip sense falling debounce time set to 500 ms</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>25</td><td>Enable interrupts</td><td></td><td></td><td></td></tr><tr><td>26</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) and Interrupt Status 2 register (0xF0001) to clear sticky bits.</td></tr><tr><td rowspan="9">27</td><td rowspan="9">Enable headphone detect interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>data(0xF0010) AND 0x9F</td><td></td></tr><tr><td>DAC OVFL INT_MASK</td><td>x</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>0</td><td>Enable HPDETECT_PLUG interrupt</td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>0</td><td>Enable HPDETECT_UNPLUG interrupt</td></tr><tr><td>XTAL_READY_INT_MASK</td><td>x</td><td></td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>x</td><td></td></tr><tr><td>PLL_READY_INT_MASK</td><td>x</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>x</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>x</td><td></td></tr><tr><td rowspan="7">28</td><td rowspan="7">Enable ASP interrupts</td><td>Interrupt Mask 2. 0xF0011</td><td>0x07</td><td></td></tr><tr><td>ASP OVFL INT_MASK</td><td>0</td><td>Enable ASP OVFL interrupt</td></tr><tr><td>ASP ERROR_INT_MASK</td><td>0</td><td>Enable ASP ERROR interrupt</td></tr><tr><td>ASP_LATE_INT_MASK</td><td>0</td><td>Enable ASP_LATE interrupt</td></tr><tr><td>ASP_EARLY_INT_MASK</td><td>0</td><td>Enable ASP_EARLY interrupt</td></tr><tr><td>ASP_NOLRCK_INT_MASK</td><td>0</td><td>Enable ASP_NOLRCK interrupt</td></tr><tr><td>Reserved</td><td>111</td><td></td></tr><tr><td>29</td><td colspan="4">Initiate a soft ramp down of HPINx input to mute.</td></tr><tr><td>30</td><td>Disable HPINx</td><td colspan="3">Refer to Section 5.5.2</td></tr><tr><td>31</td><td colspan="4">Wait for interrupt. Check if XTAL_READY_INT = 1 in Interrupt Status 1 register(0xF0000).</td></tr><tr><td rowspan="4">32</td><td rowspan="4">Switch MCLK source to XTAL</td><td>System Clocking Control 1. 0x10006</td><td>0x04</td><td></td></tr><tr><td>Reserved</td><td>00000</td><td></td></tr><tr><td>MCLK_INT</td><td>1</td><td>MCLK Source set to XTAL. MCLK_INT frequency set to 22.5792MHz</td></tr><tr><td>MCLK_SRC_SEL</td><td>00</td><td></td></tr><tr><td>33</td><td colspan="4">Wait at least 150 μs.</td></tr><tr><td rowspan="9">34</td><td rowspan="9">Power up ASP</td><td>Power Down Control. 0x20000</td><td>0xB6</td><td></td></tr><tr><td>PDN_XSP</td><td>1</td><td></td></tr><tr><td>PDN_XSP</td><td>0</td><td>Enable ASP data pins</td></tr><tr><td>PDN_DSDIF</td><td>1</td><td>XTAL is already enabled</td></tr><tr><td>PDN_HP</td><td>1</td><td></td></tr><tr><td>PDN_XTAL</td><td>0</td><td></td></tr><tr><td>PDN_PLL</td><td>1</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>35</td><td>Power up HP</td><td colspan="3">Refer to Ex. 5-5 for PCM power-up sequence</td></tr></table>

# 5.13.9 Switching from PCM to Analog-In Playback

Ex. 5-15 makes the following assumptions: 

• The CS43131 is powered up, out of reset, and currently operating in PCM playback mode. 

• A headphone is connected to the headphone jack. 

• Headphone detect is enabled and HPDETECT_PLUG_INT $= 1$ 

• XTAL is used as MCLK source. 


Example 5-15. Switching from PCM to Analog-In Playback


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td rowspan="8">1</td><td rowspan="8">Enable soft ramp</td><td>PCM Path Signal Control 1. 0x90003</td><td>data(0x90003) OR (0xA0)</td><td></td></tr><tr><td>PCM_RAMP_DOWN</td><td>1</td><td>Enable soft ramp</td></tr><tr><td>PCM_VOL_BEQA</td><td>x</td><td></td></tr><tr><td>PCM_SZC</td><td>10</td><td></td></tr><tr><td>PCM_AMUTE</td><td>x</td><td></td></tr><tr><td>PCM_AMUTEBEQA</td><td>x</td><td></td></tr><tr><td>PCM_MUTE_A</td><td>0</td><td></td></tr><tr><td>PCM_MUTE_B</td><td>0</td><td></td></tr><tr><td>2</td><td>PCM Power Down Sequence</td><td colspan="3">Refer to Section 5.6.1</td></tr><tr><td rowspan="4">3</td><td rowspan="4">Set MCLK Source to RCO</td><td>System Clocking Control 1. 0x10006</td><td>0x06</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>MCLK_INT</td><td>1</td><td>Frequency of MCLK_INT is don&#x27;t care</td></tr><tr><td>MCLK_SRC_SEL</td><td>10</td><td>MCLK source set to RCO</td></tr><tr><td>4</td><td colspan="4">Wait for 150 μs.</td></tr><tr><td rowspan="9">5</td><td rowspan="9">Power down crystal</td><td>Power Down Control. 0x20000</td><td>data (0x20000) OR (0x08)</td><td></td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN_ ASP</td><td>1</td><td>ASP already powered down</td></tr><tr><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td>HP already powered down</td></tr><tr><td>PDN_XTAL</td><td>1</td><td>Power down XTAL.</td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>6</td><td>Enable HPINx</td><td colspan="3">Refer to Section 5.5.1</td></tr></table>

# 5.13.10 Switching MCLK Frequency

Ex. 5-16 shows steps necessary to switch the MCLK frequency in order to play audio at a different sample rate that is no longer an integer divide of current MCLK. It makes the following assumptions: 

• The CS43131 is already powered up and out of reset. 

• MCLK_INT is 22.5792 MHz, and the sample rate is an integer divide of MCLK. 

• ASP is used for audio delivery and PDN_HP = 0. 


Example 5-16. Sequence for Switching MCLK Frequency


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td>Power down PCM</td><td colspan="2">Refer to Ex. 5-3 for PCM power-down sequence</td><td></td></tr><tr><td>2</td><td>Switch MCLK Source to RCO</td><td></td><td></td><td></td></tr><tr><td rowspan="4">3</td><td rowspan="4">Set MCLK Source to RCO</td><td>System Clocking Control 1. 0x10006</td><td>0x06</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>MCLK_INT</td><td>1</td><td>Frequency of MCLK_INT is don&#x27;t care</td></tr><tr><td>MCLK_SRC_SEL</td><td>10</td><td>MCLK source set to RCO</td></tr><tr><td>4</td><td>Wait for 150 μs.</td><td></td><td></td><td></td></tr><tr><td>5</td><td>Switch to a different MCLK Frequency. Assuming new MCLK frequency is 24.576MHz.</td><td></td><td></td><td></td></tr><tr><td rowspan="4">6</td><td rowspan="4">Change MCLK_INT frequency to 24.576 MHz</td><td>System Clocking Control 1. 0x10006</td><td>0x02</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>MCLK_INT</td><td>0</td><td>MCLK_INT frequency set to 24.576 MHz</td></tr><tr><td>MCLK_SRC_SEL</td><td>10</td><td></td></tr><tr><td>7</td><td>Configure ASP for appropriate sample rate, bit size and clock mode. Unmute PCM CHA and CHB outputs. Enable appropriate interrupts</td><td></td><td></td><td></td></tr><tr><td rowspan="4">8</td><td rowspan="4">Switch MCLK source to direct MCLK mode</td><td>System Clocking Control 1. 0x10006</td><td>0x0</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>MCLK_INT</td><td>0</td><td>MCLK_INT frequency set to 24.576 MHz</td></tr><tr><td>MCLK_SRC_SEL</td><td>00</td><td>MCLK source set to direct MCLK mode</td></tr><tr><td>9</td><td>Wait at least 150 μs.</td><td></td><td></td><td></td></tr><tr><td rowspan="9">10</td><td rowspan="9">Power up ASP</td><td>Power Down Control. 0x20000</td><td>data(0x20000) AND (0xBF)</td><td></td></tr><tr><td>PDN_XSP</td><td>x</td><td></td></tr><tr><td>PDN_ ASP</td><td>0</td><td>Enable ASP data pins</td></tr><tr><td>PDN_DSDIF</td><td>x</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td></td></tr><tr><td>PDN_XTAL</td><td>0</td><td>XTAL is already enabled</td></tr><tr><td>PDN_PLL</td><td>x</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>x</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>11</td><td>Power up HP</td><td colspan="2">Refer to Ex. 5-5 for PCM power-up sequence</td><td></td></tr></table>

# 5.13.11 Headphone Detection

Ex. 5-17 shows steps necessary to detect the presence of a headphone. It makes the following assumptions: 

• The CS43131 is already powered up and out of reset. 

• The HP Detect register is not configured. 


Example 5-17. Sequence for Headphone Detection


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td colspan="4">Read Interrupt Status 1 register (0xF0000) to clear any sticky bits.</td></tr><tr><td>2</td><td colspan="4">Read HP Status register (0xD0001) to clear any sticky bits.</td></tr><tr><td rowspan="9">3</td><td rowspan="9">Enable HPDETECT interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>data (0xF0010) AND 0x9F</td><td></td></tr><tr><td>DAC OVFL_INT_MASK</td><td>x</td><td rowspan="8">Enable HPDETECT interrupts</td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>0</td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>0</td></tr><tr><td>XTALREADY_INT_MASK</td><td>x</td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>x</td></tr><tr><td>PLL_READY_INT_MASK</td><td>x</td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>x</td></tr><tr><td>PDN_DONE_INT_MASK</td><td>x</td></tr><tr><td rowspan="6">4</td><td rowspan="6">Configure HP Detect parameters</td><td>HP Detect. 0xD0000</td><td>0x04</td><td></td></tr><tr><td>HPDETECT_CTRL</td><td>00</td><td></td></tr><tr><td>HPDETECT_INV</td><td>0</td><td></td></tr><tr><td>HPDETECT_RISE_DBC_TIME</td><td>0 0</td><td>Rising edge debounce time set to 0 ms</td></tr><tr><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Falling edge debounce time set to 500 ms</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>5</td><td>Enable HP Detect</td><td>HP Detect. 0xD0000</td><td>data (0xD0000) OR (0xC0)</td><td></td></tr><tr><td></td><td></td><td>HPDETECT_CTRL</td><td>11</td><td>Enable headphone detection</td></tr><tr><td></td><td></td><td>HPDETECT_INV</td><td>x</td><td></td></tr><tr><td></td><td></td><td>HPDETECT_RISE_DBC_TIME</td><td>x x</td><td></td></tr><tr><td></td><td></td><td>HPDETECT_FALL_DBC_TIME</td><td>xx</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td>6</td><td colspan="4">Wait for interrupt. Check if HPDETECT Plug_INT or HPDETECT_UNPUG_INT is set in the Interrupt Status 1 register (0xF0000).</td></tr></table>

# 5.13.12 DoP and PCM Mixing

Ex. 5-18 shows steps necessary to mix DoP and PCM. The XSP is in clock master receiving DoP data with LRCLK at 176.4 kHz and SCLK at 8.4672 MHz. The ASP is clock master receiving PCM data with LRCLK at 44.1 kHz and SCLK at 2.8224 MHz. 


Example 5-18. DoP and PCM Mixing


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td colspan="4">Apply all relevant power supplies, then assert RESET.</td></tr><tr><td>2</td><td colspan="4">Wait for 1.5 ms</td></tr><tr><td>3</td><td colspan="4">Configure XTAL Driver</td></tr><tr><td rowspan="3">4</td><td rowspan="3">Configure XTAL bias current strength (assuming River Crystal at 22.5792 MHz)</td><td>Crystal Setting. 0x20052</td><td>0x04</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>XTAL_IBIAS</td><td>100</td><td>Bias current set to 12.5 μA</td></tr><tr><td rowspan="9">5</td><td rowspan="9">Enable XTAL interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0xE7</td><td></td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>1</td><td></td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>1</td><td></td></tr><tr><td>XTAL_READY_INT_MASK</td><td>0</td><td>Enable XTAL_READY interrupt</td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>0</td><td>Enable XTAL_ERROR interrupt</td></tr><tr><td>PLL_READY_INT_MASK</td><td>1</td><td></td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>1</td><td></td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td></td></tr><tr><td rowspan="9">6</td><td rowspan="9">Start XTAL</td><td>Power Down Control. 0x20000</td><td>0xF6</td><td></td></tr><tr><td>PDN_XSP</td><td>1</td><td></td></tr><tr><td>PDN_XSP</td><td>1</td><td></td></tr><tr><td>PDN_DSDIF</td><td>1</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td></td></tr><tr><td>PDN_XTAL</td><td>0</td><td>Power up XTAL driver</td></tr><tr><td>PDN_PLL</td><td>1</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>7</td><td colspan="4">Playback DoP audio. Assuming 64·Fs DSD stream</td></tr><tr><td>8</td><td colspan="4">Configure XSP interface for DoP input.</td></tr><tr><td rowspan="4">9</td><td rowspan="4">Set sample bit size.</td><td>Serial Port Sample Bit Size. 0x1000C</td><td>0x05</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>XSP_SPSIZE</td><td>01</td><td>XSP sample bit size is set to 24 bits</td></tr><tr><td>ASP_SPSIZE</td><td>01</td><td>ASP sample bit size is set to 24 bits</td></tr><tr><td rowspan="4">10</td><td rowspan="4">Set XSP Numerator</td><td>XSP Numerator 1. 0x40020</td><td>0x03</td><td></td></tr><tr><td>XSP_N_LSB</td><td>0x03</td><td>LSB of XSP sample rate fractional divide numerator</td></tr><tr><td>XSP Numerator 2. 0x40021</td><td>0x00</td><td></td></tr><tr><td>XSP_N_MSB</td><td>0x00</td><td>MSB of XSP sample rate fractional divide numerator</td></tr><tr><td rowspan="4">11</td><td rowspan="4">Set XSP Denominator</td><td>XSP Denominator 1. 0x40022</td><td>0x08</td><td></td></tr><tr><td>XSP_M_LSB</td><td>0x08</td><td>LSB of XSP sample rate fractional divide denominator</td></tr><tr><td>XSP Denominator 2. 0x40023</td><td>0x00</td><td></td></tr><tr><td>XSP_M_MSB</td><td>0x00</td><td>MSB of XSP sample rate fractional divide denominator</td></tr><tr><td rowspan="4">12</td><td rowspan="4">Set XSP LRCK high Time</td><td>XSP LRCK High Time 1. 0x40024</td><td>0x17</td><td></td></tr><tr><td>XSP_LCHI_LSB</td><td>0x17</td><td>LSB of XSP LRCK high time duration</td></tr><tr><td>XSP LRCK High Time 2. 0x40025</td><td>0x00</td><td></td></tr><tr><td>XSP_LCHI_MSB</td><td>0x00</td><td>MSB of XSP LRCK high time duration</td></tr><tr><td rowspan="4">13</td><td rowspan="4">Set XSP LRCK period</td><td>XSP LRCK Period 1. 0x40026</td><td>0x2F</td><td></td></tr><tr><td>XSP_LCPR_LSB</td><td>0x2F</td><td>LSB of XSP LRCK period</td></tr><tr><td>XSP LRCK Period 2. 0x40027</td><td>0x00</td><td></td></tr><tr><td>XSP_LCPR_MSB</td><td>0x00</td><td>MSB of XSP LRCK period</td></tr><tr><td>14</td><td>Configure XSP Clock</td><td>XSP Clock Configuration. 0x40028</td><td>0x1C</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td></td></tr><tr><td></td><td></td><td>XSP_M/SB</td><td>1</td><td>Set XSP port to be Master</td></tr><tr><td></td><td></td><td>XSP_SCPOL_OUT</td><td>1</td><td>Set output SCLK polarity</td></tr><tr><td></td><td></td><td>XSP_SCPOL_IN</td><td>1</td><td>Input SCLK polarity is don't care</td></tr><tr><td></td><td></td><td>XSP_LCPOL_OUT</td><td>0</td><td>Set Output LRCLK polarity</td></tr><tr><td></td><td></td><td>XSP_LCPOL_IN</td><td>0</td><td>Input LRCLK polarity is don't care</td></tr><tr><td>15</td><td>Configure XSP Frame</td><td>XSP Frame Configuration. 0x40029</td><td>0x0A</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td></td></tr><tr><td></td><td></td><td>XSP_STP</td><td>0</td><td>Configure XSP port to accept I²S input</td></tr><tr><td></td><td></td><td>XSP_5050</td><td>1</td><td></td></tr><tr><td></td><td></td><td>XSP_FSD</td><td>010</td><td></td></tr><tr><td>16</td><td>Set XSP Channel Location</td><td>XSP Channel 1 Location. 0x60000</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>XSP_RX_CH1</td><td>0x00</td><td>XSP Channel 1 starts on SCLK0</td></tr><tr><td></td><td></td><td>XSP_Channel 2 Location. 0x60001</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>XSP_RX_CH2</td><td>0x00</td><td>XSP Channel 2 starts on SCLK0</td></tr><tr><td>17</td><td>Set XSP Channel Size and Enable</td><td>XSP Channel 1 Size and Enable. 0x6000A</td><td>0x06</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>XSP_RX_CH1_AP</td><td>0</td><td>XSP Channel 1 Active Phase</td></tr><tr><td></td><td></td><td>XSP_RX_CH1_EN</td><td>1</td><td>XSP Channel 1 Enable</td></tr><tr><td></td><td></td><td>XSP_RX_CH1_RES</td><td>10</td><td>XSP Channel 1 Size is 24 bits</td></tr><tr><td></td><td></td><td>XSP_Channel 2 Size and Enable. 0x6000B</td><td>0x0E</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>XSP_RX_CH2_AP</td><td>1</td><td>XSP Channel 2 Active Phase</td></tr><tr><td></td><td></td><td>XSP_RX_CH2_EN</td><td>1</td><td>XSP Channel 2 Enable</td></tr><tr><td></td><td></td><td>XSP_RX_CH2_RES</td><td>10</td><td>XSP Channel 2 Size is 24 bits</td></tr><tr><td>18</td><td>Configure DSD Processor</td><td></td><td></td><td></td></tr><tr><td>19</td><td>Configure DSD Volume</td><td>DSD Volume A. 0x70001</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>DSD_VOLUME_A</td><td>0x00</td><td>Channel A volume set to 0 dB</td></tr><tr><td>20</td><td>Configure DSD path Signal Control 1</td><td>DSD Processor Path Signal Control 1. 0x70002</td><td>0xCC</td><td></td></tr><tr><td></td><td></td><td>DSD_RAMP_UP</td><td>1</td><td></td></tr><tr><td></td><td></td><td>DSD_VOL_BEQA</td><td>1</td><td>DSD Volume B equals DSD volume A</td></tr><tr><td></td><td></td><td>DSD_SZC</td><td>0</td><td>Immediate change</td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>DSD_AMUTE</td><td>1</td><td>Mute occurs after 256 repeated 8-bit DSD mute patterns</td></tr><tr><td></td><td></td><td>DSD_AMUTE_BEQA</td><td>1</td><td>Mute happens only when mute pattern is detected in both channels</td></tr><tr><td></td><td></td><td>DSD_MUTE_A</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_MUTE_B</td><td>0</td><td>Function is disabled</td></tr><tr><td>21</td><td>Configure DSD Interface</td><td>DSD Interface Configuration. 0x70003</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td></td><td></td><td>DSD_M/SB</td><td>0</td><td>DSD_M/SB is don't care</td></tr><tr><td></td><td></td><td>DSD_PM_EN</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_PM_SEL</td><td>0</td><td>Function is disabled</td></tr><tr><td>22</td><td>Configure DSD path Signal Control 2</td><td>DSD Processor Path Signal Control 2. 0x70004</td><td>0x70</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>DSD_PRC_SRC</td><td>11</td><td>Set source of DSD processor to XSP</td></tr><tr><td></td><td></td><td>DSD_EN</td><td>1</td><td>Enable DSD playback</td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>DSD_SPEED</td><td>0</td><td>Set DSD clock speed to 64*FS</td></tr><tr><td></td><td></td><td>STA_DSD_DET</td><td>0</td><td>Static DSD detection disabled</td></tr><tr><td></td><td></td><td>INV_DSD_DET</td><td>0</td><td>Invalid DSD detection disabled</td></tr><tr><td>23</td><td>Configure DSD path Signal Control 3</td><td>DSD Processor Path Signal Control 3. 0x70006</td><td>0xC0</td><td></td></tr><tr><td></td><td></td><td>DSD_ZERODB</td><td>1</td><td>DSD stream volume setting</td></tr><tr><td></td><td></td><td>DSD_HP_EN</td><td>1</td><td>Enable DSD HPF</td></tr><tr><td></td><td></td><td>Reserved</td><td>0</td><td></td></tr><tr><td></td><td></td><td>SIGCTL_DSDEQPCM</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_INV_A</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_INV_B</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD_SWAPChan</td><td>0</td><td>Function is disabled</td></tr><tr><td></td><td></td><td>DSD copyingCHAN</td><td>0</td><td>Function is disabled</td></tr><tr><td rowspan="5">25</td><td rowspan="5">Configure Class H Amplifier</td><td>Class H Control. 0x80000</td><td>0x1E</td><td></td></tr><tr><td>Reserved</td><td>000</td><td></td></tr><tr><td>ADPT_PWR</td><td>111</td><td>Output Signal determines voltage level</td></tr><tr><td>HVN</td><td>1</td><td>High Voltage Mode enabled</td></tr><tr><td>EXT_VCPFILT</td><td>0</td><td>Using Internal VCPFILT source.</td></tr><tr><td rowspan="8">26</td><td rowspan="8">Set HP output to full scale</td><td>HP Output Control 1. 0x80000</td><td>0x30</td><td></td></tr><tr><td>HP_CLAMPA</td><td>0</td><td></td></tr><tr><td>HP_CLAMPB</td><td>0</td><td></td></tr><tr><td>OUT_FS</td><td>11</td><td>Set HP output to Full Scale (1.732 Vrms)</td></tr><tr><td>HP_IN_EN</td><td>0</td><td></td></tr><tr><td>HP_IN_LP</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>+1dB_EN</td><td>0</td><td></td></tr><tr><td rowspan="6">27</td><td rowspan="6">Headphone Detect</td><td>HP Detect. 0xD0000</td><td>0xC4</td><td></td></tr><tr><td>HPDETECT_CTRL</td><td>11</td><td>HP detect enabled</td></tr><tr><td>HPDETECT_INV</td><td>0</td><td>HP detect input is not inverted</td></tr><tr><td>HPDETECT_RISE_DBC_TIME</td><td>00</td><td>Tip Sense rising debounce time set to 0 ms</td></tr><tr><td>HPDETECT_FALL_DBC_TIME</td><td>10</td><td>Tip sense falling debounce time set to 500 ms</td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>28</td><td colspan="4">Enable Interrupts</td></tr><tr><td>29</td><td colspan="4">Read Interrupt Status 1 register (0xF0000), Interrupt Status 2 register (0xF0001) and Interrupt Status 5 register (0xF0004) to clear sticky bits</td></tr><tr><td rowspan="9">30</td><td rowspan="9">Enable Headphone Detect Interrupts</td><td>Interrupt Mask 1. 0xF0010</td><td>0x99</td><td></td></tr><tr><td>DAC OVFL_INT_MASK</td><td>1</td><td>DAC OVFL_INT is don't care</td></tr><tr><td>HPDETECT_PLUG_INT_MASK</td><td>0</td><td>Unmask HPDETECT_PLUG interrupt</td></tr><tr><td>HPDETECT_UNPLUG_INT_MASK</td><td>0</td><td>Unmask HPDETECT_UNPLUG interrupt</td></tr><tr><td>XTALREADY_INT_MASK</td><td>1</td><td>XTAL READY_INT is don't care</td></tr><tr><td>XTAL_ERROR_INT_MASK</td><td>1</td><td>XTAL_ERROR_INT is don't care</td></tr><tr><td>PLL READY_INT_MASK</td><td>0</td><td>PLL READY Interrupt is already unmasked</td></tr><tr><td>PLL_ERROR_INT_MASK</td><td>0</td><td>PLL_ERROR Interrupt is already unmasked</td></tr><tr><td>PDN_DONE_INT_MASK</td><td>1</td><td>PDN_DONE_INT is don't care</td></tr><tr><td rowspan="7">31</td><td rowspan="7">Enable XSP Interrupts</td><td>Interrupt Mask 2. 0xF0011</td><td>0x07</td><td></td></tr><tr><td>XSP OVFL_INT_MASK</td><td>0</td><td>Enable XSP OVFL interrupt</td></tr><tr><td>XSP_ERROR_INT_MASK</td><td>0</td><td>Enable XSP_ERROR interrupt</td></tr><tr><td>XSP_LATE_INT_MASK</td><td>0</td><td>Enable XSP_LATE interrupt</td></tr><tr><td>XSP_EARLY_INT_MASK</td><td>0</td><td>Enable XSP_EARLY interrupt</td></tr><tr><td>XSP_NOLRCK_INT_MASK</td><td>0</td><td>Enable XSP_NOLRCK interrupt</td></tr><tr><td>Reserved</td><td>111</td><td></td></tr><tr><td rowspan="9">32</td><td rowspan="9">Enable DSD and DoP Interrupts</td><td>Interrupt Mask 5. 0xF0014</td><td>0x01</td><td></td></tr><tr><td>DSD_STUCK_INT_MASK</td><td>0</td><td>Enable DSD_STUCK interrupt</td></tr><tr><td>DSD_INVALID_A_INT_MASK</td><td>0</td><td>Enable DSD_INVALID_A interrupt</td></tr><tr><td>DSD_INVALID_B_INT_MASK</td><td>0</td><td>Enable DSD_INVALID_B interrupt</td></tr><tr><td>DSD_SILENCE_A_INT_MASK</td><td>0</td><td>Enable DSD_SILENCE_A interrupt</td></tr><tr><td>DSD_SILENCE_B_INT_MASK</td><td>0</td><td>Enable DSD_SILENCE_B interrupt</td></tr><tr><td>DSD_RATE_ERROR_INT_MASK</td><td>0</td><td>Enable DSD_RATE_ERROR interrupt</td></tr><tr><td>DOP_MRK_DET_INT_MASK</td><td>0</td><td>Enable DOP_MRK_DET interrupt</td></tr><tr><td>DOP_ON_INT_MASK</td><td>1</td><td>Disable DOP_ON interrupt</td></tr><tr><td rowspan="4">33</td><td rowspan="4">Set MCLK Source and Frequency</td><td>System Clocking Control. 0x10006</td><td>0x04</td><td></td></tr><tr><td>Reserved</td><td>0000 0</td><td></td></tr><tr><td>MCLK_INT</td><td>1</td><td>MCLK Frequency is set to 22.5792 MHz</td></tr><tr><td>MCLK_SRC_SEL</td><td>00</td><td>MCLK Source is set to XTAL</td></tr><tr><td>34</td><td colspan="4">Wait for at least 150 μs</td></tr><tr><td rowspan="4">35</td><td rowspan="4">Enable XSP Clocks</td><td>Pad Interface Configuration. 0x1000D</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>XSP_3ST</td><td>0</td><td>ASP Interface status is don't care (set to default)</td></tr><tr><td>ASP_3ST</td><td>1</td><td>Enable XSP serial clocks in master mode</td></tr><tr><td rowspan="9">36</td><td rowspan="9">Enable XSP and CLKOUT</td><td>Power Down Control. 0x20000</td><td>0x74</td><td></td></tr><tr><td>PDN_XSP</td><td>0</td><td>Enable XSP Data pins and CLKOUT</td></tr><tr><td>PDN.asp</td><td>1</td><td></td></tr><tr><td>PDN_DSDIF</td><td>1</td><td></td></tr><tr><td>PDN_HP</td><td>1</td><td></td></tr><tr><td>PDN_XTAL</td><td>0</td><td>XTAL is already enabled</td></tr><tr><td>PDN_PLL</td><td>1</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>37</td><td colspan="4">Apply the DSD Power-up Sequence in Ex. 5-6. Note that in Step 1 of Ex. 5-6, use HH = 7F for DoP over XSP interface.</td></tr><tr><td>38</td><td colspan="4">Enable ASP</td></tr><tr><td rowspan="3">39</td><td rowspan="3">Set ASP sample rate</td><td>Serial Port Sample Rate. 0x1000B</td><td>0x01</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td></td></tr><tr><td>ASP_SPRATE</td><td>0001</td><td>Set sample rate to 44.1 kHz</td></tr><tr><td>40</td><td>Set ASP sample bit size</td><td>Serial Port Sample Bit Size. 0x1000C</td><td>0x04</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>XSP_SPSIZE</td><td>01</td><td></td></tr><tr><td></td><td></td><td>ASP_SPSIZE</td><td>00</td><td>ASP sample bit size set to 32 bits</td></tr><tr><td>41</td><td>Set ASP Numerator</td><td>ASP Numerator 1. 0x40010</td><td>0x01</td><td></td></tr><tr><td></td><td></td><td>ASP_N_LSB</td><td>0x01</td><td>LSB of ASP sample rate fractional divide numerator</td></tr><tr><td></td><td></td><td>ASP Numerator 2. 0x40011</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_N_MSB</td><td>0x00</td><td>MSB of ASP sample rate fractional divide numerator</td></tr><tr><td>42</td><td>Set ASP Denominator</td><td>ASP Denominator 1. 0x40012</td><td>0x08</td><td></td></tr><tr><td></td><td></td><td>ASP_M_LSB</td><td>0x08</td><td>LSB of ASP sample rate fractional divide numerator</td></tr><tr><td></td><td></td><td>ASP Denominator 2. 0x40013</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_M_MSB</td><td>0x00</td><td>MSB of ASP sample rate fractional divide numerator</td></tr><tr><td>43</td><td>Set ASP LRCK high Time</td><td>ASP LRCK High Time 1. 0x40014</td><td>0x1F</td><td></td></tr><tr><td></td><td></td><td>ASP_LCHI_LSB</td><td>0x1F</td><td>LSB of ASP LRCK high time duration</td></tr><tr><td></td><td></td><td>ASP LRCK High Time 2. 0x40015</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_LCHI_MSB</td><td>0x00</td><td>MSB of ASP LRCK high time duration</td></tr><tr><td>44</td><td>Set ASP LRCK period</td><td>ASP LRCK Period 1. 0x40016</td><td>0x3F</td><td></td></tr><tr><td></td><td></td><td>ASP_LCPR_LSB</td><td>0x3F</td><td>LSB of ASP LRCK period</td></tr><tr><td></td><td></td><td>ASP LRCK Period 2. 0x40017</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_LCPR_MSB</td><td>0x00</td><td>MSB of ASP LRCK period</td></tr><tr><td>45</td><td>Configure ASP Clock</td><td>ASP Clock Configuration. 0x40018</td><td>0x1C</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td></td></tr><tr><td></td><td></td><td>ASP_M/SB</td><td>1</td><td>Set ASP port to be Master</td></tr><tr><td></td><td></td><td>ASP_SCPOL_OUT</td><td>1</td><td>Set output SCLK polarity</td></tr><tr><td></td><td></td><td>ASP_SCPOL_IN</td><td>1</td><td>Input SCLK polarity is don't care</td></tr><tr><td></td><td></td><td>ASP_LCPOL_OUT</td><td>0</td><td>Set Output LRCLK polarity</td></tr><tr><td></td><td></td><td>ASP_LCPOL_IN</td><td>0</td><td>Input LRCLK polarity is don't care</td></tr><tr><td>46</td><td>Configure ASP Frame</td><td>ASP Frame Configuration. 0x40019</td><td>0x0A</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>000</td><td>Configure ASP port to accept I2S input</td></tr><tr><td></td><td></td><td>ASP_STP</td><td>0</td><td></td></tr><tr><td></td><td></td><td>ASP_5050</td><td>1</td><td></td></tr><tr><td></td><td></td><td>ASP_FSD</td><td>010</td><td></td></tr><tr><td>47</td><td>Set ASP Channel Location</td><td>ASP Channel 1 Location. 0x50000</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH1</td><td>0x00</td><td>ASP Channel 1 starts on SCLK0</td></tr><tr><td></td><td></td><td>ASP Channel 2 Location. 0x50001</td><td>0x00</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH2</td><td>0x00</td><td>ASP Channel 2 starts on SCLK0</td></tr><tr><td>48</td><td>Set ASP Channel Size and Enable</td><td>ASP Channel 1 Size and Enable. 0x5000A</td><td>0x07</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH1_AP</td><td>0</td><td>ASP Channel 1 Active Phase</td></tr><tr><td></td><td></td><td>ASP_RX_CH1_EN</td><td>1</td><td>ASP Channel 1 Enable</td></tr><tr><td></td><td></td><td>ASP_RX_CH1_RES</td><td>11</td><td>ASP Channel 1 Size is 32 bits</td></tr><tr><td></td><td></td><td>ASP Channel 2 Size and Enable. 0x5000B</td><td>0x0F</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0000</td><td></td></tr><tr><td></td><td></td><td>ASP_RX_CH2_AP</td><td>1</td><td>ASP Channel 2 Active Phase</td></tr><tr><td></td><td></td><td>ASP_RX_CH2_EN</td><td>1</td><td>ASP Channel 2 Enable</td></tr><tr><td></td><td></td><td>ASP_RX_CH2_RES</td><td>11</td><td>ASP Channel 2 Size is 32 bits</td></tr><tr><td>49</td><td>Setup PCM</td><td></td><td></td><td></td></tr><tr><td>50</td><td>Configure PCM Filter</td><td>PCM Filter Option. 0x90000</td><td>0x02</td><td></td></tr><tr><td></td><td></td><td>FILTER_SLOW_FASTB</td><td>0</td><td></td></tr><tr><td></td><td></td><td>PHCOMP_LOWLATB</td><td>0</td><td></td></tr><tr><td></td><td></td><td>NOS</td><td>0</td><td></td></tr><tr><td></td><td></td><td>Reserved</td><td>0.0</td><td></td></tr><tr><td></td><td></td><td>PCM_WBF_EN</td><td>0</td><td></td></tr><tr><td></td><td></td><td>HIGH_PASS</td><td>1</td><td>High Pass Filter is selected</td></tr><tr><td></td><td></td><td>DEEMP_ON</td><td>0</td><td></td></tr><tr><td>51</td><td>Set Volume for Channel B</td><td>PCM Volume B. 0x90001</td><td>0x0C</td><td></td></tr><tr><td></td><td></td><td>PCM_volume_B</td><td>0x0C</td><td>Set volume to -6 dB</td></tr><tr><td>52</td><td>Set Volume for Channel A</td><td>PCM Volume A. 0x90002</td><td>0x0C</td><td></td></tr><tr><td></td><td></td><td>PCM_volume_A</td><td>0x0C</td><td>Set volume to -6 dB</td></tr><tr><td rowspan="14">53</td><td rowspan="14">Configure PCM Path Signal Control</td><td>PCM Path Signal Control 1. 0x90003</td><td>0xCC</td><td></td></tr><tr><td>PCM_RAMP_DOWN</td><td>1</td><td>Soft ramp down of volume on filter change</td></tr><tr><td>PCM_VOL_BEQA</td><td>1</td><td>Volume setting on both channels controlled by PCMVolumes_A</td></tr><tr><td>PCM_SZC</td><td>10</td><td>Enable soft ramp</td></tr><tr><td>PCM_AMUTE</td><td>1</td><td>Mute after reception of 8192 samples of 0 or -1.</td></tr><tr><td>PCM_AMUTEBEQA</td><td>1</td><td>Mute only when AMUTE condition is detected on both channels</td></tr><tr><td>PCM_MUTE_A</td><td>0</td><td>Function is disabled</td></tr><tr><td>PCM_MUTE_B</td><td>0</td><td>Function is disabled</td></tr><tr><td>PCM Path Signal Control 2. 0x90004</td><td>0x00</td><td></td></tr><tr><td>Reserved</td><td>0000</td><td>Disable all functions in this register</td></tr><tr><td>PCM_INV_A</td><td>0</td><td></td></tr><tr><td>PCM_INV_B</td><td>0</td><td></td></tr><tr><td>PCM_SWAPChan</td><td>0</td><td></td></tr><tr><td>PCM_copyChan</td><td>0</td><td></td></tr><tr><td>54</td><td>Read interrupt status 2 register</td><td>Interrupt Status 2. 0xF0001</td><td></td><td>Clear sticky bits</td></tr><tr><td rowspan="7">55</td><td rowspan="7">Enable ASP Interrupts</td><td>Interrupt Mask 2. 0xF0011</td><td>0x07</td><td></td></tr><tr><td>ASP_OVFL_INT_MASK</td><td>0</td><td>Enable ASP_OVFL interrupt</td></tr><tr><td>ASP_ERR_RINT_MASK</td><td>0</td><td>Enable ASP_ERR interrupt</td></tr><tr><td>ASP_LATE_INT_MASK</td><td>0</td><td>Enable ASP_LATE interrupt</td></tr><tr><td>ASP_EARLY_INT_MASK</td><td>0</td><td>Enable ASP_EARLY interrupt</td></tr><tr><td>ASP_NOLRCK_INT_MASK</td><td>0</td><td>Enable ASP_NOLRCK interrupt</td></tr><tr><td>Reserved</td><td>111</td><td></td></tr><tr><td rowspan="4">56</td><td rowspan="4">Enable ASP Clocks</td><td>Pad Interface Configuration. 0x1000D</td><td>0x00</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td></td></tr><tr><td>XSP_3ST</td><td>0</td><td>Enable ASP serial clocks</td></tr><tr><td>XSP_3ST</td><td>0</td><td></td></tr><tr><td rowspan="9">57</td><td rowspan="9">Enable ASP</td><td>Power Down Control. 0x20000</td><td>0x24</td><td></td></tr><tr><td>PDN_XSP</td><td>0</td><td></td></tr><tr><td>PDN.asp</td><td>0</td><td>Enable ASP</td></tr><tr><td>PDN_DSDIF</td><td>1</td><td></td></tr><tr><td>PDN_HP</td><td>0</td><td></td></tr><tr><td>PDN_XTAL</td><td>0</td><td></td></tr><tr><td>PDN_PLL</td><td>1</td><td></td></tr><tr><td>PDN_CLKOUT</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>0</td><td></td></tr><tr><td>58</td><td>Enable PCM/DoP mix</td><td></td><td></td><td></td></tr><tr><td rowspan="2">59</td><td rowspan="2">Configure DSD Volume</td><td>DSD Volume A. 0x70001</td><td>0x0C</td><td></td></tr><tr><td>DSD.Volume_A</td><td>0x0C</td><td>Channel A volume set to 0 dB</td></tr><tr><td rowspan="4">60</td><td rowspan="4">Prepare for PCM/DoP Mix operation</td><td>DSD and PCM Mixing Control. 0x70005</td><td>0x02</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td>Enable PCM playback path for DoP Mixing</td></tr><tr><td>MIX_PCMP_PREP</td><td>1</td><td></td></tr><tr><td>MIX_PCMP_DSD</td><td>0</td><td></td></tr><tr><td>61</td><td>Wait for 6 ms</td><td></td><td></td><td></td></tr><tr><td rowspan="4">62</td><td rowspan="4">Enable PCM/DoP mix</td><td>DSD and PCM Mixing Control. 0x70005</td><td>0x03</td><td></td></tr><tr><td>Reserved</td><td>0000 00</td><td>Enable PCM/DoP Mixing</td></tr><tr><td>MIX_PCMP_PREP</td><td>1</td><td></td></tr><tr><td>MIX_PCMP_DSD</td><td>1</td><td></td></tr></table>

# 5.14 Headphone Load Measurement

The CS43131 can be configured to measure the impedance of headphone load. Please refer to Section 4.5.2 for a description of headphone load detection. The following subsections describe the steps needed to measure DC impedance or both AC/DC impedance of the headphone. 

# 5.14.1 Measuring Only DC Impedance

Fig. 5-1 shows and Ex. 5-19 describes the steps necessary for measuring DC impedance with the following assumptions: 

• The CS43131 is already powered up and out of reset. 

• MCLK_INT is 22.5792 or 24.576 MHz sourced from MCLK/XTAL or PLL (MCLK_SRC_SEL $= 0 0$ or 01). 

• HP_IN_EN $= 0$ and HPLOAD_EN $= 0$ . 

• A headphone is already plugged in and HPDETECT_PLUG_INT $= 1$ 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/b451dc385bef09c0892ce044e08005b1ebbd9fefae520114e8178aa74c4cbcfa.jpg)



Figure 5-1. DC Impedance Measurement Flowchart


Ex. 5-19 demonstrates measuring DC impedance for both channels of the CS43131. 


Example 5-19. Sequence for DC Impedance Measurement


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td colspan="4">Read Interrupt Status 4 register (0xF0003) to clear sticky bits.</td></tr><tr><td rowspan="9">2</td><td rowspan="9">Enable HP Load Interrupts</td><td>Interrupt Mask 4. 0xF0013</td><td>0x00</td><td></td></tr><tr><td>HPLOAD_NO_DC_INT_MASK</td><td>0</td><td>Enable HPLOAD_NO_DC interrupt</td></tr><tr><td>HPLOAD_UNPLUG_INT_MASK</td><td>0</td><td>Enable HPLOAD_UNPLUG interrupt</td></tr><tr><td>HPLOAD_HPON_INT_MASK</td><td>0</td><td>Enable HPLOAD_HPON interrupt</td></tr><tr><td>HPLOAD_OOR_INT_MASK</td><td>0</td><td>Enable HPLOAD_OOR interrupt</td></tr><tr><td>HPLOAD_AC_DONE_INT_MASK</td><td>0</td><td>Enable HPLOAD_AC_DONE interrupt</td></tr><tr><td>HPLOAD_DC_DONE_INT_MASK</td><td>0</td><td>Enable HPLOAD_DC_DONE interrupt</td></tr><tr><td>HPLOAD_OFF_INT_MASK</td><td>0</td><td>Enable HPLOAD_OFF interrupt</td></tr><tr><td>HPLOAD_ON_INT_MASK</td><td>0</td><td>Enable HPLOAD_ON interrupt</td></tr><tr><td rowspan="7">3</td><td rowspan="7">Select Channel A</td><td>HP Load 1. 0xE0000</td><td>0x00</td><td></td></tr><tr><td>HPLOAD_EN</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>0</td><td>HPOUTA selected</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_AC_START</td><td>0</td><td></td></tr><tr><td>HPLOAD_DC_START</td><td>0</td><td></td></tr><tr><td rowspan="7">4</td><td rowspan="7">Enable impedance subsystem</td><td>HP Load 1. 0xE0000</td><td>0x80</td><td></td></tr><tr><td>HPLOAD_EN</td><td>1</td><td>Enable impedance subsystem</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_AC_START</td><td>0</td><td></td></tr><tr><td>HPLOAD_DC_START</td><td>1</td><td>Start DC impedance measurement</td></tr><tr><td>5</td><td colspan="4">Wait for interrupt. Check if HPLOAD_ON_INT = 1 in Interrupt Status 4 register (0xF0003)</td></tr><tr><td rowspan="7">6</td><td rowspan="7">Start DC impedance measurement</td><td>HP Load 1. 0xE0000</td><td>0x81</td><td></td></tr><tr><td>HPLOAD_EN</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_AC_START</td><td>0</td><td></td></tr><tr><td>HPLOAD_DC_START</td><td>1</td><td></td></tr><tr><td>7</td><td colspan="4">Wait for interrupt. Read Interrupt Status 4 register (0xF0003). If HPLOAD_UNPLUG_INT = 1, go to the last step as an error has occurred. Otherwise, if HPLOAD_DC_DONE_INT = 1, go to the next step.</td></tr><tr><td>8</td><td colspan="4">DC impedance values are available in HP DC Load Status 0 (0xE000D) and HP DC Load Status 1 (0xE000E) registers.</td></tr><tr><td rowspan="7">9</td><td rowspan="7">Turn off impedance measurement subsystem</td><td>HP Load 1. 0xE0000</td><td>0x00</td><td></td></tr><tr><td>HPLOAD_EN</td><td>0</td><td>Disable impedance measurement</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_AC_START</td><td>0</td><td></td></tr><tr><td>HPLOAD_DC_START</td><td>0</td><td>Stop DC impedance measurement</td></tr><tr><td>10</td><td colspan="4">Wait for interrupt. Read Interrupt Status 4 register (0xF0003). Check for HPLOAD_OFF_INT = 1.</td></tr><tr><td rowspan="7">11</td><td rowspan="7">Select Channel B</td><td>HP Load 1. 0xE0000</td><td>0x10</td><td></td></tr><tr><td>HPLOAD_EN</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>1</td><td>HPOUTB selected</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_AC_START</td><td>0</td><td></td></tr><tr><td>HPLOAD_DC_START</td><td>0</td><td></td></tr><tr><td rowspan="7">12</td><td rowspan="7">Enable impedance subsystem</td><td>HP Load 1. 0xE0000</td><td>0x90</td><td></td></tr><tr><td>HPLOAD_EN</td><td>1</td><td>Enable impedance subsystem</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>1</td><td>HPOUTB selected</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_AC_START</td><td>0</td><td></td></tr><tr><td>HPLOAD_DC_START</td><td>0</td><td></td></tr><tr><td>13</td><td colspan="4">Wait for interrupt. Check if HPLOAD_ON_INT = 1 in Interrupt Status 4 register (0xF0003)</td></tr><tr><td rowspan="7">14</td><td rowspan="7">Start DC impedance measurement</td><td>HP Load 1. 0xE0000</td><td>0x91</td><td></td></tr><tr><td>HPLOAD_EN</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>1</td><td>HPOUTB selected</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_AC_START</td><td>0</td><td></td></tr><tr><td>HPLOAD_DC_START</td><td>1</td><td>Start DC impedance measurement</td></tr><tr><td>15</td><td colspan="4">Wait for interrupt. Read Interrupt Status 4 register (0xF0003). If HPLOAD_UNPLUG_INT = 1, go to the last step as an error has occurred. Otherwise, if HPLOAD_DC_DONE_INT = 1, go to the next step.</td></tr><tr><td>16</td><td colspan="4">DC impedance values are available in HP DC Load Status 0 (0xE000D) and HP DC Load Status 1 (0xE000E) registers.</td></tr><tr><td rowspan="7">17</td><td rowspan="7">Turn off impedance measurement subsystem</td><td>HP Load 1.0xE0000</td><td>0x00</td><td></td></tr><tr><td>HPLOAD_EN</td><td>0</td><td>Disable impedance measurement subsystem</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_AC_START</td><td>0</td><td></td></tr><tr><td>HPLOAD_DC_START</td><td>0</td><td></td></tr><tr><td>18</td><td colspan="4">Wait for interrupt. Check if HPLOAD_OFF_INT = 1 in Interrupt Status 4 register (0xF0003).</td></tr><tr><td>19</td><td>Disable HP Load Interrupts</td><td>Interrupt Mask 4.0xF0013</td><td>0xFF</td><td></td></tr></table>

# 5.14.2 Measuring AC and DC Impedance

Fig. 5-2 shows and Ex. 5-20 describes the steps necessary to measure AC/DC impedance with the following assumptions: 

• The CS43131 is already powered up and out of reset. 

• MCLK_INT is 22.5792 or 24.576 MHz sourced from MCLK/XTAL or PLL (MCLK_SRC_SEL $= 0 0$ or 01). 

• HP_IN_EN $= 0$ and HPLOAD_EN $= 0$ . 

• A headphone is already plugged in and HPDETECT_PLUG_INT $= 1$ 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/062417d45889d7dc16b1e76db6188b7779b177c5aaf3cc5a2a04ef8a127982fc.jpg)



Figure 5-2. AC and DC Impedance Measurement Flowchart


Ex. 5-20 demonstrates measuring both AC and DC impedance for both channels of the CS43131. 


Example 5-20. AC and DC Impedance Measurement


<table><tr><td>STEP</td><td>TASK</td><td>REGISTER/BIT FIELDS</td><td>VALUE</td><td>DESCRIPTION</td></tr><tr><td>1</td><td colspan="4">Read Interrupt Status 4 register (0xF0003) to clear sticky bits.</td></tr><tr><td rowspan="9">2</td><td rowspan="9">Enable HP Load Interrupts</td><td>Interrupt Mask 4. 0xF0013</td><td>0x00</td><td></td></tr><tr><td>HPLOAD_NO_DC_INT_MASK</td><td>0</td><td>Enable HPLOAD_NO_DC interrupt</td></tr><tr><td>HPLOAD_UNPLUG_INT_MASK</td><td>0</td><td>Enable HPLOAD_UNPLUG interrupt</td></tr><tr><td>HPLOAD_HPON_INT_MASK</td><td>0</td><td>Enable HPLOAD_HPON interrupt</td></tr><tr><td>HPLOAD'_OOR_INT_MASK</td><td>0</td><td>Enable HPLOAD'_OOR interrupt</td></tr><tr><td>HPLOAD ACPI_DONE_INT_MASK</td><td>0</td><td>Enable HPLOAD ACPI_DONE interrupt</td></tr><tr><td>HPLOAD_DC_DONE_INT_MASK</td><td>0</td><td>Enable HPLOAD_DC_DONE interrupt</td></tr><tr><td>HPLOAD_OFF_INT_MASK</td><td>0</td><td>Enable HPLOAD_OFF interrupt</td></tr><tr><td>HPLOAD_ON_INT_MASK</td><td>0</td><td>Enable HPLOAD_ON interrupt</td></tr><tr><td rowspan="7">3</td><td rowspan="7">Select Channel A</td><td>HP Load 1. 0xE0000</td><td>0x00</td><td></td></tr><tr><td>HPLOAD_EN</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>0</td><td>HPOUTA selected</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD ACPI_START</td><td>0</td><td></td></tr><tr><td>HPLOAD_DC_START</td><td>0</td><td></td></tr><tr><td rowspan="7">4</td><td rowspan="7">Enable impedance subsystem</td><td>HP Load 1. 0xE0000</td><td>0x80</td><td></td></tr><tr><td>HPLOAD_EN</td><td>1</td><td>Enable impedance subsystem</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD ACPI_START</td><td>0</td><td></td></tr><tr><td>HPLOAD_DC_START</td><td>0</td><td></td></tr><tr><td>5</td><td colspan="4">Wait for interrupt. Check if HPLOAD_ON_INT = 1 in Interrupt Status 4 register (0xF0003)</td></tr><tr><td rowspan="7">6</td><td rowspan="7">Start DC impedance measurement</td><td>HP Load 1. 0xE0000</td><td>0x81</td><td></td></tr><tr><td>HPLOAD_EN</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD ACPI_START</td><td>0</td><td></td></tr><tr><td>HPLOAD_DC_START</td><td>1</td><td>Start DC impedance measurement</td></tr><tr><td>7</td><td colspan="4">Wait for interrupt. Read Interrupt Status 4 register (0xF0003). If HPLOAD_UNPLUG_INT = 1, go to the last step as an error has occurred. If HPLOAD_OOR_INT = 1, go to the last step as an error has occurred. Otherwise, if HPLOAD_DC_DONE_INT = 1, go to the next step.</td></tr><tr><td>8</td><td colspan="4">DC impedance values are available in HP DC Load Status 0 (0xE000D) and HP DC Load Status 1 (0xE000E) registers.</td></tr><tr><td rowspan="4">9</td><td rowspan="4">Set HP load measurement frequency to desired frequency. Assuming 1 kHz.</td><td>HP Load Measurement 1. 0xE0003</td><td>0xA8</td><td></td></tr><tr><td>HPLOAD_MEAS_FREQ_LSB</td><td>0xA8</td><td>Set measurement frequency = 1 kHz</td></tr><tr><td>HP Load Measurement 2. 0xE0004</td><td>0x00</td><td></td></tr><tr><td>HPLOAD_MEAS_FREQ_MSB</td><td>0x00</td><td>MSB of load measurement frequency</td></tr><tr><td rowspan="7">10</td><td rowspan="7">Start AC impedance measurement</td><td>HP Load 1. 0xE0000</td><td>0x82</td><td></td></tr><tr><td>HPLOAD_EN</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>0</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD ACPI_START</td><td>1</td><td>Start AC impedance measurement</td></tr><tr><td>HPLOAD_DC_START</td><td>0</td><td></td></tr><tr><td>11</td><td colspan="4">Wait for interrupt. Read Interrupt Status 4 register (0xF0003). If HPLOAD_UNPLUG_INT = 1, go to the last step as an error has occurred. If HPLOAD ACPI_DONE_INT = 1, go to the next step.</td></tr><tr><td>12</td><td colspan="4">AC impedance values are available in HP AC Load Status 0 (0xE0010) and HP AC Load Status 1 (0xE0011) registers.</td></tr><tr><td>13</td><td>Stop AC impedance measurement.</td><td>HP Load 1. 0xE0000</td><td>0x80</td><td></td></tr><tr><td>14</td><td colspan="4">If another frequency point is desired, go back to step 9. Otherwise continue.</td></tr><tr><td>15</td><td>Disable impedance measurement subsystem and select channel B</td><td>HP Load 1. 0xE0000</td><td>0x10</td><td></td></tr><tr><td>16</td><td colspan="4">Wait for interrupt. Read Interrupt Status 4 register (0xF0003). Check for HPLOAD_OFF_INT = 1. If Channel B measurement is desired, continue to the next step; otherwise go to step 30 to end the impedance measurement.</td></tr><tr><td rowspan="7">17</td><td rowspan="7">Enable impedance subsystem</td><td>HP Load 1. 0xE0000</td><td>0x90</td><td></td></tr><tr><td>HPLOAD_EN</td><td>1</td><td>Enable impedance subsystem</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>1</td><td>HPOUTB selected</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD ACPI_START</td><td>0</td><td></td></tr><tr><td>HPLOAD_DC_START</td><td>0</td><td></td></tr><tr><td>18</td><td colspan="4">Wait for interrupt. Check if HPLOAD_ON_INT = 1 in Interrupt Status 4 register (0xF0003)</td></tr><tr><td rowspan="7">19</td><td rowspan="7">Start DC impedance measurement</td><td>HP Load 1. 0xE0000</td><td>0x91</td><td></td></tr><tr><td>HPLOAD_EN</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>1</td><td>HPOUTB selected</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD ACPI_START</td><td>0</td><td></td></tr><tr><td>HPLOAD ACPI_START</td><td>1</td><td>Start DC impedance measurement</td></tr><tr><td>20</td><td colspan="4">Wait for interrupt. Read Interrupt Status 4 register (0xF0003). If HPLOAD_UNPLUG_INT = 1, go to the last step as an error has occurred. If HPLOAD ACPI_INT = 1, go to the last step as an error has occurred. Otherwise, if HPLOAD ACPI_DONE_INT = 1, go to the next step.</td></tr><tr><td>21</td><td colspan="4">DC impedance values are available in HP DC Load Status 0 (0xE000D) and HP DC Load Status 1 (0xE000E) registers.</td></tr><tr><td rowspan="4">22</td><td rowspan="4">Set HP load measurement frequency to desired frequency. Assuming 1 kHz.</td><td>HP Load Measurement 1. 0xE0003</td><td>0xA8</td><td></td></tr><tr><td>HPLOAD_MEAS_FREQ_LSB</td><td>0xA8</td><td>Set measurement frequency = 1 kHz</td></tr><tr><td>HP Load Measurement 2. 0xE0004</td><td>0x00</td><td></td></tr><tr><td>HPLOAD_MEAS_FREQ_MSB</td><td>0x00</td><td>MSB of load measurement frequency</td></tr><tr><td rowspan="7">23</td><td rowspan="7">Start AC impedance measurement</td><td>HP Load 1. 0xE0000</td><td>0x92</td><td></td></tr><tr><td>HPLOAD_EN</td><td>1</td><td></td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD_CHN_SEL</td><td>1</td><td>HPOUTB selected</td></tr><tr><td>Reserved</td><td>00</td><td></td></tr><tr><td>HPLOAD ACPI_START</td><td>1</td><td>Start AC impedance measurement</td></tr><tr><td>HPLOAD ACPI_START</td><td>0</td><td></td></tr><tr><td>24</td><td colspan="4">Wait for interrupt. Read Interrupt Status 4 register (0xF0003). If HPLOAD_UNPLUG_INT = 1, go to the last step as an error has occurred. Otherwise, if HPLOAD ACPI_DONE_INT = 1, go to the next step.</td></tr><tr><td>25</td><td colspan="4">AC impedance values are available in HP AC Load Status 0 (0xE0010) and HP AC Load Status 1 (0xE0011) registers.</td></tr><tr><td>26</td><td>Stop AC impedance measurement.</td><td>HP Load 1. 0xE0000</td><td>0x90</td><td></td></tr><tr><td>27</td><td colspan="4">If another frequency point is desired go back to step 22. Otherwise continue.</td></tr><tr><td>28</td><td>Disable impedance measurement subsystem and select channel B</td><td>HP Load 1. 0xE0000</td><td>0x00</td><td></td></tr><tr><td>29</td><td colspan="4">Wait for interrupt. Check if HPLOAD_OFF_INT = 1 in Interrupt Status 4 register (0xF0003).</td></tr><tr><td>30</td><td>Disable HP Load Interrupts</td><td>Interrupt Mask 4. 0xF0013</td><td>0xFF</td><td></td></tr></table>

# 6 Register Quick Reference

The registers for each CS43131 module are located at specific base addresses within the 24-bit register address space. The organization of this register space is summarized in Table 6-1. 


Table 6-1. Register Base Addresses


<table><tr><td>Base Address</td><td>Module</td><td>Reference</td></tr><tr><td>0x01 0000</td><td>Global Registers</td><td>Section 6.1</td></tr><tr><td>0x03 0000</td><td>PLL Registers</td><td>Section 6.2</td></tr><tr><td>0x04 0000</td><td>ASP and XSP Registers</td><td>Section 6.3</td></tr><tr><td>0x06 0000</td><td>DSD Registers</td><td>Section 6.4</td></tr><tr><td>0x08 0000</td><td>Headphone and PCM Registers</td><td>Section 6.5</td></tr><tr><td>0x0F 0000</td><td>Interrupt Status and Mask Registers</td><td>Section 6.6</td></tr></table>

Notes: Default values are shown below the bit field names. The default values in all reserved bits must be preserved. 

# 6.1 Global Registers

<table><tr><td>Address</td><td>Function</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x01 0000p. 113</td><td rowspan="2">Device ID A and B(Read Only)</td><td colspan="4">DEVIDA</td><td colspan="4">DEVIDB</td></tr><tr><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td></tr><tr><td rowspan="2">0x01 0001p. 113</td><td rowspan="2">Device ID C and D(Read Only)</td><td colspan="4">DEVIDC</td><td colspan="4">DEVIDD</td></tr><tr><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td><td>1</td><td>1</td></tr><tr><td rowspan="2">0x01 0002p. 113</td><td rowspan="2">Device ID E (Read Only)</td><td colspan="4">DEVIDE</td><td colspan="4">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x01 0004p. 113</td><td rowspan="2">Revision ID (Read Only)</td><td colspan="4">AREVID</td><td colspan="4">MTLREVID</td></tr><tr><td>x</td><td>x</td><td>x</td><td>x</td><td>x</td><td>x</td><td>x</td><td>x</td></tr><tr><td rowspan="2">0x01 0005p. 113</td><td rowspan="2">Subrevision ID (Read Only)</td><td colspan="8">SUBREVID</td></tr><tr><td>0</td><td>x</td><td>x</td><td>x</td><td>x</td><td>x</td><td>x</td><td>x</td></tr><tr><td rowspan="2">0x01 0006p. 114</td><td rowspan="2">System ClockingControl</td><td colspan="5">—</td><td>MCLK_INT</td><td colspan="2">MCLK_SRC_SEL</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x01 0007-0x01 000A</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x01 000Bp. 114</td><td rowspan="2">Serial Port SampleRate</td><td colspan="4">—</td><td colspan="4">ASP_SPRATE</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td></tr><tr><td rowspan="2">0x01 000Cp. 114</td><td rowspan="2">Serial Port Sample BitSize</td><td colspan="4">—</td><td colspan="2">XSP_SPSIZE</td><td colspan="2">ASP_SPSIZE</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td></tr><tr><td rowspan="2">0x01 000Dp. 114</td><td rowspan="2">Pad InterfaceConfiguration</td><td colspan="6">—</td><td>XSP_3ST</td><td>ASP_3ST</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td></tr><tr><td rowspan="2">0x01 000E-0x01 FFFF</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x02 0000p. 115</td><td>Power Down Control</td><td>PDN_XSP1</td><td>PDN ASAP1</td><td>PDN_DSDIF1</td><td>PDN_HP1</td><td>PDN_XTAL1</td><td>PDN_PLL1</td><td>PDN_CLKOUT1</td><td>—0</td></tr><tr><td rowspan="2">0x02 0001-0x02 0051</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x02 0052p. 115</td><td rowspan="2">Crystal Setting</td><td colspan="5">—</td><td colspan="3">XTAL_IBIAS</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x02 0053-0x03 0000</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

# 6.2 PLL Registers

<table><tr><td>Address</td><td>Function</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x03 0001p. 116</td><td rowspan="2">PLL Setting 1</td><td colspan="7">—</td><td>PLL_START</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x03 0002p. 116</td><td rowspan="2">PLL Setting 2</td><td colspan="8">PLL_DIV_FRAC_0</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x03 0003p. 116</td><td rowspan="2">PLL Setting 3</td><td colspan="8">PLL_DIV_FRAC_1</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x03 0004p. 116</td><td rowspan="2">PLL Setting 4</td><td colspan="8">PLL_DIV_FRAC_2</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x03 0005p. 116</td><td rowspan="2">PLL Setting 5</td><td colspan="8">PLL_DIV_INT</td></tr><tr><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x03 0006-0x03 0007</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x03 0008p. 117</td><td rowspan="2">PLL Setting 6</td><td colspan="8">PLL_OUT_DIV</td></tr><tr><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x03 0009</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x03 000Ap. 117</td><td rowspan="2">PLL Setting 7</td><td colspan="8">PLL_CAL_RATIO</td></tr><tr><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x03 000B-0x03 001A</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x03 001Bp. 117</td><td rowspan="2">PLL Setting 8</td><td colspan="4">—</td><td>—</td><td>—</td><td>PLL_MODE</td><td>—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td></tr><tr><td rowspan="2">0x03 001C-0x04 0001</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

# 6.3 ASP and XSP Registers

<table><tr><td>Address</td><td>Function</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x04 0002p. 117</td><td rowspan="2">PLL Setting 9</td><td colspan="6">—</td><td colspan="2">PLL_REF_PREDIV</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x04 0003</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0004p. 118</td><td rowspan="2">CLKOUT Control</td><td colspan="3">—</td><td colspan="3">CLKOUT_DIV</td><td colspan="2">CLKOUT_SEL</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0005-0x04 000F</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0010p. 118</td><td rowspan="2">ASP Numerator 1</td><td colspan="8">ASP_N_LSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td></tr><tr><td rowspan="2">0x04 0011p. 118</td><td rowspan="2">ASP Numerator 2</td><td colspan="8">ASP_N_MSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0012p. 118</td><td rowspan="2">ASP Denominator 1</td><td colspan="8">ASP_M_LSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0013p. 119</td><td rowspan="2">ASP Denominator 2</td><td colspan="8">ASP_M_MSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0014p. 119</td><td rowspan="2">ASP LRCK High Time1</td><td colspan="8">ASP_LCHI_LSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr><tr><td rowspan="2">0x04 0015p. 119</td><td rowspan="2">ASP LRCK High Time2</td><td colspan="8">ASP_LCHI_MSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0016p. 119</td><td rowspan="2">ASP LRCK Period 1</td><td colspan="8">ASP_LCPR_LSB</td></tr><tr><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr><tr><td rowspan="2">0x04 0017p. 119</td><td rowspan="2">ASP LRCK Period 2</td><td colspan="8">ASP_LCPR_MSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0018p. 120</td><td rowspan="2">ASP ClockConfiguration</td><td colspan="3">—</td><td>ASP_M/SB</td><td>ASP_SCPOL_OUT</td><td>ASP_SCPOL_IN</td><td>ASP_LCPOL_OUT</td><td>ASP_LCPOL_IN</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0019p. 120</td><td rowspan="2">ASP FrameConfiguration</td><td colspan="3">—</td><td>ASP_STP</td><td>ASP_5050</td><td colspan="3">ASP_FSD</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x04 001A-0x04 001F</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0020p. 120</td><td rowspan="2">XSP Numerator 1</td><td colspan="8">XSP_N_LSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td></tr><tr><td rowspan="2">0x04 0021p. 121</td><td rowspan="2">XSP Numerator 2</td><td colspan="8">XSP_N_MSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0022p. 121</td><td rowspan="2">XSP Denominator 1</td><td colspan="8">XSP_M_LSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x04 0023p. 121</td><td rowspan="2">XSP Denominator 2</td><td colspan="8">XSP_M_MSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0024p. 121</td><td rowspan="2">XSP LRCK High Time1</td><td colspan="8">XSP_LCHI_LSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr><tr><td rowspan="2">0x04 0025p. 121</td><td rowspan="2">XSP LRCK High Time2</td><td colspan="8">XSP_LCHI_MSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0026p. 122</td><td rowspan="2">XSP LRCK Period 1</td><td colspan="8">XSP_LCPR_LSB</td></tr><tr><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td></td></tr><tr><td rowspan="2">0x04 0027p. 122</td><td rowspan="2">XSP LRCK Period 2</td><td colspan="8">XSP_LCPR_MSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td></td></tr><tr><td rowspan="2">0x04 0028p. 122</td><td rowspan="2">XSP ClockConfiguration</td><td colspan="3">—</td><td>XSP_M/SB</td><td>XSP_SCPOL_OUT</td><td>XSP_SCPOL_IN</td><td>XSP_LCPOL_OUT</td><td>XSP_LCPOL_IN</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x04 0029p. 122</td><td rowspan="2">XSP FrameConfiguration</td><td colspan="3">—</td><td>XSP_STP</td><td>XSP_5050</td><td colspan="3">XSP_FSD</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td><td></td></tr><tr><td rowspan="2">0x04 002A-0x04 FFFF</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td></td></tr><tr><td rowspan="2">0x05 0000p. 123</td><td rowspan="2">ASP Channel 1Location</td><td colspan="8">ASP_RX_CH1</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td></td></tr><tr><td rowspan="2">0x05 0001p. 123</td><td rowspan="2">ASP Channel 2Location</td><td colspan="8">ASP_RX_CH2</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td></td></tr><tr><td rowspan="2">0x05 0002-0x05 0009</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td></td></tr><tr><td rowspan="2">0x05 000Ap. 123</td><td rowspan="2">ASP Channel 1 Sizeand Enable</td><td colspan="4">—</td><td>ASP_RXCH1AP</td><td>ASP_RXCH1EN</td><td colspan="2">ASP_RXCH1_RES</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x05 000Bp. 123</td><td rowspan="2">ASP Channel 2 Sizeand Enable</td><td colspan="4">—</td><td>ASP_RXCH2AP</td><td>ASP_RXCH2EN</td><td colspan="2">ASP_RXCH2_RES</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x05 000C-0x05 FFFF</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td></td></tr></table>

# 6.4 DSD Registers

<table><tr><td>Address</td><td>Function</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x06 0000p. 124</td><td rowspan="2">XSP Channel 1Location</td><td colspan="8">XSP_RX_CH1</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x06 0001p. 124</td><td rowspan="2">XSP Channel 2Location</td><td colspan="8">XSP_RX_CH2</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x06 0002-0x06 0009</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x06 000Ap. 124</td><td rowspan="2">XSP Channel 1 Size and Enable</td><td colspan="4">—</td><td>XSP_RXCH1_AP</td><td>XSP_RXCH1_EN</td><td colspan="2">XSP_RX_CH1_RES</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x06 000Bp. 124</td><td rowspan="2">XSP Channel 2 Size and Enable</td><td colspan="4">—</td><td>XSP_RXCH2_AP</td><td>XSP_RXCH2_EN</td><td colspan="2">XSP_RX_CH2_RES</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x06 000C-0x06 FFFF</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x07 0000p. 124</td><td rowspan="2">DSD Volume B</td><td colspan="8">DSDVolumes_B</td></tr><tr><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x07 0001p. 125</td><td rowspan="2">DSD Volume A</td><td colspan="8">DSDVolumes_A</td></tr><tr><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x07 0002p. 125</td><td rowspan="2">DSD Processor Path Signal Control 1</td><td>DSD_RAMP_UP</td><td>DSD_VOL_BEQA</td><td>DSD_SZC</td><td>—</td><td>DSD_AMUTE</td><td>DSD_AMUTE_BEQA</td><td>DSD_MUTE_A</td><td>DSD_MUTE_B</td></tr><tr><td>1</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x07 0003p. 125</td><td rowspan="2">DSD Interface Configuration</td><td colspan="3">—</td><td>—</td><td>—</td><td>DSD_M_SB</td><td>DSD_PM_EN</td><td>DSD_PM_SEL</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x07 0004p. 126</td><td rowspan="2">DSD Processor Path Signal Control 2</td><td>—</td><td colspan="2">DSD_PRC_SRC</td><td>DSD_EN</td><td colspan="2">DSD_SPEED</td><td>STA_DSD_DET</td><td>INV_DSD_DET</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x07 0005p. 126</td><td rowspan="2">DSD and PCM Mixing Control</td><td colspan="6">—</td><td>MIXPCM_PREP</td><td>MIXPCM_DSD</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x07 0006p. 126</td><td rowspan="2">DSD Processor Path Signal Control 3</td><td>DSD_ZERODB</td><td>DSD_HPF_EN</td><td>—</td><td>SIGCTL_DSDEQPCM</td><td>DSD_INV_A</td><td>DSD_INV_B</td><td>DSD_SWAPChan</td><td>DSDcopyChan</td></tr><tr><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x07 0007-0x07 FFFF</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>


6.5 Headphone and PCM Registers


<table><tr><td>Address</td><td>Function</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>0x08 0000p. 127</td><td>HP Output Control 1</td><td>HP_CLAMPA0</td><td>HP_CLAMPB0</td><td>OUT_FS1</td><td>1</td><td>HP_IN_EN0</td><td>HP_IN_LP0</td><td>—0</td><td>+1dB_EN0</td></tr><tr><td>0x09 0000p. 128</td><td>PCM Filter Option</td><td>FILTER SLOW_FASTB0</td><td>PHCOMP LOWLATB0</td><td>NOS0</td><td>—0</td><td>—0</td><td>PCM_WBF_EN0</td><td>HIGH_PASS1</td><td>DEEMP_ON0</td></tr><tr><td>0x09 0001p. 128</td><td>PCM Volume B</td><td>PCM_VOLUME_B0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0002p. 128</td><td>PCM Volume A</td><td>PCM_VOLUME_A0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0003p. 129</td><td>PCM Path Signal Control 1</td><td>PCM_RAMP_DOWN1</td><td>PCM_VOLBEQA</td><td>PCM_SZC1</td><td>0</td><td>PCM_AMUTE1</td><td>PCM_AMUTEBEQA0</td><td>PCM_MUTE_A0</td><td>PCM_MUTE_B0</td></tr><tr><td>0x09 0004p. 129</td><td>PCM Path Signal Control 2</td><td>—0</td><td>0</td><td>0</td><td>0</td><td>PCM_INV_A0</td><td>PCM_INV_B0</td><td>PCM_SWAP_CHAN0</td><td>PCMcopy_CHAN0</td></tr><tr><td>0x09 000A p. 130</td><td>Programmable Filter Control 1</td><td>SOS1_CTRL0</td><td>SOS2_CTRL0</td><td>SOS2_CTRL0</td><td>0</td><td>FOS_CTRL0</td><td>SOS3_ON0</td><td>—0</td><td>—0</td></tr><tr><td>0x09 000B p. 130</td><td>Programmable Filter Control 2</td><td>—0</td><td>0</td><td>0</td><td>0</td><td>SOS1 COEFF_CP0</td><td>SOS2 COEFF_CP0</td><td>FOS_COEFF_CP0</td><td>—0</td></tr><tr><td>0x09 000C p. 130</td><td>Programmable Filter Coefficients</td><td>SOS1_COEFF_B0LSBYTE0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 000D p. 130</td><td>Programmable Filter Coefficients</td><td>SOS1_COEFF_B0MSBYTE1</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 000E p. 130</td><td>Programmable Filter Coefficients</td><td>—0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>SOS1 COEFF_B0SIGN</td></tr><tr><td>0x09 000F p. 130</td><td>Programmable Filter Coefficients</td><td>SOS1_COEFF_B1LSBYTE0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0010 p. 130</td><td>Programmable Filter Coefficients</td><td>SOS1_COEFF_B1MSBYTE0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0011 p. 130</td><td>Programmable Filter Coefficients</td><td>—0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>SOS1 COEFF_B1SIGN</td></tr><tr><td>0x09 0012 p. 130</td><td>Programmable Filter Coefficients</td><td>SOS1_COEFF_B2LSBYTE0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0013 p. 130</td><td>Programmable Filter Coefficients</td><td>SOS1_COEFF_B2MSBYTE0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0014 p. 130</td><td>Programmable Filter Coefficients</td><td>—0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>SOS1 COEFF_B2SIGN</td></tr><tr><td>0x09 0015 p. 130</td><td>Programmable Filter Coefficients</td><td>SOS1_COEFF_A1LSBYTE0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0016 p. 130</td><td>Programmable Filter Coefficients</td><td>SOS1_COEFF_A1MSBYTE0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0017 p. 130</td><td>Programmable Filter Coefficients</td><td>—0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>SOS1 COEFF_A1SIGN</td></tr><tr><td>0x09 0018 p. 130</td><td>Programmable Filter Coefficients</td><td>SOS1_COEFF_A2LSBYTE0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0019 p. 130</td><td>Programmable Filter Coefficients</td><td>SOS1_COEFF_A2MSBYTE0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 001A p. 130</td><td>Programmable Filter Coefficients</td><td>—0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>SOS1 COEFF_A2SIGN</td></tr><tr><td>0x09 001B p. 130</td><td>Programmable Filter Coefficients</td><td>SOS2_COEFF_B0LSBYTE0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 001C p. 130</td><td>Programmable Filter Coefficients</td><td>SOS2_COEFF_B0MSBYTE1</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 001D</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="6">—</td><td>SOS2 COEFF_B0_SIGN</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 001E</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS2_COEFF_B1_LSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 001F</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS2_COEFF_B1_MSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0020</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="6">—</td><td>SOS2 COEFF_B1_SIGN</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0021</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS2_COEFF_B2_LSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0022</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS2_COEFF_B2_MSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0023</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="6">—</td><td>SOS2 COEFF_B2_SIGN</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0024</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS2_COEFF_A1_LSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0025</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS2_COEFF_A1_MSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0026</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="6">—</td><td>SOS2 COEFF_A1_SIGN</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0027</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS2_COEFF_A2_LSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0028</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS2_COEFF_A2_MSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0029</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="6">—</td><td>SOS2 COEFF_A2_SIGN</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 002A</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS3_COEFF_B0_LSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 002B</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS3_COEFF_B0_MSBYTE</td></tr><tr><td>p. 130</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 002C</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="6">—</td><td>SOS3 COEFF_B0_SIGN</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 002D</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS3_COEFF_B1_LSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 002E</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS3_COEFF_B1_MSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 002F</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="6">—</td><td>SOS3 COEFF_B1_SIGN</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0030</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS3_COEFF_B2_LSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0031</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS3_COEFF_B2_MSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0032</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="6">—</td><td>SOS3 COEFF_B2_SIGN</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0033</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS3_COEFF_A1_LSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0034</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="7">SOS3_COEFF_A1_MSBYTE</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x09 0035</td><td rowspan="2">Programmable Filter Coefficients</td><td></td><td colspan="6">—</td><td>SOS3 COEFF_A1_SIGN</td></tr><tr><td>p. 130</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x09 0036p. 130</td><td rowspan="2">Programmable Filter Coefficients</td><td colspan="8">SOS3_COEFF_A2_LSBYTE</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x09 0037p. 130</td><td rowspan="2">Programmable Filter Coefficients</td><td colspan="8">SOS3_COEFF_A2_MSBYTE</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x09 0038p. 130</td><td rowspan="2">Programmable Filter Coefficients</td><td colspan="7">—</td><td>SOS3 COEFF_A2_SIGN</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x09 0039p. 130</td><td rowspan="2">Programmable Filter Coefficients</td><td colspan="8">FOS_COEFF_B0_LSBYTE</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x09 003A p. 130</td><td rowspan="2">Programmable Filter Coefficients</td><td colspan="8">FOS_COEFF_B0_MSBYTE</td></tr><tr><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x09 003B p. 130</td><td rowspan="2">Programmable Filter Coefficients</td><td colspan="7">—</td><td>FOS_COEFF_B0_SIGN</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x09 003C p. 130</td><td rowspan="2">Programmable Filter Coefficients</td><td colspan="8">FOS_COEFF_B1_LSBYTE</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x09 003D p. 130</td><td rowspan="2">Programmable Filter Coefficients</td><td colspan="8">FOS_COEFF_B1_MSBYTE</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x09 003E p. 130</td><td rowspan="2">Programmable Filter Coefficients</td><td colspan="7">—</td><td>FOS_COEFF_B1_SIGN</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x09 003F p. 130</td><td rowspan="2">Programmable Filter Coefficients</td><td colspan="8">FOS_COEFF_A1_LSBYTE</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x09 0040 p. 130</td><td rowspan="2">Programmable Filter Coefficients</td><td colspan="8">FOS_COEFF_A1_MSBYTE</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x09 0041 p. 130</td><td rowspan="2">Programmable Filter Coefficients</td><td colspan="7">—</td><td>FOS_COEFF_A1_SIGN</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0B 0000 p. 131</td><td rowspan="2">Class H Control</td><td colspan="3">—</td><td colspan="3">ADPT_PWR</td><td>HV_EN</td><td>EXT_VCPFILT</td></tr><tr><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td></tr><tr><td rowspan="2">0x0D 0000 p. 131</td><td rowspan="2">HP Detect</td><td>HPDETECT_CTRL</td><td>HPDETECT_INV</td><td colspan="2">HPDETECT_RISE_DBC_TIME</td><td colspan="3">HPDETECT_FALL_DBC_TIME</td><td>—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0D 0001 p. 131</td><td rowspan="2">HP Status (Read Only)</td><td>—</td><td>HPDETECTPlug_DBC</td><td>HPDETECTUNPLUG_DBC</td><td colspan="5">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0D 0002-0x0D FFFF</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0E 0000 p. 132</td><td rowspan="2">HP Load 1</td><td>HPLOAD_EN</td><td>—</td><td>HPLOADCHN_SEL</td><td colspan="3">—</td><td>HPLOAD_AC_START</td><td>HPLOAD_DC_START</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0E 0001-0x0E 0002</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0E 0003 p. 132</td><td rowspan="2">HP Load Measurement1</td><td colspan="8">HPLOAD_MEAS_FREQ_LSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0E 0004 p. 132</td><td rowspan="2">HP Load Measurement2</td><td colspan="8">HPLOAD_MEAS_FREQ_MSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0E 0005-0x0E 000C</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0E 000D p. 133</td><td rowspan="2">HP DC Load Status 0(Read Only)</td><td colspan="8">RL_DC_STAT_0</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0E 000E p. 133</td><td rowspan="2">HP DC Load Status 1(Read Only)</td><td colspan="8">RL_DC_STAT_1</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0E 000F</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0E 0010 p. 133</td><td rowspan="2">HP AC Load Status 0(Read Only)</td><td colspan="8">RL_AC_STAT_0</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0E 0011 p. 133</td><td rowspan="2">HP AC Load Status 1(Read Only)</td><td colspan="8">RL_AC_STAT_1</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td rowspan="2">0x0E 0012-0x0E 0019</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x0E 001A</td><td rowspan="2">HP Load Status (Read Only)</td><td>HPLOAD_DC_ONCE</td><td>HPLOAD_BUSY</td><td colspan="2">—</td><td>HPLOAD_AC_DONE</td><td>HPLOAD_AC_BUSY</td><td>HPLOAD_DC_DONE</td><td>HPLOAD_DC_BUSY</td></tr><tr><td>p. 133</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x0E 001B-</td><td rowspan="2">Reserved</td><td colspan="8">—</td></tr><tr><td>0x0E FFFF</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>


6.6 Interrupt Status and Mask Registers


<table><tr><td>Address</td><td>Function</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>0x0F 0000</td><td rowspan="2">Interrupt Status 1(Read Only)</td><td>DAC OVFL_INT</td><td>HP DETECT_PLUG_INT</td><td>HP DETECT UNPLUG_INT</td><td>XTAL READY_INT</td><td>XTAL ERROR_INT</td><td>PLL READY_INT</td><td>PLL_ERROR_INT</td><td>PDN_DONE_INT</td></tr><tr><td>p. 134</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x0F 0001</td><td rowspan="2">Interrupt Status 2(Read Only)</td><td>ASP OVFL_INT</td><td>ASP_ERROR_INT</td><td>ASP LATE_INT</td><td>ASP EARLY_INT</td><td>ASP NOLCK_INT</td><td colspan="3">—</td></tr><tr><td>p. 134</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x0F 0002</td><td rowspan="2">Interrupt Status 3(Read Only)</td><td>XSP OVFL_INT</td><td>XSP_ERROR_INT</td><td>XSP LATE_INT</td><td>XSP EARLY_INT</td><td>XSP NOLCK_INT</td><td colspan="3">—</td></tr><tr><td>p. 135</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x0F 0003</td><td rowspan="2">Interrupt Status 4(Read Only)</td><td>HPLOAD_NO_DC_INT</td><td>HPLOAD_UNPLUG_INT</td><td>HPLOAD HPON_INT</td><td>HPLOAD OOR_INT</td><td>HPLOAD_AC_DONE_INT</td><td>HPLOAD_DC DONE_INT</td><td>HPLOAD_OFF_INT</td><td>HPLOAD_ON_INT</td></tr><tr><td>p. 135</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x0F 0004</td><td rowspan="2">Interrupt Status 5(Read Only)</td><td>DSD_STUCK_INT</td><td>DSD_INVALID_A_INT</td><td>DSD_INVALID_B_INT</td><td>DSD SILENCE_A_INT</td><td>DSD SILENCE_B_INT</td><td>DSD_RATE_ERROR_INT</td><td>DOP_MRK_DET_INT</td><td>DOP_ON_INT</td></tr><tr><td>p. 136</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x0F 0005-0x0F 000F</td><td>Reserved</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x0F 0010</td><td rowspan="2">Interrupt Mask 1</td><td>DAC OVFL_INT_MASK</td><td>HP DETECT_PLUG_INT_MASK</td><td>HP DETECT UNPLUG_INT_MASK</td><td>XTAL READY_INT_MASK</td><td>XTAL ERROR_INT_MASK</td><td>PLL READY_INT_MASK</td><td>PLL_ERROR_INT_MASK</td><td>PDN_DONE_INT_MASK</td></tr><tr><td>p. 136</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr><tr><td>0x0F 0011</td><td rowspan="2">Interrupt Mask 2</td><td>ASP OVFL_INT_MASK</td><td>ASP_ERROR_INT_MASK</td><td>ASP LATE_INT_MASK</td><td>ASP EARLY_INT_MASK</td><td>ASP NOLCK_INT_MASK</td><td colspan="3">—</td></tr><tr><td>p. 137</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x0F 0012</td><td rowspan="2">Interrupt Mask 3</td><td>XSP OVFL_INT_MASK</td><td>XSP_ERROR_INT_MASK</td><td>XSP LATE_INT_MASK</td><td>XSP EARLY_INT_MASK</td><td>XSP NOLCK_INT_MASK</td><td colspan="3">—</td></tr><tr><td>p. 137</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr><tr><td>0x0F 0013</td><td rowspan="2">Interrupt Mask 4</td><td>HPLOAD_NO_DC_INT_MASK</td><td>HPLOAD_UNPLUG_INT_MASK</td><td>HPLOAD HPON_INT_MASK</td><td>HPLOAD OOR_INT_MASK</td><td>HPLOAD AC_DONE_INT_MASK</td><td>HPLOAD_DC DONE_INT_MASK</td><td>HPLOAD_OFF_INT_MASK</td><td>HPLOAD_ON_INT_MASK</td></tr><tr><td>p. 138</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr><tr><td>0x0F 0014</td><td rowspan="2">Interrupt Mask 5</td><td>DSD_STUCK_INT_MASK</td><td>DSD_INVALID_A_INT_MASK</td><td>DSD_INVALID_B_INT_MASK</td><td>DSD SILENCE_A_INT_MASK</td><td>DSD SILENCE_B_INT_MASK</td><td>DSD RATE_ERROR_INT_MASK</td><td>DOP_MRK_DET_INT_MASK</td><td>DOP_ON_INT_MASK</td></tr><tr><td>p. 138</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr><tr><td>0x0F 0015-0x0F FFFF</td><td>Reserved</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr><tr><td>0x10 0000</td><td rowspan="2">ASP Master Mode</td><td colspan="2">—</td><td colspan="2">—</td><td colspan="2">SCLK1_SLEW_RATE</td><td colspan="2">—</td></tr><tr><td>p. 139</td><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td></tr><tr><td>0x10 0001</td><td rowspan="2">XSP Master Mode</td><td colspan="2">—</td><td colspan="2">—</td><td colspan="2">DSDCLK_SCLK2_SCLW_RATE</td><td colspan="2">—</td></tr><tr><td>p. 139</td><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td></tr></table>

# 7 Register Descriptions

All registers are read/write, except for the device’s ID, revision, and status registers, which are read only. The following tables describe bit assignments. The default state of each bit after a power-up sequence or reset is listed in each bit description. All reserved bits must maintain their default state. 

# 7.1 Global Registers


7.1.1 Device ID A and B



Address 0x10000


<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="4">DEVIDA</td><td colspan="4">DEVIDB</td></tr><tr><td>Default</td><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:4</td><td>DEVIDA</td><td>Part number first digit: 4</td></tr><tr><td>3:0</td><td>DEVIDB</td><td>Part number second digit: 3</td></tr></table>


7.1.2 Device ID C and D



Address 0x10001


<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="4">DEVIDC</td><td colspan="4">DEVIDD</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td><td>1</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:4</td><td>DEVIDC</td><td>Part number third digit: 1</td></tr><tr><td>3:0</td><td>DEVIDD</td><td>Part number fourth digit: 3</td></tr></table>


7.1.3 Device ID E



Address 0x10002


<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="4">DEVIDE</td><td colspan="4">—</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:4</td><td>DEVIDE</td><td>Part number fifth digit: 1</td></tr><tr><td>3:0</td><td>—</td><td>Reserved</td></tr></table>


7.1.4 Revision ID



Address 0x10004


<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="4">AREVID</td><td colspan="4">MTLREVID</td></tr><tr><td>Default</td><td>X</td><td>X</td><td>X</td><td>X</td><td>X</td><td>X</td><td>X</td><td>X</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:4</td><td>AREVID</td><td>Alpha revision. CS43131 alpha revision level. AREVID and MTLREVID from the complete device revision ID (e.g., A0, B2).</td></tr><tr><td>3:0</td><td>MTLREVID</td><td>Metal revision. CS43131 metal revision level. AREVID and MTLREVID from the complete device revision ID (e.g., A0, B2).</td></tr></table>


7.1.5 Subrevision ID



Address 0x10005


<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">SUBREVID</td></tr><tr><td>Default</td><td>0</td><td>x</td><td>x</td><td>x</td><td>x</td><td>x</td><td>x</td><td>x</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>SUBREVID</td><td>CS43131 subrevision level.</td></tr></table>


7.1.6 System Clocking Control



Address 0x10006


<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td></td><td colspan="4">—</td><td>MCLK_INT</td><td colspan="2">MCLK_SRC_SEL</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:3</td><td>—</td><td>Reserved</td></tr><tr><td>2</td><td>MCLK_INT</td><td>The frequency of internal MCLK.
0 Internal MCLK is expected to be 24.576 MHz
1 (Default) Internal MCLK is expected to be 22.5792 MHz</td></tr><tr><td>1:0</td><td>MCLK_SRC_SEL</td><td>Select the source of internal MCLK.
00 Direct MCLK/XTAL Mode
01 PLL Mode
10 (Default) RCO Mode
11 Reserved</td></tr></table>


7.1.7 Serial Port Sample Rate



Address 0x1000B


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="3">—</td><td colspan="4">ASP_SPRATE</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:4</td><td>—</td><td>Reserved</td></tr><tr><td>3:0</td><td>ASP_SPRATE</td><td>ASP sample rate. This register must be programmed for both Master Mode and Slave Mode operation. If ASP_SPRATE = 384 kHz and the CS43131 operates in Master Mode, MCLK_INT is required to be 24.576 MHz. For all other rates, MCLK_INT can be either 22.5792 MHz or 24.576 MHz.0000 32 kHz0001 (Default) 44.1 kHz0010 48 kHz0011 88.2 kHz0100 96 kHz0101 176.4 kHz0110 192 kHz0111 352.8 kHz1000 384 kHz1001-1111 Reserved</td></tr></table>


7.1.8 Serial Port Sample Bit Size



Address 0x1000C


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>—</td><td></td><td></td><td></td><td colspan="2">XSP_SPSIZE</td><td colspan="2">ASP_SPSIZE</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:4</td><td>—</td><td>Reserved</td></tr><tr><td>3:2</td><td>XSP_SPSIZE</td><td>XSP sample bit size.
00 32 bits
01 (Default) 24 bits
10–11 Reserved</td></tr><tr><td>1:0</td><td>ASP_SPSIZE</td><td>ASP sample bit size.
00 32 bits
01 (Default) 24 bits
10 16 bits
11 8 bits</td></tr></table>


7.1.9 Pad Interface Configuration



Address 0x1000D


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="6">—</td><td>XSP_3ST</td><td>ASP_3ST</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:2</td><td>—</td><td>Reserved</td></tr><tr><td>1</td><td>XSP_3ST</td><td>Determines the state of the XSP clock drivers when in Master Mode. When in Slave Mode, the serial port clocks are inputs, whose function is not affected by this bit. Before setting an xSP_3ST bit, the associated serial port must be powered down and not powered up until the xSP_3ST bit is cleared.
0 When in Master Mode, serial port clocks are active.
1 (Default) When in Master Mode, serial port clocks are Hi-Z.</td></tr><tr><td>0</td><td>ASP_3ST</td><td>Determines the state of the ASP clock drivers when in Master Mode. When in Slave Mode, the serial port clock pins are inputs, whose function is not affected by this bit. Before setting an xSP_3ST bit, the associated serial port must be powered down and not powered up until the xSP_3ST bit is cleared.
0 When in Master Mode, serial port clocks are active.
1 (Default) When in Master Mode, serial port clocks are Hi-Z.</td></tr></table>


7.1.10 Power Down Control



Address 0x20000


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>PDN_XSP</td><td>PDN_ASPI</td><td>PDN_DSDIF</td><td>PDN_HP</td><td>PDN_XTAL</td><td>PDN_PLL</td><td>PDN_CLKOUT</td><td>—</td></tr><tr><td>Default</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>PDN_XSP</td><td>XSP input path power control. Configures XSP SDIN path power state.
0 Powered up.
1 (Default) Powered down.</td></tr><tr><td>6</td><td>PDN ASAP</td><td>ASP input path power control. Configures ASP SDIN path power state.
0 Powered up.
1 (Default) Powered down.</td></tr><tr><td>5</td><td>PDN_DSDIF</td><td>DSD interface power control. Sets the power state of the DSD interface block.
0 Powered up.
1 (Default) Powered down.</td></tr><tr><td>4</td><td>PDN_HP</td><td>Power down HPOUTx.
0 Powered up. The HP driver and DACx are powered up.
1 (Default) Powered down. The HP driver and DACx are powered down. When this bit is set, the audio outputs are soft ramped to mute.</td></tr><tr><td>3</td><td>PDN_XTAL</td><td>Power down crystal oscillator.
0 Powered up. The XTAL driver is powered up to start generating MCLK.
1 (Default) Powered down. The XTAL driver is powered down.</td></tr><tr><td>2</td><td>PDN_PLL</td><td>PLL output power control. Sets the power state of the PLL block.
0 Powered up.
1 (Default) Powered down. PLL block is powered down.</td></tr><tr><td>1</td><td>PDN_CLKOUT</td><td>CLKOUT output power control. Sets the power state of the CLOCKOUT output.
0 Powered up
1 (Default) Powered down. CLKOUT are driven low.</td></tr><tr><td>0</td><td>—</td><td>Reserved</td></tr></table>


7.1.11 Crystal Setting



Address 0x20052


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="4">—</td><td colspan="3">XTAL_IBIAS</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:3</td><td>—</td><td>Reserved</td></tr><tr><td>2:0</td><td>XTAL_IBIAS</td><td>Crystal bias current strength.010 15.0 μA100 (Default) 12.5 μA110 7.5 μAOthers Reserved</td></tr></table>

# 7.2 PLL Registers

# 7.2.1 PLL Setting 1


Address 0x30001


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td></td><td></td><td>—</td><td></td><td></td><td></td><td>PLL_START</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:1</td><td>—</td><td>Reserved</td></tr><tr><td>0</td><td>PLL_START</td><td>PLL start bit. Enable PLL output after it has been properly configured.
0 (Default) PLL is not started
1 PLL is started</td></tr></table>

# 7.2.2 PLL Setting 2


Address 0x30002


<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td rowspan="2">Default</td><td colspan="8">PLL_DIV_FRAC_0</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>PLL_DIV_FRAC_0</td><td>PLL fractional portion of divide ratio LSB. There are 3 bytes of PLL feedback divider fraction portion and this is LSB byte; e.g., 0xFF means (2-17 + 2-18 + ...+2-24). 0000 0000 (Default)</td></tr></table>

# 7.2.3 PLL Setting 3


Address 0x30003


<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td></td><td></td><td></td><td colspan="5">PLL_DIV_FRAC_1</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>PLL_DIV_FRAC_1</td><td>PLL fractional portion of divide ratio middle byte; e.g., 0xFF means (2-9 + 2-10 + ...+2-16).0000 0000 (Default)</td></tr></table>

# 7.2.4 PLL Setting 4


Address 0x30004


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">PLL_DIV_FRAC_2</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>PLL_DIV_FRAC_2</td><td>PLL fractional portion of divide ratio MSB; e.g., 0xFF means (2-1 + 2-2 + ...+2-8).0000 0000 (Default)</td></tr></table>

# 7.2.5 PLL Setting 5


Address 0x30005


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">PLL_DIV_INT</td></tr><tr><td>Default</td><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>PLL_DIV_INT</td><td>PLL integer portion of divide ratio. Integer portion of PLL feedback divider.
0100 0000 (Default)</td></tr></table>


7.2.6 PLL Setting 6


Address 0x30008 

<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="8">PLL_OUT_DIV</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>PLL_OUTDIV</td><td>Final PLL clock output divide value.0001 0000 (Default)</td></tr></table>


7.2.7 PLL Setting 7


Address 0x3000A 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">PLL_CAL_RATIO</td></tr><tr><td>Default</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>PLL_CAL_RATIO</td><td>PLL calibration ratio. See Section 4.7.2 for configuration details. Target value for PLL VCO calibration.
1000 0000 (Default)</td></tr></table>


7.2.8 PLL Setting 8


Address 0x3001B 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td></td><td>—</td><td></td><td></td><td></td><td>PLL_MODE</td><td>—</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td><td>1</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:2</td><td>—</td><td>Reserved</td></tr><tr><td>1</td><td>PLL_MODE</td><td>500/512 factor used in PLL frequency calculation equation, Eq. 4-1.
0 No bypass
1 (Default) Bypass</td></tr><tr><td>0</td><td>—</td><td>Reserved</td></tr></table>


7.2.9 PLL Setting 9


Address 0x40002 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="6">—</td><td colspan="2">PLL_REF_PREDIV</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:2</td><td>—</td><td>Reserved</td></tr><tr><td>1:0</td><td>PLL_REF_
PREDIV</td><td>PLL reference divide select.
00 Divide by 1
01 Divide by 2
10(Default) Divide by 4
11 Divide by 8</td></tr></table>

# 7.3 ASP and XSP Registers


7.3.1 CLKOUT Control



Address 0x40004


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="3">—</td><td colspan="3">CLKOUT_DIV</td><td colspan="2">CLKOUT_SEL</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:5</td><td>—</td><td>Reserved</td></tr><tr><td>4:2</td><td>CLKOUT_DIV</td><td>Divider setting on internal MCLK path to CLKOUT.000 (Default) Divide by 2001 Divide by 3010 Divide by 4011 Divide by 8100-111 Reserved</td></tr><tr><td>1:0</td><td>CLKOUT_SEL</td><td>Select the source of CLKOUT.00 (Default) XTAL/MCLK path01 PLL output path10-11 Reserved</td></tr></table>


7.3.2 ASP Numerator 1



Address 0x40010


<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="8">ASP_N_LSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>ASP_N_LSB</td><td>The value in this register cannot be changed while the serial port is powered up.ASP sample rate fractional divide numerator LSB. Along with ASP_M_MSB/LSB, selects the fractional divide value for setting the SCLK frequency.(Default) ASP_N = 1</td></tr></table>


7.3.3 ASP Numerator 2



Address 0x40011


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">ASP_N_MSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>ASP_N_MSB</td><td>The value in this register cannot be changed while the serial port is powered up.ASP sample rate fractional divide numerator MSB. Along with ASP_M_MSB/LSB, selects the fractional divide value for setting the SCLK frequency.(Default) ASP_N = 1</td></tr></table>


7.3.4 ASP Denominator 1



Address 0x40012


<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td rowspan="2">Default</td><td colspan="8">ASP_M_LSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>ASP_M_LSB</td><td>The value in this register cannot be changed while the serial port is powered up.ASP sample rate fractional divide denominator LSB. Along with ASP_N_MSB/LSB, selects the fractional divide value for setting the SCLK frequency.(Default) ASP_M = 8</td></tr></table>


7.3.5 ASP Denominator 2


Address 0x40013 

<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>ASP_M_MSB</td><td>The value in this register cannot be changed while the serial port is powered up.ASP sample rate fractional divide denominator LSB. Along with ASP_N_MSB/LSB, selects the fractional divide value for setting the SCLK frequency.(Default) ASP_M = 8</td></tr></table>


7.3.6 ASP LRCK High Time 1


Address 0x40014 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">ASP_LCHI_LSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>ASP_LCHI LSB</td><td>The value in this register cannot be changed while the serial port is powered up.ASP LRCK high duration, in units of ASP_SCLK periods stored in ASP_LCHI_MSB/LSB. This value must be less than ASP_LCPR.(Default) ASP_LCHI = 31</td></tr></table>


7.3.7 ASP LRCK High Time 2


Address 0x40015 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">ASP_LCHI_MSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>ASP_LCHI_MSB</td><td>The value in this register cannot be changed while the serial port is powered up.ASP LRCK high duration, in units of ASP_SCLK periods stored in ASP_LCHI_MSB/LSB. This value must be less than ASP_LCPR.(Default) ASP_LCHI = 31</td></tr></table>


7.3.8 ASP LRCK Period 1


Address 0x40016 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">ASP_LCPR_LSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>ASP_LCPR LSB</td><td>The value in this register cannot be changed while the serial port is powered up.ASP LRCK period, in units of ASP_SCLK periods stored in ASP_LCPR_MSB/LSB.(Default) ASP_LCPR = 63</td></tr></table>


7.3.9 ASP LRCK Period 2


Address 0x40017 

<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="8">ASP_LCPR_MSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>ASP_LCPR_MSB</td><td>The value in this register cannot be changed while the serial port is powered up.ASP LRCK period, in units of ASP_SCLK periods stored in ASP_LCPR_MSB/LSB.(Default) ASP_LCPR = 63</td></tr></table>


7.3.10 ASP Clock Configuration



Address 0x40018


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="3">—</td><td>ASP_M/SB</td><td>ASP_SCPOL_OUT</td><td>ASP_SCPOL_IN</td><td>ASP_LCPOL_OUT</td><td>ASP_LCPOL_IN</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:5</td><td>—</td><td>Reserved</td></tr><tr><td>4</td><td>ASP_M/SB</td><td>ASP port master or slave configuration.0 (Default) Slave Mode (input)1 Master Mode (output)</td></tr><tr><td>3</td><td>ASP_SCPOL_OUT</td><td>ASP SCLK output drive polarity.0 Normal1 (Default) Inverted</td></tr><tr><td>2</td><td>ASP_SCPOL_IN</td><td>ASP SCLK input polarity (pad to logic).0 Normal1 (Default) Inverted</td></tr><tr><td>1</td><td>ASP_LCPOL_OUT</td><td>ASP LRCK output drive polarity.0 (Default) Normal1 Inverted</td></tr><tr><td>0</td><td>ASP_LCPOL_IN</td><td>ASP LRCK input polarity (pad to logic).0 (Default) Normal1 Inverted</td></tr></table>


7.3.11 ASP Frame Configuration



Address 0x40019


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="3">—</td><td>ASP_STP</td><td>ASP_5050</td><td></td><td>ASP_FSD</td><td></td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:5</td><td>—</td><td>Reserved</td></tr><tr><td>4</td><td>ASP_STP</td><td>ASP start phase. Controls which LRCK/FSYNC phase starts a frame.
0 (Default) The frame begins when LRCK/FSYNC transitions from high to low
1 The frame begins when LRCK/FSYNC transitions from low to high</td></tr><tr><td>3</td><td>ASP_5050</td><td>ASP LRCK fixed 50/50 duty cycle.
0 Programmable duty cycle per ASP_LCHI and ASP_LCPR.
1 (Default) Fixed 50% duty cycle</td></tr><tr><td>2:0</td><td>ASP_FSD</td><td>ASP frame start delay (units of ASP_SCLK periods).
000 0 delay
001 0.5 delay
010 (Default) 1.0 delay
... 
101 2.5 delay
110-111 Reserved</td></tr></table>


7.3.12 XSP Numerator 1



Address 0x40020


<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="8">XSP_N_LSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>XSP_N_LSB</td><td>The value in this register cannot be changed while the serial port is powered up.
XSP sample rate fractional divide numerator LSB. Along with XSP_M_MSB/LSB, selects the fractional divide value for setting the SCLK frequency.
(Default) XSP_N = 1</td></tr></table>


7.3.13 XSP Numerator 2


Address 0x40021 

<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td rowspan="2">Default</td><td colspan="8">XSP_N_MSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>XSP_N_MSB</td><td>The value in this register cannot be changed while the serial port is powered up.
XSP sample rate fractional divide numerator MSB. Along with XSP_M_MSB/LSB, selects the fractional divide value for setting the SCLK frequency.
(Default) XSP_N = 1</td></tr></table>


7.3.14 XSP Denominator 1


Address 0x40022 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">XSP_M_LSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>XSP_M_LSB</td><td>The value in this register cannot be changed while the serial port is powered up.
XSP sample rate fractional divide denominator LSB. Along with XSP_N_MSB/LSB, selects the fractional divide value for setting the SCLK frequency.
(Default) XSP_M = 2</td></tr></table>


7.3.15 XSP Denominator 2


Address 0x40023 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">XSP_M_MSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>XSP_M_MSB</td><td>The value in this register cannot be changed while the serial port is powered up.
XSP sample rate fractional divide denominator MSB. Along with XSP_N_MSB/LSB, selects the fractional divide value for setting the SCLK frequency.
(Default) XSP_M = 2</td></tr></table>


7.3.16 XSP LRCK High Time 1


Address 0x40024 

<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td rowspan="2">Default</td><td colspan="8">XSP_LCHI_LSB</td></tr><tr><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>XSP_LCHI LSB</td><td>The value in this register cannot be changed while the serial port is powered up.
XSP LRCK high duration, in units of XSP_SCLK periods stored in XSP_LCHI_LSB/MSB. This value must be less than XSP_LCPR.
(Default) XSP_LCHI = 31</td></tr></table>


7.3.17 XSP LRCK High Time 2


Address 0x40025 

<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="8">XSP_LCHI_MSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>XSP_LCHI_MSB</td><td>The value in this register cannot be changed while the serial port is powered up.
XSP LRCK high duration, in units of XSP_SCLK periods stored in XSP_LCHI_LSB/MSB. This value must be less than XSP_LCPR.
(Default) XSP_LCHI = 31</td></tr></table>


7.3.18 XSP LRCK Period 1



Address 0x40026


<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="8">XSP_LCPR_LSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>XSP_LCPR LSB</td><td>The value in this register cannot be changed while the serial port is powered up.
XSP LRCK period, in units of XSP_SCLK periods stored in XSP_LCPR_LSB/MSB.
(Default) XSP_LCPR = 63</td></tr></table>


7.3.19 XSP LRCK Period 2



Address 0x40027


<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td></td><td></td><td></td><td colspan="5">XSP_LCPR_MSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>XSP_LCPR_MSB</td><td>The value in this register cannot be changed while the serial port is powered up.
XSP LRCK period, in units of XSP_SCLK periods stored in XSP_LCPR_LSB/MSB.
(Default) XSP_LCPR = 63</td></tr></table>


7.3.20 XSP Clock Configuration



Address 0x40028


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="3">—</td><td>XSP_M/SB</td><td>XSP_SCPOL_OUT</td><td>XSP_SCPOL_IN</td><td>XSP_LCPOL_OUT</td><td>XSP_LCPOL_IN</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:5</td><td>—</td><td>Reserved</td></tr><tr><td>4</td><td>XSP_M/SB</td><td>XSP port master or slave configuration.0 (Default) Slave Mode (input)1 Master Mode (output)</td></tr><tr><td>3</td><td>XSP_SCPOL_OUT</td><td>XSP SCLK output drive polarity.0 Normal1 (Default) Inverted</td></tr><tr><td>2</td><td>XSP_SCPOL_IN</td><td>XSP SCLK input polarity (pad to logic).0 Normal1 (Default) Inverted</td></tr><tr><td>1</td><td>XSP_LCPOL_OUT</td><td>XSP LRCK output drive polarity.0 (Default) Normal1 Inverted</td></tr><tr><td>0</td><td>XSP_LCPOL_IN</td><td>XSP LRCK input polarity (pad to logic).0 (Default) Normal1 Inverted</td></tr></table>


7.3.21 XSP Frame Configuration



Address 0x40029


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="3">—</td><td>XSP_STP</td><td>XSP_5050</td><td>—</td><td colspan="2">XSP_FSD</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:5</td><td>—</td><td>Reserved</td></tr><tr><td>4</td><td>XSP_STP</td><td>XSP start phase. Controls which LRCK/FSYNC phase starts a frame.
0 (Default) The frame begins when LRCK/FSYNC transitions from high to low
1 The frame begins when LRCK/FSYNC transitions from low to high</td></tr><tr><td>3</td><td>XSP_5050</td><td>XSP LRCK fixed 50/50 duty cycle.
0 Programmable duty cycle per XSP_LCHI and XSP_LCPR
1 (Default) Fixed 50% duty cycle</td></tr><tr><td>2:0</td><td>XSP_FSD</td><td>XSP frame start delay (units of XSP_SCLK periods).000 0 delay001 0.5 delay010 (Default) 1.0 delay...101 2.5 delay110-111 Reserved</td></tr></table>


7.3.22 ASP Channel 1 and 2 Location



Address 0x50000, 0x50001


<table><tr><td rowspan="3">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">ASP_RX_CH1</td></tr><tr><td colspan="8">ASP_RX_CH2</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>ASP_RX_CHn</td><td>ASP Rx channel n location. Sets the location in ASP_SCLK periods of the ASP Rx channel n from the start of the TDM frame.
0x00 Start on SCLK 0
... 
0xFF Start on SCLK 255
Defaults are 0x00.</td></tr></table>


7.3.23 ASP Channel 1 Size and Enable



Address 0x5000A


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="3">—</td><td>ASP_RX_CH1_AP</td><td>ASP_RX_CH1_EN</td><td colspan="2">ASP_RX_CH1_RES</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>0</td></tr></table>


7.3.24 ASP Channel 2 Size and Enable



Address 0x5000B


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="3">—</td><td>ASP_RX_CH2_AP</td><td>ASP_RX_CH2_EN</td><td colspan="2">ASP_RX_CH2_RES</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:4</td><td>—</td><td>Reserved</td></tr><tr><td>3</td><td>ASP_RX_CHn_AP</td><td>ASP RX channel n active phase. Valid only in 50/50 mode (ASP_5050 = 1).0 (Default when n = 1) In 50/50 mode, channel data is input when LRCK/FSYNC is low1 (Default when n = 2) In 50/50 mode, channel data is input when LRCK/FSYNC is high</td></tr><tr><td>2</td><td>ASP_RX_CHn_EN</td><td>ASP RX channel n enable. Configures the state of the data for the ASP on channel n. The same rule applies to CHx_EN.0 (Default) Input channel data is not propagated to the internal data path1 Input channel data is propagated to the internal data path</td></tr><tr><td>1:0</td><td>ASP_RX_CHn_RES</td><td>ASP RX channel n size (in bits). Sets the output resolution of the ASP RX channel n samples.00 8 bits per sample01 16 bits per sample10 (Default) 24 bits per sample11 32 bits per sample</td></tr></table>


7.3.25 XSP Channel 1 and 2 Location


Address 0x60000, 0x60001 

<table><tr><td rowspan="3">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td></td><td></td><td>XSP_RX_CH1</td><td></td><td></td><td></td><td></td></tr><tr><td></td><td></td><td></td><td>XSP_RX_CH2</td><td></td><td></td><td></td><td></td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>XSP_RX_CHn</td><td>XSP Rx channel n location. Sets the location in XSP_SCLK periods of the XSP Rx channel n from the start of the TDM frame.
0x00 Start on SCLK 0
... 
0xFF Start on SCLK 255
Defaults are 0x00.</td></tr></table>


7.3.26 XSP Channel 1 Size and Enable


Address 0x6000A 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="3">—</td><td>XSP_RX_CH1_AP</td><td>XSP_RX_CH1_EN</td><td colspan="2">XSP_RX_CH1_RES</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>0</td></tr></table>


7.3.27 XSP Channel 2 Size and Enable


Address 0x6000B 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>1</td></tr><tr><td></td><td colspan="3">—</td><td>XSP_RX_CH2_AP</td><td>XSP_RX_CH2_EN</td><td colspan="2">XSP_RX_CH2_RES</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:4</td><td>—</td><td>Reserved</td></tr><tr><td>3</td><td>XSP_RX_CHn_AP</td><td>XSP Rx channel n active phase. Valid only in 50/50 mode (XSP_5050 = 1).0 (Default when n = 1) In 50/50 mode, channel data is input when LRCK/FSYNC is low1 (Default when n = 2) In 50/50 mode, channel data is input when LRCK/FSYNC is high</td></tr><tr><td>2</td><td>XSP_RX_CHn_EN</td><td>XSP Rx channel n enable. Configures the state of the data for the XSP on channel n. The same rule applies to CHx_EN.0 Input channel data is not propagated to the internal data path1 (Default) Input channel data is propagated to the internal data path</td></tr><tr><td>1:0</td><td>XSP_RX_CHn_RES</td><td>XSP Rx channel n size (in bits). Sets the output resolution of the XSP Rx channel n samples.00 8 bits per sample01 16 bits per sample10 (Default) 24 bits per sample11 32 bits per sample</td></tr></table>

# 7.4 DSD Registers


7.4.1 DSD Volume B


Address 0x70000 

<table><tr><td>R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="8">DSDVolumes_B</td></tr><tr><td>Default</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>DSD_VOLUME_B</td><td>Digital volume control registers for DSD processor channel B. It allows independent control of the signal level in 1/2 dB increments from 0 dB. Volume settings are decoded as shown below. The volume changes are dictated by the DSD_SZC bit. The same condition applies to DSD_VOLUME_A setting.0000 0000 0 dB0000 0001 -0.5 dB01111000 -60 dB (Default)1111 1110 -127 dB1111 1111 Digital mute</td></tr></table>


7.4.2 DSD Volume A


Address 0x70001 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">DSDVolumesVolume_A</td></tr><tr><td>Default</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>DSD_VOLUME_A</td><td>Digital volume control registers for channel A. See DSDVolumes_B for description.</td></tr></table>


7.4.3 DSD Processor Path Signal Control 1


Address 0x70002 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>DSD_RAMP_UP</td><td>DSD_VOLBEQA</td><td>DSD_SZC</td><td>—</td><td>DSD_AMUTE</td><td>DSD_AMUTE_BEQA</td><td>DSD_MUTE_A</td><td>DSD_MUTE_B</td></tr><tr><td>Default</td><td>1</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>DSD_RAMP_UP</td><td>Soft volume ramp-up after error. An unmute is performed after any error is recovered.0 Immediate unmute is performed1 (Default) Unmute behavior is controlled by DSD_SZC settings</td></tr><tr><td>6</td><td>DSD_VOL_BEQA</td><td>DSD_VOLUME_B equals DSD_VOLUME_A.0 (Default) Volume setting of both channels in DSD processor are controlled independently1 Volume setting of both channels are controlled by DSD_VOLUME_A. DSD_VOLUME_B is ignored</td></tr><tr><td>5</td><td>DSD_SZC</td><td>Soft ramp control.0 Immediate change1 (Default) Soft ramp</td></tr><tr><td>4</td><td>—</td><td>Reserved</td></tr><tr><td>3</td><td>DSD_AMUTE</td><td>DSD auto mute.0 Function disabled1 (Default) Mute occurs after reception of 256 repeated 8-bit DSD mute patterns. A single bit not fitting the repeated pattern releases the mute. Detection and muted is done independently for each channel.</td></tr><tr><td>2</td><td>DSD_AMUTE_BEQA</td><td>DSD Processor Auto mute channel B equals channel A.0 (Default) Function disabled1 Only mute when both channels AMUTE conditions are detected</td></tr><tr><td>1</td><td>DSD_MUTE_A</td><td>DSD Processor Channel A mute.0 (Default) Function is disabled1 Channel output is muted. Muting function is affected by the DSD_SZC bit</td></tr><tr><td>0</td><td>DSD_MUTE_B</td><td>DSD Processor Channel B mute.0 (Default) Function is disabled.1 Channel output is muted. Muting function is affected by the DSD_SZC bit.</td></tr></table>


7.4.4 DSD Interface Configuration


Address 0x70003 

<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="2">—</td><td colspan="2">—</td><td>—</td><td>DSD_M/SB</td><td>DSD_PM_EN</td><td>DSD_PM_SEL</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:3</td><td>—</td><td>Reserved</td></tr><tr><td>2</td><td>DSD_M/SB</td><td>DSD clock master or Slave Mode.
0 (Default) Slave Mode
1 Master Mode</td></tr><tr><td>1</td><td>DSD_PM_EN</td><td>DSD phase modulation mode. Can only be used when DSD_SPEED = 00 (64·Fs) or 01 (128·Fs).
0 (Default) this function is disabled (DSD normal mode)
1 DSD phase modulation input mode is enabled, and the DSD_PM_SEL bit must be set accordingly.</td></tr><tr><td>0</td><td>DSD_PM_SEL</td><td>DSD phase modulation mode select.
0 (Default) The 2x data rate (BCKA) clock must be input to DSD_SCLK for phase modulation mode.
1 The 1x data rate (BCKD) clock must be input to DSD_SCLK for phase modulation mode.</td></tr></table>


7.4.5 DSD Processor Path Signal Control 2



Address 0x70004


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>—</td><td colspan="2">DSD_PRC_SRC</td><td>DSD_EN</td><td colspan="2">DSD_SPEED</td><td>STA_DSD_DET</td><td>INV_DSD_DET</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>—</td><td>Reserved</td></tr><tr><td>6:5</td><td>DSD_PRC_SRC</td><td>Select the source for DSD processor.00 (Default) DSD interface01 Reserved10 ASP11 XSP</td></tr><tr><td>4</td><td>DSD_EN</td><td>Enable DSD playback.0 (Default) Function disabled1 DSD playback is enabled</td></tr><tr><td>3:2</td><td>DSD_SPEED</td><td>Setup DSD clock speed.00 (Default) 64*Fs01 128*Fs10 256*Fs11 Reserved</td></tr><tr><td>1</td><td>STA_DSD_DET</td><td>Static DSD detection.0 Function disabled1 (Default) Static DSD detection is enabled. The DSD processor checks for 28 consecutive zeros or ones and, if detected, sets the DSD_STUCK_INT interrupt status bit and mutes the output until the static condition is cleared. If DSD_AMUTE is enabled, AMUTE will be in effect in this scenario.</td></tr><tr><td>0</td><td>INV_DSD_DET</td><td>Invalid DSD detection.0 (Default) Function disabled1 Invalid DSD detection is enabled. The DSD processor checks for 25 out of 28 bits of the same value and, if detected, sets the DSD_INVALID_A_INT and/or DSD_INVALID_B_INT interrupt status bits.</td></tr></table>


7.4.6 DSD and PCM Mixing Control



Address 0x70005


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td></td><td>—</td><td></td><td></td><td></td><td>MIXPCM_PREP</td><td>MIXPCM_DSD</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:2</td><td>—</td><td>Reserved</td></tr><tr><td>1</td><td>MIXPCM_PREP</td><td>Enable PCM playback path for PCM and DSD mixing. This bit must be set prior to setting MIXPCM_DSD. Disable this bit after disabling MIXPCM_DSD. This mode requires DSD_EN to be enabled and DSD_PRC_SRC set to receive DSD through either the DSD interface or XSP.
0 (Default) Function disabled
1 Enable PCM playback path for PCM and DSD mixing</td></tr><tr><td>0</td><td>MIXPCM_DSD</td><td>Enable PCM stream mixing into DSD stream. This bit must be set only after MIXPCM_PREP is enabled. Disable this bit prior to disabling MIXPCM_PREP bit. This mode requires DSD_EN to be enabled and DSD_PRC_SRC set to receive DSD through either the DSD interface or XSP.
0 (Default) Function disabled
1 Enable PCM stream mixing into the DSD stream</td></tr></table>


7.4.7 DSD Processor Path Signal Control 3



Address 0x70006


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>DSD_ZERODB</td><td>DSD_HPF_EN</td><td>—</td><td>SIGCTL_DSDEQPCM</td><td>DSD_INV_A</td><td>DSD_INV_B</td><td>DSD_SWAP_CHAN</td><td>DSD_COPY_CHAN</td></tr><tr><td>Default</td><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>DSDZERODB</td><td>Setting on DSD stream volume to match PCM stream volume.0 (Default) The SACD +3.1-dB level (71% modulation index) matches PCM 0 dB full scale.1 The SACD 0-dB reference level (50% modulation index) matches PCM 0 dB full scale.</td></tr><tr><td>6</td><td>DSD_HPF_EN</td><td>Enable the high pass filter in the DSD processor.0 HPF disabled1 (Default) Enable HPF in the DSD processor</td></tr><tr><td>5</td><td>—</td><td>Reserved</td></tr><tr><td>4</td><td>SIGCTL_DSDEQPCM</td><td>Enable DSD signal path control register bits to be controlled by PCM setting. DSD setting is ignored. Register bits affected are the following:DSD_RAMP_UP, DSD_VOL_BEQA, DSD_SZC, DSD_AMUTE, DSD_AMUTE_BEQA, DSD_MUTE_A, DSD_MUTE_B, DSD_INV_A, DSD_INV_B, DSD_swap_CHAN, DSD_copy_CHANAfter set, each DSD_x register bit is equal to setting of PCM_x register bit.0 (Default) Function is disabled1 Function is enabled</td></tr><tr><td>3</td><td>DSD_INV_A</td><td>DSD Processor Channel A signal invert.0 (Default) Function is disabled1 Signal polarity of channel A is inverted</td></tr><tr><td>2</td><td>DSD_INV_B</td><td>DSD Processor Channel B signal invert0 (Default) the function is disabled1 Signal polarity of channel B is inverted</td></tr><tr><td>1</td><td>DSD_swap_CHAN</td><td>Swap channels A and B at the input. This bit takes effect before DSD.Copy_CHAN and DSD_INV_x.0 (Default) Function disabled1 Enable channel A and B swapping</td></tr><tr><td>0</td><td>DSD.Copy_CHAN</td><td>Copy channel A to channel B. This bit takes effect after DSD_swap_CHAN, but before DSD_INV_x.0 (Default) Function disabled1 Enable copy A to B function</td></tr></table>

# 7.5 Headphone and PCM Registers

# 7.5.1 HP Output Control 1


Address 0x80000


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>HP_CLAMPA</td><td>HP_CLAMPB</td><td colspan="2">OUT_FS</td><td>HP_IN_EN</td><td>HP_IN_LP</td><td>—</td><td>+1dB_EN</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>1</td><td>1</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>HP_CLAMPA</td><td>Opt-out on clamping HPOUTA output to ground when PDN_HP is enabled.0 (Default) Function disabled. HPOUTA is clamped when PDN_HP is set and HP_IN_EN is cleared. HPOUT is not clamped when PDN_HP is cleared.1 HPOUTA clamp is released if and only if PDN_HP is set.</td></tr><tr><td>6</td><td>HP_CLAMPB</td><td>Opt-out on clamping HPOUTB output to ground when PDN_HP is enabled.0 (Default) Function disabled. HPOUTB is clamped when PDN_HP is set and HP_IN_EN is cleared. HPOUT is not clamped when PDN_HP is cleared.1 HPOUTB clamp is released if and only if PDN_HP is set.</td></tr><tr><td>5:4</td><td>OUT_FS</td><td>Output full scale setting. This setting must only be updated when PDN_HP is set.00 0.5 V01 1 V10 1.41 V11 (Default) 1.73 V</td></tr><tr><td>3</td><td>HP_IN_EN</td><td>HPIN switches enable.0 (Default) Switch open1 Switch closed</td></tr><tr><td>2</td><td>HP_IN_LP</td><td>When selected, HPIN mode is placed into low power mode. This setting is only in effect when HP_IN_EN = 1. It should only be set after HP_IN_EN = 1. It should be cleared before HP_IN_EN is cleared. When HP_IN_LP = 1, the maximum supported speed for I2C is 400 kHz.0 (Default) HPINx path is not in the power mode.1 HPINx path is in the low power mode.</td></tr><tr><td>1</td><td>—</td><td>Reserved</td></tr><tr><td>0</td><td>+1dB_EN</td><td>If selected, output full scale voltage is at 2 V. This setting is only in effect when OUT_FS = 11 and HV_EN = 1. This setting is ignored if OUT_FS and HV_EN is set to any other settings. It should only be updated when PDN_HP is set.0 (Default) Output full scale voltage is determined by OUT_FS setting.1 Output full scale voltage is at 2 V.</td></tr></table>


7.5.2 PCM Filter Option



Address 0x90000


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>FILTER_SLOW_FASTB</td><td>PHCOMP_LOWLATB</td><td>NOS</td><td colspan="2">—</td><td>PCM_WBF_EN</td><td>HIGH.Pass</td><td>DEEMP_ON</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>FILTER_SLOW_FASTB</td><td>Fast and slow filter selection.0 (Default) Fast filter is selected.1 Slow filter is selected.</td></tr><tr><td>6</td><td>PHCOMP_LOWLATB</td><td>Low-latency and phase-compensated filter selection0 (Default) Low-latency is selected.1 Phase-compensated filter is selected.</td></tr><tr><td>5</td><td>NOS</td><td>Nonoversampling emulation mode on. When enabled, FILTER_SLOW_FASTB and PHCOMP_LOWLATB are ignored.0 (Default) NOS emulation mode is off.1 NOS emulation mode is on.</td></tr><tr><td>4:3</td><td>—</td><td>Reserved</td></tr><tr><td>2</td><td>PCM_WBF_EN</td><td>Wideband flatness mode enable. This should only be used in PCM playback when xSP sample rate is at 192 kHz. This bit must be changed while PDN_HP is set.0 (Default) Wideband flatness mode disabled1 Wideband flatness mode enabled</td></tr><tr><td>1</td><td>HIGH_PASS</td><td>High-pass filter enable.0 High-pass filter is disabled.1 (Default) High-pass filter is selected.</td></tr><tr><td>0</td><td>DEEMP_ON</td><td>Deemphasis filter on.0 (Default) Deemphasis for 44.1 kHz is disabled.1 Deemphasis for 44.1 kHz is enabled.</td></tr></table>


7.5.3 PCM Volume B



Address 0x90001


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">PCMVolumes_B</td></tr><tr><td>Default</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>PCM_VOLUME_B</td><td>Digital volume control registers for PCM channel B. It allows independent control of the signal level in 1/2 dB increments from 0 to -127.5 dB. Volume settings are decoded as shown below. The volume changes are dictated by the PCM_SZC bits. The same rule applies to PCM_VOLUME_A setting.0000 0000 0 dB0000 0001 -0.5 dB01111000 -60 dB (Default)1111 1110 -127 dB1111 1111 Digital mute</td></tr></table>


7.5.4 PCM Volume A



Address 0x90002


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">PCMVolumesVolume_A</td></tr><tr><td>Default</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>PCM 
VOLUME_A</td><td>Digital volume control registers for channel A. See PCMVolumes_B for description.</td></tr></table>


7.5.5 PCM Path Signal Control 1



Address 0x90003


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>PCM_RAMP_DOWN</td><td>PCM_VOLBEQA</td><td colspan="2">PCM_SZC</td><td>PCM_AMUTE</td><td>PCM_AMUTEBEQA</td><td>PCM_MUTE_A</td><td>PCM_MUTE_B</td></tr><tr><td>Default</td><td>1</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>PCM_RAMP_DOWN</td><td>Soft volume ramp-down before filter mode change. A mute is performed before filter mode change and an unmute is performed after executing the filter mode change.
0 Immediate mute is performed prior to executing a filter mode change
1 (Default) This mute and unmute is controlled by PCM_SZC.</td></tr><tr><td>6</td><td>PCM_VOL_BEQA</td><td>PCM_VOLOLUME_B equals PCM_VOLUME_A.
0 (Default) Volume setting of both channels are controlled independently.
1 Volume setting of both channels are controlled by PCM_VOLUME_A. PCM_VOLUME_B is ignored.</td></tr><tr><td>5:4</td><td>PCM_SZC</td><td>Soft ramp and zero cross control.
00 Immediate change
01 In PCM mode, zero cross change
10 (Default) Soft ramp
11 In PCM mode, soft ramp and zero crossings</td></tr><tr><td>3</td><td>PCM_AMUTE</td><td>PCM auto mute.
0 Function disabled
1 (Default) Mute occurs after reception of 8,192 consecutive audio samples of static +1, 0, or -1. A single sample of non-static data releases the mute. Detection and muted is done independently for each channel.</td></tr><tr><td>2</td><td>PCM_AMUTEBEQA</td><td>Auto mute channel B equals channel A.
0 (Default) Function disabled.
1 Only mute when both channels AMUTE conditions are detected.</td></tr><tr><td>1</td><td>PCM_MUTE_A</td><td>Channel A mute.
0 (Default) Function is disabled.
1 Channel output is muted. Muting function is affected by the PCM_SZC bits.</td></tr><tr><td>0</td><td>PCM_MUTE_B</td><td>Channel A mute.
0 (Default) Function is disabled.
1 Channel output is muted. Muting function is affected by the PCM_SZC bits.</td></tr></table>


7.5.6 PCM Path Signal Control 2



Address 0x90004


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="3">—</td><td>PCM_INV_A</td><td>PCM_INV_B</td><td>PCM_SWAP_ 
CHAN</td><td>PCM_COPY_ 
CHAN</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:4</td><td>—</td><td>Reserved</td></tr><tr><td>3</td><td>PCM_INV_A</td><td>Channel A signal invert.0 (Default) Function is disabled1 Signal polarity of channel A is inverted</td></tr><tr><td>2</td><td>PCM_INV_B</td><td>Channel B signal invert.0 (Default) the function is disabled1 Signal polarity of channel B is inverted</td></tr><tr><td>1</td><td>PCM_SWAP_CHAN</td><td>Swap channels A and B at the input. This bit takes effect before PCM_COPY_CHAN.0 (Default) Function disabled1 Enable channel A and B swapping</td></tr><tr><td>0</td><td>PCM_copy_CHAN</td><td>Copy channel A to channel B. This bit takes effect after PCM_SWAP_CHAN.0 (Default) Function disabled1 Enable copy A to B function</td></tr></table>


7.5.7 Programmable Filter Control 1



Address 0x9 000A


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="2">SOS1_CTRL</td><td colspan="2">SOS2_CTRL</td><td colspan="2">FOS_CTRL</td><td>SOS3_ON</td><td>—</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:6</td><td>SOS1_CTRL</td><td>SOS1 filter control.00 SOS1 filter disabled.01 Reserved.10 Reserved.11 SOS1 filter enabled.</td></tr><tr><td>5:4</td><td>SOS2_CTRL</td><td>SOS2 filter control.00 SOS2 filter disabled.01 Reserved.10 Reserved.11 SOS2 filter enabled.</td></tr><tr><td>3:2</td><td>FOS_CTRL</td><td>FOS filter control.00 FOS filter disabled.01 Reserved.10 Reserved.11 FOS filter enabled.</td></tr><tr><td>1</td><td>SOS3_ON</td><td>SOS3 filter enable.0 (default) SOS3 filter is disabled.1 SOS3 filter is enabled.</td></tr><tr><td>0</td><td>—</td><td>Reserved</td></tr></table>


7.5.8 Programmable Filter Control 2



Address 0x9 000B


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="3">—</td><td>SOS1_COEFF_CP</td><td>SOS2_COEFF_CP</td><td>FOS_COEFF_CP</td><td>—</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:4</td><td>—</td><td>Reserved</td></tr><tr><td>3</td><td>SOS1_COEFF_CP</td><td>Enable SOS1 coefficients from the control port. When the filter is not in use, this bit must be cleared to 0. 
0 (default) SOS1 coefficients from the control port are not effective. 
1 SOS1 coefficients from the control port are effective.</td></tr><tr><td>2</td><td>SOS2_COEFF_CP</td><td>Enable SOS2 coefficients from the control port. When the filter is not in use, this bit must be cleared to 0. 
0 (default) SOS2 coefficients from the control port are not effective. 
1 SOS2 coefficients from the control port are effective.</td></tr><tr><td>1</td><td>FOS_COEFF_CP</td><td>Enable FOS coefficients from the control port. When the filter is not in use, this bit must be cleared to 0. 
0 (default) FOS coefficients from the control port are not effective. 
1 FOS coefficients from the control port are effective.</td></tr><tr><td>0</td><td>—</td><td>Reserved</td></tr></table>


7.5.9 Programmable Filter Coefficients



Address 0x9000C–0x90041


<table><tr><td rowspan="4">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">xOSx_COEFF_xx_LSBYTE</td></tr><tr><td colspan="8">xOSx_COEFF_xx_MSBYTE</td></tr><tr><td colspan="7">—</td><td>xOSx_COEFF_ xx_SIGN</td></tr><tr><td>Default</td><td colspan="8">See Quick Reference</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>See Quick Reference</td><td>Refer to Section 4.14 for details. Format is Q1.17.</td></tr></table>


7.5.10 Class H Control



Address 0xB0000


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="3">—</td><td colspan="3">ADPT_PWR</td><td>HV_EN</td><td>EXT_VCPFILT</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:5</td><td>—</td><td>Reserved</td></tr><tr><td>4:2</td><td>ADPT_PWR</td><td>Adaptive power adjustment. Configures how power to HP amplifiers adapts to the output signal level.
000 Reserved
001 Fixed, Mode 0 (±VP_LDO)
010 Fixed, Mode 1 (±VCP)
011-110 Reserved
111 (Default) Adapt to signal. The output signal dynamically determines the voltage level.</td></tr><tr><td>1</td><td>HV_EN</td><td>High voltage mode enable.
0 Function disabled (VP_LDO = 2.6V)
1 (Default) Function enabled (VP_LDO = 3.0 V). This requires VP min to be 3.3 V. Also, this mode only applies to load 600 Ω and above.</td></tr><tr><td>0</td><td>EXT_VCPFILT</td><td>External VCP_FILTER± voltage mode.
0 (Default) Function disabled
1 When enabled, VCP_FILTER± voltages can be provided externally at ±3.0 V. See power sequencing/timing requirement in related functional description.</td></tr></table>


7.5.11 HP Detect



Address 0xD0000


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="2">HPDETECT_CTRL</td><td>HPDETECT_INV</td><td colspan="2">HPDETECT_RISE_DBC_TIME</td><td colspan="2">HPDETECT_FALL_DBC_TIME</td><td>—</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>1</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:6</td><td>HPDETECT_CTRL</td><td>HP detect control. Configures operation of the HP detect circuit. The internal weak current source pull-up is enabled in all modes.00 (Default) Disabled. The HP detect digital circuit is powered down and does not report to the status registers (HPDETECT_PLUG_INT and HPDETECT_UNPLUG_INT are also cleared).01-10 Reserved11 Enabled</td></tr><tr><td>5</td><td>HPDETECT_INV</td><td>HP detect invert. Can be used to invert the signal from the HP detect circuit.0 (Default) Not inverted1 Inverted</td></tr><tr><td>4:3</td><td>HPDETECT_RISE_DBC_TIME</td><td>Tip sense rising debounce time.00 (Default) 0 ms01 250 ms10 500 ms11 1.0 s</td></tr><tr><td>2:1</td><td>HPDETECT_FALL_DBC_TIME</td><td>Tip sense falling debounce time.00 0 ms01 250 ms10 (Default) 500 ms11 1.0 s</td></tr><tr><td>0</td><td>—</td><td>Reserved</td></tr></table>


7.5.12 HP Status



Address 0xD0001


<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>—</td><td>HPDETECT_PLUG_DBC</td><td>HPDETECT_UNPLUG_DNC</td><td></td><td colspan="4">—</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>—</td><td>Reserved</td></tr><tr><td>6</td><td>HPDETECT Plug_DBC</td><td>HPDETECT plug debounce status. Setting HPDETECT_INV reverses the meaning of this bit.
0 (Default) Condition is not present
1 Condition is present</td></tr><tr><td>5</td><td>HPDETECT_UNPLUG_DBC</td><td>HPDETECT unplug debounce status. Setting HPDETECT_INV reverses the meaning of this bit.
0 (Default) Condition is not present
1 Condition is present</td></tr><tr><td>4:0</td><td>—</td><td>Reserved</td></tr></table>


7.5.13 HP Load 1



Address 0xE0000


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>HPLOAD_EN</td><td colspan="2">—</td><td>HPLOAD_CHN_SEL</td><td colspan="2">—</td><td>HPLOAD_AC_START</td><td>HPLOAD_DC_START</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>HPLOAD_EN</td><td>HP load enable.
0 (Default) Function disabled
1 Function enabled</td></tr><tr><td>6:5</td><td>—</td><td>Reserved</td></tr><tr><td>4</td><td>HPLOAD_CHN_SEL</td><td>Select channel to perform HP load measurement.
0 (Default) HPOUTA
1 HPOUTB</td></tr><tr><td>3:2</td><td>—</td><td>Reserved</td></tr><tr><td>1</td><td>HPLOAD_AC_START</td><td>HP load AC measurement trigger. A change from 0 to 1 initiates the measurement process. After the measurement completes, this bit must be manually changed back to 0 before initiating another process.
(Default) HPLOAD_AC_START = 0</td></tr><tr><td>0</td><td>HPLOAD_DC_START</td><td>HP load DC measurement trigger. A change from 0 to 1 initiates the measurement process. After measurement complete, this bit must be manually changed back to 0 before initiating another process.
(Default) HPLOAD_DC_START = 0</td></tr></table>


7.5.14 HP Load Measurement 1



Address 0xE0003


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">HPLOAD_MEAS_FREQ_LSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>HPLOAD_MEAS_FREQ_LSB</td><td>LSB of HP load measurement frequency selection for AC detect (5.86 Hz/lsb when MCLK_INT = 24.576 MHz, 5.94 Hz/lsb when MCLK_INT = 22.5792 MHz). Frequency range is 20 Hz to 20 kHz.
Default: 0000 0000</td></tr></table>


7.5.15 HP Load Measurement 2



Address 0xE0004


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">HPLOAD_MEAS_FREQ_MSB</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>HPLOAD_MEAS_FREQ_MSB</td><td>MSB of HP load measurement frequency selection for AC detect (5.86 Hz/lsb when MCLK_INT = 24.576 MHz, 5.94 Hz/lsb when MCLK_INT = 22.5792 MHz). Frequency range is 20 Hz to 20 kHz.
Default: 0000 0000</td></tr></table>


7.5.16 HP DC Load Status 0


Address 0xE000D 

<table><tr><td>R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td rowspan="2">Default</td><td colspan="8">RL_DC_STAT_0</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>RL_DC_STAT_0</td><td>Byte 0 of HP DC load measured in Ω. RL_DC_STAT_1[7:0] and RL_DC_STAT_0[7:3] represent integer portion of impedance value. 
RL_DC_STAT_0[2:0] represent fractional portion, with fractional weighting as follows: 
[2]: 0.5 
[1]: 0.25 
[0]: 0.125 
Default: 0000000</td></tr></table>


7.5.17 HP DC Load Status 1


Address 0xE000E 

<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">RL_DC_STAT_1</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>RL_DC_STAT_1</td><td>Byte 1 of HP DC load measured in Ω.Refer to RL_DC_STAT_0 for details of measurement interpretation.Default: 0000000</td></tr></table>


7.5.18 HP AC Load Status 0


Address 0xE0010 

<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td colspan="8">RL_AC_STAT_0</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>RL_AC_STAT_0</td><td>Byte 0 of HP AC load measured in Ω. 
RL_AC_STAT_1[7:0] and RL_AC_STAT_0[7:3] represent integer portion of impedance value. 
RL_AC_STAT_0[2:0] represent fractional portion, with fractional weighting as follows: 
[2]: 0.5 
[1]: 0.25 
[0]: 0.125 
Default: 0000000</td></tr></table>


7.5.19 HP AC Load Status 1


Address 0xE0011 

<table><tr><td>R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td></td><td></td><td></td><td colspan="5">RL_AC_STAT_1</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:0</td><td>RL_AC_STAT_1</td><td>Byte 1 of HP AC load measured in Ω.Refer to RL_AC_STAT_0 for details of measurement interpretation.Default: 0000000</td></tr></table>


7.5.20 HP Load Status


Address 0xE001A 

<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>HPLOAD_DC_ONCE</td><td>HPLOAD_BUSY</td><td colspan="2">—</td><td>HPLOAD ACPI_DONE</td><td>HPLOAD ACPIamusY</td><td>HPLOAD ACPIDONE</td><td>HPLOAD ACPIBUSY</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>HPLOAD_DC_ONCE</td><td>Status of HP load DC measurement been performed at least once.0 Condition is not present1 Condition is present</td></tr><tr><td>6</td><td>HPLOAD_BUSY</td><td>Status of HP load measurement block state machine.0 State machine is not busy1 State machine is busy</td></tr><tr><td>5:4</td><td>—</td><td>Reserved</td></tr><tr><td>3</td><td>HPLOAD_AC_DONE</td><td>HP load AC measurement is done status.
0 Condition is not present
1 Condition is present</td></tr><tr><td>2</td><td>HPLOAD_AC_BUSY</td><td>HP AC load measurement is "in process" status.
0 Condition is not present
1 Condition is present</td></tr><tr><td>1</td><td>HPLOAD_DC_DONE</td><td>HP load DC measurement is done status.
0 Condition is not present
1 Condition is present</td></tr><tr><td>0</td><td>HPLOAD_DC_BUSY</td><td>HP DC load measurement is "in process" status.
0 Condition is not present
1 Condition is present</td></tr></table>

# 7.6 Interrupt Status and Mask Registers

# 7.6.1 Interrupt Status 1


Address 0xF0000


<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>DAC_OVFL_INT</td><td>HPDETECT Plug_INT</td><td>HPDETECT UNPLUG_INT</td><td>XTAL_READY_INT</td><td>XTAL_ERROR_INT</td><td>PLL_READY_INT</td><td>PLL_ERROR_INT</td><td>PDN_DONE_INT</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>DAC_OVFL_INT</td><td>Status indicating DAC modulator overflow condition is detected.0 Condition is not present1 Condition is present</td></tr><tr><td>6</td><td>HPDETECT Plug_INT</td><td>Status indicating HP plug event is detected.0 Condition is not present1 Condition is present</td></tr><tr><td>5</td><td>HPDETECT UNPLUG_INT</td><td>Status indicating HP unplug event is detected.0 Condition is not present1 Condition is present</td></tr><tr><td>4</td><td>XTAL READY_INT</td><td>Status indicating XTAL is ready after PDN_XTAL is cleared.0 Condition is not present1 Condition is present</td></tr><tr><td>3</td><td>XTAL_ERROR_INT</td><td>Status indicating XTAL error condition is detected after PDN_XTAL is cleared.0 Condition is not present1 Condition is present</td></tr><tr><td>2</td><td>PLL_READY_INT</td><td>Status indicating PLL ready condition is detected after PLL_START is set.0 Condition is not present1 Condition is present</td></tr><tr><td>1</td><td>PLL_ERROR_INT</td><td>Status indicating PLL error condition is detected after PLL_START is set.0 Condition is not present1 Condition is present</td></tr><tr><td>0</td><td>PDN_DONE_INT</td><td>Status indicating PDN_HP process is completed after a request.0 Condition is not present1 Condition is present</td></tr></table>

# 7.6.2 Interrupt Status 2


Address 0xF0001


<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>ASP_OVFL_INT</td><td>ASP_ERROR_INT</td><td>ASP_LATE_INT</td><td>ASP_EARLY_INT</td><td>ASP_NOLCK_INT</td><td colspan="3">—</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>ASP_OVFL_INT</td><td>ASP RX request overload.
0 Condition is not present
1 Condition is present</td></tr><tr><td>6</td><td>ASP_ERROR_INT</td><td>ASP RX LRCK error. Logical OR of LRCK early and LRCK late errors.
0 Condition is not present
1 Condition is present</td></tr><tr><td>5</td><td>ASP_LATE_INT</td><td>ASP RX LRCK late.
0 Condition is not present
1 Condition is present</td></tr><tr><td>4</td><td>ASP_EARLY_INT</td><td>ASP RX LRCK early.
0 Condition is not present
1 Condition is present</td></tr><tr><td>3</td><td>ASP_NOLRCK_INT</td><td>ASP RX no LRCK.
0 Condition is not present
1 Condition is present</td></tr><tr><td>2:0</td><td>—</td><td>Reserved</td></tr></table>

# 7.6.3 Interrupt Status 3


Address 0xF0002


<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>XSP_OVFL_INT</td><td>XSP_ERROR_INT</td><td>XSP_LATE_INT</td><td>XSP_EARLY_INT</td><td>XSP_NOLRCK_INT</td><td colspan="3">—</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>XSP_OVFL_INT</td><td>XSP RX request overload.
0 Condition is not present
1 Condition is present</td></tr><tr><td>6</td><td>XSP_ERROR_INT</td><td>XSP RX LRCK error. Logical OR of LRCK early and LRCK late errors.
0 Condition is not present
1 Condition is present</td></tr><tr><td>5</td><td>XSP_LATE_INT</td><td>XSP RX LRCK late.
0 Condition is not present
1 Condition is present</td></tr><tr><td>4</td><td>XSP_EARLY_INT</td><td>XSP RX LRCK early.
0 Condition is not present
1 Condition is present</td></tr><tr><td>3</td><td>XSP_NOLRCK_INT</td><td>XSP RX no LRCK.
0 Condition is not present
1 Condition is present</td></tr><tr><td>2:0</td><td>—</td><td>Reserved</td></tr></table>

# 7.6.4 Interrupt Status 4


Address 0xF0003


<table><tr><td rowspan="2">R/O</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>HPLOAD_NO_DC_INT</td><td>HPLOAD_UNPLUG_INT</td><td>HPLOAD_HPON_INT</td><td>HPLOAD_OOR_INT</td><td>HPLOAD_AC_DONE_INT</td><td>HPLOAD_DC_DONE_INT</td><td>HPLOAD_OFF_INT</td><td>HPLOAD_ON_INT</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>HPLOAD_NO_DC_INT</td><td>HP load error condition: AC load detection is performed without DC load detection done first.0 Condition is not present1 Condition is present</td></tr><tr><td>6</td><td>HPLOAD_UNPLUG_INT</td><td>HP load error condition: Unplug event happened during load detection process.0 Condition is not present1 Condition is present</td></tr><tr><td>5</td><td>HPLOAD_HPON_INT</td><td>HP load error condition: HPLOAD_EN is set before PDN_HP is set and PDN_DONE_INT event is received.0 Condition is not present1 Condition is present</td></tr><tr><td>4</td><td>HPLOAD_OOR_INT</td><td>HP load error condition: HPLOAD out of range result is measured.0 Condition is not present1 Condition is present</td></tr><tr><td>3</td><td>HPLOAD_AC_DONE_INT</td><td>Status indicating HP AC load measurement is completed.0 Condition is not present1 Condition is present</td></tr><tr><td>2</td><td>HPLOAD_DC_DONE_INT</td><td>Status indicating HP DC load measurement is completed.0 Condition is not present1 Condition is present</td></tr><tr><td>1</td><td>HPLOAD_OFF_INT</td><td>HP load state machine is properly shut down after HPLOAD_EN is cleared.0 Condition is not present1 Condition is present</td></tr><tr><td>0</td><td>HPLOAD_ON_INT</td><td>HP load state machine is properly turned on after HPLOAD_EN is set.0 Condition is not present1 Condition is present</td></tr></table>

# 7.6.5 Interrupt Status 5


Address 0xF0004


<table><tr><td rowspan="3">R/O Default</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>DSD_STUCK_INT</td><td>DSD_INVALID_A_INT</td><td>DSD_INVALID_B_INT</td><td>DSD_SILENCE_A_INT</td><td>DSD_SILENCE_B_INT</td><td>DSD_RATE_ERROR_INT</td><td>DOP_MRK_DET_INT</td><td>DOP_ON_INT</td></tr><tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>DSD_STUCK_INT</td><td>At least one DSD input channel is stuck at 0 or 1. 
0 Condition is not present 
1 Condition is present</td></tr><tr><td>6</td><td>DSD_INVALID_A_INT</td><td>Channel A input exceeds the max peak level of +3.1-dB SACD. 
0 Condition is not present 
1 Condition is present</td></tr><tr><td>5</td><td>DSD_INVALID_B_INT</td><td>Channel B input exceeds the max peak level of +3.1-dB SACD. 
0 Condition is not present 
1 Condition is present</td></tr><tr><td>4</td><td>DSD_SILENCE_A_INT</td><td>Channel A contains DSD silence pattern. 
0 Condition is not present 
1 Condition is present</td></tr><tr><td>3</td><td>DSD_SILENCE_B_INT</td><td>Channel B contains DSD silence pattern. 
0 Condition is not present 
1 Condition is present</td></tr><tr><td>2</td><td>DSD_RATE_ERROR_INT</td><td>DSD data rate related error is detected. The rate of the input DSD stream is not as described in DSD_SPEED setting. If missed DoP header(s) is detected, the interrupt will also be triggered. 
0 Condition is not present 
1 Condition is present</td></tr><tr><td>1</td><td>DOP_MRK_DET_INT</td><td>A valid sequence of DoP markers has been detected. 
0 Condition is not present 
1 Condition is present</td></tr><tr><td>0</td><td>DOP_ON_INT</td><td>The DoP decoder is powered up. 
0 Condition is not present 
1 Condition is present</td></tr></table>

# 7.6.6 Interrupt Mask 1


Address 0xF0010


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>DAC_OVFL_INT_MASK</td><td>HPDETECT Plug_INT_MASK</td><td>HPDETECT UNPLUG_INT_MASK</td><td>XTAL_READY_INT_MASK</td><td>XTAL_ERROR_INT_MASK</td><td>PLLReadyINT_MASK</td><td>PLL_ERROR_INT_MASK</td><td>PDN_DONE_INT_MASK</td></tr><tr><td>Default</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>DAC_OVFL_INT_MASK</td><td>DAC_OVFL_INT mask.
0 Unmasked
1 (Default) Masked</td></tr><tr><td>6</td><td>HPDETECT Plug_INT_MASK</td><td>HP_DETECT Plug_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>5</td><td>HPDETECT UNPLUG_INT_MASK</td><td>HP Detect UNPLUG INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>4</td><td>XTAL READY_INT_MASK</td><td>XTAL READY INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>3</td><td>XTAL_ERROR_INT_MASK</td><td>XTAL_ERROR_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>2</td><td>PLL_READY_INT_MASK</td><td>PLL READY INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>1</td><td>PLL_ERROR_INT_MASK</td><td>PLL_ERROR_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>0</td><td>PDN_DONE_INT_MASK</td><td>PDN_DONE INT mask.0 Unmasked1 (Default) Masked</td></tr></table>


7.6.7 Interrupt Mask 2



Address 0xF0011


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>ASP_OVFL_INT_MASK</td><td>ASP_ERROR_INT_MASK</td><td>ASP_LATE_INT_MASK</td><td>ASP_EARLY_INT_MASK</td><td>ASP_NOLRCK_INT_MASK</td><td colspan="3">—</td></tr><tr><td>Default</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>ASP_OVFL_INT_MASK</td><td>ASP_OVFL_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>6</td><td>ASP_ERROR_INT_MASK</td><td>ASP_ERROR_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>5</td><td>ASP_LATE_INT_MASK</td><td>ASP_LATE_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>4</td><td>ASP_EARLY_INT_MASK</td><td>ASP_EARLY_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>3</td><td>ASP_NOLRCK_INT_MASK</td><td>ASP_NOLRCK_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>2:0</td><td>—</td><td>Reserved</td></tr></table>


7.6.8 Interrupt Mask 3



Address 0xF0012


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>XSP_OVFL_INT_MASK</td><td>XSP_ERROR_INT_MASK</td><td>XSP_LATE_INT_MASK</td><td>XSP_EARLY_INT_MASK</td><td>XSP_NOLRCK_INT_MASK</td><td colspan="3">—</td></tr><tr><td>Default</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td><td>0</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>XSP_OVFL_INT_MASK</td><td>XSP_OVFL_INT mask.
0 Unmasked
1 (Default) Masked</td></tr><tr><td>6</td><td>XSP_ERROR_INT_MASK</td><td>XSP_ERROR_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>5</td><td>XSP_LATE_INT_MASK</td><td>XSP_LATE_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>4</td><td>XSP_EARLY_INT_MASK</td><td>XSP_EARLY_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>3</td><td>XSP_NOLRCK_INT_MASK</td><td>XSP_NOLRCK_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>2:0</td><td>—</td><td>Reserved</td></tr></table>


7.6.9 Interrupt Mask 4



Address 0xF0013


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>HPLOAD_NO_DC_INT_MASK</td><td>HPLOAD_UNPLUG_INT_MASK</td><td>HPLOAD_HPON_INT_MASK</td><td>HPLOAD_OOR_INT_MASK</td><td>HPLOAD_AC_DONE_INT_MASK</td><td>HPLOAD_DC_DONE_INT_MASK</td><td>HPLOAD_OFF_INT_MASK</td><td>HPLOAD_ON_INT_MASK</td></tr><tr><td>Default</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>HPLOAD_NO_DC_INT_MASK</td><td>HPLOAD_NO_DC_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>6</td><td>HPLOAD_UNPLUG_INT_MASK</td><td>HPLOAD_UNPLUG_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>5</td><td>HPLOAD_HPON_INT_MASK</td><td>HPLOAD_HPON_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>4</td><td>HPLOAD_OOR_INT_MASK</td><td>HPLOAD_OOR_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>3</td><td>HPLOAD_AC_DONE_INT_MASK</td><td>HPLOAD_AC_DONE_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>2</td><td>HPLOAD_DC_DONE_INT_MASK</td><td>HPLOAD_DC_DONE_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>1</td><td>HPLOAD_OFF_INT_MASK</td><td>HPLOAD_OFF_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>0</td><td>HPLOAD_ON_INT_MASK</td><td>HPLOAD_ON_INT mask.0 Unmasked1 (Default) Masked</td></tr></table>


7.6.10 Interrupt Mask 5



Address 0xF0014


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td>DSD_STUCK_INT_MASK</td><td>DSD_INVALID_A_INT_MASK</td><td>DSD_INVALID_B_INT_MASK</td><td>DSD_SILENCE_A_INT_MASK</td><td>DSD_SILENCE_B_INT_MASK</td><td>DSD_RATE_ERROR_INT_MASK</td><td>DOP_MRK_DET_INT_MASK</td><td>DOP_ON_INT_MASK</td></tr><tr><td>Default</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td><td>1</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7</td><td>DSD_STUCK_INT_MASK</td><td>DSD_STUCK_INT mask.
0 Unmasked
1 (Default) Masked</td></tr><tr><td>6</td><td>DSD_INVALID_A_INT_MASK</td><td>DSD_INVALID_A_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>5</td><td>DSD_INVALID_B_INT_MASK</td><td>DSD_INVALID_B_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>4</td><td>DSD_SILENCE_A_INT_MASK</td><td>DSD_SILENCE_A_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>3</td><td>DSD_SILENCE_B_INT_MASK</td><td>DSD_SILENCE_B_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>2</td><td>DSD_RATE_ERROR_INT_MASK</td><td>DSD_RATE_ERROR_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>1</td><td>DOP_MRK_DET_INT_MASK</td><td>DOP_MRK_DET_INT mask.0 Unmasked1 (Default) Masked</td></tr><tr><td>0</td><td>DOP_ON_INT_MASK</td><td>DOP_ON_INT mask.0 Unmasked1 (Default) Masked</td></tr></table>

# 7.6.11 ASP Master Mode Slew Rate Control


Address 0x10 0000


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="3">—</td><td colspan="2">SCLK1_SLEW_RATE</td><td colspan="2">—</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:4</td><td>—</td><td>Reserved</td></tr><tr><td>3:2</td><td>SCLK1_SLEW_RATE</td><td>SCLK1 slew rate control.
00 Reserved
01 Recommended drive strength for clock rate higher than 12.288 MHz
10 (Default) Recommended drive strength for clock rate 12.288 MHz or lower.
11 Reserved</td></tr><tr><td>1:0</td><td>—</td><td>Reserved</td></tr></table>

# 7.6.12 XSP Master Mode Slew Rate Control


Address 0x10 0001


<table><tr><td rowspan="2">R/W</td><td>7</td><td>6</td><td>5</td><td>4</td><td>3</td><td>2</td><td>1</td><td>0</td></tr><tr><td></td><td colspan="3">—</td><td>DSDCLK_SCLK2_SLEW_RATE</td><td colspan="3">—</td></tr><tr><td>Default</td><td>0</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td><td>1</td><td>0</td></tr></table>

<table><tr><td>Bits</td><td>Name</td><td>Description</td></tr><tr><td>7:4</td><td>—</td><td>Reserved</td></tr><tr><td>3:2</td><td>DSDCLK_SCLK2_SLEW_RATE</td><td>DSDCLK/SCLK2 slew rate control.
00 Reserved
01 Recommended drive strength for clock rate higher than 12.288 MHz
10 (Default) Recommended drive strength for clock rate 12.288 MHz or lower.
11 Reserved</td></tr><tr><td>1:0</td><td>—</td><td>Reserved</td></tr></table>

# 8 PCB Layout Considerations

The following sections provide general guidelines for PCB layout to ensure the best performance of the CS43131. 

# 8.1 Power Supply

As with any high-resolution converter, the CS43131 requires careful attention to power supply and grounding arrangements if its potential performance is to be realized. Fig. 2-1 shows the recommended power arrangements with VA and VCP connected to independent clean supplies. VL and VD, which power the digital circuitry, may be run from the shared system logic supply. 

# 8.2 Grounding

Note the following: 

Extensive use of power and ground planes, ground-plane fill in unused areas, and surface-mount decoupling capacitors are recommended. 

• Decoupling capacitors must be as close as possible to the CS43131 pins. 

To minimize inductance effects, the low-value ceramic capacitor must be closest to the pin and mounted on the same side of the board as the CS43131. 

• To avoid unwanted coupling into the modulators, all signals, especially clocks, must be isolated from the FILT $^ +$ and FILT- pins. 

• The FILT+ capacitors must be positioned to minimize the electrical path from the pin to VA. 

• The FILT– capacitors must be positioned to minimize the electrical path from the pin to –VA. 

• The VCP_FILT $^ +$ and VCP_FILT– capacitors must be positioned to minimize the electrical path from each respective pin to GNDCP. 

# 8.3 HPREFA and HPREFB Routing

For best interchannel isolation performance, HPREFA and HPREFB must be routed independently to the headphone connector reference pin. The HPREFA and HPREFB are electrically connected to system’s ground plane through via at the headphone connector ground pin. Fig. 2-1 illustrates the recommended arrangements. 

For interfacing the HPREFA and HPREFB pins with an IC that performs alternate pinout headset detect functions, both signals must be routed independently to the CS43131’s ground pin connecting the detected headset ground pole. Follow the recommended grounding scheme of the CS43131. 

# 8.4 QFN Thermal Pad

The CS43131 comes in a compact QFN package, the underside of which reveals a large metal pad that serves as a thermal relief to provide maximum heat dissipation. This pad must mate with a matching copper pad on the PCB and must be electrically connected to ground. A series of vias must be used to connect this copper pad to one or more larger ground planes on other PCB layers. For best performance in split-ground systems, connect this thermal pad to GNDA. 

# 9 Performance Plots

# 9.1 Digital Filter Response

# 9.1.1 Combined Filter Response—Single Speed (Fs = 32 kHz, Slow Roll-Off)

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/696bf4665c97fa5b26916257ee486f1c2cbde9cb1f32a41dbd7de13d5a0e4568.jpg)



Figure 9-1. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/698ae9afbec6f9885e891a7b503ec8b4621828c16bc131550eef58eb9a58cfb7.jpg)



Figure 9-3. Impulse Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/6141f62a4c32390ebfb28a9e2778d576cba777d418ea78a26ad8a2472302b671.jpg)



Figure 9-5. Step Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/ca52fb2aaf10e9f9030676c7bc93742fadbe041cd60413cc769d567d1c6ba2da.jpg)



Figure 9-2. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/689d7aacbdbbcc6327870f9555609d2f60e28414a5dc0a530b937bb21b8cca0a.jpg)



Figure 9-4. Impulse Response—Minimum Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/857553d830355806cae616ac4f627408049145ed77df3e4c98c88ce132ea8398.jpg)



Figure 9-6. Step Response—Minimum Phase



9.1.2 Combined Filter Response—Single Speed (Fs = 32 kHz, Fast Roll-Off)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/bfaa9c93cf62a026bcf773bfe77c33876f92c02688719fe315fb5bc647dc54c1.jpg)



Figure 9-7. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/b3bcd253a24de9eedd87b8fb418756180ab284de5c3d930d810e1dffe2bb0088.jpg)



Figure 9-9. Impulse Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/2d83afe06c948961c27572f7e23267165e85834e58fd2f78df67fe6f75973c14.jpg)



Figure 9-11. Step Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/212a661294cc0939cd49eede49b9f465231ef682eaf8130c55a5b98285168ece.jpg)



Figure 9-8. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/89db7097419696cfee4889cca5c4de221d4e2f66cb86882a4a5401273c2f87d5.jpg)



Figure 9-10. Impulse Response—Minimum Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/a3d9811d712c77a39ad2cc2f6378261c353916035ea3b095f6ecbc5f8abeee28.jpg)



Figure 9-12. Step Response—Minimum Phase



9.1.3 Combined Filter Response—Single Speed $( \mathsf { F s } = \pmb { 4 4 . 1 }$ and 48 kHz, Slow Roll-Off)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/c54ce6a74426369deecb3ad70cf6491cad6fc11a97df6a964bc3135967781459.jpg)



Figure 9-13. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/b428154d937e6ce4a88f3112415a824afdce993510055ed4860245eddc69bb2c.jpg)



Figure 9-15. Impulse Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/115f36277abbb20d0fdbd862cb9912550df199a922fddaa579ba5e0702bf5525.jpg)



Figure 9-17. Step Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/4f4891255afe27a6d117ac7411658a12374e3d9938402ca9f53028a1f6432ab3.jpg)



Figure 9-14. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/8e3e3f4c29f3d42af1fcdcb7f79aea8a649c1557e03b69c75f3f6de1440fe184.jpg)



Figure 9-16. Impulse Response—Minimum Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/84a70d2ceab73935ee66ac5221b07fc5232fb319c4d0e8b68a6f73bf1aa92d1d.jpg)



Figure 9-18. Step Response—Minimum Phase



9.1.4 Combined Filter Response—Single Speed $( \mathsf { F s } = \pmb { 4 4 . 1 }$ and 48 kHz, Fast Roll-Off)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/2745bafc67b075e5c7f2c4580ab050a131ae17719efa32fb3d07d5f4ed5db66b.jpg)



Figure 9-19. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/5dbffbf86e507284ab70d7ee0d972565363971b9c17786d3c506ed555c8e456f.jpg)



Figure 9-21. Impulse Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/2aabe0c8e9d323fb982a9b645658681f1d543f785f6d350464d6b72275ff9324.jpg)



Figure 9-23. Step Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/8cada473ffa6b9533f0e5d2db874f7416be1417e5fc12e5692fda9288c66a3ba.jpg)



Figure 9-20. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/1f5bd905652741becdbe2ef1e9632249113b70106bb933b93b122f2e97cb4608.jpg)



Figure 9-22. Impulse Response—Minimum Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/071486e989c6315e6dd06a8167a15e10d0006f83593527ce66c3896012898135.jpg)



Figure 9-24. Step Response—Minimum Phase


# 9.1.5 Combined Filter Response—Double Speed (Slow Roll-Off)

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/311660176ee125d7b771bcbd974261e8e2974649df80059f2ac24f54e5043624.jpg)



Figure 9-25. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/c34b464c69f3f655854f158fd7d81973cf1d193b1f35dcf60e83f28842bc76be.jpg)



Figure 9-27. Impulse Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/22708c87f4a97bbd3212b61e204c53413819de37163de5f66759b3993887b8fe.jpg)



Figure 9-29. Step Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/230b23e957cb86e9aa1f6914eacc62917f45822d80d9f6677e11773cf89874dd.jpg)



Figure 9-26. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/f599b489e1e8b62982cd4226cea7d2aa880876359cfe1d10ecb9ebb6ad58803c.jpg)



Figure 9-28. Impulse Response—Minimum Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/0c76ee4626e87bc39b7f66e6e1fdacf0ab13dd62fa8da972195284f613aeb780.jpg)



Figure 9-30. Step Response—Minimum Phase



9.1.6 Combined Filter Response—Double Speed (Fast Roll-Off)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/5b71f6b5c7bec03d9ac18c898f70f4368ab4006e0f0ca46e1350d8598c604b1c.jpg)



Figure 9-31. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/e3869f64b73a4e1f350180bd039a30470654add83c6f39243a2cb71076422259.jpg)



Figure 9-33. Impulse Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/d5b94a9639dbd6cdeab2079358b1597b9d1c70ee68456043da7c540aa52ec5ee.jpg)



Figure 9-35. Step Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/c0e63d1a04cdd919e9ac2e71a2127f5b91966ecb1222a46780beb85988362652.jpg)



Figure 9-32. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/90a57bb227a84abf7f734df8fc3692b361a4048c54936ac493a6aff5a8bcf3f6.jpg)



Figure 9-34. Impulse Response—Minimum Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/608ec924cc9d7de32d2d71769a63118c8014626d0f9c2fc6066610b914949be1.jpg)



Figure 9-36. Step Response—Minimum Phase



9.1.7 Combined Filter Response—Quad Speed (Slow Roll-Off)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/346875f72e8bc4c24f95c44134349f668acf2df5cfa4f5fc61ee5316ca0cc9c5.jpg)



Figure 9-37. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/1346a0213eb2e0da84a50233fca4dabc1335b87c10023e48c4f2ca1404534ca7.jpg)



Figure 9-39. Impulse Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/d391c95a05fcc4448091953ecdbeb2b34c7e82df02eba2ad32c991696840d199.jpg)



Figure 9-41. Step Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/f3c981cf4b301b04dfd8ba8571ee2eaaecf18bc90b0a7d412f6b10213163c3f6.jpg)



Figure 9-38. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/87713441ffeff563bc5d84ebb6d6b1d1ca7f6369f0bdda081688af24391de19b.jpg)



Figure 9-40. Impulse Response—Minimum Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/bab9323a5410e98f059bae113565c3b2ef36b7d47144784d964bc965ccd27bc5.jpg)



Figure 9-42. Step Response—Minimum Phase



9.1.8 Combined Filter Response—Quad Speed (Fast Roll-Off)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/8c756b1a66d9aabbefac6c30db00b2aaf433083133b520857a3aa87a3e30bff5.jpg)



Figure 9-43. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/c87e15bd9152a2e0b791a6e287c7db4796d04fb6a5c51e4b84e59fa966481bcf.jpg)



Figure 9-45. Impulse Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/1cc7c39ad9010762c19258f4cf67f357178bf568a2944f657d472fb6d0039d4a.jpg)



Figure 9-47. Step Response—Linear Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/87c481056e2a137ba2baded468b1f15f65224ec505757606c375eeb1fef0f964.jpg)



Figure 9-44. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/26e167dab82014191f6142438201061d6f6d20694d88a32b7b90c75eb598e69e.jpg)



Figure 9-46. Impulse Response—Minimum Phase


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/1a2d16269eb8b6b9b9dadbd1e9bb56b61bf295d5fc791e7d9758cc3bcad95c15.jpg)



Figure 9-48. Step Response—Minimum Phase


# 9.1.9 Combined Filter Response—Octuple Speed

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/d57ad902ce80e67619ba8208dcb06c1ea62ce669c82b19d47fb5bd42580ab25c.jpg)



Figure 9-49. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/4ab1628aab45666486610c8a12e61e936a1fd5e92b29f93854b41a587b4e6012.jpg)



Figure 9-50. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/bdeede886f9538d3bd805e91de8bf1638b3ab1034c5af74d1a9575eaf020b998.jpg)



Figure 9-51. Impulse Response


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/2543a4cd0cb4ca7102ee20332253aaeb8ad53027b5f296535e00b958a24ab7cc.jpg)



Figure 9-52. Step Response


# 9.1.10 Combined Filter Response—Single Speed $( \mathsf { N O S } = 1 )$

Note: 44.1 kHz and 48 kHz only. 

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/e28ad0125be39da8375216b15edf3c95345bb87c27cdf44245bfa2f69e3a5540.jpg)



Figure 9-53. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/f691ad8e86c6ccbd25de8f417a149d46c4c0112108fa28dc1fc33619dc417b2f.jpg)



Figure 9-54. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/3929ed44e41a93dade652c1919623786b4d2364f24a95a15441d451619cec2bf.jpg)



Figure 9-55. Impulse Response


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/30a9779f6d7da672821eddd3c246acbc4ac98988d5ed1bed947f54dc463d2f69.jpg)



Figure 9-56. Step Response


# 9.1.11 Combined Filter Response—Double Speed $( \mathsf { N O S } = 1 )$

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/31541d68e3c30c840c36acea8f56595c8f0c7a430c4755c85f9c5d498a7d18a4.jpg)



Figure 9-57. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/7060701bce364690b12a8f53562e207690fb944e93aceb51013d5c2344cad3c9.jpg)



Figure 9-58. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/fea85a78462fe89f94977e9634974e724506fe97e001ce1cb4b9718a77e1b550.jpg)



Figure 9-59. Impulse Response


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/dfdf7d005d0811b457389194ba88ab396de2f9b08e5de2cddf7e1898f067bb67.jpg)



Figure 9-60. Step Response


# 9.1.12 Combined Filter Response—Quad Speed (NOS = 1)

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/6b52765ddfc2c7909357b7f12333ac7bcb699875a79264445a000f79d5b967c3.jpg)



Figure 9-61. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/78da2b26adc7b4086abfc5f123e8f74a6b317cfcfc1c9504798846daddf7186c.jpg)



Figure 9-62. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/ee966fda5a6ca59285f017524a9c3ab5ad6c2a4bab6f5a2fe467fa31deb469c1.jpg)



Figure 9-63. Impulse Response


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/c7d745619dddbdae8504dfab4148427b413e87c507382d7b89994a3d822aca60.jpg)



Figure 9-64. Step Response


# 9.1.13 Combined Filter Response—Wideband Flatness Mode

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/c276ed00ede2b27af9d0cc633f3585ada86b9ee2ef2551fb7bfade9b2e2f2bac.jpg)



Figure 9-65. Magnitude Response



9.1.14 Combined Filter Response—DSD


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/69261993842180dba03fa89d7c497e28b0f95d9a001332b6cf33000691026f9c.jpg)



Figure 9-66. Passband Ripple


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/a34396327c31f5d3b66fd6d5ac22c635b3e158744f4121ff053e944e40fecc77.jpg)



Figure 9-68. Impulse Response


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/b0d0d2bfc60810a163621b81814d38e70f3bda09b39262ad730872e003b60a81.jpg)



Figure 9-67. Stopband Attenuation


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/366e8140d723f6c5af6ce4adfd03c9dd7895f5f85813a0cee0e79b80f8341012.jpg)



Figure 9-69. Step Response



9.1.15 Highpass Filter and Deemphasis


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/c4606ba88120a14ae98cfd4b0f649349fc8f0491926bb3977668863ddcd01405.jpg)



Figure 9-70. Highpass Filter for PCM and DSD Paths


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/276f8fdbe210057bc45061451ea4622af164f0c150f4f522e30dbd8286ffebc4.jpg)



Figure 9-71. Deemphasis


# 10 Package Dimensions

# 10.1 40-Pin QFN Package Dimensions

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/b88d93d6a99c7754168cf015c8f75a65f2bcb56e71c25731d884b0799089cb9c.jpg)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/578a9f8bf0dd53b7ca049ae41c945db96d1ca9bb5b71d195bd1ae460e6231abd.jpg)


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/fd4c4744fbb1e43ec75d96e4d8012a0fbe58d49b88fee538f69fbc42454e3812.jpg)



Figure 10-1. 40-Pin QFN Package Drawing



Table 10-1. 40-Pin QFN Package Dimensions


<table><tr><td rowspan="2" colspan="2">Description</td><td rowspan="2">Dim</td><td colspan="3">Millimeters</td></tr><tr><td>Minimum</td><td>Nominal</td><td>Maximum</td></tr><tr><td colspan="2">Total thickness</td><td>A</td><td>0.7</td><td>0.75</td><td>0.8</td></tr><tr><td colspan="2">Stand off</td><td>A1</td><td>0</td><td>0.035</td><td>0.05</td></tr><tr><td colspan="2">Mold thickness</td><td>A2</td><td>—</td><td>0.55</td><td>—</td></tr><tr><td colspan="2">L/F thickness</td><td>A3</td><td colspan="3">0.203 REF</td></tr><tr><td colspan="2">Lead width</td><td>b</td><td>0.15</td><td>0.2</td><td>0.25</td></tr><tr><td rowspan="2">Body size</td><td>X</td><td>D</td><td colspan="3">5 BSC</td></tr><tr><td>Y</td><td>E</td><td colspan="3">5 BSC</td></tr><tr><td colspan="2">Lead pitch</td><td>e</td><td colspan="3">0.4 BSC</td></tr><tr><td rowspan="2">EP size</td><td>X</td><td>J</td><td>3.4</td><td>3.5</td><td>3.6</td></tr><tr><td>Y</td><td>K</td><td>3.4</td><td>3.5</td><td>3.6</td></tr><tr><td colspan="2">Lead length</td><td>L</td><td>0.35</td><td>0.4</td><td>0.45</td></tr><tr><td colspan="2">Package edge tolerance</td><td>aaa</td><td colspan="3">0.1</td></tr><tr><td colspan="2">Mold flatness</td><td>bbb</td><td colspan="3">0.1</td></tr><tr><td colspan="2">Coplanarity</td><td>ccc</td><td colspan="3">0.08</td></tr><tr><td colspan="2">Lead offset</td><td>ddd</td><td colspan="3">0.1</td></tr><tr><td colspan="2">Exposed pad offset</td><td>eee</td><td colspan="3">0.1</td></tr></table>

# Notes:

• Dimensioning and tolerances per ASME Y 14.5M–1995. 

• X/Y Dimensions are estimates. 

• The Ball 1 location indicator shown above is for illustration purposes only and may not be to scale. 

• Dimensioning and tolerances per ASME Y 14.5M–1994. 

• Dimension “b” applies to the solder sphere diameter and is measured at the midpoint between the package body and the seating plane. 

# 10.2 42-Ball WLCSP Package Dimensions

![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/520c0990d9e9a9f5a21853404852b3b3f4d13f7a6bce7ebddee4c4fbc271d370.jpg)



TOP VIEW


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/649d26e5780226768002b0bd0f23620d08a56b3c902ebd70b8a9589c0a6f52e6.jpg)



SIDE VIEW


![image](https://cdn-mineru.openxlab.org.cn/result/2026-04-05/58b044b9-0505-4caa-853b-3ff8165324be/af54ee1e00da09777d8ae21d17e0d321433c52af6f641a6c9d4d678b1f15c4ac.jpg)



BOTTOM VIEW


<table><tr><td rowspan="2">Dimension</td><td colspan="3">Millimeters</td></tr><tr><td>Minimum</td><td>Nominal</td><td>Maximum</td></tr><tr><td>A</td><td>0.461</td><td>0.491</td><td>0.521</td></tr><tr><td>A1</td><td>0.175</td><td>0.19</td><td>0.205</td></tr><tr><td>A2</td><td>0.264</td><td>0.279</td><td>0.294</td></tr><tr><td>A3</td><td>REF</td><td>0.022</td><td>REF</td></tr><tr><td>b</td><td>0.24</td><td>0.27</td><td>0.3</td></tr><tr><td>c</td><td>0.3658</td><td>0.3908</td><td>0.4158</td></tr><tr><td>d</td><td>0.3286</td><td>0.3536</td><td>0.3786</td></tr><tr><td>e</td><td>BSC</td><td>0.4</td><td>BSC</td></tr><tr><td>M</td><td>BSC</td><td>2</td><td>BSC</td></tr><tr><td>N</td><td>BSC</td><td>2.4</td><td>BSC</td></tr><tr><td>X</td><td>2.6822</td><td>2.7072</td><td>2.7322</td></tr><tr><td>Y</td><td>3.1566</td><td>3.1816</td><td>3.2066</td></tr><tr><td>ddd=0.015</td><td></td><td></td><td></td></tr></table>


Notes: Controlling dimension is millimeters. 



Dimensioning and tolerances per ASMEY14.5-2009. The Ball A1 position 



indicator is forillustration purposes only and may not be to scale. 



Dimension "b" applies to the solder sphere diameterand is measured at the 



maximum solder sphere diameter, parallel to primary Datum C. 


# 11 Thermal Characteristics


Table 11-1. Typical JEDEC Four-Layer, 2s2p Board Thermal Characteristics


<table><tr><td>Parameter</td><td>Symbol</td><td>WLCSP</td><td>QFN</td><td>Units</td></tr><tr><td>Junction-to-ambient thermal resistance</td><td>θJA</td><td>42.3</td><td>32.7</td><td>°C/W</td></tr><tr><td>Junction-to-board thermal resistance</td><td>θJB</td><td>11.1</td><td>8.8</td><td>°C/W</td></tr><tr><td>Junction-to-case thermal resistance</td><td>θJC</td><td>0.22</td><td>0.92</td><td>°C/W</td></tr><tr><td>Junction-to-board thermal-characterization parameter</td><td>ΨJB</td><td>11.0</td><td>8.8</td><td>°C/W</td></tr><tr><td>Junction-to-package-top thermal-characterization parameter</td><td>ΨJT</td><td>0.09</td><td>0.23</td><td>°C/W</td></tr></table>

# Notes:

• Natural convection at the maximum recommended operating temperature TA (see Table 3-2) 

• Four-layer, 2s2p PCB as specified by JESD51-9 and JESD51-11; dimensions: 101.5 x 114.5 x 1.6 mm 

• Thermal parameters as defined by JESD51-12 

# 12 Ordering Information


Table 12-1. Ordering Information 1


<table><tr><td>Product</td><td>Description</td><td>Package</td><td>RoHS Compliant</td><td>Grade</td><td>Temperature Range</td><td>Container</td><td>Order Number</td></tr><tr><td rowspan="3">CS43131</td><td rowspan="3">130-dB, 32-Bit High-Performance DAC with Integrated Headphone Driver and Impedance Detection</td><td>42-ball WLCSP</td><td>Yes</td><td>Commercial</td><td>-20°C to +70°C</td><td>Tape and Reel</td><td>CS43131-CWZR</td></tr><tr><td rowspan="2">40-pin QFN</td><td rowspan="2">Yes</td><td rowspan="2">Commercial</td><td rowspan="2">-20°C to +70°C</td><td>Tray</td><td>CS43131-CNZ</td></tr><tr><td>Tape and Reel</td><td>CS43131-CNZR</td></tr></table>


1.The Revision ID fields in Section 7.1.4, “Revision ID,” list the alpha (AREVID) and metal (MTLREVID) revisions. 


# 13 References

• NXP Semiconductors, The I2C-Bus Specification and User Manual (UM10204). http://www.nxp.com/ 

# 14 Revision History


Table 14-1. Revision History


<table><tr><td>Revision</td><td>Changes</td></tr><tr><td>F1 OCT 2017</td><td>Initial release</td></tr><tr><td>F2 DEC 2022</td><td>Updated reset values for Interrupt Mask 2 register
Updated Ambient Temperature Minimum in Table 3-2 Recommended Operating Conditions from -10°C to -20°C
Updated Temperature Range in Table 12-1 Ordering Information from -10°C to -20°C</td></tr></table>


Important: Please check with your Cirrus Logic sales representative to confirm that you are using the latest revision of this document and to determine whether there are errata associated with this device. 


# Contacting Cirrus Logic Support

For all product questions and inquiries, contact a Cirrus Logic Sales Representative. To find one nearest you, go to www.cirrus.com. 

# IMPORTANT NOTICE

The products and services of Cirrus Logic International (UK) Limited; Cirrus Logic, Inc.; and other companies in the Cirrus Logic group (collectively either “Cirrus Logic” or “Cirrus”) are sold subject to Cirrus Logic’s terms and conditions of sale supplied at the time of order acknowledgment, including those pertaining to warranty, indemnification, and limitation of liability. Software is provided pursuant to applicable license terms. Cirrus Logic reserves the right to make changes to its products and specifications or to discontinue any product or service without notice. Customers should therefore obtain the latest version of relevant information from Cirrus Logic to verify that the information is current and complete. Testing and other quality control techniques are utilized to the extent Cirrus Logic deems necessary. Specific testing of all parameters of each device is not necessarily performed. In order to minimize risks associated with customer applications, the customer must use adequate design and operating safeguards to minimize inherent or procedural hazards. Cirrus Logic is not liable for applications assistance or customer product design. The customer is solely responsible for its overall product design, end-use applications, and system security, including the specific manner in which it uses Cirrus Logic components. Certain uses or product designs may require an intellectual property license from a third party. Features and operations described herein are for illustrative purposes only and do not constitute a suggestion or instruction to adopt a particular product design or a particular mode of operation for a Cirrus Logic component. 

CERTAIN APPLICATIONS USING SEMICONDUCTOR PRODUCTS MAY INVOLVE POTENTIAL RISKS OF DEATH, PERSONAL INJURY, OR SEVERE PROPERTY OR ENVIRONMENTAL DAMAGE (“CRITICAL APPLICATIONS”). CIRRUS LOGIC PRODUCTS ARE NOT DESIGNED, AUTHORIZED OR WARRANTED FOR USE IN PRODUCTS SURGICALLY IMPLANTED INTO THE BODY, AUTOMOTIVE SAFETY OR SECURITY DEVICES, NUCLEAR SYSTEMS, LIFE SUPPORT PRODUCTS OR OTHER CRITICAL APPLICATIONS. INCLUSION OF CIRRUS LOGIC PRODUCTS IN SUCH APPLICATIONS IS UNDERSTOOD TO BE FULLY AT THE CUSTOMER’S RISK AND CIRRUS LOGIC DISCLAIMS AND MAKES NO WARRANTY, EXPRESS, STATUTORY OR IMPLIED, INCLUDING THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR PARTICULAR PURPOSE, WITH REGARD TO ANY CIRRUS LOGIC PRODUCT THAT IS USED IN SUCH A MANNER. IF THE CUSTOMER OR CUSTOMER’S CUSTOMER USES OR PERMITS THE USE OF CIRRUS LOGIC PRODUCTS IN CRITICAL APPLICATIONS, CUSTOMER AGREES, BY SUCH USE, TO FULLY INDEMNIFY CIRRUS LOGIC, ITS OFFICERS, DIRECTORS, EMPLOYEES, DISTRIBUTORS AND OTHER AGENTS FROM ANY AND ALL LIABILITY, INCLUDING ATTORNEYS’ FEES AND COSTS, THAT MAY RESULT FROM OR ARISE IN CONNECTION WITH THESE USES. 

This document is the property of Cirrus Logic, and you may not use this document in connection with any legal analysis concerning Cirrus Logic products described herein. No license to any technology or intellectual property right of Cirrus Logic or any third party is granted herein, including but not limited to any patent right, copyright, mask work right, or other intellectual property rights. Any provision or publication of any third party’s products or services does not constitute Cirrus Logic’s approval, license, warranty or endorsement thereof. Cirrus Logic gives consent for copies to be made of the information contained herein only for use within your organization with respect to Cirrus Logic integrated circuits or other products of Cirrus Logic, and only if the reproduction is without alteration and is accompanied by all associated copyright, proprietary and other notices and conditions (including this notice). This consent does not extend to other copying such as copying for general distribution, advertising or promotional purposes, or for creating any work for resale. This document and its information is provided “AS IS” without warranty of any kind (express or implied). All statutory warranties and conditions are excluded to the fullest extent possible. No responsibility is assumed by Cirrus Logic for the use of information herein, including use of this information as the basis for manufacture or sale of any items, or for infringement of patents or other rights of third parties. Cirrus Logic, Cirrus, the Cirrus Logic logo design, and SoundClear are among the trademarks of Cirrus Logic. Other brand and product names may be trademarks or service marks of their respective owners. 

DSD and DSD Direct Stream Digital are registered trademarks of Sony Kabushiki TA Sony Corporation. 

Copyright © 2015–2022 Cirrus Logic, Inc. All rights reserved. 