CS43131

130-dB, 32-Bit High-Performance DAC with Integrated Headphone Driver
and Impedance Detection

System Features
• Enhanced  oversampling DAC architecture

— 32-bit resolution
— Up to 384-kHz sampling rate
— Low clock jitter sensitivity
— Auto mute detection

• Integrated high performance, ground-centered stereo

headphone outputs
— 130-dB dynamic range (A-weighted)
— –115-dB total harmonic distortion + noise (THD+N)
— 110-dB interchannel isolation
— Up to 2-Vrms stereo output
— Headphone power output

– 30 mW per channel into 32 
– 5 mW per channel into 600 

• Headphone detection

— Headphone DC and AC impedance measurement
— Headphone plug-in detection
— Popguard® technology eliminates pop noise

• Integrated PLL

— Support for 11.2896-/22.5792-, 12.288-/24.576-, 9.6-/
19.2-, 12-/24-, and 13-/26-MHz system MCLK rates

— Reference clock sourced from XTI/MCLK pin
— System clock output

• Mono Mode (differential) support
• I2C control—up to 1 MHz
• Wideband Flatness Mode Support

• Direct Stream Digital (DSD®) path

— Up to 256•Fs DSD
— Patented DSD processor

– On-chip 50-kHz filter to meet Scarlet Book Super
Audio Compact Disk (SACD) recommendations

– Matched PCM and DSD analog output levels
– Nondecimating volume control with 0.5-dB step size

and soft ramp

– DSD and Pulse-code modulation (PCM) mixing for

alerts

— Dedicated DSD and DoP pin interface

• Serial audio input path

— Programmable Hi-Fi digital filter
— Five selectable digital filter responses

– Low-latency Mode minimizes pre-echo
– 110 dB of stopband attenuation

— Supports sample rates from 32 to 384 kHz
— I2S, right-justified, left-justified, TDM, and

DSD-over-PCM (DoP) interface

— Master or slave operation
— Volume control with 0.5-dB step size and soft ramp
— 44.1 kHz deemphasis and inverting feature

• Alternate headphone input
• 40-pin 5mm × 5mm QFN or 42-ball CSP package options
Applications
• Smart phones, tablets, portable media players, laptops,
digital headphones, powered speakers, AVR, home
theater systems, Blu-ray/DVD/SACD players, and pro
audio

I NT

Interrupt
Sources

CLKOUT

PLL

XTO

XTAL
OSC

XTI/MCLK

SCLK1

LRCK1

SDIN1

DSDCLK/SCLK2

DSDB/LRCK2

DSDA/SDIN2

l

e
v
e
L

l

r
o
t
a
s
n
a
r
T

ASP

XSP/DSD
Audio
Interface

Interface
Supply  (VL)
+1.8V

Internal
Supply  (VD)
+1.8V

TSO

FILT+

FILT-

Analog Supply
(VA,VCP)
+1.8V

HPINA

Battery Supply
(VP)

s
u
B
o

i

d
u
A

l

a
t
i
g
D

i

Digital LDOs

Digital Core

Internal
Voltage
Reference

Charge Pump

Interpolation
Filter and
Volume
Control

Interpolation
Filter and
Volume
Control





Multibit

Modulator

Multibit

Modulator

DoP to
DSD
Engine

X
U
M

DSD
Processor

VA

DAC and
Filter

-VA

VA

DAC and
Filter

-VA

VCP_FILT +

+

–

VCP_FILT-

VCP_FILT+

+

–

VCP_FILT -

FLYC_VCP
FLYP_VCP
FLYN _VCP
VCP_FILT+
VCP_FILT -
FLYP_VA
FLYN_VA
-VA

HPOUTA

HPOUTB

Register /Hardware
Configuration

Control Port Level Translator

Popguard®
Circuitry

HP Detect,
HP Impedance
Detect and
Measure

HPREFA
HPREFB

HP_DETECT

http://www.cirrus.com

ADR

SDA SCL

RESET

HPINB

Copyright  Cirrus Logic, Inc. 2015–2022
(All Rights Reserved)

DS1155F2
DEC 2022

CS43131

General Description
The CS43131 is a high-performance, 32-bit resolution, stereo audio DAC that supports up to 384-kHz sampling frequency
with integrated low-noise ground-centered headphone amplifiers. The advanced 32-bit oversampled multibit modulator
with mismatch shaping technology eliminates distortion due to on-chip component mismatch. Proprietary
digital-interpolation filters support five selectable filter responses with pseudo-linear phase and ultralow latency to
minimize pre-echos and ringing artifacts. An on-chip programmable filter is available for further response customization.
Other features include volume control with 0.5-dB steps, wideband flatness mode support, and digital deemphasis for
44.1-kHz sample rate.

The integrated ground-centered stereo headphone amplifiers are capable of delivering more than 30 mW into 32- load
or 5 mW into 600- load per channel at full performance. It is also capable of generating 2 Vrms on a 600- load.
Proprietary headphone impedance detection enables wide-band impedance detection for further digital post-processing.
An internal stereo audio switch with true bypass supports an alternate analog input path for interfacing with external audio
sources to minimize the overall bill-of-materials cost and PCB area.

The patented on-chip DSD processor preserves audio integrity by allowing signal processing such as volume control and
50-kHz Scarlet Book recommended filtering to be applied directly to the DSD stream without an intermediate decimation
stage. Additional features like volume matching and channel mixing enable seamless transition between DSD and PCM
playback paths.

The CS43131 accepts I2S, right-justified, left-justified, and TDM-format PCM data at sample rates from 32 to 384 kHz. The
industry-standard high-speed I2C interface capable of up to 1-MHz operation provides easy configuration control. An
integrated PLL allows for maximum clocking flexibility in any system. Popguard® technology eliminates output transients
upon power-up or power-down events.

The CS43131 is available in a commercial-grade 42-ball WLCSP or 40-pin QFN package for operation from –20°C to
+70°C.

2

DS1155F2

Table of Contents

CS43131

5.6 Headphone Power Down Sequences   . . . . . . . . . . . . . . . . . 65
5.7 Headphone Power-Up Sequence . . . . . . . . . . . . . . . . . . . . . 66
5.8 Power-Down Sequence in External VCPFILT Mode  . . . . . . 67
5.9 Enabling and Disabling NOS Filter . . . . . . . . . . . . . . . . . . . . 69
5.10 Sequence for Using PCM Invert Bits  . . . . . . . . . . . . . . . . . 70
5.11 Sequences for Using the PCM Channel Swap Bit  . . . . . . . 72
5.12 Sequences for Enabling and Disabling Mono Mode for PCM
Playback . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 73
5.13 Example Sequences   . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 74
5.14 Headphone Load Measurement . . . . . . . . . . . . . . . . . . . . . 99
6 Register Quick Reference  . . . . . . . . . . . . . . . . . . . . . . . . . . . . 106
6.1 Global Registers . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 106
6.2 PLL Registers . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 106
6.3 ASP and XSP Registers . . . . . . . . . . . . . . . . . . . . . . . . . . . 107
6.4 DSD Registers  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 108
6.5 Headphone and PCM Registers . . . . . . . . . . . . . . . . . . . . . 109
6.6 Interrupt Status and Mask Registers   . . . . . . . . . . . . . . . . . 112
7 Register Descriptions  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 113
7.1 Global Registers . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 113
7.2 PLL Registers . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 116
7.3 ASP and XSP Registers . . . . . . . . . . . . . . . . . . . . . . . . . . . 118
7.4 DSD Registers  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 124
7.5 Headphone  and PCM Registers  . . . . . . . . . . . . . . . . . . . . 127
7.6 Interrupt Status and Mask Registers   . . . . . . . . . . . . . . . . . 134
8 PCB Layout Considerations  . . . . . . . . . . . . . . . . . . . . . . . . . . 140
8.1 Power Supply  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 140
8.2 Grounding . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 140
8.3 HPREFA and HPREFB Routing . . . . . . . . . . . . . . . . . . . . . 140
8.4 QFN Thermal Pad   . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 140
9 Performance Plots  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 141
9.1 Digital Filter Response  . . . . . . . . . . . . . . . . . . . . . . . . . . . . 141
10 Package Dimensions  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 153
10.1 40-Pin QFN Package Dimensions  . . . . . . . . . . . . . . . . . . 153
10.2 42-Ball WLCSP Package Dimensions  . . . . . . . . . . . . . . . 154
11 Thermal Characteristics   . . . . . . . . . . . . . . . . . . . . . . . . . . . . 155
12 Ordering Information  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 155
13 References  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 155
14 Revision History . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 155

1 Pin Assignments and Descriptions  . . . . . . . . . . . . . . . . . . . . . . 4
1.1 40-Pin QFN (Top-Down, Through-Package View)  . . . . . . . . . 4
1.2 42-Ball WLCSP (Top-down, Through-Package View)  . . . . . . 5
1.3 Pin Descriptions  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 6
1.4 Electrostatic Discharge (ESD) Protection Circuitry   . . . . . . . . 8
2 Typical Connection Diagram   . . . . . . . . . . . . . . . . . . . . . . . . . . 10
3 Characteristics and Specifications   . . . . . . . . . . . . . . . . . . . . . 12
Table 3-1.  Parameter Definitions . . . . . . . . . . . . . . . . . . . . . . . . 12
Table 3-2.  Recommended Operating Conditions   . . . . . . . . . . . 12
Table 3-3.  Absolute Maximum Ratings    . . . . . . . . . . . . . . . . . . 13
Table 3-4.  Analog Output Characteristics (HV_EN = 1)     . . . . . 13
Table 3-5.  Analog Output Characteristics (HV_EN = 0)     . . . . . 15
Table 3-6.  Wideband Flatness Mode Analog Output Characteristics
17
Table 3-7.  Headphone Load Measurement   . . . . . . . . . . . . . . . 18
Table 3-8.  Alternate Headphone Path   . . . . . . . . . . . . . . . . . . . 19
Table 3-9.  Combined DAC Digital, On-Chip Analog and HPOUTx Fil-
ter Characteristics   . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 19
Table 3-10.  Combined DAC Digital, On-Chip Analog and HPOUTx
Filter Characteristics (Wideband Flatness Mode)   . . . . . . . . . . . 21
Table 3-11.  DAC High-Pass Filter (HPF) Characteristics  . . . . . 21
Table 3-12.  DSD Combined Digital and On-Chip Analog Filter
Response    . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 22
Table 3-13.  Digital Interface Specifications and Characteristics  22
Table 3-14.  CLKOUT Characteristics  . . . . . . . . . . . . . . . . . . . . 22
Table 3-15.  PLL Characteristics   . . . . . . . . . . . . . . . . . . . . . . . . 22
Table 3-16.  Crystal Characteristics    . . . . . . . . . . . . . . . . . . . . . 23
Table 3-17.  Power-Supply Rejection Ratio (PSRR) Characteristics
23
Table 3-18.  DC Characteristics    . . . . . . . . . . . . . . . . . . . . . . . . 24
Table 3-19.  Power Consumption   . . . . . . . . . . . . . . . . . . . . . . . 24
Table 3-20.  Serial-Port Interface Characteristics   . . . . . . . . . . . 24
Table 3-21.  DSD Switching Characteristics   . . . . . . . . . . . . . . . 25
Table 3-22.  I2C Slave Port Characteristics  . . . . . . . . . . . . . . . . 26
4 Functional Description   . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 28
4.1 Overview   . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 28
4.2 Analog Outputs . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 31
4.3 Class H Amplifier Output   . . . . . . . . . . . . . . . . . . . . . . . . . . . 32
4.4 Alternate Headphone Inputs . . . . . . . . . . . . . . . . . . . . . . . . . 37
4.5 Headphone Presence Detect and Output Load Detection  . . 38
4.6 Clocking Architecture  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 41
4.7 Clock Output and Fractional-N PLL  . . . . . . . . . . . . . . . . . . . 44
4.8 Filtering Options  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 46
4.9 Audio Serial Port (ASP)  . . . . . . . . . . . . . . . . . . . . . . . . . . . . 47
4.10 DSD Interface . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 55
4.11 DSD and PCM Mixing   . . . . . . . . . . . . . . . . . . . . . . . . . . . . 57
4.12 Standard Interrupts . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 57
4.13 Control Port Operation  . . . . . . . . . . . . . . . . . . . . . . . . . . . . 59
4.14 Programmable Filter . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 62
5 Applications  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 63
5.1 PLL Clocking   . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 63
5.2 Power Sequencing  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 63
5.3 Crystal Tuning   . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 63
5.4 Alert Mixing Shutdown  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 64
5.5 Enable/Disable Alternate Headphone Path (HPINx)   . . . . . . 64

DS1155F2

3

1 Pin Assignments and Descriptions

1.1  40-Pin QFN (Top-Down, Through-Package View)

CS43131
1 Pin Assignments and Descriptions

I

2
N
D
S
A
D
S
D

/

1
K
C
R
L

A
D
S

K
L
C
M

/
I

T
X

/

2
K
L
C
S
K
L
C
D
S
D

L
V

D
D
N
G

1
K
L
C
S

O
T
X

T
U
O
K
L
C

SCL

SDIN1

TSO

VD

FILT+

FILT–

VA

GNDA

–VA

1

2

3

4

5

6

7

8

9

FLYP_VA

10

40

39

38

37

36

35

34

33

32

31

Top-Down (Through Package ) View
40-Pin QFN Package

11

12

13

A
V
_
N
Y
L
F

I

A
N
P
H

A
F
E
R
P
H

14

A
T
U
O
P
H

15

16

17

18

19

20

I

B
N
P
H

B
T
U
O
P
H

B
F
E
R
P
H

–
T
L
I
F
_
P
C
V

P
C
D
N
G

P
C
V
_
N
Y
L
F

30

29

28

27

26

25

24

23

22

21

ADR

DSDB/LRCK2

RESET

INT

VP

VCP

FLYP_VCP

FLYC_VCP

HP_DETECT

VCP_FILT+

Figure 1-1. Top-Down (Through-Package) View—QFN 40-Pin Diagram

4

DS1155F2

1.2  42-Ball WLCSP (Top-down, Through-Package View)

CS43131
1.2 42-Ball WLCSP (Top-down, Through-Package View)

A1

VL

B1

DSDB/
LRCK2

D1

VP

E1

A2

A3

A4

A5

A6

SCLK1

XTO

XTI/MCLK

DSDA/
SDIN2

SDIN1

B2

B3

B4

DSDCLK/
SCLK2

CLKOUT

LRCK1

SDA

C1

C2

C3

C4

ADR

GNDD

RESET

D2

VCP

E2

D3

TSI

E3

D4

FILT+

FILT–

E4

E5

FLYP_VCP

VCP_FILT+

HPREFB

HPREFA

GNDA

B5

SCL

C5

INT

D5

B6

TSO

C6

VD

D6

VA

E6

–VA

F1

F2

F3

F4

F5

F6

FLYC_VCP

GNDCP

HPINB

HP_DETECT

TSI

FLYP_VA

G1

G2

G3

G4

G5

G6

FLYN_VCP

VCP_FILT–

HPOUTB

HPOUTA

HPINA

FLYN_VA

Charge Pump

Analog I/O

Ground

Digital I/O

Power Supplies

Test

Figure 1-2. Top-Down (Through-Package) View—42-Ball WLCSP Package

DS1155F2

5

1.3  Pin Descriptions

Pin Name

QFN
Pin #

WLCSP
Ball

Power
Supply

I/O

Table 1-1.  Pin Descriptions

Pin Description

Digital I/O

Internal
Connection

Digital I/O
Driver

Digital I/O
Receiver

CS43131
1.3 Pin Descriptions

ADR
CLKOUT

SCLK1

30
33

34

C2
B2

A2

VL
VL

I Address Bit (I²C). In I²C Mode, ADR is a chip address pin.
O CLK Output. Single-ended clock output sourced from PLL or

buffered crystal.

VL

I/O Serial Audio Input Bit Clock 1. Serial bit clock for audio data on

the SDIN pins.

LRCK1

38

B3

VL

I/O Serial Audio Input Left/Right Clock. Word-rate clock for the

audio data on the SDIN pins.

SDIN1

2

A6

VL

I Serial Audio Input Data Port. Audio data serial input pin 1.

DSDA/
SDIN2

DSDB/
LRCK2

DSDCLK/
SCLK2

INT

RESET

40

A5

VL

I DSD Data Input A/Serial Data In 2. DSD audio or PCM audio

data serial input pin 2.

29

C1

VL

I/O DSD Data Input B/Serial Audio Input Left/Right Clock 2. DSD
audio data serial input pin or word rate clock for the audio data on
the SDIN2 pin.

32

B1

VL

I/O DSD Clock Input/Serial Audio Input Bit Clock 2. DSD clock

input. Serial bit clock for audio data on the SDIN2 pin.

27

C5

VP

O Interrupt. When pulled up, works as system interrupt pin. Open

drain, active low programmable.

28

C4

VP

I System Reset. The device enters system reset when enabled.

SDA

39

B4

VL

I/O Serial Control Data I/O (I²C). In I²C Mode, SDA is the control I/O

data line.

SCL

1

B5

VL

I Software Clock (I²C). Serial control interface clock used to clock

control data bits into and out of the CS43131.

XTI/MCLK

37

A4

VL

I Crystal/Oscillator Input/MCLK In. Crystal or digital clock input

for the master clock.

XTO

36

A3

VL

O Crystal/Oscillator Output. Crystal output.

Analog I/O
O Positive/Negative Voltage Reference. Positive/negative

reference voltage for DAC.

I Headphone Detect. Can be configured to be debounced on
unplugged and plugged events before it is presented as a
noninterrupt status bit (HPDETECT).

I Headphone Audio Input. For interfacing low power audio source,
an alternate analog input path for the headphone output. Refer to
analog specification table for full-scale input level.

Weak
pull-down

O Headphone Audio Output. Refer to analog specification table for

full-scale output level.

I Headphone Output Reference. Reference for headphone

amplifier and detect.

Power Supplies
I Logic Power. Input/Output power supply, typically +1.8 V.
I

Internal Digital Power. Internal digital power supply, typically
+1.8 V.

N/A

I Analog Power. Power supply for the internal analog section.

—

—

—
—

—

—

—

—

—
—

—

VA

VP

VCP_
FILT±

VCP_
FILT±

VCP_
FILT±

N/A
N/A

5
6
22

15
12

16
14
17
13

31
4

7

FILT+
FILT–
HP_
DETECT

HPINB
HPINA

HPOUTB
HPOUTA
HPREFB
HPREFA

VL
VD

VA

6

D4
D5
F4

F3
G5

G3
G4
E3
E4

A1
C6

D6

DS1155F2

—
Weak
pull-down
Weak
pull-down

—
CMOS
output
CMOS
output

Weak
pull-down

CMOS
output

Weak
pull-down

Weak
pull-down

—

—

Weak
pull-down

CMOS
output

Weak
pull-down

CMOS
output

—

—

—

—

CMOS
open-drain
output
—

CMOS
open-drain
output
—

Weak
pull-down

—

Weak
pull-down

CMOS
output

—

—

—

Hi-Z

—
—

Hysteresis
on CMOS
input
Hysteresis
on CMOS
input
Hysteresis
on CMOS
input
Hysteresis
on CMOS
input
Hysteresis
on CMOS
input
Hysteresis
on CMOS
input
—

Hysteresis
on CMOS
input
Hysteresis
on CMOS
input
Hysteresis
on CMOS
input
Hysteresis
on CMOS
input
—

—

—

—

—

—

—
—

—

Table 1-1.  Pin Descriptions  (Cont.)

Pin Name

VCP

QFN
Pin #
25

WLCSP
Ball
D2

Power
Supply
N/A

I/O

Pin Description

I Charge Pump Supply. Provides charge pump voltage to the

headphone Class H analog output circuit.

VP

26

D1

N/A

I Battery supply. Provides voltage to the headphone Class H

GNDD

35

C3

N/A

GNDA

8

E5

N/A

GNDCP

19

F2

N/A

circuit.

Ground

I Digital and I/O Ground. Ground for the I/O and core logic. GNDA,
GNDCP, and GNDD must be connected to a common ground area
under the chip.

I Analog Ground. Ground reference for the internal analog section.
GNDA, GNDCP, and GNDD must be connected to a common
ground area under the chip.

I Charge Pump Ground. Ground reference for the charge pump
section. GNDA, GNDCP, and GNDD must be connected to a
common ground area under the chip.

Charge Pump

VCP_FILT+
VCP_FILT–

–VA

FLYP_VA
FLYN_VA

FLYP_VCP

21
18

9

10
11

24

FLYC_VCP

23

FLYN_VCP

20

E2
G2

E6

F6
G6

E1

F1

G1

VCP/
VP 1

VA

VA

VCP/
VP 1
VCP/
VP 1
VCP_
FILT±

I/O Inverting Charge Pump Filter Connection. Power supply from
the inverting charge pump that provides the positive/negative rail
for the analog output. When operating in external VCP_FILT
mode, these pins can directly take in supply voltage.

O VA Negative Charge Pump Output. Negative charge pump

output for DAC rail. It is derived from VA.

O –VA Charge Pump Cap Positive/Negative Node. Positive/
negative nodes for the DAC negative charge pump’s flying
capacitor.

O –VCP Charge Pump Cap Positive Node. Positive node for the

analog output negative charge pump’s flying capacitor.

O –VCP Charge Pump Cap Center Node. Center node for the

analog output negative charge pump’s flying capacitor.

O –VCP Charge Pump Cap Negative Node. Negative node for the

analog output negative charge pump’s flying capacitor.

TSO
TSI

B6

3
— D3, F5

N/A

I/O Test Output.
Test Input.

Test

CS43131
1.3 Pin Descriptions

Internal
Connection
—

Digital I/O
Driver
—

Digital I/O
Receiver
—

—

—

—

—

—

—

—

—

—

—

—
—

—

—

—

—

—

—

—

—

—

—

—
—

—

—

—

—

—

—

—

—

—

—

—
—

1.The power supply is determined by ADPT_PWR setting (see Section 4.3.1). VP is used if ADPT_PWR = 001 (VP_LDO Mode) or when necessary for

ADPTPWR = 111 (Adapt-to-Signal Mode).

DS1155F2

7

CS43131
1.4 Electrostatic Discharge (ESD) Protection Circuitry

1.4  Electrostatic Discharge (ESD) Protection Circuitry

ESD-sensitive device. The CS43131 is manufactured on a CMOS process. Therefore, it is generically
susceptible to damage from excessive static voltages. Proper ESD precautions must be taken while
handling and storing this device. This device is qualified to current JEDEC ESD standards.

Fig. 1-3 provides a composite view of the ESD domains showing the ESD protection paths between each pad and the
substrate (GND), as well as the interrelations between some domains. Note that this figure represents the structure for the
internal protection devices and that additional protections can be implemented as part of the integration into the board.

VL

GNDD

Substrate

*

VP

VP/GNDCP Domain

VD

VCP

VA

GNDA

*

VCP_FILT+/VCP_FILT– Domain

VCP_FILT+

*

*

GNDCP

–VA

*

VP/VCP_FILT– Domain

VCP_FILT–

Figure 1-3. Composite ESD Topology

Table 1-2 shows the individual ESD domains and lists the pins associated with each domain.

ESD Domain

VL/GNDD

Signal Name
(See * in Topology Figures for Pad)
ADR
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
XTO

Table 1-2.  ESD Domains

Topology

VL

GNDD

Substrate

*

8

DS1155F2

CS43131
1.4 Electrostatic Discharge (ESD) Protection Circuitry

Table 1-2.  ESD Domains (Cont.)

ESD Domain

VA/–VA

Signal Name
(See * in Topology Figures for Pad)

FLYN_VA
FLYP_VA
FILT+
FILT–

Topology

VA

GNDA

*

Substrate

VP/GNDCP RESET

INT

VCP_FILT+/
VCP_FILT–

VP/VCP_FILT– FLYP_VCP
FLYC_VCP
HP_DETECT
FLYN_VCP
HPINA
HPINB
HPOUTA
HPOUTB
HPREFA
HPREFB

VP/GNDCP Domain

VP

VCP_FILT+/VCP_FILT– Domain

VCP_FILT+

–VA

*

*

GNDCP

Substrate

*

VP/VCP_FILT– Domain

VCP_FILT–

DS1155F2

9

2 Typical Connection Diagram

+1.8V

0.1 µF

*

VL

VD

0.1 µF

*

VP

CS43131

FILT+

15 µF

CS43131
2 Typical Connection Diagram

Battery
(3.0V-5.25V)

0.1 µF

4.7 µF

*

*

+1.8V

*

VA

-VA

FILT-

2.2 µF

2.2 µF

*

15 µF

*

*

FLYP_VA

2.2 µF

FLYN_VA

*

See
VCP_FILT
Configuration

2.2 µF

*
2.2 µF

*

VCP

VCP_FILT+

VCP_FILT–

GNDCP

FLYP_VCP

FLYC_VCP

FLYN _VCP

HPOUTB

HPOUTA

HP_DETECT

Headphone
Connector

1

2

3

GNDD

GNDA

HPREFA

HPREFB

CLKOUT

XTI / MCLK

XTO

DSDCLK/SCLK2

DSDB/LRCLK2

DSDA/SDIN2

SDIN1

LRCK1

SCLK1

HPINB

HPINA

ADR

SDA

SCL

RESET

INT

Audio
Devices

See Clocking
Configuration

DoP/DSD
Digital Audio
Source

PCM/DoP
Digital Audio
Source

Audio Codec
Headphone
Output

Applications
Processor/
Micro-
Controller

RP_I

VL

Note 1

Clocking Configuration

External MCLK

System
Clock

XTI/MCLK

XTO

XTAL

XTI/MCLK

XTO

**

**

All external passive component
values shown are nominal.

Key for Capacitor Types Required:
* Use low ESR, X7R/X5R capacitors

If no type symbol is shown next to a
capacitor, any type may be used.

** Use C0G capacitors.

VCP_FILT Configuration

EXT_VCPFILT = 0

EXT_VCPFILT = 1

VCP

VCP_FILT+

VCP_FILT–

GNDCP

FLYP_VCP

FLYC_VCP

FLYN _VCP

+1.8V

2.2 µF

2.2 µF

2.2 µF

*

*

*

2.2 µF

*
2.2 µF

*

VCP

VCP_FILT+

VCP_FILT–

GNDCP

FLYP_VCP

FLYC_VCP

FLYN _VCP

+1.8V

+3.0V

-3.0V

*

2.2 µF

*

2.2 µF

*

2.2 µF

2.2 µF

*

NC

Figure 2-1. Typical Connection Diagram

10

DS1155F2

CS43131
2 Typical Connection Diagram

Battery
(3.0V-5.25V)

0.1 µF

4.7 µF

*

*

+1.8V

VL

VD

0.1 µF

*

+1.8V

0.1 µF

*

Audio
Devices

CS43131

VP

FILT+

15 µF

*

VA

-VA

FILT-

2.2 µF

2.2 µF

*

15 µF

*

*

FLYP_VA

2.2 µF

FLYN_VA

*

See
VCP_FILT
Configuration

2.2 µF

*
2.2 µF

*

VCP

VCP_FILT+

VCP_FILT–

GNDCP

FLYP_VCP

FLYC_VCP

FLYN_VCP

HP_DETECT

HPOUTB

HPOUTA

HPREFA

HPREFB

XLR

2

3

1

CLKOUT

XTI / MCLK

XTO

DSDCLK/SCLK2

DSDB/LRCLK2

DSDA/SDIN2

SDIN1

LRCK1

SCLK1

HPINB

HPINA

ADR

SDA

SCL

RESET

INT

See Clocking
Configuration

DoP/DSD
Digital Audio
Source

PCM/DoP
Digital Audio
Source

Audio Codec
Headphone
Output

Applications
Processor/
Micro-
Controller

RP_I

VL

Note 1

GNDD

GNDA

Clocking Configuration

External MCLK

System
Clock

XTI/MCLK

XTO

XTAL

XTI/MCLK

XTO

**

**

All external passive component
values shown are nominal.

Key for Capacitor Types Required:
* Use low ESR, X7R/X5R capacitors
   If no type symbol is shown next to a
   capacitor, any type may be used.
** Use C0G capacitors.

VCP_FILT Configuration

EXT_VCPFILT = 0

EXT_VCPFILT = 1

VCP

VCP_FILT+

VCP_FILT–

GNDCP

FLYP_VCP

FLYC_VCP

FLYN_VCP

+1.8V

2.2 µF

2.2 µF

2.2 µF

*

*

*

2.2 µF

*
2.2 µF

*

VCP

VCP_FILT+

VCP_FILT–

GNDCP

FLYP_VCP

FLYC_VCP

FLYN_VCP

+1.8V

+3.0V

-3.0V

*

2.2 µF

*

2.2 µF

*

2.2 µF

2.2 µF

*

NC

Note:
1. The value for RP_I can be determined by the interrupt pin specification in Table 3-13.

Figure 2-2. Typical Connection Diagram (Mono Mode)

DS1155F2

11

3 Characteristics and Specifications

Table 3-1 defines parameters as they are characterized in this section.

Table 3-1. Parameter Definitions

CS43131
3 Characteristics and Specifications

Parameter
Dynamic range

Definition
The ratio of the rms value of the signal to the rms sum of all other spectral components over the specified bandwidth. A
signal-to-noise ratio measurement over the specified bandwidth made with a –60-dB signal; 60 dB is added to resulting
measurement to refer the measurement to full scale. This technique ensures that distortion components are below the
noise level and do not affect the measurement. This measurement technique has been accepted by the Audio Engineering
Society, AES17–1991, and the Electronic Industries Association of Japan, EIAJ CP–307. Dynamic range is expressed in
decibel units.
The change in gain value with temperature, expressed in ppm/°C units.

Gain drift
Idle channel noise The rms value of the signal with no input applied (properly back-terminated analog input, digital zero, or zero modulation

Interchannel gain
mismatch
Interchannel
phase mismatch
Interchannel
isolation

Load resistance
and capacitance

Output offset
voltage

Total harmonic
distortion + noise
(THD+N)
Turn-on time

input). Measured over the specified bandwidth.
The gain difference between left and right channel pairs. Interchannel gain mismatch is expressed in decibel units.

The phase difference between left and right channel pairs at 997-Hz sine wave input. Interchannel phase mismatch is ex-
pressed in degree units (with respect to 997-Hz sine wave input).
A measure of cross talk between the left and right channel pairs. Interchannel isolation is measured for each channel at
the converter's output with no signal to the input under test and a full-scale signal applied to the other channel. Interchannel
isolation is expressed in decibel units.
The recommended minimum resistance and maximum capacitance required for the internal op-amp's stability and signal
integrity. The load capacitance effectively moves the band-limiting pole of the amp in the output stage. Increasing load ca-
pacitance beyond the recommended value can cause the internal op-amp to become unstable.
The DC offset voltage present at the amplifier’s output when its input signal is in a mute state. The offset exists due to
CMOS process limitations and is proportional to analog volume settings. When measuring the offset out of the headphone
amplifier, the headphone amplifier is ON.
The ratio of the rms sum of distortion and noise spectral components across the specified bandwidth (typically 20 Hz–20
kHz) relative to the rms value of the signal. THD+N is measured at –1 and –20 dBFS for the analog input and at 0 and
–20 dB for the analog output, as suggested in AES17–1991 Annex A. THD+N is expressed in decibel units.
Turn-on time is measured from when the PDN_HP = 0 ACK signal is received to when the signal appears on the HP output.

Table 3-2. Recommended Operating Conditions
Test conditions (unless otherwise specified): GNDD = GNDA= GNDCP = 0 V, all voltages with respect to ground.

Parameters 1

Symbol

Minimum

Maximum

Units

DC power supply

Analog

Charge pump

VA

VCP

Filtered charge pump 2

EXT_VCPFLT = 1 VCP_FILT+

Battery supply

Digital Interface

Digital Internal

External voltage
applied to pin 3,4

Ambient temperature

HV_EN = 0, EXT_VCPFILT = 0
HV_EN = 1, EXT_VCPFILT = 0
EXT_VCPFILT = 1

HP_DETECT pin
VCP_FILT± domain pins 5
VL domain pins
VA domain pins
VP domain pins

VCP_FILT–

VP

VL

VD

VINHI
VVCPF
VVL
VVA
VVP
TA

1.66

1.66

2.85

–3.15

3.0
3.3
3.3

1.66

1.66

1.94

1.94

3.15

–2.85

5.25
5.25
5.25

1.94

1.94

–0.3 – VCP_FILT–
–0.3 – VCP_FILT–
–0.3
–0.3
–0.3

VP + 0.3
0.3 + VCP_FILT+
VL + 0.3
VA + 0.3
VP + 0.3

V

V

V

V

V
V
V

V

V

V
V
V
V
V

–20

+70

C

1.Device functional operation is guaranteed within these limits. Functionality is not guaranteed or implied outside of these limits. Operation outside of

these limits may adversely affect device reliability.

2.If +1dB_EN = 1, the minimum VCP_FILT+ voltage becomes 3.0 V, and the maximum VCP_FILT– voltage becomes –3.0 V.
3.The maximum over/undervoltage is limited by the input current.
4.Table 1-1 lists the power supply domain in which each CS43131 pin resides.
5.VCP_FILT± is specified in Table 3-18.

12

DS1155F2

Table 3-3. Absolute Maximum Ratings
Test conditions (unless otherwise specified): GNDD = GNDA= GNDCP = 0 V; all voltages with respect to ground.

CS43131
3 Characteristics and Specifications

DC power supply

Parameters

Analog
Battery
Charge pump
Filtered charge pump (positive)
Filtered charge pump (negative)
Digital interface
Digital internal

Symbol
VA
VP
VCP
VCP_FILT+
VCP_FILT–
VL
VD
Iin
TA
Tstg

Minimum
–0.3
–0.3
–0.3
–0.3
–3.3
–0.3
–0.3
—
–50
–65

Maximum Units

2.33
6.3
2.33
3.3
0.3
2.33
2.33
±10
+115
+150

V
V
V
V
V
V
V
mA
°C
°C

Input current 1
Ambient operating temperature (power applied)
Storage temperature
Caution: Stresses beyond “Absolute Maximum Ratings” levels may cause permanent damage to the device. These levels are stress ratings
only, and functional operation of the device at these or any other conditions beyond those indicated in Table 3-2, “Recommended Operating
Conditions” is not implied. Exposure to absolute maximum rating conditions for extended periods may affect device reliability.

1.Any pin except supplies and HPINx. Transient currents of up to ±100 mA on the analog input pins do not cause SCR latch-up.

Table 3-4. Analog Output Characteristics (HV_EN = 1) 1
Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; input test signal is a 32-bit, full-scale 997-Hz sine wave (unless
specified otherwise); GNDA = GNDCP = GNDD = 0 V; voltages are with respect to ground; HV_EN = 1; ASP_M/Sb = 1; typical, min/max performance
data taken with VA = VCP = 1.8 V; VL = VD = 1.8 V; VP = 3.6 V; TA = +25°C; measurement bandwidth is 20 Hz–20 kHz; ASP_SPRATE = 0001 (LRCK
= 44.1-kHz mode); PDN_XTAL = 0, MCLK_INT = 1, PLUS_1DB = 0, and MCLK_SRC_SEL = 00 (crystal frequency fXTAL = 22.5792 MHz);
Volume = 0 dB; when testing in DSD processor mode, DSD_ZERODB = 1; when testing noise related specifications (dynamic range, THD+N, idle
channel noise), no external impedance on HPREFx.

PCM and DSD Processor Mode Parameter 2,3,4

Minimum Typical Maximum Units

Dynamic range
(defined in Table 3-1)

24-bit, 32-bit, DSD

16-bit

THD+N
(defined in Table 3-1)

24-bit, 32-bit

16-bit

DSD

24-bit, 32-bit, DSD

Idle channel noise
(A-weighted)
(defined in Table 3-1)

Full-scale output voltage

Interchannel isolation 6(defined in Table 3-1)

THD+N
(defined in Table 3-1)

Full-scale output voltage

24-bit, 32-bit, DSD

HPOUTx
RL = 10 k
CL = 200 pF
OUT_FS = 11
Volume = 0 dB
+1dB_EN = 0,5
unless otherwise
specified

HPOUTx
RL = 10 k
CL = 200 pF
OUT_FS = 11
Volume = 0 dB
+1dB_EN = 1,
unless otherwise
specified

A-weighted
Unweighted
A-weighted
Unweighted

0 dB
–20 dB
–60 dB
0 dB
–20 dB
–60 dB
0 dB
–20 dB
–60 dB

217 Hz
1 kHz
20 kHz

0 dB

124
121
91
88

—
—
—
—
—
—
—
—
—

—

4.66

—
—
—

—

130
127
97
94

–115
–97
–67
–94
–74
–34
–108
–97
–67

0.55

4.90

120
120
100

–105

—
—
—
—

–109
—
–61
–88
—
–28
–101
—
–61

—

dB
dB
dB
dB

dB
dB
dB
dB
dB
dB
dB
dB
dB

µV

5.14

Vpp

—
—
—

—

dB
dB
dB

dB

5.42

5.70

5.99

Vpp

DS1155F2

13

CS43131
3 Characteristics and Specifications

Table 3-4. Analog Output Characteristics (HV_EN = 1) 1 (Cont.)
Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; input test signal is a 32-bit, full-scale 997-Hz sine wave (unless
specified otherwise); GNDA = GNDCP = GNDD = 0 V; voltages are with respect to ground; HV_EN = 1; ASP_M/Sb = 1; typical, min/max performance
data taken with VA = VCP = 1.8 V; VL = VD = 1.8 V; VP = 3.6 V; TA = +25°C; measurement bandwidth is 20 Hz–20 kHz; ASP_SPRATE = 0001 (LRCK
= 44.1-kHz mode); PDN_XTAL = 0, MCLK_INT = 1, PLUS_1DB = 0, and MCLK_SRC_SEL = 00 (crystal frequency fXTAL = 22.5792 MHz);
Volume = 0 dB; when testing in DSD processor mode, DSD_ZERODB = 1; when testing noise related specifications (dynamic range, THD+N, idle
channel noise), no external impedance on HPREFx.

PCM and DSD Processor Mode Parameter 2,3,4

Minimum Typical Maximum Units

HPOUTx
RL = 600 
CL = 200 pF
OUT_FS = 11
Volume = 0 dB
+1dB_EN = 0,
unless otherwise
specified

Dynamic range
(defined in Table 3-1)

24-bit, 32-bit, DSD

16-bit

THD+N
(defined in Table 3-1)

24-bit, 32-bit

16-bit

DSD

24-bit, 32-bit, DSD

Idle channel noise
(A-weighted)
(defined in Table 3-1)

Full-scale output voltage

Output power

Interchannel isolation (defined in Table 3-1)

24-bit, 32-bit, DSD

THD+N
(defined in Table 3-1)

Full-scale output voltage

Output power

HPOUTx
RL = 600 
CL = 200 pF
OUT_FS = 11
Volume = 0 dB
+1dB_EN = 1,
unless otherwise
specified

Other characteristics
for HPOUTx

Interchannel gain mismatch (defined in Table 3-1)

Interchannel phase mismatch (defined in Table 3-1)

Output offset voltage: Mute (defined in Table 3-1)

A-weighted
Unweighted
A-weighted
Unweighted

0 dB
–20 dB
–60 dB
0 dB
–20 dB
–60 dB
0 dB
–20 dB
–60 dB

217 Hz
1 kHz
20 kHz

0 dB

Gain drift (defined in Table 3-1)

Load resistance (RL)
Load capacitance (CL)
Turn-on time (defined in Table 3-1)

Click/pop during PDN_HP enable or disable

A-weighted

124
121
91
88

—
—
—
—
—
—
—
—
—

—

4.66

—

—
—
—

—

5.42

—

—

—

—

—

600

—

—

—

130
127
97
94

–115
–97
–67
–94
–74
–34
–108
–97
–67

0.55

4.90

5

120
120
100

–105

5.70

6.8

±0.1

—

±50

±100

—

—

—

—
—
—
—

–109
—
–61
–88
—
–28
–101
—
–61

—

5.14

—

—
—
—

—

5.99

—

—

±0.01

±100

—

—

1

12

±50

±100

dB
dB
dB
dB

dB
dB
dB
dB
dB
dB
dB
dB
dB

µV

Vpp

mW

dB
dB
dB

dB

Vpp

mW

dB

°

µV

ppm/°C



nF

ms

µV

1.This table also applies to external VCP_FILT supply mode: CS43131 power up procedure is per description in Section 5.13.1; EXT_VCPFILT = 1;

VCP_FILT+ and VCP_FILT– comply to Table 3-2 when EXT_VCPFILT = 1; in this mode, HV_EN must be set to 1.

2.One LSB of triangular PDF dither is added to PCM data.
3.Referred to the typical full-scale voltage. Applies to all THD+N and dynamic range values in the table.
4.DSD performance may be limited by the source recording. 0 dB-SACD = 50% modulation index.
5.The volume must be configured as indicated to achieve specified output characteristics.

14

DS1155F2

6.Output test configuration. Symbolized component values are specified in the test conditions.

CS43131
3 Characteristics and Specifications

HPOUTA

HPREFA

HPREFB

HPOUTB

Test Load

CLA

RLA

CLB

RLB

+
CH2

–

Measurement
Device

–

CH1

+

Table 3-5. Analog Output Characteristics (HV_EN = 0) 1
Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; input test signal is a 32-bit, full-scale 997-Hz sine wave (unless
specified otherwise); GNDA = GNDCP = GNDD = 0 V; voltages are with respect to ground; HV_EN = 0; ASP_M/Sb = 1; typical, min/max performance
data taken with VA = VCP = 1.8 V; VL = VD = 1.8 V; VP = 3.6 V; TA = +25°C; measurement bandwidth is 20 Hz–20 kHz; ASP_SPRATE = 0001 (LRCK
= 44.1-kHz mode); PDN_XTAL = 0, MCLK_INT = 1, and MCLK_SRC_SEL = 00 (crystal frequency fXTAL = 22.5792 MHz); Volume = 0 dB; when testing
in DSD processor mode, DSD_ZERODB = 1; when testing noise related specifications (dynamic range, THD+N, idle channel noise), no external
impedance on HPREFx.

PCM and DSD Processor Mode Parameter 2,3,4

Minimum Typical Maximum Units

HPOUTx;
RL = 10 k
CL = 200 pF
OUT_FS = 10
Volume = 0 dB,5
unless otherwise
specified

Dynamic range
(defined in Table 3-1)

24-bit, 32-bit, DSD

16-bit

THD+N
(defined in Table 3-1)

24-bit, 32-bit

16-bit

DSD

24-bit, 32-bit, DSD

Idle channel noise
(A-weighted)
(defined in Table 3-1)

Full-scale output voltage

Interchannel isolation 6 (defined in Table 3-1)

HPOUTx;
RL = 600 
CL = 200 pF
OUT_FS = 10
Volume = 0 dB,
unless otherwise
specified

Dynamic range
(defined in Table 3-1)

24-bit, 32-bit, DSD

16-bit

THD+N
(defined in Table 3-1)

24-bit, 32-bit

16-bit

DSD

24-bit, 32-bit, DSD

Idle channel noise
(A-weighted)
(defined in Table 3-1)

Full-scale output voltage

Output power

Interchannel isolation 6 (defined in Table 3-1)

DS1155F2

A-weighted
Unweighted
A-weighted
Unweighted

0 dB
–20 dB
–60 dB
0 dB
–20 dB
–60 dB
0 dB
–20 dB
–60 dB

217 Hz
1 kHz
20 kHz

A-weighted
Unweighted
A-weighted
Unweighted

0 dB
–20 dB
–60 dB
0 dB
–20 dB
–60 dB
0 dB
–20 dB
–60 dB

217 Hz
1 kHz
20 kHz

122
119
91
88

—
—
—
—
—
—
—
—
—

—

128
125
97
94

–113
–95
–65
–94
–74
–34
–109
–95
–65

0.55

—
—
—
—

–107
—
–59
–88
—
–28
–103
—
–59

—

dB
dB
dB
dB

dB
dB
dB
dB
dB
dB
dB
dB
dB

µV

3.76

3.96

4.16

Vpp

—
—
—

122
119
91
88

—
—
—
—
—
—
—
—
—

—

3.76

—

—
—
—

120
120
100

128
125
97
94

–113
–95
–65
–94
–74
–34
–109
–95
–65

0.55

3.96

3.3

120
120
100

—
—
—

—
—
—
—

–107
—
–59
–88
—
–28
–103
—
–59

—

4.16

—

—
—
—

dB
dB
dB

dB
dB
dB
dB

dB
dB
dB
dB
dB
dB
dB
dB
dB

µV

Vpp

mW

dB
dB
dB

15

CS43131
3 Characteristics and Specifications

Table 3-5. Analog Output Characteristics (HV_EN = 0) 1 (Cont.)
Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; input test signal is a 32-bit, full-scale 997-Hz sine wave (unless
specified otherwise); GNDA = GNDCP = GNDD = 0 V; voltages are with respect to ground; HV_EN = 0; ASP_M/Sb = 1; typical, min/max performance
data taken with VA = VCP = 1.8 V; VL = VD = 1.8 V; VP = 3.6 V; TA = +25°C; measurement bandwidth is 20 Hz–20 kHz; ASP_SPRATE = 0001 (LRCK
= 44.1-kHz mode); PDN_XTAL = 0, MCLK_INT = 1, and MCLK_SRC_SEL = 00 (crystal frequency fXTAL = 22.5792 MHz); Volume = 0 dB; when testing
in DSD processor mode, DSD_ZERODB = 1; when testing noise related specifications (dynamic range, THD+N, idle channel noise), no external
impedance on HPREFx.

PCM and DSD Processor Mode Parameter 2,3,4

Minimum Typical Maximum Units

HPOUTx;
RL = 32 
CL = 200 pF
OUT_FS = 01
Volume = 0 dB,
unless otherwise
specified

Dynamic range
(defined in Table 3-1)

24-bit, 32-bit, DSD

16-bit

THD+N
(defined in Table 3-1)

24-bit, 32-bit

16-bit

DSD

24-bit, 32-bit, DSD

Idle channel noise
(A-weighted)
(defined in Table 3-1)

Full-scale output voltage

Output power

Interchannel isolation 6(defined in Table 3-1)

HPOUTx;
RL = 16 
CL = 200 pF
OUT_FS = 00
Volume = 0 dB,
unless otherwise
specified

Dynamic range
(defined in Table 3-1)

24-bit, 32-bit

16-bit

THD+N
(defined in Table 3-1)

24-bit, 32-bit

16-bit

DSD

24-bit, 32-bit, DSD

Idle channel noise
(A-weighted)
(defined in Table 3-1)

Full-scale output voltage

Output power

Interchannel isolation 6 (defined in Table 3-1)

Other characteristics
for HPOUTx

Interchannel gain mismatch (defined in Table 3-1)

Interchannel phase mismatch (defined in Table 3-1)

Output offset voltage: Mute (defined in Table 3-1)

A-weighted
Unweighted
A-weighted
Unweighted

0 dB
–20 dB
–60 dB
0 dB
–20 dB
–60 dB
0 dB
–20 dB
–60 dB

217 Hz
1 kHz
20 kHz

A-weighted
Unweighted
A-weighted
Unweighted

0 dB
–20 dB
–60 dB
0 dB
–20 dB
–60 dB
0 dB
–20 dB
–60 dB

217 Hz
1 kHz
20 kHz

Gain drift (defined in Table 3-1)

Load resistance (RL)
Load capacitance (CL)
Turn-on time (defined in Table 3-1)

Audio latency after RESET released 7

Click/pop during PDN_HP enable or disable

A-weighted

119
116
91
88

—
—
—
—
—
—
—
—
—

—

2.68

—

—
—
—

113
110
89
86

—
—
—
—
—
—
—
—
—

—

1.34

—

—
—
—

—

—

—

—

16

—

—

—

—

125
122
97
94

–110
–92
–62
–94
–74
–34
–106
–92
–62

0.55

2.81

30.8

110
105
90

119
116
95
92

–100
–86
–56
–94
–74
–34
–100
–86
–56

0.55

1.41

15.6

105
100
85

±0.1

—

±50

±100

—

—

—

—

—
—
—
—

–104
—
–56
–88
—
–28
–96
—
–56

—

2.96

—

—
—
—

—
—
—
—

–94
—
–50
–88
—
–28
–94
—
–50

—

1.48

—

—
—
—

—

±0.01

±100

—

—

1

12

22

±50

±100

dB
dB
dB
dB

dB
dB
dB
dB
dB
dB
dB
dB
dB

µV

Vpp

mW

dB
dB
dB

dB
dB
dB
dB

dB
dB
dB
dB
dB
dB
dB
dB
dB

µV

Vpp

mW

dB
dB
dB

dB

°

µV

ppm/°C



nF

ms

ms

µV

16

DS1155F2

CS43131
3 Characteristics and Specifications

1.This table also applies to external VCP_FILT supply mode: CS43131 power up procedure as described in Section 4.3.5; EXT_VCPFILT=1; VCP_

FILT+ and VCP_FILT– comply to Table 3-2 when EXT_VCPFILT = 1; in this mode, HV_EN must be set to 1.

2.One LSB of triangular PDF dither is added to PCM data.
3.Referred to the typical full-scale voltage. Applies to all THD+N and dynamic range values in the table.
4.DSD performance may be limited by the source recording. 0 dB-SACD = 50% modulation index.
5.The volume must be configured as indicated to achieve specified output characteristics.
6.HP output test configuration. Symbolized component values are specified in the test

conditions.

HPOUTA

HPREFA

HPREFB

HPOUTB

Test Load

CLA

RLA

CLB

RLB

+
CH2

–

Measurement
Device

–

CH1

+

7.With I2C normal speed mode and 22.5792-MHz XTAL used as MCLK source, this specification is measured from reset released to when the audio

signal appears on the output per power-up sequence listed in Section 5.13.1. PCM_SZC should be set to Immediate (PCM_SZC = 00) to hear audio
at 20 ms after startup.

Table 3-6. Wideband Flatness Mode Analog Output Characteristics 1
Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; input test signal is a 32-bit, full-scale 997-Hz sine wave (unless
specified otherwise); GNDA = GNDCP = GNDD = 0 V; voltages are with respect to ground; ASP_M/Sb = 1; typical, min/max performance data taken with
VA = VCP = 1.8 V; VL = VD = 1.8 V; VP = 3.6 V; TA = +25°C; measurement bandwidth is 20 Hz–90 kHz; ASP_SPRATE = 0110 (LRCK = 192-kHz mode);
PDN_XTAL = 0, MCLK_INT = 1, and MCLK_SRC_SEL = 00 (crystal frequency fXTAL = 22.5792 MHz); Volume = 0 dB; when testing noise related
specifications (dynamic range, THD+N, idle channel noise), no external impedance on HPREFx.

Wideband Flatness Mode Parameter 2,3

Minimum Typical Maximum Units

Dynamic range
(defined in Table 3-1)

24-bit, 32-bit

A-weighted

122

128

—

THD+N (20 Hz–20 kHz,
defined in Table 3-1)

24-bit, 32-bit

24-bit, 32-bit

Idle channel noise
(A-weighted)
(defined in Table 3-1)

Full-scale output voltage

Output power

Interchannel isolation (defined in Table 3-1)

24-bit, 32-bit

THD+N (20 Hz–20 kHz,
defined in Table 3-1)

Full-scale output voltage

Output power

0 dB
–20 dB
–60 dB

217 Hz
1 kHz
20 kHz

0 dB

—
—
—

—

4.66

—

—
—
—

—

5.42

—

–112
–97
–67

0.69

4.90

5

120
120
110

–105

5.7

6.8

–106
—
–61

—

5.14

—

—
—
—

–99

5.99

—

dB

dB
dB
dB

µV

Vpp

mW

dB
dB
dB

dB

Vpp

mW

HPOUTx
RL = 600 
CL = 200 pF
OUT_FS = 11
Volume = 0 dB
+1dB_EN = 0
HV_EN = 1,
unless otherwise
specified

HPOUTx
RL = 600 
CL = 200 pF
OUT_FS = 11
Volume = 0 dB
+1dB_EN = 1
HV_EN = 1,
unless otherwise
specified

DS1155F2

17

CS43131
3 Characteristics and Specifications

Table 3-6. Wideband Flatness Mode Analog Output Characteristics 1 (Cont.)
Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; input test signal is a 32-bit, full-scale 997-Hz sine wave (unless
specified otherwise); GNDA = GNDCP = GNDD = 0 V; voltages are with respect to ground; ASP_M/Sb = 1; typical, min/max performance data taken with
VA = VCP = 1.8 V; VL = VD = 1.8 V; VP = 3.6 V; TA = +25°C; measurement bandwidth is 20 Hz–90 kHz; ASP_SPRATE = 0110 (LRCK = 192-kHz mode);
PDN_XTAL = 0, MCLK_INT = 1, and MCLK_SRC_SEL = 00 (crystal frequency fXTAL = 22.5792 MHz); Volume = 0 dB; when testing noise related
specifications (dynamic range, THD+N, idle channel noise), no external impedance on HPREFx.

Wideband Flatness Mode Parameter 2,3

Minimum Typical Maximum Units

24-bit, 32-bit

A-weighted

117

123

HPOUTx;
RL = 32 
CL = 200 pF
OUT_FS = 01
Volume = 0 dB
HV_EN = 0,
unless otherwise
specified

Dynamic range
(defined in Table 3-1)

Dynamic range
(MCLK = 19.2 MHz,
MCLK_SRC_SEL = 01,
MCLK_INT = 1)

THD+N (20 Hz–20 kHz,
defined in Table 3-1)

24-bit, 32-bit (DRE_EN = 1)

24-bit, 32-bit (DRE_EN = 0)

24-bit, 32-bit

THD+N (20 Hz–90 kHz,
defined in Table 3-1)

24-bit, 32-bit

24-bit, 32-bit

Idle channel noise
(A-weighted)
(defined in Table 3-1)

Full-scale output voltage

Output power

Interchannel isolation 4 (defined in Table 3-1)

A-weighted
Unweighted
A-weighted
Unweighted

0 dB
–20 dB
–60 dB

0 dB
–20 dB
–60 dB

217 Hz
1 kHz
20 kHz

115
88
94
64

—
—
—

—
—
—

—

2.68

—

—
—
—

—

—

—

—

6

—

—

—

121
94
100
70

–110
–92
–62

–89
–78
–38

0.69

2.81

30.8

110
105
90

±0.1

—

±50

±100

—

—

—

—

—
—
—
—

–104
—
–56

–83
—
–32

—

2.96

—

—
—
—

—

±0.01

±100

—

—

1

12

dB

dB
dB
dB
dB

dB
dB
dB

dB
dB
dB

µV

Vpp

mW

dB
dB
dB

dB

°

µV

ppm/°C



nF

ms

µV

Other characteristics
for HPOUTx

Interchannel gain mismatch (defined in Table 3-1)

Interchannel phase mismatch (defined in Table 3-1)

Output offset voltage: Mute (defined in Table 3-1)

Gain drift (defined in Table 3-1)

Load resistance (RL)
Load capacitance (CL)
Turn-on time (defined in Table 3-1)

Click/pop during PDN_HP enable or disable

A-weighted

±50

±100

1.This table also applies to external VCP_FILT supply mode: CS43131 power up procedure is per description in Section 5.13.1; EXT_VCPFILT = 1;

VCP_FILT+ and VCP_FILT– comply to Table 3-2 when EXT_VCPFILT = 1; in this mode, HV_EN must be set to 1.

2.One LSB of triangular PDF dither is added to PCM data.
3.Referred to the typical full-scale voltage. Applies to all THD+N and dynamic range values in the table.
4.HP output test configuration. Symbolized component values are specified in the test

conditions.

HPOUTA

HPREFA

HPREFB

HPOUTB

Test Load

CLA

RLA

CLB

RLB

+
CH2

–

Measurement
Device

–

CH1

+

Table 3-7. Headphone Load Measurement
Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; GNDD = GNDCP = GNDA = 0 V; voltages are with respect to
ground; typical performance data taken with VP = 3.6 V, VCP = VA = 1.8 V, VL = VD = 1.8 V; min/max performance data taken with VP = 3.6 V,
VCP = VA = 1.8 V, VL = VD = 1.8 V; TA = +25°C. MCLK_INT = 1, PDN_XTAL = 0, and MCLK_SRC_SEL = 00 (crystal frequency fXTAL = 22.5792 MHz)

Parameters

Frequency range
Frequency resolution

18

Symbol Minimum Typical Maximum Units

—
—

20
—

—
5.94

20k
—

Hz
Hz

DS1155F2

CS43131
3 Characteristics and Specifications

Table 3-7. Headphone Load Measurement (Cont.)
Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; GNDD = GNDCP = GNDA = 0 V; voltages are with respect to
ground; typical performance data taken with VP = 3.6 V, VCP = VA = 1.8 V, VL = VD = 1.8 V; min/max performance data taken with VP = 3.6 V,
VCP = VA = 1.8 V, VL = VD = 1.8 V; TA = +25°C. MCLK_INT = 1, PDN_XTAL = 0, and MCLK_SRC_SEL = 00 (crystal frequency fXTAL = 22.5792 MHz)

Parameters

Symbol Minimum Typical Maximum Units

Low frequency impedance range
Relative impedance measurement capability 1
Impedance measurement accuracy 3

—
—
—
—

8
–12 2
–10
–1

—
—
—
—

1200
+12
+10
1


dB
%


Gain error
Offset

1.Impedance measurement range is relative to low-frequency HP load impedance measured.
2.Or 4 , whichever is greater.
3.Accuracy is referred to reported impedance.

Table 3-8. Alternate Headphone Path
Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; GNDD = GNDCP = GNDA = 0 V; voltages are with respect to
ground; typical performance data taken with VP = 3.6 V, VCP = VA = 1.8 V, VL = VD = 1.8 V; min/max performance data taken with VP = 3.6 V,
VCP = 1.8 V, VA = 0 V, VL = VD = 1.8 V; RL = 32 ; TA = +25°C; measurement bandwidth is 20 Hz–20 kHz; MCLK_SRC_SEL = 10, PDN_XTAL = 1.

Switch on characteristics
(PDN_HP = 1
HP_IN_EN = 1)

Parameters
Signal range when switch on 1
THD+N with 32  @ 2.82 Vpp
Interchannel isolation

HPINx turn-on time 2

217 Hz
1 kHz
20 kHz
EXT_VCPFILT = 1
EXT_VCPFILT = 0

Switch off characteristics
(PDN_HP = 1,
HP_IN_EN = 0)

Analog signal range when switched off 3,4
Turn-off time 5
Off isolation 6

217 Hz
1 kHz
20 kHz

VINAI
—
—

—
—
104
—
—
—
—

—
–103
110
105
90
—
—

Symbol Minimum Typical Maximum Units
Vpp
dB
dB
dB
dB
s
ms
Vp
s
dB
dB
dB

3.00
—
—
—
—
80
1.1

—
—
120
120
100

0.3
20
—
—
—

—
—
—
—
—

VINOFF
tHPIN_OFF

tHPIN_ON

1.When switch is on, maximally allowable voltage applied to HPINx pins.
2.HPINx turn-on time is measured when setting HP_IN_EN = 1. I2C ACK signal is received to when the signal appears on the HP out. MCLK_SRC_

SEL = 00, PDN_XTAL = 0, MCLK_INT = 1. For EXT_VCPFILT = 1, VCP_FILT± has been properly charged to expected nominal values.

3.When switch is off, maximally allowable voltage applied to HPINx pins.
4.Before switch off event, it is required HPINx signal is within this range before the switch is turned off. When the switch is in off state, HPINx signal

cannot exceed this specified range.

5.HPINx turn-off time is measured when HP_IN_EN = 0 ACK signal is received to when the signal disappears from the HP out. This spec also applies

when register settings are: MCLK_SRC_SEL = 00, PDN_XTAL = 0, MCLK_INT = 1.

6.Off isolation specification is measured with VINOFF = 0.1 Vp input.

Table 3-9. Combined DAC Digital, On-Chip Analog and HPOUTx Filter Characteristics
Test conditions (unless specified otherwise): The filter characteristics have been normalized to the sample rate (Fs) and can be referenced to the desired
sample rate by multiplying the given characteristic by Fs. Single-Speed Mode refers to 32-, 44.1-, and 48-kHz sample rates. Double-Speed Mode refers
to 88.2- and 96-kHz sample rates. Quad-Speed Mode refers to 176.4- and 192-kHz sample rates. Octuple-Speed Mode refers to 352.8- and 384-kHz
sample rates. MCLK_INT is an integer multiple of Fs; HPF disabled; no DC offset applied; group delay does not include serial port delay.

Parameter

Minimum Typical Maximum Units

Fast Roll-Off
(FILTER_SLOW_FASTB = 0)
Single-Speed Mode 1

Passband 2

Passband ripple 10 Hz to –0.01-dB corner 5
Stopband
Stopband attenuation 6
Group delay (linear phase)
Group delay (minimum phase)
Deemphasis error 9
(Relative to 1 kHz)

to –0.01-dB corner
to –3-dB corner
attenuation @ Fs/2

PHCOMP_LOWLATB = 1
PHCOMB_LOWLATB = 0
Fs = 44.1 kHz

0
0
8.44 3
–0.01
0.547
110
—
—
—

—
—
—
—
—
—
39.5/Fs 7
6.3/Fs 8
—

0.4535 4
0.482
—
+0.01
—
—
—
—
±0.3

Fs
Fs
dB
dB
Fs
dB
s
s
dB

DS1155F2

19

CS43131
3 Characteristics and Specifications

Table 3-9. Combined DAC Digital, On-Chip Analog and HPOUTx Filter Characteristics (Cont.)
Test conditions (unless specified otherwise): The filter characteristics have been normalized to the sample rate (Fs) and can be referenced to the desired
sample rate by multiplying the given characteristic by Fs. Single-Speed Mode refers to 32-, 44.1-, and 48-kHz sample rates. Double-Speed Mode refers
to 88.2- and 96-kHz sample rates. Quad-Speed Mode refers to 176.4- and 192-kHz sample rates. Octuple-Speed Mode refers to 352.8- and 384-kHz
sample rates. MCLK_INT is an integer multiple of Fs; HPF disabled; no DC offset applied; group delay does not include serial port delay.

Parameter

Minimum Typical Maximum Units

Fast Roll-Off
(FILTER_SLOW_FASTB = 0)
Double-Speed Mode 1

Passband 2

Passband ripple 10 Hz to –0.01-dB corner
Stopband
Stopband attenuation 6
Group delay (linear phase)
Group delay (minimum phase)
Passband 2

Passband ripple 10 Hz to –0.01-dB corner
Stopband
Stopband attenuation 6
Group delay (linear phase)
Group delay (minimum phase)
Passband 2

Passband ripple 10 Hz to –0.01-dB corner 5
Stopband
Stopband attenuation 6
Group delay (linear phase)
Group delay (minimum phase)
Deemphasis error 9
(Relative to 1 kHz)
Passband 2

Passband ripple 10 Hz to –0.01-dB corner
Stopband
Stopband attenuation 6
Group delay (linear phase)
Group delay (minimum phase)
Passband 2

Passband ripple 10 Hz to –0.01-dB corner
Stopband
Stopband attenuation 6
Group delay (linear phase)
Group delay (minimum phase)
Passband 2

Passband droop 10 Hz to 20 kHz
Group delay
Passband 2

Passband droop 10 Hz to 20 kHz
Group delay
Passband 2

Passband droop 10 Hz to 20 kHz
Group delay

Fast Roll-Off
(FILTER_SLOW_FASTB = 0)
Quad-Speed Mode 1

Slow Roll-Off
(FILTER_SLOW_FASTB = 1)
Single-Speed Mode 1

Slow Roll-Off
(FILTER_SLOW_FASTB = 1)
Double-Speed Mode 1

Slow Roll-Off
(FILTER_SLOW_FASTB = 1)
Quad-Speed Mode 1

Nonoversampling (NOS)
(NOS = 1)
Single-Speed Mode 1

Nonoversampling (NOS)
(NOS = 1)
Double-Speed Mode 1

Nonoversampling (NOS)
(NOS = 1)
Quad-Speed Mode 1

to –0.01-dB corner
to –3-dB corner
attenuation @ Fs/2

PHCOMB_LOWLATB = 1
PHCOMB_LOWLATB = 0
to –0.01-dB corner
to –3-dB corner
attenuation @ Fs/2

PHCOMB_LOWLATB = 1
PHCOMB_LOWLATB = 0
to –0.01-dB corner
to –3-dB corner
attenuation @ Fs/2

PHCOMB_LOWLATB = 1
PHCOMB_LOWLATB = 0
Fs = 44.1 kHz

to –0.01-dB corner
to –3-dB corner
attenuation @ Fs/2

PHCOMB_LOWLATB = 1
PHCOMB_LOWLATB = 0
to –0.01-dB corner
to –3-dB corner
attenuation @ Fs/2

PHCOMB_LOWLATB = 1
PHCOMB_LOWLATB = 0
to –0.01-dB corner
to –3-dB corner

to –0.01-dB corner
to –3-dB corner

to –0.01-dB corner
to –3-dB corner

0
0
7.77
–0.01
0.583
80
—
—
0
0
9.44
–0.01
0.583
80
—
—
0
0
6.45 10
–0.01
0.583
64
—
—
—

0
0
7
–0.01
0.792
70
—
—
0
0
7.00
–0.01
0.792
75
—
—
0
0
—
—
0
0
—
—
0
0
—
—

—
—
—
—
—
—
22.3/Fs
7.5/Fs
—
—
—
—
—
—
20.7/Fs
11.3/Fs
—
—
—
—
—
—
34.5/Fs 11
5.6/Fs 12
—

—
—
—
—
—
—
22.3/Fs
6.7/Fs
—
—
—
—
—
—
20.7/Fs
10.6/Fs
—
—
—
2.7/Fs
—
—
—
4.5/Fs
—
—
—
8.4/Fs

0.227
0.48
—
0.01
—
—
—
—
0.114
0.46
—
0.01
—
—
—
—
0.417
0.482
—
+0.01
—
—
—
—
±0.3

0.208
0.458
—
0.01
—
—
—
—
0.104
0.43
—
0.01
—
—
—
—
0.026
0.443
3.2 13
—
0.0246
0.446
0.73
—
0.026
0.405
0.17
—

Fs
Fs
dB
dB
Fs
dB
s
s
Fs
Fs
dB
dB
Fs
dB
s
s
Fs
Fs
dB
dB
Fs
dB
s
s
dB

Fs
Fs
dB
dB
Fs
dB
s
s
Fs
Fs
dB
dB
Fs
dB
s
s
Fs
Fs
dB
s
Fs
Fs
dB
s
Fs
Fs
dB
s

20

DS1155F2

Table 3-9. Combined DAC Digital, On-Chip Analog and HPOUTx Filter Characteristics (Cont.)
Test conditions (unless specified otherwise): The filter characteristics have been normalized to the sample rate (Fs) and can be referenced to the desired
sample rate by multiplying the given characteristic by Fs. Single-Speed Mode refers to 32-, 44.1-, and 48-kHz sample rates. Double-Speed Mode refers
to 88.2- and 96-kHz sample rates. Quad-Speed Mode refers to 176.4- and 192-kHz sample rates. Octuple-Speed Mode refers to 352.8- and 384-kHz
sample rates. MCLK_INT is an integer multiple of Fs; HPF disabled; no DC offset applied; group delay does not include serial port delay.

CS43131
3 Characteristics and Specifications

to –0.01-dB corner
to –3-dB corner

Minimum Typical Maximum Units

0
0
—
—

—
—
—
17/Fs

0.0299
0.263
0.04
—

Fs
Fs
dB
s

Octuple-Speed Mode 1

Passband 2

Parameter

Passband droop 10 Hz to 20 kHz
Group delay

1. Filter response is by design.
2. Response is clock-dependent and scales with Fs.
3. 8.5 dB for 32-kHz sample rate.
4. 0.454 Fs for 32-kHz sample rate.
5. Filter ripple specification is invalid with deemphasis enabled.
6. For Single-Speed Mode, the measurement bandwidth is from stopband to 3 Fs.
For Double-Speed Mode, the measurement bandwidth is from stopband to 3 Fs.
For Quad-Speed Mode, the measurement bandwidth is from stopband to 1.34 Fs.

7. 39/Fs for 32-kHz sample rate.
8. 5.9/Fs for 32-kHz sample rate.
9. Deemphasis is available only in 44.1 kHz.
10. 6.5 dB for 32-kHz sample rate.
11. 34/Fs for 32-kHz sample rate.
12. 5.2/Fs for 32-kHz sample rate.
13. 3.9 dB for 32-kHz sample rate (passband droop 10 Hz to 15 kHz).

Table 3-10. Combined DAC Digital, On-Chip Analog and HPOUTx Filter Characteristics (Wideband Flatness
Mode)
Test conditions (unless specified otherwise): The filter characteristics have been normalized to the sample rate (Fs) and can be referenced to the desired
sample rate by multiplying the given characteristic by Fs. Wideband Flatness Mode refers to Fs = 192 kHz sample rates. PCM_WBF_EN = 1. MCLK_
INT is an integer multiple of Fs; HPF disabled; no DC offset applied; group delay does not include serial port delay.

Wideband Flatness Mode 1

Passband 2

Parameter

Passband ripple 10 Hz to –0.003-dB corner
Stopband
Stopband attenuation 3
Group delay

1. Filter response is by design and may require calibration.
2. Response is clock-dependent and scales with Fs.
3. The measurement bandwidth is from stopband to 1.34 Fs.

to –0.003-dB corner
to –3-dB corner
attenuation @ Fs/2

Minimum Typical Maximum Units

0
0
3
–0.003
0.583
80
—

—
—
—
—
—
—
20.7/Fs

0.417
0.46
—
0.003
—
—
—

Fs
Fs
dB
dB
Fs
dB
s

Table 3-11. DAC High-Pass Filter (HPF) Characteristics
Test conditions (unless specified otherwise): Gains are all set to 0 dB; TA = +25°C.

Parameter 1

Passband 2

–0.05-dB corner
–3.0-dB corner

Passband ripple (0.417x10-3/N Fs to 0.417/N Fs; normalized to 0.417/N Fs) 2
Phase deviation @ 0.453x10-3/N Fs 2
Filter settling time 3

Minimum
—
—
—
—
—

Typical
0.195 x 10-3/N
19.5 x 10-6/N
—
2.45
24500 × N / Fs 2

Maximum Units

—
—
0.01
—
—

Fs
Fs
dB
°
s

1.Response scales with Fs in PCM Mode. Specifications are normalized to Fs and are denormalized by multiplying by Fs. For DSD Mode, Fs is 44.1 kHz.
2.For PCM Single-Speed Mode, N = 1.
For PCM Double-Speed Mode, N = 2.
For PCM Quad-Speed Mode, N = 4.
For PCM Octuple-Speed Mode, N = 8.
For DSD 64 x Fs Mode, N = 1.
For DSD 128 x Fs Mode, N = 1.

3.Required time for the magnitude of the DC component present at the output of the HPF to reach 5% of the applied DC signal.

DS1155F2

21

Table 3-12. DSD Combined Digital and On-Chip Analog Filter Response 1
Test conditions (unless specified otherwise): Digital gains are all set to 0 dB; TA = +25°C; PDN_XTAL = 0, MCLK_INT = 1, DSD_EN = 1, and MCLK_SRC_
SEL = 00 (crystal frequency fXTAL = 22.5792 MHz).

CS43131
3 Characteristics and Specifications

DSD Mode

1.Filter response is by design.

Parameter
Passband
Frequency response 20 Hz to 20 kHz
Roll-off

to –3-dB corner

Minimum Typical Maximum Units
kHz
dB
dB/Oct

—
–0.05
27

—
0.05
—

50
—
—

Table 3-13. Digital Interface Specifications and Characteristics
Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; GNDD = GNDCP = GNDA = 0 V; voltages are with respect to ground;
parameters can vary with VL and VP; typical performance data taken with VP = 3.6 V, VCP = VA = 1.8 V, VD = 1.8V and VL = 1.8 V; min/max performance
data taken with VP = 3.6 V, VCP = VA = 1.8 V, VD = 1.8V and VL = 1.8 V; TA = +25°C; CL = 60 pF.

Input leakage current 2,3

Internal weak pull-down
Input capacitance

INT current sink (VOL = 0.3 V maximum)
VL Logic (non-I2C)

VL Logic (I2C only)

HP_DETECT 4

HP_DETECT current to VCP_FILT– 4

RESET pulse width low

Parameters 1

LRCK1, DSDB/LRCK2
SDIN1, SCLK1, DSDA/SDIN2, DSDCLK/SCLK2
SDA, SCL
INT, RESET

High-level output voltage (IOH = –100 µA)
Low-level output voltage
High-level input voltage
Low-level input voltage
Hysteresis voltage (Fast Mode and Fast Mode Plus)
Low-level output voltage
High-level input voltage
Low-level input voltage
High-level input voltage
Low-level input voltage

Symbol
Iin

—
—

—
VOH
VOL
VIH
VIL
VHYS
VOL
VIH
VIL
VIH
VIL
IHP_DETECT
—

Minimum Maximum Units

—
—
—
—
550
—

825
0.9•VL
—
0.7•VL
—
0.05•VL
—
0.7•VL
—
0.93•VP
—
1.00
1000

±4
±3
±100
±100
2450
10

—
—
0.1•VL
—
0.3•VL
—
0.2•VL
—
0.3•VL
—
2.0
2.91
—

µA
µA
nA
nA
k
pF
µA

V
V
V
V
V
V
V
V
V
V
µA
µs

1.See Table 1-1 for serial and control-port power rails.
2.Specification is per pin.
3.Includes current through internal pull-up or pull-down resistors on pin.
4.The HP_DETECT input circuit allows the HP_DETECT signal to be as low of a voltage as VCP_FILT– and as high as VP. Section 4.5.1 provides

configuration details.

Table 3-14. CLKOUT Characteristics
Test conditions (unless specified otherwise): GNDD = GNDCP = GNDA = 0 V; voltages are with respect to ground; VP = 3.6 V, VCP = VA = 1.8 V, VL =
VD = 1.8 V; CL = 60 pF; PLL reference input must meet the phase-noise mask specified in Fig. 4-15; TA = +25°C; Output jitter is measured from 100 Hz
to half of the output frequency.

CLKOUT output frequency

Parameters

CLKOUT output duty cycle
CLKOUT output TIE jitter (RMS)

CLKOUT_SRC_SEL = 01

Symbol Minimum Typical Maximum Units
fCLKOUT
MHz
MHz
MHz
MHz
%
ps

2.8224
5.6448
7.5264
11.2896
40
—

3.072
6.144
8.192
12.288
60
—

3
6
8
12
50
500

—
tJIT

Table 3-15. PLL Characteristics
Test conditions (unless specified otherwise): GNDD = GNDCP = GNDA = 0 V; voltages are with respect to ground; VP = 3.6 V, VCP = VA = 1.8 V, VL =
VD = 1.8 V; PLL reference input must meet the phase-noise mask specified in Fig. 4-15; TA = +25°C.

PLL output frequency
PLL lock time

Parameters

Symbol Minimum Typical Maximum Units
MHz
µs

22.5792
—

24.576
1000

24
620

fout
tLock

22

DS1155F2

Table 3-15. PLL Characteristics (Cont.)
Test conditions (unless specified otherwise): GNDD = GNDCP = GNDA = 0 V; voltages are with respect to ground; VP = 3.6 V, VCP = VA = 1.8 V, VL =
VD = 1.8 V; PLL reference input must meet the phase-noise mask specified in Fig. 4-15; TA = +25°C.

CS43131
3 Characteristics and Specifications

PLL reference clock input

Parameters

PLL reference clock input jitter

—

Symbol Minimum Typical Maximum Units
MHz
MHz
MHz
MHz
MHz
MHz
MHz
MHz
MHz
MHz
ps

11.2896
22.5792
12.2880
24.5760
9.6000
19.2000
12.0000
24.0000
13.0000
26.000
—

—
—
—
—
—
—
—
—
—
—
50

—
—
—
—
—
—
—
—
—
—
—

—

Table 3-16. Crystal Characteristics
Test conditions (unless specified otherwise): GNDD = GNDCP = GNDA = 0 V; voltages are with respect to ground; VP = 3.6 V, VCP = VA = 1.8 V, VL =
VD = 1.8 V; TA = +25°C

Parameters 1

Crystal oscillator frequency
Crystal load capacitance
Equivalent series resistance
Startup time
Shunt capacitance
Maximum drive level

1.Refer to Section 5.3 for supported crystal options.

Symbol
fXTAL
CL_XTAL
esrXTAL
tXTAL_pup
CO
—

Minimum
22.57
5
—
—
—
200

Typical
22.5792/ 24.576
—
—
—
—
—

Maximum Units
MHz
pF

ms
pF
µW

24.58
8
100
6.5
0.8
—

Table 3-17. Power-Supply Rejection Ratio (PSRR) Characteristics
Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; input test signal held low (all zero data); GNDA = GNDL = GNDCP
= 0 V; voltages are with respect to ground; VL = VA = VD = 1.8 V, VP = 3.6 V; When testing PSRR, PCM input test signal held low (all zero data); TA =
+25°C; PCM_AMUTE = 0.

Parameter 1

Minimum Typical Maximum Units

HPOUTx
PSRR with 100-mVpp signal AC coupled to VA supply
PDN_HP = 0, HP_IN_EN = 0

HPOUTx
PSRR with 100-mVpp signal AC coupled to VCP supply
PDN_HP = 0, HP_IN_EN = 0

HPOUTx
PSRR with 100-mVpp signal AC coupled to VP supply
PDN_HP = 0, HP_IN_EN = 0

HPOUTx (0-dB analog gain)
PSRR with 100-mVpp signal AC coupled to VCP supply
PDN_HP = 1, HP_IN_EN = 1, RL = 32 
HPOUTx (0-dB analog gain)
PSRR with 100-mVpp signal AC coupled to VP supply
PDN_HP = 1, HP_IN_EN = 1, RL = 32 

1.PSRR test configuration: Typical PSRR can vary by approximately 6 dB below

the indicated values.

217 Hz
1 kHz
20 kHz

217 Hz
1 kHz
20 kHz

217 Hz
1 kHz
20 kHz

217 Hz
1 kHz
20 kHz

217 Hz
1 kHz
20 kHz

—
—
—

—
—
—

—
—
—

—
—
—

—
—
—

75
75
70

80
80
60

100
100
80

80
80
60

100
100
80

Analog Output PSRR

+5 V

+5 V

Power DAC

OUT

GND

–

+

Operational Amplifier

—
—
—

—
—
—

—
—
—

—
—
—

—
—
—

dB
dB
dB

dB
dB
dB

dB
dB
dB

dB
dB
dB

dB
dB
dB

DUT

PWR

GND

OUT

Analog Test Equipment

OUT

Analog Generator

–

+
Analog Analyzer

–

+

DS1155F2

23

Table 3-18. DC Characteristics
Test conditions (unless otherwise specified): Fig. 2-1 shows CS43131 connections; GNDD = GNDA = GNDCP = 0 V; all voltages with respect to ground.

Parameters

Minimum Typical Maximum Units

CS43131
3 Characteristics and Specifications

VCP_FILT (No load connected to HPOUTx)
EXT_VCPFILT = 0

VP_LDO Mode

VCP Mode

–VA
Alternate headphone path
switch-on characteristics
PDN_HP = 1, HP_IN_EN = 1
Other DC characteristics

VCP_FILT+ pin (HV_EN = 1)
VCP_FILT+ pin (HV_EN = 0)
VCP_FILT– pin (HV_EN = 1)
VCP_FILT– pin (HV_EN = 0)
VCP_FILT+ pin
VCP_FILT– pin
–VA pin

On-resistance
rON matching between channels

FILT+ voltage
FILT– voltage
HP output current limiter on threshold.
VD power-on
reset threshold
(VPOR)

Up
Down

—
—
—
—
—
—
—
—
—

—
—
—
—
—

3.0
2.6
–3.0
–2.6
VCP
–VCP
– VA
0.4
0.05

–0.35
0.35
120
1.15
0.950

—
—
—
—
—
—
—
—
—

—
—
160
—
—

V
V
V
V
V
V
V



V
V
mA
V
V

Table 3-19. Power Consumption
Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; GNDA = GNDCP = GNDD = 0 V; voltages are with respect to ground;
performance data taken with VA = VCP = VD = VL = 1.8 V; VP = 3.6 V; TA = +25°C; ASP_SPRATE = 0001(44.1-kHz mode); MCLK_INT= 1
(22.5792 MHz); MCLK_SRC_SEL = 00; +1dB_EN = 1; all other fields are set to defaults; no signal on any input; control port inactive; all serial ports are
set to Slave or Master Mode as indicated, input clock/data are held low unless active; test load is RL = 32  and CL = 1 nF for HPOUTx; measured values
include currents consumed by the DAC and do not include current delivered to external loads unless specified otherwise (e.g., from HPOUTx outputs);
see Fig. 2-1.

Use Cases

Off 1
1
Standby 2
2
3 A Playback

C

HPDETECT enabled
External MCLK = 22.5792 MHz, I2S/DoP
Stereo HPOUT

4

Alternate HP path stereo HPIN enabled 4

POUT

—
—
Quiescent 3
0.1mW
Quiescent

Typical Current (µA)

iVCP

0
0
3808
12363
32

iVA

0
0
7835
7862
0

iVD

0
256
2786
2004
186

iVL

0
0
0
40
0

Total
Power
(µW)
11
576
26074
40199
625

iVP

6
32
28
32
65

1.Off configuration: Clock/data lines held low; RESET = LOW; VA = VD = VL = 0 V, VCP = 0 V, VP = 3.6 V.
2.Standby configuration: Clock/data lines held low; RESET = HIGH; VA = VD = VL = 1.8 V, VCP = 1.8 V, VP = 3.6 V; HP_DETECT_CTRL = 11 (enabled);

HPDETECT_PLUG_INT_MASK=0 (unmasked); PDN_XTAL = 1, MCLK_SRC_SEL = 10 (RCO selected as MCLK source).

3.Quiescent configuration: data lines held low; RESET = HIGH; VA = 1.8 V, VD = VL = VCP = 1.8 V, VP = 3.6 V. Serial port, I2S/DoP Mode (ASP and

SDIN, ASP_M/Sb = 0); PDN_XTAL = 1.

4.Quiescent configuration: PDN_XTAL = 1; MCLK_SRC_SEL = 10 (RCO selected as MCLK source); alternate headphone path (PDN_HP = 1, HPOUT_

CLAMP = 1, HP_IN_EN = 1, HP_IN_LP = 1); data lines held low; RESET = HIGH; VA = 1.8 V, VD = VL = VCP = 1.8 V, VP = 3.6 V.

Table 3-20. Serial-Port Interface Characteristics
Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; GNDA = GNDCP = GNDD = 0 V; voltages are with respect to ground;
parameters can vary with VL; typical performance data taken with VL = VD = VA = VCP = 1.8 V, VP = 3.6 V; min/max performance data taken with VL =
1.8 V; VD = VA = VCP = 1.8 V, VP = 3.6 V; TA = +25°C; CL = 60 pF; Logic 0 = ground, Logic 1 = VL; output timings are measured at VOL and VOH thresholds
(see Table 3-13).

Parameters 1,2,3,4

FSYNC frame rate
FSYNC high period 5
Master
Mode

FSYNC duty cycle
FSYNC delay time after SCLK launching edge 6
SCLK frequency
SCLK high period 7

xSP_5050 = 1

SDIN setup time before SCLK latching edge 6
SDIN hold time after SCLK latching edge 6

Symbol
Fs
tHI:FSYNC
—
tD:CLK–FSYNC
fSCLK
tHI:SCLK

tSU:SDI
tH:SDI

Minimum

1/fSCLK
45
—
—
1/(2•fSCLK) –
1/fMCLK_INT
10
5

Typical
(See Section 4.9.5)
—
—
—
—
—

—
—

Maximum

(n–1)/fSCLK
55
10
fMCLK_INT
1/(2•fSCLK) +
1/fMCLK_INT
—
—

Units
kHz
s
%
ns
MHz
ns

ns
ns

24

DS1155F2

CS43131
3 Characteristics and Specifications

Table 3-20. Serial-Port Interface Characteristics (Cont.)
Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; GNDA = GNDCP = GNDD = 0 V; voltages are with respect to ground;
parameters can vary with VL; typical performance data taken with VL = VD = VA = VCP = 1.8 V, VP = 3.6 V; min/max performance data taken with VL =
1.8 V; VD = VA = VCP = 1.8 V, VP = 3.6 V; TA = +25°C; CL = 60 pF; Logic 0 = ground, Logic 1 = VL; output timings are measured at VOL and VOH thresholds
(see Table 3-13).

Slave
Mode

Parameters 1,2,3,4

FSYNC setup time before SCLK latching edge 6
FSYNC hold time after SCLK latching edge 6
SCLK frequency
SCLK high period
SCLK low period
SDIN setup time before SCLK latching edge 8
SDIN hold time after SCLK latching edge 6

Symbol
tSU:FSYNC
tH:FSYNC
fSCLK
tHI:SCLK
tLO:SCLK
tSU:SDI
tH:SDI

Minimum
10
5
—
16
16
10
5

Typical
—
—
—
—
—
—
—

Maximum
—
—
24.58
—
—
—
—

Units
ns
ns
MHz
ns
ns
ns
ns

1.Output clock frequencies follow the internal master clock (MCLK_INT) frequency proportionally. Any deviation of the clock source from the nominal
supported rates are directly imparted to the output clock rate by the same factor (e.g., +100-ppm offset in the frequency of MCLK_INT becomes a
+100-ppm offset in LRCK/FSYNC and SCLK).

2.I2S interface timing

LRCK/FSYNC

SCLK
(CPOL = 0)

SCLK
(CPOL = 1)

SDIN

3.TDM interface timing

(shown with xSP_FSD = 010, xSP_LCHI = 1)

tD:CLK–FSYNC

LRCK/FSYNC

SCLK

tSU:FSYNC

...

...

...

...

fSCLK = N ∙ Fs

1/Fs

tH:FSYNC

1/fSCLK

tLO:SCLK

tHI:SCLK

tSU:SDI

tH:SDI

tHI:FSYNC

tSU :FSYNC

t H: FSYNC

tD:CLK-FSYNC

SDIN

Don’t Care

1/Fs

fSCLK = N ∙ Fs

1/fSCLK

tLO:SCLK

tHI:SCLK

Frame location  0

...

...

...

...

...

...

...

Frame location N -1

4.Applies to Master and Slave Modes, unless specified otherwise.
5.Maximum LRCK duty cycle is equal to frame length, in SCLK periods, minus 1. Maximum duty cycle occurs when LRCK high (xSP_LCHI) is set to

768 SCLK periods and LRCK period (xSP_LCPR) is set to 769 SCLK periods.

6.Data may be latched/launched on either the rising or falling edge of SCLK.
7.SCLK duty cycle in Master Mode depends on Master Mode clock configuration, and can vary by up to 1 MCLK_INT period.
8.Data is latched/launched on the rising or falling edge of SCLK as determined by xSP_SCPOL_OUT, xSP_SCPOL_IN, and xSP_FSD bits. See the

SCLK launching specs in Table 3-20.

tSU:SDI

t H: SDI

Table 3-21. DSD Switching Characteristics
Test conditions (unless specified otherwise): Fig. 2-1 shows CS43131 connections; GNDA = GNDCP = GNDD = 0 V; voltages are with respect to ground;
parameters can vary with VL; typical performance data taken with VL = VD = VA = VCP = 1.8 V, VP = 3.6 V; min/max performance data taken with VL =
1.8 V; VD = VA = VCP = 1.8 V, VP = 3.6 V; TA = +25°C; CL = 60 pF; Logic 0 = ground, Logic 1 = VL; output timings are measured at VOL and VOH thresholds
(see Table 3-13).

Parameter 1,2

DSDCLK duty cycle
DSDCLK pulse width low
DSDCLK pulse width high
DSDCLK frequency

DSDA/DSDB valid to DSDCLK rising setup time
DSDCLK rising to DSDA or DSDB hold time
DSD clock to data transition (Phase Modulation Mode)

(64× oversampled)
(128× oversampled)
(256x oversampled)

(64× oversampled)
(128× oversampled)

—
tSCLKL
tSCLKH
—

Symbol Minimum Typical Maximum Units
—
—
—
2.8224
5.6448
11.2897
—
—
—
—

60
—
—
fMCLK_INT/8
fMCLK_INT/4
fMCLK_INT/2
—
—
20
10

40
40
40
1.024
2.048
4.096
10
10
–20
–10

%
ns
ns
MHz
MHz
MHz
ns
ns
ns
ns

tSDLRS
tSDH
tDPM

DS1155F2

25

1.Serial audio input interface timing

2.Phase modulation mode serial audio input interface timing

CS43131
3 Characteristics and Specifications

tSCLKH

tSCLKL

tSDLRS

tSDH

tDPM

tDPM

DSDCLK

DSDA,
DSDB

DSDCLK
(128•Fs)

DSDCLK
(64•Fs)

DSDA,
DSDB

Table 3-22. I2C Slave Port Characteristics
Test conditions (unless specified otherwise): Fig. 2-1 shows typical connections; Inputs: GNDA = GNDL = GNDCP = 0 V; all voltages with respect to
ground; VL = 1.8 V; inputs: Logic 0 = GNDA = 0 V, Logic 1 = VL; TA = +25°C; SDA load capacitance equal to maximum value of CB = 400 pF; minimum
SDA pull-up resistance, RP(min).1 Table 3-1 describes some parameters in detail. All specifications are valid for the signals at the pins of the CS43131
with the specified load capacitance.

Parameter 2

SCL clock frequency
Clock low time
Clock high time
Start condition hold time (before first clock pulse)
Setup time for repeated start
Rise time of SCL and SDA

Fall time of SCL and SDA

Setup time for stop condition
SDA setup time to SCL rising
SDA input hold time from SCL falling 4
Output data valid (Data/Ack) 5

Bus free time between transmissions
SDA bus capacitance

Standard Mode
Fast Mode
Fast Mode Plus
Standard Mode
Fast Mode
Fast Mode Plus

Standard Mode
Fast Mode
Fast Mode Plus

Symbol 3
fSCL
tLOW
tHIGH
tHDST
tSUST
tRC

tFC

tSUSP
tSUD
tHDDI
tVDDO

tBUF
CB

RP
tPS
—
tPUD

Minimum
—
500
260
260
260
—
—
—
—
—
—
260
50
0
—
—
—
500
—
—
350
—
150
1500

Maximum Units
kHz
ns
ns
ns
ns
ns
ns
ns
ns
ns
ns
ns
ns
ns
ns
ns
ns
ns
pF
pF
Ω
ns
µs
µs

1000
—
—
—
—
1000
300
120
300
300
120
—
—
—
3450
900
450
—
340
400
—
50
—
—

SCL/SDA pull-up resistance 1
Pulse width of spikes to be suppressed
Switching time between RCO and MCLK_INT 6
Power-up delay (delay before I2C can communicate after RESET released)

SCL frequency = 1 MHz, VL = 1.8 V
SCL frequency ≤ 400 kHz
VL = 1.8 V

1.The minimum RP value (resistor shown in Fig. 2-1) is determined by using the maximum level of VL, the minimum sink current strength of its

respective output, and the maximum low-level output voltage VOL. The maximum RP value may be determined by how fast its associated signal must
transition (e.g., the lower the value of RP, the faster the I2C bus is able to operate for a given bus load capacitance). See I²C bus specification
referenced in Section 13.

2.All timing is relative to thresholds specified in Table 3-13, VIL and VIH for input signals, and VOL and VOH for output signals.

26

DS1155F2

3.I²C control-port timing

Stop

Start

Repeated
Start

Stop

CS43131
3 Characteristics and Specifications

SDA

SCL

tBUF

tHDST

tHIGH

tHDST

tFC

tSUSP

4.Data must be held long enough to bridge the transition time, tF, of SCL.
5.Time from falling edge of SCL until data output is valid.
6.Upon setting MCLK_SRC_SEL and sending the I2C stop condition, the switching of RCO and other MCLK_INT sources occurs. A least wait
time as specified is required after changing MCLK_SRC_SEL and sending the I2C stop condition before the next I2C transaction is initiated.

tLOW

tVDDO

tSUD

tSUST

tRC

tHDDI

DS1155F2

27

4 Functional Description

This section describes the general theory of operation of the CS43131, tracing the signal and control flow through the
various blocks within the device. It comprises the following sections:

CS43131
4 Functional Description

• Section 4.1, “Overview”

• Section 4.2, “Analog Outputs”

• Section 4.3, “Class H Amplifier Output”

• Section 4.4, “Alternate Headphone Inputs”

• Section 4.5, “Headphone Presence Detect and Output Load Detection”

• Section 4.6, “Clocking Architecture”

• Section 4.7, “Clock Output and Fractional-N PLL”

• Section 4.8, “Filtering Options”

• Section 4.9, “Audio Serial Port (ASP)”

• Section 4.10, “DSD Interface”

• Section 4.11, “DSD and PCM Mixing”

• Section 4.12, “Standard Interrupts”

• Section 4.13, “Control Port Operation”

• Section 4.14, “Programmable Filter”

4.1  Overview

4.1.1

Analog Outputs

The analog output block includes separate pseudodifferential headphone Class H amplifiers output. An on-chip inverting
charge pump creates a positive and negative voltage equal to the input, allowing an adaptable, full-scale output swing
centered around ground. The resulting internal amplifier supply can be ±VCP, or ±VP_LDO (either ±3.0 V with HV_EN = 1
or ±2.6 V with HV_EN = 0).

The inverting architecture eliminates the need for large DC-blocking capacitors and allows the amplifier to deliver more
power to HP loads at lower supply voltages. This adaptive power supply scheme converts traditional Class AB amplifiers
into more power-efficient Class H amplifiers.

4.1.2

Alternate Headphone Inputs

The alternate headphone inputs provide an integrated selectable path to interface between the system codec output and
the headphone connector, which allows for lower-power operation in applications such as voice or compressed music
playback. These inputs eliminate the need for an external audio switch and prevent the high-fidelity headphone outputs of
CS43131 from degradation by the external audio switch.

4.1.3

Headphone Detection

The CS43131 detects the presence of a headphone and notifies the application processor to wake up through an interrupt
event.

4.1.4

Headphone Impedance Measurement

The CS43131 detects headphone impedance information at low frequencies, which can be used to adjust the system
properly to accommodate different load conditions. One example is to adjust signal chain gain to avoid distortion.

The CS43131 also provides impedance measurement functions to evaluate the headphone load within 20 Hz to 20 kHz.
A specific frequency is selected and the impedance measurement process is initiated by setting the register. Through a
series of interrupt events, the CS43131 notifies application processor to retrieve the impedance information after
completion.

28

DS1155F2

CS43131
4.1 Overview

4.1.5

Audio Interfaces and Supported Formats

There are two serial input ports on the CS43131, the audio serial port (ASP) and the auxiliary serial port (XSP). The ASP
on the CS43131 supports I2S, TDM, and DoP (DSD over PCM) formats up to a 384-kHz sample rate. The XSP on the
CS43131 supports the DoP format up to a 352.8-kHz sample rate.

The CS43131 also has a dedicated DSD interface to support up to a 256•Fs DSD stream. The DSD interface shares pins
with the XSP.

4.1.6

System Clocking

The CS43131 internal MCLK can be sourced from three options:

• Direct MCLK/crystal mode. The internal MCLK is provided through XTI/MCLK pin directly or generated by crystal

oscillator.

• PLL mode. A PLL reference CLK is provided by externally through XTI/MCLK. The PLL is configured, and output is

used as the internal MCLK.

• RCO mode. An internal RCO is used as the internal MCLK. Note that HPIN input path is the only supported audio
playback feature in this mode for optimized power consumption. This mode can also support HP detection and I2C
communication. DAC playback and headphone impedance measurement functions are not supported.

The clock output is provided for audio applications that require high quality audio rate system clock. This clock output can
be sourced from the following two options:

• The clock generated by the CS43131 crystal oscillator.

• Output of the internal Fractional-N PLL that refers to MCLK input. See Section 4.7.1 for supported frequencies.

The internal MCLK is used to generate serial port clocks. See Table 4-6 for supported LRCK combinations.

System Interrupts

4.1.7
The CS43131 includes an open-drain interrupt output (INT pin). Interrupt mask registers control whether an event
associated with an interrupt status/mask bit pair triggers the assertion of INT. All types of interrupt are described in
Section 4.11.

4.1.8
The CS43131 offers two types of reset options:

System Reset

• Asserting RESET. If RESET is asserted, all registers and state machines are immediately set to their default values/
states. No operation can begin until RESET is deasserted. Before normal operation can begin, RESET must be
asserted at least once after the VP supply is first brought up.

• Power-on reset (POR). If the VD supply is lower than the POR threshold specified in Table 3-18, all registers and
state machines are set to their default values/states. The POR releases the reset when the VD supply goes above
the POR threshold. When the VD supply is turned on, the VL and VA supplies must also be turned on at the same
time.

4.1.9

Power Down

The CS43131 has a register to power down individual components on the chip. Before any change can be applied to an
individual component (except PLL), the block must be powered down first. For the PLL, changes can be applied after PLL_
START is cleared.

The PDN_HP bit is responsible for enabling or disabling the signal chain playback operation. Setting PDN_HP disables
signal chain playback operation. All the necessary components for playback operation need to be powered up and
configured properly before PDN_HP is cleared. PDN_HP needs to be set before making any changes to the playback
signal chain setup, except the following functions:

• Volume and mute related functions

• PCM filter settings (see Section 7.5.2)

DS1155F2

29

CS43131
4.1 Overview

Before ASP, XSP, or DSDIF can be safely powered down, PDN_HP must be asserted, and PDN_DONE_INT must be
present. For XTAL or PLL used as the source of internal MCLK, PDN_HP needs to be set first and MCLK source needs
to be properly switched away before PDN_XTAL or PDN_PLL is set. If PLL output is only used as the source of CLKOUT,
PDN_PLL can be set without PDN_HP being asserted. If the steps described above are not followed, the CS43131 enters
an unresponsive state.

PDN_CLKOUT does not require PDN_HP to be set before it is enabled.

PDN_HP should be set before using headphone input path and load detection function. Refer to the functional description
of these two components for further details.

Recommended power-up and power-down sequences can be found in the Section 5.2.

30

DS1155F2

4.2  Analog Outputs

The CS43131 provides an analog output that is derived from the digital audio input ports. This section describes the
general flow of the analog outputs.

CS43131
4.2 Analog Outputs

4.2.1

Analog Output Signal Flow

The CS43131 signal flow is shown in Fig. 4-1.

PCM_SZC p. 129
PCM_RAMP_DOWN p. 129
PCM_VOLUME_B p. 128
PCM_VOLUME_A p. 128
PCM_INV_A p. 129
PCM_INV_B p. 129
PCM_SWAP_CHAN p. 129
PCM_COPY_CHAN p. 129
PCM_VOL_BEQA p. 129
PCM_AMUTE p. 129
PCM_AMUTEBEQA p. 129
PCM_MUTE_A p. 129
PCM_MUTE_B p. 129
FILTER_SLOW_FASTB
p. 128
PHCOMP_LOWLATB p. 128
HIGH_PASS p. 128
DEEMP_ON p. 128
NOS p. 128

Interpolation
Filter &
Volume
Control

Interpolation
Filter &
Volume
Control

I2S

Audio
Source

HPINA

+1dB_EN p. 127
OUT_FS p. 127
PCM_WBF_EN p. 128

DAC_OVFL_INT
p. 134

HP_IN_EN p. 127
HP_IN_LP p. 127



Multibit

Modulator

MIX_PCM_PREP p. 126
MIX_PCM_DSD p. 126

DAC and
Filter

+

–

PDN_HP

HPOUTA

HPREFA



Multibit

Modulator

DAC and
Filter

PDN_HP

+

–

HPOUTB

DoP

DSD

DoP to
DSD
Engine

DSD_PRC_SRC p. 126

DSD_EN p. 126

X
U
M

DSD
Processor

DSD_SPEED p. 126
STA_DSD_DET p. 126
INV_DSD_DET p. 126

HPREFB

HP_IN_EN p. 127
HP_IN_LP p. 127

HPINB

DSD_VOLUME_B p. 124
DSD_VOLUME_A p. 125
DSD_INV_A p. 127
DSD_INV_B p. 127
DSD_VOL_BEQA p. 125
DSD_AMUTE p. 125
DSD_MUTE_A p. 125

DSD_MUTE_B p. 125
DSD_ZERODB p. 126
DSD_HPF_EN p. 127
OUT_FS p. 127
DSD_SZC p. 125
DSD_RAMP_UP p. 125
DSD_SWAP_CHAN p. 127
DSD_COPY_CHAN p. 127

Figure 4-1. Analog Output Signal Flow

The CS43131 has 4 settings of full scale voltage, which are determined by OUT_FS[1:0]. When OUT_FS[1:0] = 11 and
HV_EN = 1, the +1dB_EN bit can boost the output voltage to 2 Vrms. In any other setting combination of OUT_FS[1:0] and
HV_EN, the +1dB_EN bit is ignored. The proper full scale voltage must be set first, and the digital volume settings is used
to control signal levels.

The CS43131 digital volume control allows independent control of the signal level in 1/2 dB increments from 0 dB
(0b0000 0000) to –127 dB (0b1111 1110) by using x_VOLUME_y (where "x" is either PCM or DSD; "y" is either A or B)
register. When the x_VOL_BEQA bit is set, both volumes can be changed simultaneously using x_VOLUME_A). The
volume changes are implemented as dictated by PCM_SZC[1:0] and DSD_SZC in the signal control register (see
Section 7.4.3 and Section 7.5.5). If soft ramping is enabled, gain and attenuation changes are carried out by incrementally
changing the volume level in 1/8-dB steps, from the previous level to the new level. For PCM, when PCM_SZC[1:0] = 2,
the volume level changes at an approximate rate of 1 dB/ms. The volume level also changes at a rate of 1 dB/ms for DSD.
Both channels can be inverted independently by setting the INV_A and INV_B bits. Both channels can be swapped by
setting the x_SWAP_CHAN bit. Channel A content can be copied to channel B by setting the x_COPY_CHAN bit. Mono
mode can be enabled with proper setting of these bits.

The CS43131 provides individual ramp-up and ramp-down control options (from the global soft ramp settings) for two
specific scenarios. The PCM_RAMP_DOWN bit is for the scenario when the interpolation filter configuration switches (as
configured by the PCM Filter Option register) during PCM playback. DSD_RAMP_UP bit is for the scenario when DSD
playback recovers from detected DSD stream errors. Refer to each individual register description for setting details.

The CS43131 can mute both channels simultaneously or independently. Also, it can auto-mute on both PCM stream and
DSD stream when mute pattern is identified (defined in PCM_AMUTE and DSD_AMUTE). Additional signal and mute
control options can be found in Section 7.4.3 and Section 7.5.5.

DS1155F2

31

CS43131
4.3 Class H Amplifier Output

The CS43131 has an independent set of controls for the DSD processor path as shown in Fig. 4-1. The DSD processor
also offers the control bit SIGCTL_DSDEQPCM, which maps the PCM_x setting to DSD_x setting, once enabled. As a
result, some of the DSD_x register settings are ignored. The registers affected are DSD_RAMP_UP, DSD_VOL_BEQA,
DSD_SZC, DSD_AMUTE, DSD_AMUTE_BEQA, DSD_MUTE_A, DSD_MUTE_B, DSD_INV_A, DSD_INV_B, DSD_
SWAP_CHAN, and DSD_COPY_CHAN. Refer to Section 7.4.1–Section 7.4.7 for control register details.

4.2.2 Wideband Flatness Mode

The CS43131 specifically optimizes for wideband flatness playback, which is enabled by PCM_WBF_EN bit. This mode
should only be enabled when PCM plays back at 192 kHz. When operating in other speeds or modes, this bit should be
properly disabled. If wideband flatness mode enabled, the filter spec complies to Table 3-10. There is no option for filter
roll-off or phase response in this mode. NOS filter mode should be disabled for proper operation. Note that wideband
flatness mode can only be enabled or disabled when PDN_HP is set.

4.2.3 Mono Mode

The CS43131 supports mono (differential) mode playback. Mono mode allows driving a differential interconnect such as
a XLR connector or implementing a stereo differential headphone utilizing two CS43131 devices. Fig. 2-2 shows a typical
connection of the CS43131 to a XLR connector in mono mode.

4.3  Class H Amplifier Output

Fig. 4-2 shows the Class H operation.

VP

VCP

ADPT_PWR p. 131

Class H Control

g
n
i
t
r
e
v
n
I
/
n
w
o
d
-
p
e
t
S

p
m
u
P
e
g
r
a
h
C

+VP_LDO V
+VCP

–VP_LDO V
–VCP

VCP_FILT+

VCP_FILT–

Figure 4-2. Class H Operation

The CS43131 headphone output amplifiers use Cirrus Logic two-mode Class H technology. This technology maximizes
operating efficiency of the typical Class AB amplifier while maintaining high performance. In a Class H amplifier design,
the rail voltages supplied to the amplifier vary with the needs of the music passage that is being amplified. This prevents
unnecessarily wasting energy during low power passages of program material or when the program material is played
back at a low volume level.

The internal charge pump, which creates the rail voltages for the headphone amplifiers, is the central component of the
two-mode Class H technology implemented in the CS43131. The charge pump receives its input voltage from the voltage
present on the VCP or VP pin. From this input voltage, the charge pump creates the differential rail voltages supplied to
the amplifier output stages.  The charge pump can supply two sets of differential rail voltages: ±VCP and ±VP_LDO.

32

DS1155F2

HV_EN setting, as shown in Fig. 4-3, determines the VP_LDO voltage as shown in Table 4-1. HV_EN = 1 setting is
required to support the 1.7-V full-scale voltage for a 600- load and above. In this setting, minimum VP is required to be
higher than 3.3 V, and any load below 600  is not supported. When HV_EN = 0, the max output voltage is 1.4-V RMS
full-scale voltage. In this setting, minimum VP is required to be higher than 3 V, and the full headphone load range is
supported.

CS43131
4.3 Class H Amplifier Output

HV_EN p. 131

VP

Internal
LDO

VP_LDO

Figure 4-3. Internal LDO Configuration

Table 4-1.  VP_LDO Voltage Per HV_EN Setting

HV_EN
0
1

VP_LDO Voltage
2.6 V
3.0 V

Table 4-2 shows the nominal signal and volume level ranges when the output is set to the adapt modes explained in
Section 4.3.1. If the signal level is greater than the maximum value of this range, then clipping can occur.

Table 4-2.  Class H Supply Modes

Mode
0
1

Class H Supply Level
±VP_LDO V, internally regulated from VP
±VCP

Signal 1 or Volume Level Range 2,3,4
 –11 dB
< –11 dB

1.In adapt-to-signal, the volume level ranges are approximations but are within –0.5 dB from the values shown.
2.Relative to digital full scale with output gain set to 0 dB.
3.In fixed modes, clipping can occur if the signal level exceeds the maximum of this range due to setting the

amplifier’s supply too low.

4.Thresholds shown are nominal for a 16-Ω stereo load.

4.3.1

Power Supply Control Options

This section describes the two types of operation: standard Class AB and adapt-to-output signal. The set of rail voltages
supplied to the amplifier output stages depends on the ADPT_PWR (see p. 131) setting.

4.3.1.1 Standard Class AB Operation (ADPT_PWR = 001 or 010)

If ADPT_PWR is set to 001 or 010, the rail voltages supplied to the amplifiers are held to ±VP_LDO or ±VCP, respectively.
The rail voltages supplied to the output stages are held constant, regardless of the output signal level. The CS43131
amplifiers simply operate in a traditional Class AB configuration.

4.3.1.2 Adapt-to-Output Signal (ADPT_PWR = 111)

If ADPT_PWR is set to 111, the rail voltage sent to the amplifiers is based solely on whether the signal sent to the amplifiers
would cause the amplifiers to clip when operating on the lower set of rail voltages at certain threshold values.

•

•

If it would cause clipping, the control logic instructs the charge pump to provide the next higher set of rail voltages
to the amplifiers.

If it would not cause clipping, the control logic instructs the charge pump to provide the lower set of rail voltages to
the amplifiers, eliminating the need to advise the CS43131 of volume settings external to the device.

DS1155F2

33

CS43131
4.3 Class H Amplifier Output

4.3.2

Power-Supply Transitions

Charge-pump transitions from the lower to the higher set of rail voltages occur on the next FLYN/FLYP clock cycle. Despite
the system’s fast response time, the VCP_FILT pin’s capacitive elements prevent rail voltages from changing instantly.
Instead, the rail voltages ramp up from the lower to the higher supply, based on the time constant created by the output
impedance of the charge pump and the capacitor on the VCP_FILT pin (the transition time is approximately 20 µs).

Fig. 4-4 shows Class H supply switching. During this charging transition, a high dv/dt transient on the inputs may briefly
clip the outputs before the rail voltages charge to the full higher supply level. This transitory clipping has been found to be
inaudible in listening tests.

Ideal Transition

Actual Transition caused
by VCP_FILT+ Capacitor

Time

+VP_LDO

+VCP

-VCP

-VP_LDO

When the charge pump transitions from the lower to higher set or rail voltage, there is no delay associated with the
transition.

Figure 4-4. VCP_FILT Transitions

34

DS1155F2

When the charge pump transitions from the higher to the lower set of rail voltages, there is an approximate 5.5-s delay
before the charge pump supplies the lower rail voltages to the amplifiers. This hysteresis ensures that the charge pump
does not toggle between the two rail voltages as signals approach the clip threshold. It also prevents clipping in the
instance of repetitive high-level transients in the input signal. Fig. 4-5 shows examples of this transitional behavior.

CS43131
4.3 Class H Amplifier Output

Output Level

5.5 s

–11 dB

–11.5 dB

Output Stage
Rail Voltage

+VP_LDO

+VCP

Time

–VCP

–VP_LDO

Figure 4-5. VCP_FILT Hysteresis

DS1155F2

35

4.3.3

HP Current Limiter

The CS43131 features built-in current-limit protection for the headphone output. Table 3-18 lists the threshold for the
current limit during the short-circuit conditions shown in Fig. 4-6. For the HP amplifiers, current is from the internal charge
pump output, and, as such, applies the current from VCP or VP.

CS43131
4.3 Class H Amplifier Output

VP

VCP

Charge
Pump

VCP_FILT+

VCP_FILT–

HPOUTA

I

HPOUTB

I

GNDA/GNDCP

4.3.4

External VCP_FILT Supply Mode

Figure 4-6. HP Short Circuit Setup

To bypass the CS43131 Class-H charge-pump circuit, provide external VCP_FILT± supply with the following conditions:

• When CS43131 is operating, apply +3.0 V with ±5% accuracy to VCP_FILT+ and apply –3.0 V with ±5% accuracy

to VCP_FILT–.

• When CS43131 is powered down, external circuits present Hi-Z state to the VCP_FILT+ pin (>1k impedance) and

VCP_FILT– pin (>10k impedance).

• To avoid possible damage, VCP_FILT± pins must remain within the absolute maximum rating specified.

VCP_FILT+

Hi‐Z

VCP_FILT‐

Hi‐Z

PDN_HP

EXT_VCPFILT

+3.0 V
+2.6 V

‐2.6 V
‐3.0 V

8 ms

Figure 4-7. External VCP_FILT Power-Up Sequence

For powering up CS43131 in this mode, the recommended sequence must be followed. This assumes that the CS43131
starts from the status where VCP_FILT± pins are presented with Hi-Z.

1. Set EXT_VCPFILT and HV_EN bits.

2. Wait 8 ms after I2C ACK.

3. Release and start to ramp external voltage on VCP_FILT± pins.

4. Wait until VCP_FILT+ pin voltage to be greater than +2.6V and VCP_FILT– to be less than –2.6 V.

36

DS1155F2

5. Clear the PDN_HP bit.

+3.0 V
VCP_FILT+

VCP_FILT‐
‐3.0 V

PDN_HP

EXT_VCPFILT

CS43131
4.4 Alternate Headphone Inputs

Hi‐Z

Hi‐Z

Figure 4-8. External VCP_FILT Power-Down Sequence

8 ms

For powering down in this mode, use the following recommended sequence. This assumes that the CS43131 starts from
the status where VCP_FILT± pins are presented with ±3.0 V, respectively.

1. Set PDN_HP.

2. Wait 8 ms after I2C ACK.

3. Start to shut-off external supply to VCP_FILT± pins.

4. Wait until Hi-Z mode is presented on VCP_FILT± pins.

5. Clear EXT_VCPFILT and HV_EN bits.

4.4  Alternate Headphone Inputs

The top-level schematic of the alternate headphone inputs is shown in Fig. 4-9. Bits PDN_HP and HP_IN_EN configure
the audio source for the HPOUT pins. The switches connected to HPINx are controlled by HP_IN_EN. The switches
connected to the internal headphone driver are controlled by PDN_HP. When the alternate headphone inputs are selected
(HP_IN_EN = 1), the CS43131 internal headphone driver output needs to be disconnected (PDN_HP = 1). Likewise, when
the CS43131 internal headphone drivers are enabled, the HPINx switch needs to be open and not in the signal path.

HPINA

HPINA

HPINA

HPREFA

HP_IN_EN=0

HPREFA

HP_IN_EN=1

HPREFA

HP_IN_EN=0

PDN_HP=0

HPOUTA

HPOUTB

PDN_HP=1

HPOUTA

HPOUTB

PDN_HP=1

HPOUTA

HPOUTB

HPREFB

HPREFB

HPREFB

HPINB

HPINB

HPINB

Figure 4-9. Alternative Headphone Input Setup

DS1155F2

37

CS43131
4.5 Headphone Presence Detect and Output Load Detection

Before opening the HPINx switches, ramp down any active signal on HPINx pins to a voltage less than the VINOFF value
specified in Table 3-8. Similarly, the voltage cannot exceed the same voltage requirement before the switches are closed.
To prevent any pop on the headphone, the input should be muted during these transition. The CS43131 has ultralow offset
when muted. For pop-free transition on the headphone, it is expected that the source on HPINx pins have low offset to
ground when muted.

The recommended sequence to switch from CS43131 to HPINx is as follows:

1. Soft ramp content on CS43131 down to mute.

2. Set PDN_HP and wait for PDN_DONE_INT event.

3.

If saving power is desired, switch MCLK_INT source to RCO.

4. Set HP_IN_EN.

The recommended sequence to switch from HPINx to CS43131 is as follows:

1. Setup CS43131 intended MCLK source for DAC operation (if needed)

2. Soft ramp content on HPINx down to mute.

3. Clear HP_IN_EN.

4. Switch MCLK_INT to the intended MCLK source when ready.

5. Clear PDN_HP.

The CS43131 has a HP_IN_LP setting to further reduce power when HPINx is enabled. This low power mode is only
supported if EXT_VCPFILT = 0. When selected, the HPINx path is placed into low power mode. This setting is only in
effect when HP_IN_EN = 1. It should only be set after HP_IN_EN = 1, and the user must wait for tHPIN_ON (EXT_
VCPFILT = 1) before enabling HP_IN_LP bit. HP_IN_LP should be cleared before HP_IN_EN is cleared. When HP_IN_
LP = 1, the maximum supported clock speed for I2C is 400 kHz.

4.5  Headphone Presence Detect and Output Load Detection

The CS43131 provides headphone presence-detect and load-detection functionalities.

4.5.1

Headphone Presence Detect

The CS43131 supports headphone presence-detect capability via the HP_DETECT sense pin. HP_DETECT is
debounced to filter out brief events before being reported to the corresponding presence-detect status bit and generating
an interrupt if appropriate.

4.5.1.1 Headphone Plug Types

The presence detect scheme is designed to support the following plug types:

• Tip-Ring-Sleeve (TRS). Consists of a segmented metal barrel with the tip connector used for HPOUTA, a ring

connector used for HPOUTB, and a sleeve connector used for HPGND.

• Tip-Ring-Ring-Sleeve (TRRS). Similar to TRS, with an additional ring connector for the HSIN connection. There are

two common pinouts for TRRS plugs:

— The tip is used for HPOUTA, the first ring for HPOUTB, the second ring for HSGND, and the sleeve for HSIN.

— An alternate pinout, OMTP (open mobile terminal platform), also called “China headset,” swaps the third and

fourth connections so that the second ring carries HSIN and the sleeve carries HSGND.

Note that if both TRRS plug types need to be supported at the same time, the CS43131 requires an additional IC to perform
the OMTP detect functions and to present the identified HSGND to the CS43131 HPREFx. However, the switch inside the
detect IC may degrade the CS43131 performance.

38

DS1155F2

CS43131
4.5 Headphone Presence Detect and Output Load Detection

4.5.1.2 Headphone Detect Methods

CS43131 can detect the presence or absence of a plug. For a headphone-presence detect, a sense pin is connected to
a terminal on the receptacle such that, if no plug is inserted, the pin is floating. If a plug is inserted, the pin is shorted to
the tip (T) terminal. The presence detect function is accomplished by having a small current source inside the CS43131
to pull up the pin if it is left floating (no plug). If a plug is inserted and the sense pin is shorted to  HPOUTA, when HP amp
is powered down, it is assumed that the sense pin is pulled low via clamps at the HP amp output. If the HP amp is running,
the sense pin is shorted to the output signal and, therefore, is pulled below a certain threshold via the output stage of the
HP amp. Thus, a low level at the sense pin indicates plug inserted, and a high level at the sense pin indicates plug
removed.

4.5.1.3 Headphone Detect Registers

This section describes the behavior and interaction of the headphone-detect debounce register fields. See Fig. 4-10 for
reference.

HP Detect Block
HPDETECT_CTRL p. 131

HP Detect
Debounced Status
HPDETECT_PLUG_DBC p. 131
HPDETECT_UNPLUG_DBC
p. 132

HPDETECT_RISE_DBC_TIME p. 131

HP_DETECT

0

1

HPDETECT_INV
p. 131

No
Delay

RISE DEBOUNCE

FALL_DEBOUNCE

No
Delay

HP Detect
Plug/Unplug
Detect

Interrupt Handler Block

HP Detect
 Plug/Unplug Interrupt
Mask
HPDETECT_PLUG_INT_
MASK p. 137
HPDETECT_UNPLUG_
INT_MASK p. 137

HP Detect
Plug/Unplug Interrupt
Status
HPDETECT_PLUG_INT
p. 134
HPDETECT_UNPLUG_
INT p. 134

INT

Read
Clears INT

HPDETECT_FALL_DBC_TIME p. 131

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

4.5.1.4 Headphone Detect and Interrupts Setup Instructions

The following steps are required for activation of headphone-detect debounce interrupt status:

1. Ensure the I2C is ready to respond to control port command.

2. Clear the interrupt masks.

3. Write to HPDETECT_RISE_DBC_TIME and HPDETECT_FALL_DBC_TIME (see p. 131) to enable debounce for

presence detect plug/unplug.

4. Set HPDETECT_CTRL to 11 to enable the HPDETECT functions.

DS1155F2

39

CS43131
4.5 Headphone Presence Detect and Output Load Detection

The interrupt status bits can be found in Section 7.6.1.

4.5.2

HP Load Detection

The CS43131 can measure the impedance of headphone DC load. Before taking measurements, the following criteria
must be met:

• The CS43131 is out of reset.

• XTAL is powered on, an external MCLK is provided or PLL mode is used to generate internal MCLK. MCLK_INT is

properly configured.

• The headphone output is powered down (PDN_HP = 1).

• The alternate headphone input is powered down (HP_IN_EN = 0).

• HPDETECT is high to indicate a headphone is plugged in.

• The HPLOAD_EN bit is set to turn on the impedance measurement subsystem. HPLOAD_ON_INT is unmasked

and there has been a long enough wait to confirm the subsystem is properly started.

• The HPLOAD_DC_DONE interrupt is unmasked.

Either Channel A or Channel B to be measured by setting HPLOAD_CHN_SEL. The measurement process by clearing
and setting the HPLOAD_DC_START bit. Once started, HPLOAD_DC_BUSY bit is set and a slowly ramping voltage is
asserted on the headphone load for a maximum of 200 ms, then holds constant for 100 ms. Fig. 4-11 shows the a
waveform of the impedance detection voltage.

Voltage

100 ms

200 ms

200 ms

Time

Figure 4-11. Impedance Detection Voltage

Upon measurement completion, the following occurs:

1. The voltage asserted ramps down for 200 ms and is then removed.

2. The result of the measured resistance is reported in RL_DC_STAT.

3. HPLOAD_DC_DONE bit is set and the interrupt is triggered.

4.

If HPLOAD_DC_ONCE bit has not been set, it is set. This bit is sticky until an HP unplug event has happened.

Once interrupted, the application processor services the interrupt by reading HPLOAD_DC_DONE_INT. At this point,
another measurement process can be initiated by clearing and setting the HPLOAD_DC_START bit. The impedance
measurement subsystem can also be turned off by clearing the HPLOAD_EN bit. HPLOAD_EN must be cleared (and
confirmed by unmasked HPLOAD_OFF_INT) before enabling the headphone output or the alternate headphone input.

During the impedance measurement process, the following conditions trigger the error interrupt bits:

• The headphone load is not present or is unplugged before the impedance measurement is complete (HPLOAD_

UNPLUG_INT).

• The headphone load is out of range, as specified in Table 3-7 (HPLOAD_OOR_INT).

• The headphone load measurement process is started without HP being properly turned off (HPLOAD_HPON_INT).

• The AC headphone load measurement process is initiated before the HPLOAD_DC_ONCE bit is set (HPLOAD_

NO_DC_INT).

40

DS1155F2

CS43131
4.6 Clocking Architecture

The HPLOAD error interrupt bits are sticky. If any HPLOAD error interrupt bits are flagged, the RL_DC_STAT value should
be treated as invalid.

4.5.2.1 AC Load Detection

The CS43131 can also measure the headphone load impedance in the frequency range of 20 Hz to 20 kHz. The required
conditions before the measurement is similar to the low frequency load measurement, with one exception—HPLOAD_
MEAS_FREQ is set at the frequency of interest. Refer to Section 7.5.14 and Section 7.5.15 for details.

After HPLOAD_AC_START bit is cleared and set:

1. HPLOAD_AC_BUSY bit is set

2. The result of the measured resistance is reported in RL_AC_STAT.

3. HPLOAD_AC_DONE_INT is set and the interrupt is triggered.

For each headphone, the low-frequency load measurement must be performed (as indicated by the HPLOAD_DC_ONCE
bit) before any impedance is measured at other frequencies. If the low-frequency load measurement is not performed and
the process is initiated by pulsing the HPLOAD_AC_START bit low and high, the CS43131 can not generate a test signal
and sets the HPLOAD_NO_DC_INT error interrupt bit. Any RL_AC_STAT value should be treated as invalid.

Once the measurement begins, a tone at the specified frequency is applied on the headphone load. Because the test tone
is in the audio frequency range, it can be audible by the headphone user. It is recommended that the user system notify
the headphone user of the expected events before initiating this measurement.

For each frequency, the measurement completion time is affected by the frequency of interest. The lower the frequency,
the longer the measurement time. For the relationship between the frequency under test and the measurement time, the
following applies:

• For frequencies under test less than 6 kHz or when the CS43131 comes out of reset, 10 periods of the test tone is

the measurement time.

• For frequencies under test between 6 and 13 kHz, 20 periods of the test tone is the measurement time.

• For frequencies under test between 13 and 20 kHz, 30 periods of the test tone is the measurement time.

See Section 5.14.2 for example code of AC impedance measurement.

4.6  Clocking Architecture

4.6.1 Master Clock (MCLK) Sources

The MCLK is required by the CS43131 to operate any functionality associated with control, serial-port operation, or data
conversion. Depending on the setting of MCLK_SRC_SEL (see p. 114), the MCLK can be provided by one of following
methods:

• Sourced from a crystal oscillator between XTI/MCLK and XTO pins (see Fig. 4-12), then used directly as MCLK_INT

• Externally sourced through the XTI/MCLK input pin (see Fig. 4-13)

• PLL reference clock is provided through the XTI/MCLK input pin (see Fig. 4-13), then use internal PLL to convert

into MCLK_INT

DS1155F2

41

• Use internal RCO as MCLK. Note that for optimized power consumption, the HPIN input path is the only supported
audio playback feature in this mode. This mode can also support HP detection and I2C communication. DAC
playback and headphone impedance measurement functions are not supported.

CS43131
4.6 Clocking Architecture

XTAL

XTI/MCLK

XTO

Figure 4-12. System Clocking—Crystal Mode

External MCLK

System
Clock

XTI/MCLK

XTO

Figure 4-13. System Clocking—External MCLK Mode

If XTAL is used, the supported crystal characteristics and frequencies are listed in Table 3-16. Based on the crystal
selection, XTAL_IBIAS must be set properly before powering up. The XTAL_IBIAS information can be found in
Section 5.3. PDN_XTAL is cleared to start the crystal oscillator. PDN_XTAL is set to power down the crystal oscillator. The
XTAL_READY_INT and XTAL_ERROR_INT status bits indicate the status of crystal operation after power-up. At tXTAL_pup
after the crystal oscillator is powered up, if the crystal is started successfully and ready to be used, XTAL_READY_INT is
set; if the crystal is started unsuccessfully, XTAL_ERROR_INT is set. The two bits are mutually exclusive when set. Both
status bits have corresponding interrupt status bits and interrupt mask bits. To be informed on the crystal status at tXTAL_
pup after power-up, unmask both interrupts before powering up the crystal.

When the MCLK is supplied to the device through the XTI/MCLK pin, it must comply with the phase-noise mask shown in
Fig. 4-14. Its frequency must be one of the nominal MCLK_INT frequencies (22.5792 or 24.576 MHz), and its duty cycle
must be between 45% to 55%.

Figure 4-14. MCLK Phase Noise Mask Without PLL

42

DS1155F2

When the PLL reference clock is supplied to the device through the XTI/MCLK pin, it must comply with the phase-noise
mask shown in Fig. 4-15.

CS43131
4.6 Clocking Architecture

Further restrictions are listed in Table 4-3.

Figure 4-15. MCLK Phase Noise Mask With PLL

Table 4-3.  MCLK Source Restrictions

MCLK_SRC_SEL MCLK_INT

Restrictions

Internal
MCLK
Source
Direct MCLK
or XTAL

00

PLL

01

RCO

10

0

1

0

1

X

 • Nominal MCLK_INT frequency = 24.576 MHz
 • All specified CLKOUT frequencies (generated by PLL or XTAL) are supported
 • CLKOUT outputs (/2, /3, /4, /8 divide) optionally
 • Nominal MCLK_INT frequency = 22.5792 MHz
 • All specified CLKOUT frequencies (generated by PLL or XTAL) are supported
 • CLKOUT outputs (/2, /3, /4, /8 divide) optionally
 • Nominal MCLK_INT frequency = 24.576 MHz
 • PDN_PLL = 0 and PLL properly configured to generate 24.576 MHz given reference input

frequency on XTI/MCLK pin

 • Only MCLK_INT on CLKOUT is supported on CLKOUT pin
 • CLKOUT outputs (/2, /3, /4, /8 divide) optionally
 • Nominal MCLK_INT frequency = 22.5792MHz
 • PDN_PLL = 0 and PLL properly configured to generate 22.5792 MHz given reference input

frequency on XTI/MCLK pin

 • Only MCLK_INT on CLKOUT is supported on CLKOUT pin
 • CLKOUT outputs (/2, /3, /4, /8 divide) optionally
 • No MCLK_INT selection necessary. DAC playback is not supported. I2C port and HPIN_x

pins are supported.

DS1155F2

43

CS43131
4.7 Clock Output and Fractional-N PLL

XTI/MCLK

MCLK_SRC_SEL

RCO

Internal
PLL

PDN_PLL p. 115

Internal MCLK
MCLK_INT p. 114

CLKOUT_DIV p. 118

÷

CLKOUT

CLKOUT_SEL p. 118

Figure 4-16. MCLK Source Switching

A source to MCLK_INT, either the XTAL (or external MCLK), PLL, or the RCO, must be provided as long as CS43131 is
operating; otherwise, the CS43131 will enter a non-responsive state. The only way to recover from this non-responsive
state is either through a reset or POR event. Switching MCLK sources during DAC operation causes audible artifacts, but
does not put the device in an unrecoverable state. In an MCLK source-switching event, the destined clock source must be
present and ready before switching occurs.

After POR or reset event, RCO is selected as default source of MCLK_INT.

4.6.1.1 Internal RC Oscillator

As described in Section 4.6.1, the CS43131 includes an internal RC oscillator that can be used as a clock source for
peripheral circuit such as control port or charge pump.

4.7  Clock Output and Fractional-N PLL

The CS43131 clock output can be used as a master clock for other data-conversion or signal-processing components,
which requires synchronous timing to the CS43131.

The CLKOUT output is enabled by clearing PDN_CLKOUT.

XTI/MCLK

CLKOUT_DIV

PLL_OUT

÷

CLKOUT

CLKOUT_SEL p. 118

Figure 4-17. CLKOUT Source Selection

Once enabled, CLKOUT is generated either from the internal crystal oscillator output (when used) or from the integrated
fractional-N PLL; it can be selected by CLKOUT_SEL. CLKOUT_DIV can be used to set /2, /3, /4, or /8 to divide the
selected clock source to targeted frequency.

4.7.1

Fractional-N PLL

The CS43131 has an integrated fractional-N PLL to support the clocking requirements of various applications. This PLL
can be enabled or disabled by clearing or setting PDN_PLL bit. The input reference clock for the PLL is signal on XTI/
MCLK pin (crystal-generated or external-feed).

44

DS1155F2

4.7.2

Fractional-N PLL Internal Interface

Fig. 4-18 shows how PLL operation can be configured.

PDN_PLL p. 115
PLL_START p. 116

CS43131
4.7 Clock Output and Fractional-N PLL

XTI/MCLK

PLL_REF_
PREDIV
p. 117

PLL

PLL_OUT_
DIV p. 117

PLL_OUT

PLL_DIV_INT p. 116
PLL_DIV_FRAC_0 p. 116
PLL_DIV_FRAC_1 p. 116
PLL_DIV_FRAC_2 p. 116
PLL_MODE p. 117

Figure 4-18. Fractional-N PLL

Use Eq. 4-1 to calculate the PLL output frequency.

PLL_OUT =

PLL_REF
PLL_REF_PREDIV

×

PLL_DIV_INT + PLL_DIV_FRAC
500
512

or 1, selected by PLL_Mode

×

1
PLL_OUT_DIV

Equation 4-1. PLL Output Frequency Equation

PLL_REF source must be in range below:

PLL_REF Source

MCLK/XIN pin

PLL_REF_PREDIV Input

Minimum
9.6 MHz

Maximum
26 MHz

Table 4-4 lists common settings with XTAL input as PLL reference.

Table 4-4.  PLL Configuration for Typical Use Case (XTAL as the PLL Reference)

XTAL
(MHz)

PLL_REF_PREDIV
(Divide-by Value)

PLL_REF_PREDIV
(Setting)

PLL_
DIV_INT

PLL_DIV_FRAC PLL_OUT_DIV

22.5792
24.576

8
8

0x3
0x3

0x44
0x49

0x06 F700
0x80 0000

0x08
0x0A

PLL_
MODE

0
1

PLL
OUT
(MHz)
24.576
22.5792

PLL_CAL_
RATIO

139
118

Table 4-5 lists common settings with MCLK input as PLL reference.

Table 4-5.  PLL Configuration for Typical Use Case (XIN/MCLK as the PLL Reference)

XIN/MCLK
(MHz)
11.2896

22.5792
12.000

24.000

12.288

24.576
9.600

PLL_REF_PREDIV
(Divide-by Value)
4
4
8
4
4
8
8
4
4
8
4
4

PLL_REF_PREDIV
(Setting)
0x2
0x2
0x3
0x2
0x2
0x3
0x3
0x2
0x2
0x3
0x2
0x2

DS1155F2

PLL_DIV_INT PLL_DIV_FRAC PLL_OUT_DIV

0x40
0x44
0x44
0x49
0x40
0x49
0x40
0x49
0x40
0x49
0x49
0x50

0x00 0000
0x06 F700
0x06 F700
0x80 0000
0x00 0000
0x80 0000
0x00 0000
0x80 0000
0x00 0000
0x80 0000
0x80 0000
0x00 0000

0x08
0x08
0x08
0x0A
0x08
0x0A
0x08
0x0A
0x08
0x0A
0x08
0x08

PLL_
MODE
1
0
0
0
0
0
0
1
1
1
0
0

PLL_OUT
(MHz)
22.5792
24.576
24.576
22.5792
24.576
22.5792
24.576
22.5792
24.576
22.5792
22.5792
24.576

PLL_CAL_
RATIO
128
139
139
120
131
120
131
118
128
118
151
164

45

CS43131
4.8 Filtering Options

Table 4-5.  PLL Configuration for Typical Use Case (XIN/MCLK as the PLL Reference) (Cont.)

XIN/MCLK
(MHz)
19.200

13.000

26.000

PLL_REF_PREDIV
(Divide-by Value)
8
8
4
4
8
8

PLL_REF_PREDIV
(Setting)
0x3
0x3
0x2
0x2
0x3
0x3

PLL_DIV_INT PLL_DIV_FRAC PLL_OUT_DIV

0x49
0x50
0x45
0x3C
0x45
0x3C

0x80 0000
0x00 0000
0x79 7680
0x7E A940
0x79 7680
0x7E A940

0x08
0x08
0x0A
0x08
0x0A
0x08

PLL_
MODE
0
0
1
1
1
1

PLL_OUT
(MHz)
22.5792
24.576
22.5792
24.576
22.5792
24.576

PLL_CAL_
RATIO
151
164
111
121
111
121

Note that in Table 4-4 and Table 4-5:

• The PLL_OUT_DIV value must be even.

• PLL_OUT frequencies are at 22.5792 or 24.576 MHz. CLKOUT frequencies can be obtained by configuring the

CLK_OUT_DIV value:

PLL_OUT
22.5792 MHz
24.576 MHz

CLK_OUT_DIV (2)
11.2896 MHz
12.288 MHz

CLK_OUT_DIV (3)
7.5264 MHz
8.192 MHz

CLK_OUT_DIV (4)
5.6448 MHz
6.144 MHz

CLK_OUT_DIV (8)
2.8224 MHz
4.096 MHz

• PLL_ERROR_INT constantly monitors the PLL error status after PLL_START is set, assuming the PLL reference

input is stable and accurate.

4.7.2.1 Powering Up the PLLs

To power up the PLL, use the following default sequence:

1. Enable the PLL by clearing PDN_PLL.

2. Configure PLL_REF_PREDIV.

3. Configure PLL_OUT_DIV.

4. Configure the three fractional factor registers, PLL_DIV_FRAC.

5. Set the integer factor, PLL_DIV_INT, to the desired value.

6. Configure PLL_MODE and PLL_CAL_RATIO.

7. After properly unmasked (clearing PLL_READY_INT_MASK and PLL_ERROR_INT_MASK), PLL_READY_INT,

and PLL_ERROR_INT are used to monitor if PLL has been successfully started.

8. Turn on the PLL by setting PLL_START.

4.7.2.2 Powering Down the PLL

1. Clear PLL_START to stop the PLL operation.

2. For further power saving, set PDN_PLL to disable the PLL block.

4.8  Filtering Options

To accommodate the increasingly complex requirements of digital audio systems, the CS43131 incorporates selectable
filters in different playback modes.

For PCM/TDM mode, the following interpolation filtering options can be selected:

• Fast roll-off and slow roll-off interpolation filter options.

•

In each option above, both low-latency and normal phase-compensation filtering options can be used.

• Nonoversampling (NOS) mode is provided, which minimizes the internal digital processing. Once NOS mode is set,

the settings on the above two options are ignored.

46

DS1155F2

CS43131
4.9 Audio Serial Port (ASP)

The combination of the options results in five different filter combinations. The specifications for each filter can be found
in Table 3-9, and response plots can be found in Section 9. These filters have been designed to accommodate a variety
of musical tastes and styles. The PCM filter option register (see Section 7.5.2) is used to select filter options.

When in octuple-speed mode, the filter options above are not available and the internal digital processing is minimized.
See the specification in Table 3-9 for filter characteristics.

The DSD processor mode uses a decimation-free DSD processing technique that allows for features such as matched
PCM level output, DSD volume control, and 50-kHz on-chip filter.

4.9  Audio Serial Port (ASP)

The independent, highly configurable ASPs and auxiliary serial ports (XSPs) communicate audio data from other system
devices, such as applications processors. Both ports can be configured to support common audio interfaces, TDM/I2S and
left-justified (LJ).

ASP supports both PCM and DoP stream playback. XSP can only support DoP stream playback. For DAC playback, only
one port needs to be enabled. Both ports are enabled only in specific application, such as PCM notification mixing with
DSD/DoP content. Details regarding this application setup can be found in Section 4.12.

In this section, the reference to both ports is generalized as “xSP” to explain the common settings between the two ports.

4.9.1 Master and Slave Timing

Each serial port can operate as either the master of timing or as a slave to another device’s timing. If xSP_M/S is set, the
serial port acts as a clock master. If xSP_M/S is cleared, the serial port acts as a clock slave.

•

•

•

In Master Mode, xSP_SCLK and xSP_LRCK are outputs derived from the internal MCLK.

In Slave Mode, xSP_SCLK and xSP_LRCK are inputs. Although the CS43131 does not generate the interface
timings in Slave Mode, the expected LRCK and SCLK format must be programmed in the same way as in Master
Mode (see Table 3-20).

In both modes, the serial port sample rate register (xSP_SPRATE) must be set per audio content before enabling
the serial port.

• When using ASP for PCM playback, the audio serial port sample bit size register (ASP_SPSIZE) must be set per

audio content before enabling the ASP.

• When using XSP or ASP for DoP playback, the serial port sample bit size register (XSP_SPSIZE or ASP_SPSIZE)
must be set per audio content before enabling the XSP or ASP. Note that the XSP_SPSIZE or ASP_SPSIZE must
reflect the length of both DSD marker bits together with audio bits.

4.9.2

Power-Up, Power-Down, and Tristate

The xSP has separate power-down and tristate controls (PDN_xSP and xSP_3ST) for input data paths, which minimizes
power consumption if the input port is not used. xSP master/slave operation is controlled only by the xSP_M/S setting,
irrespective of the PDN_xSP and xSP_3ST settings.

• PDN_xSP. If a serial port’s SDIN functionality is not required, xSP can be powered down by setting PDN_xSP,

which powers down the input data path and clocks of the serial port.

•

xSP_3ST. In Master Mode, setting xSP_3ST tri-states the SCLK and LRCK clocks. Before setting an xSP_3ST bit,
the associated serial port must be powered down and must not be powered up until the xSP_3ST bit is cleared. In
Slave Mode, xSP_3ST does not affect the functionality of SCLK and LRCK clocks, given both pins are input pins.

4.9.3

I/O

The ASP port is associated with SDIN1, SCLK1, and LRCK1. The XSP port is associated with SDIN2, SCLK2, and LRCK2,
which are shared with DSD interface:

• SCLKx—Serial data shift clock

DS1155F2

47

• LRCKx—Toggles at external sample rate (Fsext). LRCK (left/right, I²S) identifies each channel’s (left or right)

location in the data word when I²S format is used. LRCK identifies the start of each serialized data word. FSYNC
(frame sync clock, TDM) identifies the start of each TDM frame.

CS43131
4.9 Audio Serial Port (ASP)

• SDINx—Serial data input

4.9.4

High-Impedance Mode

Serial ports can be placed on a clock bus that allows multiple masters without the need for external buffers. xSP_3ST bits
place the internal buffers for the respective serial-port interface signals in a high-impedance state, allowing another device
to transmit clocks without bus contention. When the CS43131 serial port is a timing slave, its SCLK and LRCK I/Os are
always inputs and are thus unaffected by the xSP_3ST control. Fig. 4-19 shows the busing for CS43131 master timing
serial-port use case.

Transmitting
Device #1 (DAC)

x_3ST

x_SCLK,
x_LRCK

Transmitting
Device #2

Receiving Device

Note: x = XSP or ASP

Figure 4-19. Serial Port Busing when Master Timed

4.9.5

Clock Generation and Control

The CS43131 has a flexible serial port clock generation subsystem that allows independent clocking of the two serial ports.
When operating as a master port, the serial port provides a bit clock (xSP_SCLK) and a left-right/frame sync signal (xSP_
LRCK/FSYNC).

Fig. 4-20 and Fig. 4-21 show the serial port clocking architecture.

Internal MCLK

IN

ASP_N_LSB p. 118/XSP_N_LSB p. 120
ASP_N_MSB p. 118/XSP_N_MSB p. 121

ASP_M_LSB p. 118/XSP_M_LSB p. 121
ASP_M_MSB p. 119/XSP_M_MSB p. 121

N[13:0]

N

M

M[13:0]

ASP_SCPOL_OUT p. 120/
XSP_SCPOL_OUT p. 122

ASP_M/SB p. 120/
XSP_M/SB p. 122

SCLK

1

0

To LRCK

SCLK to
Serial Port

0

1

ASP_SCPOL_IN p. 120/
XSP_SCPOL_IN p. 122

Figure 4-20. xSP SCLK and MCLK Architecture

48

DS1155F2

CS43131
4.9 Audio Serial Port (ASP)

As shown in Fig. 4-20, the master-mode SCLK output for each serial port is derived from the internal MCLK. The SCLK
output can be configured to various frequencies to accommodate many sample rates, sample sizes, and channel counts.
The SCLK is output of a fractional divide from the internal MCLK input, where N is the numerator and M is the denominator.

Note: Depending on the chosen fractional divide configuration, the SCLK duty cycle can vary by one MCLK period.

Input and output SCLK polarity controls (xSP_SCPOL_IN and xSP_SCPOL_OUT) are also available. As shown in
Fig. 4-20, if Master Mode is used, both polarity controls affect the SCLK used by the serial port module. For example, both
polarity controls must be set (xSP_SCPOL_IN = xSP_SCPOL_OUT = 1) to invert the SCLK output and output data on the
falling edge. In typical use cases, the values of xSP_SCPOL_IN equals xSP_SCPOL_OUT in each serial port. See
Fig. 4-23 for example waveforms showing the various settings of the SCLK polarity controls.

Likewise, input and output LRCK polarity controls (xSP_LCPOL_IN and xSP_LCPOL_OUT) are available. In Master
Mode, both LRCK polarity controls affect the LRCK used by the serial-port module as shown in Fig. 4-21. In typical-use
cases, the value of xSP_LCPOL_IN equals xSP_LCPOL_OUT in each serial port.

ASP_LCPOL_OUT p. 120/
XSP_LCPOL_OUT p. 122

ASP_M/SB p. 120/
XSP_M/SB p. 122

From SCLK

ASP_LCHI_LSB p. 119/XSP_LCHI_LSB p. 121
ASP_LCHI_MSB p. 119/XSP_LCHI_MSB p. 121

ASP_LCPR_LSB p. 119/XSP_LCPR_LSB p. 122
ASP_LCPR_MSB p. 119/XSP_LCPR_MSB p. 122

ASP_5050 p. 120/XSP_5050 p. 122

OUT

LR GEN

IN

HI

PER

5050

ASP_FSD p. 120/XSP_FSD p. 123

DELAY

1

0

0

1

LRCK to
Serial Port

x_M/S = 1  (master) &
PDN_x = 0 (enabled )

EN

ASP_LCPOL_IN p. 120/
XSP_LCPOL_IN p. 122

Figure 4-21. xSP LRCK Architecture

ASP_LRCK/FSYNC

As shown in Fig. 4-22, xSP_LCPR determines the LRCK/FSYNC period, in units of SCLK periods. The LRCK period
effectively sets the length of the frame and the number of SCLK periods per Fs. Frame length may be programmed in
single SCLK period multiples from a minimum of 16 SCLK:Fs up to 1536 SCLK:Fs.

The LRCK-high width (xSP_LCHI) controls the number of SCLK periods for which the LRCK signal is held high during
each frame. Like the LRCK period, the LRCK-high width is programmable in single SCLK periods, from a minimum of one
period to a maximum of the LRCK period minus one (and an absolute maximum of 768 SCLK periods). That is, LRCK-high
width must be less than the LRCK period.

LRCK

Falling
Edge

Rising
Edge

SCLK

xSP_LCHI

...

...

...

xSP_LCPR

...

...

...

Figure 4-22. xSP LRCK Period, High Width

DS1155F2

49

As shown in Fig. 4-23, if Serial Port 50/50 Mode is enabled (xSP_5050 = 1), the LRCK high duration must be programmed
to the LRCK period divided by two (rounded down to the nearest integer when the LRCK period is odd). When the serial
port is in 50/50 Mode, setting the LRCK high duration to a value other than half of the period results in erroneous operation.

CS43131
4.9 Audio Serial Port (ASP)

LRCK

Falling
Edge

Rising
Edge

SCLK

LRCK

Falling
Edge

Rising
Edge

SCLK

xSP_LCHI

...

...

...

xSP_LCPR

...

...

...

Even xSP _LCPR

xSP_LCPR

xSP_LCHI

xSP_LCHI

...

...

...

...

...

...

Figure 4-23. xSP_LRCK Period, High Width, 50/50 Mode

Odd xSP _LCPR

xSP_LCPR count clock is absent

50

DS1155F2

Fig. 4-24 shows how LRCK frame start delay (xSP_FSD) controls the number of SCLK periods delay from the LRCK
synchronization edge to the start of frame data.

CS43131
4.9 Audio Serial Port (ASP)

LRCK

FSD = 101

FSD = 100

FSD = 011

FSD = 010

FSD = 001

FSD = 000

SCLK

SDIN

SCLK

SDIN

SCLK

SDIN

SCLK

SDIN

SCPOL _IN = 0
SCPOL_OUT = 0

SCPOL _IN = 1
SCPOL_OUT = 0

SCPOL _IN = 0
SCPOL_OUT = 1

SCPOL _IN = 1
SCPOL_OUT = 1

...

...

...

...

...

...

...

0
0.5

1
1.5
2
2.5

0

1

2

3

4

5

6

7

8

9

...

N-5

N-4

N-3

N-2

N-1

Channel location (xSP_RX_CHn) = 0

End of frame

...

0

1

2

3

4

5

6

7

8

9

...

N-5

N-4

N-3

N-2

N-1

Channel location (xSP_RX_CHn) = 0

End of frame

...

0

1

2

3

4

5

6

7

8

9

...

N-5

N-4

N-3

N-2

N-1

Channel location (xSP_RX_CHn) = 0

End of frame

...

0

1

2

3

4

5

6

7

8

9

...

N-5

N-4

N-3

N-2

N-1

Channel location (xSP_RX_CHn) = 0

End of frame

Figure 4-24. LRCK FSD and SCLK Polarity Example Diagram

Table 4-6.  Serial Port Clock Generation—Supported Configurations for 32 bits and 2 Channels

Frequency (MHz)

22.5792

24.576

LRCK/FSYNC
Rate (kHz)
32.000
44.100
48.000
88.200
96.000
176.400
192.000
352.800
32.000
44.100
48.000
88.200
96.000
176.400
192.000
352.800
384.000

SCLKs per LRCK Frame
xSP_LCPR + 1 xSP_LCPR[10:0]

xSP_N[15:0] xSP_M[15:0]

64
64
64
64
64
64
64
64
64
64
64
64
64
64
64
64
64

63
63
63
63
63
63
63
63
63
63
63
63
63
63
63
63
63

40
1
20
1
40
1
80
1
1
147
1
147
1
147
1
147
1

441
8
147
4
147
2
147
1
12
1280
8
640
4
320
2
160
1

DS1155F2

51

CS43131
4.9 Audio Serial Port (ASP)

Table 4-7.  Serial Port Clock Generation—Supported Configurations for 32-bits and 4-Channels

Frequency (MHz)

22.5792

24.576

LRCK/FSYNC
Rate (kHz)
32.000
44.100
48.000
88.200
96.000
176.400
32.000
44.100
48.000
88.200
96.000
176.400
192.000

SCLKs per LRCK Frame
xSP_LCPR + 1 xSP_LCPR[10:0]

xSP_N[15:0] xSP_M[15:0]

128
128
128
128
128
128
128
128
128
128
128
128
128

127
127
127
127
127
127
127
127
127
127
127
127
127

80
1
40
1
80
1
1
147
1
147
1
147
1

441
4
147
2
147
1
6
640
4
320
2
160
1

4.9.6

Channel Location and Size

Each serial-port channel has a programmable location offset (xSP_RX_CHn). Channel location is programmable in single
SCLK period resolution. When set to the minimum location offset, the channel transmits or receives on the first SCLK
period of a new frame.

Channel size is programmable in byte resolution from 8 to 32 bits using xSP_RX_CHn_RES. Channel size and location
must not be programmed such that channel data extends beyond the frame boundary. Size and location must not be
programmed such that data from a given SCLK period is assigned to more than one channel. The example in Fig. 4-25
shows channel location and size.

First SCLK latching edge of a
new frame after frame sync

7

N

247

248

255

0

7

SCLK

Traditional
‘Slot’

0 7

Slot 0

Slot 1

Channel Location (xSP_RX_CHn) = N

0 7

0

Slot 30

Slot 31

Channel Size
= 11

31

Ch. M MSB

Ch. M LSB

0

TDM
Channel M Data

Channel Size
= 10

Channel Size
= 01

Channel Size
= 00

23

15

7

Ch. M MSB

Ch. M LSB

0

Don’t Care

Ch. M MSB

Ch.  M LSB

0

Don’t Care

Ch. M MSB

0

Don’t Care

Figure 4-25. Example Channel Location and Size

4.9.7

Frame Start Phase

The serial port can start a frame when xSP_LRCK/FSYNC is high or low, depending on xSP_STP. In typical TDM use
cases, a frame starts when FSYNC is high (xSP_STP = 1).

52

DS1155F2

•

If xSP_STP = 0, the frame begins when LRCK/FSYNC transitions from high to low. See Fig. 4-26 for an example
in 50/50 mode. The TDM Mode behaves similarly.

CS43131
4.9 Audio Serial Port (ASP)

LRCK

xSP_STP = 0

SCLK

Channel location index
(xSP_CHy_LOC ,
xSP_CHz_LOC)

Previous
Sample

...

...

...

...

0

1

2

...

N/2
-3

N/2
-2

N/2
-1

0

1

2

...

N/ 2
-3

N/2
-2

N/2
-1

Channel y

Channel z

Next
Sample

SDIN

xSP_CHy_LOC  = 0,
xSP_CHy_AP = 0

xSP_CHz_LOC = 0,
xSP_CHz_AP = 1

Note: This diagram assumes xSP _FSD = 0.

Figure 4-26. Example 50/50 Mode (ASP_STP = 0)

•

If xSP_STP = 1, the frame begins when LRCK/FSYNC transitions from low to high. See Fig. 4-27 for an example
in 50/50 mode. TDM mode is similar.

LRCK

xSP_STP = 1

SCLK

Channel location index
(xSP_CHy_LOC ,
xSP_CHz_LOC)

Previous
Sample

...

...

...

...

0

1

2

...

N/2
-3

N/2
-2

N/2
-1

0

1

2

...

N/2
-3

N/2
-2

N/2
-1

Channel z

Channel y

Next
Sample

SDIN

xSP_CHz_LOC = 0,
xSP_CHz_AP = 1
Note: This diagram assumes xSP_ FSD = 0.

xSP_CHy_LOC = 0,
xSP_CHy_AP = 0

Figure 4-27. Example 50/50 Mode (ASP_STP = 1)

4.9.8

50/50 Mode

In typical two-channel I2S operation (50/50 Mode, xSP_5050 = 1), the LRCK duty cycle is 50%, and each channel is
transferred during one of the two LRCK phases. In this mode, each serial port channel can be independently programmed
to output when LRCK/FSYNC is high or low; this is called the channel-active phase.

If the active-phase control bit (xSP_RX_CHn_AP) is set, the respective channel is output when LRCK/FSYNC is high. If
xSP_RX_CHn_AP is cleared, the respective channel is output if LRCK/FSYNC is low. Examples of each setting of xSP_
RX_CHn_AP are shown in Fig. 4-26 and Fig. 4-27.

In 50/50 Mode, the channel location (see Section 4.9.6) is calculated within the channel-active phase. If there are N bits
in a frame, the location of the last bit of each active phase is equal to (N/2) – 1.

Note:

If xSP_5050 is set, xSP_LCHI must be programmed to half of xSP_LCPR for a 50% duty cycle. Also, only two
channels can be enabled for the corresponding serial port.

DS1155F2

53

CS43131
4.9 Audio Serial Port (ASP)

4.9.9

Serial Port Status

Each serial port has five status bits. Each bit is sticky and must be read to be cleared. The status bits have associated
mask bits to mask setting the INT pin when the status bit sets. A brief description of each status bit is shown in Table 4-8.

Table 4-8.  Serial Port Status

Name

Description

Request Overload Set when too many input buffers request processing at the same time. If all channel size

LRCK Error

LRCK Early

LRCK Late

No LRCK

and location registers are properly configured to non-overlapping values, this error
status must never set.
Logical OR of LRCK early and LRCK late (see below).

Set when the number of SCLK periods per LRCK phase (high or low) is less than the
expected count as determined by xSP_LCPR and xSP_LCHI.
Note: The Rx LRCK early interrupt status is set during the first receive LRCK early
event. Subsequent receive LRCK early events are not indicated until after valid LRCK
transitions are detected.
Set when the number of SCLK periods per LRCK phase (high or low) is greater than the
expected count as determined by xSP_LCPR and xSP_LCHI.
Set when the number of SCLK periods counted exceeds twice the value of LRCK period
(xSP_LCPR) without an LRCK edge.
The Tx No LRCK interrupt status is set during the first instance of a no transmit LRCK
condition. Subsequent no transmit LRCK conditions are not indicated until after valid
LRCK transitions are detected.

Register Reference
ASP_OVFL_INT p. 134
XSP_OVFL_INT p. 135

ASP_ERROR_INT p. 135
XSP_ERROR_INT p. 135
ASP_EARLY_INT p. 135
XSP_EARLY_INT p. 135

ASP_LATE_INT p. 135
XSP_LATE_INT p. 135
ASP_NOLRCK_INT p. 135
XSP_NOLRCK_INT p. 135

4.9.10 Serial Port Clock Pin Status

There are various control bits available that affect the output state of the serial port clock and data pins. Table 4-9
summarizes the possible states depending on these bit settings.

Table 4-9.  xSP_SCLK and xSP_LRCK/FSYNC Pin States

xSP_3ST

xSP_M/S

PDN_xSP

1
0
0
0

x
0
1
1

x
x
0
1

xSP_SCLK
Pin State
Hi-Z with weak pull-down
Hi-Z with weak pull-down
Active
Inactive

xSP_LRCK/FSYNC
Pin State
Hi-Z with weak pull-down
Hi-Z with weak pull-down
Active
Inactive 1

1.If xSP_LCPOL_OUT is set, xSP_LRCK/FSYNC inactive output is high. If xSP_LCPOL_OUT is cleared, xSP_LRCK/FSYNC

inactive output is low.

4.9.11 DoP (DSD over PCM) Mode

DoP is a protocol for packetizing DSD data into a PCM frame for transmission over an existing I2S interface. The ASP or
XSP can accept DSD data in DoP format.

To use the DoP interface in Slave Mode, if MCLK_INT = 22.5792 MHz, the DoP interface clocks are required to be
synchronous to MCLK_INT.

54

DS1155F2

Each sample is 24 bits, as shown in Fig. 4-28, where the 8 most significant bits are used for the DSD marker and alternate
with each sample between 0x05/0xFA. Each channel within a sample contains the same marker. The remaining 16 lower
bits are then used for the DSD data, with the first or oldest bit in Slot t0.

DSD Marker (8 MSB)

16 DSD Audio bits for one channel (oldest bit = t0)

dm7 dm6 dm5 dm4 dm3 dm2 dm1 dm0

t0

t1

t2

t3

t4

t5

t6

t7

t8

t9

t10

t11

t12

t13

t14

t15

CS43131
4.10 DSD Interface

MSB

LRCK (I2S)

SDATA
(DoP)

24-Bit PCM Frame

DoP Data Sample

LSB

0x05

0x05

0xFA

0xFA

0x05

Data Stream Example of Stereo DoP

Figure 4-28. DoP Data Sample and Stereo Stream Example

Each PCM frame is assigned to a specific channel (left or right), and when used for DSD streaming, each PCM frame
contains only DSD data corresponding to its assigned channel. The CS43131 unpacks the received DoP data and reforms
it into a DSD stream to feed the internal DSD data paths.

It includes the following features:

• 24 bits per PCM data sample

•

I2S format is supported

• DoP data is unpacketed internally for DSD playback

• Clock Master and Slave Mode

• Up to 128•Fs DSD stream

— Accepts a 64•Fs DSD stream with LRCK@176.4 kHz

— Accepts a 128•Fs DSD stream with LRCK@352.8 kHz

To enable DoP interface on the ASP to take in DSD source:

1. Configure the ASP per clocking/format required by DoP content.

2. Configure DSD_SPEED per DoP content.

3. Set DSD_PRC_SRC = 10 and DSD_EN = 1.

4.10 DSD Interface

The DSD interface is enabled or disabled by PDN_DSDIF bit. When cleared, the DSD data interface is enabled. When
using this interface, the DSD interface clock can be mastered by the CS43131 (DSD_M/SB=1). If set to Master Mode,
DSDCLK toggles if both PDN_DSDIF and XSP_3ST bits are cleared, and DSD_EN is set.

If the DSD interface clock is slaved (DSD_M/SB=0), when MCLK_INT is set as 22.5792 MHz, DSDCLK is required to be
synchronous to MCLK_INT. The DSDCLK can be derived by either:

• Exporting 1/2, 1/4, or 1/8 the frequency of the CS43131 crystal to CLKOUT, or

• Sourcing MCLK_INT and DSDCLK from the same external clock source

DS1155F2

55

CS43131
4.10 DSD Interface

The DSD_EN bit, when set, is used to configure the device for processing DSD sources. DSD_PRC_SRC configures the
DSD interface used for feeding into the DSD processor. DSD_SPEED specifies if a 64•Fs, 128•Fs, or 256•Fs DSD stream
is provided. If PDN_DSDIF = 0 and DSD_M/SB = 1, DSD_SPEED determines the DSDCLK clock frequency generated.
When configuring the DSD interface, follow these steps:

1. Configure the DSD_M/SB, DSD_SPEED, DSD_PRC_SRC, and XSP_3ST.

2. Release PDN_DSDIF.

3. Enable DSD_EN.

The DSD_PM_EN bit selects phase modulation (data plus data inverted) as the style of data input. In this mode, the DSD_
PM_SEL bit selects whether a 2x or 1x data rate clock is used for phase-modulated data (see Fig. 4-29). Use of phase
modulation mode may not directly affect the performance of the CS43131, but may lower the sensitivity of other
board-level components to the DSD data signals. Note that phase modulation mode is supported only for DSD 64•Fs and
DSD 128•Fs data rates. If the 2x data rate mode is used, DSD_INV_B and DSD_INV_A need to be set before the mode
is enabled. After the 2x data rate mode is disabled, DSD_INV_B and DSD_INV_A need to be cleared appropriately.

The CS43131 can detect overmodulation errors in the DSD data that do not comply to the SACD specification. Setting
INV_DSD_DET enables detection of overmodulation errors. This condition is reported through the DSD_INVAL_A_INT
and DSD_INVAL_B_INT status bits. Overmodulated DSD data is converted as received without intervention, but
performance at these levels cannot be guaranteed. Setting STA_DSD_DET allows the CS43131 to mute a DSD stream
that is stuck at 1 or 0. This condition is reported through the DSD_STUCK_INT status bit. See Section 7.6.5 for
descriptions of the DSD error reporting bits.

More information for these register bits can be found in Section 7.

The DSD input structure and analog outputs are designed to handle a nominal 0 dB-SACD (50% modulation index) at
full-rated performance. When 0 dB-SACD and 0 dBFS PCM need to be level matched, DSD_ZERODB must be set. In this
mode, signals of +3-dB SACD may be applied for brief periods of time; however, performance at these levels is not
guaranteed. If sustained levels approaching +3-dB SACD levels are required, DSD_ZERODB must be cleared, which
matches a +3-dB SACD output level.

DSD Normal Mode
(DSD_PM_EN = 0)

DSDCLK

(64•Fs,
128•Fs, or
256•Fs)

DSDA,
DSDB

D0

D1

D2

DSD Phase
Modulation Mode
(DSD_PM_EN = 1)

DSDCLK  =
BCKA

(128•Fs
or
256•Fs)
(DSD_PM_SEL = 0)
(64•Fs
or
128•Fs)
(DSD_PM_SEL = 1)

DSDCLK  =
BCKD

DSDA,
DSDB

D0

D1

D1

D2

Figure 4-29. DSD Phase Modulation Mode Diagram

56

DS1155F2

CS43131
4.11 DSD and PCM Mixing

4.11 DSD and PCM Mixing

For mobile application, the CS43131 provides a feature for mixing in PCM notification during DSD playback, with the setup
in Table 4-10.

Table 4-10.  Mixing Configurations Supported by the CS43131

PCM Input Configuration

 DSD Input Configuration

I2S or TDM on
ASP

44.1 kHz

Master
Slave 1

Master
Slave 1

DSD on DSD IF

DoP on XSP

2.8224, 5.6448, or
11.2896 MHz on
DSDCLK
176.4 or 352.8 kHz

Master
Slave 1

Master
Slave 1

1.The ASP/XSP subclocks and DSDCLK are required to be synchronous.

It is assumed that the DSD path has been properly configured for DSD playback.

During normal DSD playback, the ASP can be shut down. At the PCM notification event, the ASP must be properly
configured to receive PCM samples at 44.1 kHz. After the ASP subclocks are running, set MIX_PCM_PREP to indicate to
the CS43131 that the PCM mixing event is imminent. After 1.6 ms, MIX_PCM_DSD can be safely set to initiate the mixing
process. After the PCM notification mixing is complete, clear both MIX_PCM_DSD and MIX_PCM_PREP at the same
time. If desired, the ASP can be shut down to save power.

When mixing, use both PCM and DSD volume controls to attenuate the signal content on both paths (e.g., at least –6-dB
attenuation on each) to avoid clipping on the mixing product. Use PCM_VOLUMEx to adjust the PCM path and DSD_
VOLUMEx to adjust the DSD path. All the signal path settings apply to both path’s individual settings.

PCM

ASP

DSD

XSP/
DSD Audio
Interface

PCM_VOLUME_B p. 128
PCM_VOLUME_A p. 128

Interpolation
Filter &
Volume
Control



Multibit

Modulator

MIX_PCM_PREP p. 126
MIX_PCM_DSD p. 126

DoP to
DSD
Engine

X
U
M

DSD
Processor

DSD_VOLUME_B p. 124
DSD_VOLUME_A p. 125

Figure 4-30. PCM and DSD Mixing Signal Flow

4.12 Standard Interrupts

The interrupt output pin, INT, is used to signal the occurrence of events within the device’s interrupt status registers. Events
can be masked individually by setting corresponding bits in the interrupt mask registers. Table 4-11 lists interrupt status
and mask registers. The configuration of mask bits determines which events cause the immediate assertion of INT:

• When an unmasked interrupt status event is detected, the status bit is set, and INT is asserted.

• When a masked interrupt status event is detected, the interrupt status bit is set, but INT is not affected.

Once INT is asserted, it remains asserted until all status bits that are unmasked and set have been read. Interrupt status
bits are sticky and read-to-clear. Once set, they remain set until the register is read and the associated interrupt condition
is not present. If a condition is still present and the status bit is read, although INT is deasserted, the status bit remains set.

To clear status bits set due to the initiation of a block, all interrupt status bits must be read after the corresponding module
is enabled and before normal operation begins. Otherwise, unmasking these previously set status bits causes assertion
of INT.

Interrupt source bits are set when edge-detect interrupts is detected, and they remain set until the register is read and the
condition that caused the bit to assert is no longer present.

DS1155F2

57

CS43131
4.12 Standard Interrupts

Fig. 4-31 shows sticky-bit behavior.

Raw signal feeding
status register bit

Status register bit

___
INT

Register read
signal

Status read value

Read Source

0
Poll cycle

1

0

1

1

Interrupt
service

Extra read for
present state

Interrupt
service

Extra read for
present state

0
Poll
cycle

0
Poll cycle

Figure 4-31. Example of Rising-Edge-Sensitive, Sticky, Interrupt-Status-Bit Behavior

Table 4-11.  Interrupts Events and Register Bit Fields

Interrupt

Register Bit Field

Interrupt Mask Field

DAC overflow
HP unplug detect
HP plug detect
XTAL is ready
XTAL error detected
ASP overload
ASP error
ASP late
ASP early
ASP no LRCK
XSP overload
XSP error
XSP late
XSP early
XSP no LRCK
PLL is ready
PLL error detected
Power down done
HP load error: DC measurement is not performed before AC measurement
is initiated
HP load error: HP is unplugged during the measurement process
HP load error: PDN_HP is not properly set before HP load measurement is
started
HP load error: out of range result is measured
HP load AC detection done
HP load DC detection done
HP load state machine turned off properly
HP load state machine turned on properly
DSD stuck Error
DSD channel A invalid error
DSD channel B invalid error
DSD channel A silence pattern detected
DSD channel B silence pattern detected
DSD rate error detected
DoP marker detected
DoP engine on

DAC_OVFL__INT_MASK

DAC_OVFL_INT
HPDETECT_UNPLUG_INT HPDETECT_UNPLUG_INT_MASK
HPDETECT_PLUG_INT
XTAL_READY_INT
XTAL_ERROR_INT
ASP_OVLD_INT
ASP_ERR_INT
ASP_LATE_INT
ASP_EARLY_INT
ASP_NOLRCK_INT
XSP_OVLD_INT
XSP_ERR_INT
XSP_LATE_INT
XSP_EARLY_INT
XSP_NOLRCK_INT
PLL_READY_INT
PLL_ERROR_INT
PDN_DONE_INT
HPLOAD_NO_DC_INT

HPDETECT_PLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
ASP_OVLD_INT_MASK
ASP_ERR_INT_MASK
ASP_LATE_INT_MASK
ASP_EARLY_INT_MASK
ASP_NOLRCK_INT_MASK
XSP_OVLD_INT_MASK
XSP_ERR_INT_MASK
XSP_LATE_INT_MASK
XSP_EARLY_INT_MASK
XSP_NOLRCK_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
HPLOAD_NO_DC_INT_MASK

HPLOAD_UNPLUG_INT
HPLOAD_HPON_INT

HPLOAD_UNPLUG_INT_MASK
HPLOAD_HPON_INT_MASK

HPLOAD_OOR_INT
HPLOAD_AC_DONE_INT
HPLOAD_DC_DONE_INT
HPLOAD_OFF_INT
HPLOAD_ON_INT
DSD_STUCK_INT
DSD_INVAL_A_INT
DSD_INVAL_B_INT
DSD_SILENCE_A_INT
DSD_SILENCE_B_INT
DSD_RATE_INT
DOP_MRK_DET_INT
DOP_ON_INT

HPLOAD_OOR_INT_MASK
HPLOAD_AC_DONE_INT_MASK
HPLOAD_DC_DONE_INT_MASK
HPLOAD_OFF_INT_MASK
HPLOAD_ON_INT_MASK
DSD_STUCK_INT_MASK
DSD_INVAL_A_INT_MASK
DSD_INVAL_B_INT_MASK
DSD_SILENCE_A_INT_MASK
DSD_SILENCE_B_INT_MASK
DSD_RATE_INT_MASK
DOP_MRK_DET_INT_MASK
DOP_ON_INT_MASK

58

DS1155F2

CS43131
4.13 Control Port Operation

4.13 Control Port Operation

The control port is used to access control registers and on-chip memory locations, allowing the device to be configured for
desired operational modes and formats. Control port operation may be completely asynchronous with respect to the audio
sample rates. However, to avoid potential interference problems, control port pins must remain static if no operation is
required.

The control port operates using a I2C interface with the CS43131 acting as a slave device. Device communication must
not begin until tPUD (refer to Table 3-22) after power conditions are ready and RESET is released.

4.13.1 I2C Control Port Operation

The I2C control port operates completely asynchronously with the audio sample rates. However, to avoid interference
problems, the I2C control-port pins must remain static if no operation is required.

The control-port uses the I2C interface, with the chip acting as a slave device. The I2C control port can operate in the
following modes:

• Standard Mode (SM), with a bit rate of up to 100 kbit/s

• Fast Mode (FM), with a bit rate of up to 400 kbit/s

• Fast Mode Plus (FM+), with a bit rate of up to 1 Mbit/s

SDA is a bidirectional data line. Data is clocked into and out of the CS43131 by the SCL clock. Fig. 4-32, Fig. 4-33, and
Fig. 4-34 show signal timings for read and write cycles. A Start condition is defined as a falling transition of SDA while SCL
is high. A stop condition is defined as a rising transition of SDA while SCL is high. All other transitions of SDA must occur
while SCL is low. Note that when HP_IN_LP is set, only SM and FM modes are supported.

To configure the last two bits of I2C address, CS43131 detects the ADR resistor connection type and measures the
resistance upon a device power up (POR event) or after a hardware reset event (RESET deasserted). Based on the
detected resistance, the I2C address is latched and cannot be changed until the next hardware reset event. The I2C
address configuration is not ready until tPUD after the hardware reset event. During this period, the CS43131 does not
respond to any user-issued I2C command. After configuration, the IC tristates the ADR pin and becomes high impedance
internally to avoid a constant bias current.

To directly connect the ADR pin and ground, the last two bits of the I2C address are configured as the default 00. For the
other options, use a resistor (with 5% accuracy) as suggested in the Table 4-12.

Table 4-12.  I2C Address Configurations

Connection Type
Pull-up to VL
Pull-up to VL
Pull-down to GND
Pull-down to GND

Resistor Value ()
0
4990
4990
0

Last Two Bits of I2C Address
11
10
01
00 (Default)

If the operation is a write, the 3 bytes after the chip address are the memory address pointer (MAP) that select the address
of the register to be read or written to next. The byte following the MAP is the control byte. Bit[0] of the control byte, INCR,
selects whether autoincrementing is to be used (INCR = 1), allowing successive reads or writes of consecutive registers.
Bits[2:1] of the control byte indicate the size of the data for the autoincrement to be acted on. Table 4-13 explains the
format for the I2C control byte.

Bit
7:3

2:1

Name

— Reserved
Default: 0

Table 4-13.  I2C Control-Byte Format

Description

SIZE Register access width. Specifies the width of the register access.

00 8-bit (1 byte)
01–11 Reserved

DS1155F2

59

CS43131
4.13 Control Port Operation

Bit
0

Name
INCR Setting this bit allows the MAP address to autoincrement. The MAP address automatically increments every SIZE + 1 bytes

Description

Table 4-13.  I2C Control-Byte Format (Cont.)

accessed consecutively.

0 Disabled
1 Enabled

Each byte transferred on the I2C bus is separated by an acknowledge (ACK) bit. The CS43131 acknowledges each input
byte read from the host, and the host must acknowledge each byte transmitted from the CS43131.

For write operations, the data bytes following the MAP byte are written to the CS43131 register addresses pointed to by
the last received MAP address, plus however many autoincrements have occurred. Fig. 4-32 shows a write pattern with
autoincrementing.

0    1    2    3

4    5    6   7   8    9

16

17   18

25

26 27

34

35

36

37 38

39 40 41 42 43 44

45

SCL

CHIP ADDRESS
( WRITE)

MAP BYTE
High (23:16)

MAP BYTE
Mid (15:8)

MAP BYTE
Low (7:0)

CONTROL
BYTE

DATA
BYTE 1

DATA
BYTE N

SDA

7 6 5 4 3 2 1 0

7   0

7   0

7   0

7 6 5 4 3 2 1 0

7   0

7   0

Addr = 01100

1
D
A

0
D
A

0
=
W
R
ACK

/

ACK

ACK

ACK

Empty

0
0
=
E
Z
S

I

1
=
R
C
N

I

MAP
ADDRESS

MAP
ADDRESS
+ ( N–1 )

ACK

ACK

ACK

STOP

Master

Master

Master

Master

Master

Master

Master

M

Slave

Slave

Slave

Slave

Slave

Slave

Slave

Pull-up

START

SDA
Source

Pull-up

Figure 4-32. Control Port Timing, I2C Writes with Autoincrement (8-bit Data Access)

For read operations, the contents of the register pointed to by the last received MAP address (plus however many
autoincrements have occurred if INCR was previously set) are output in the next byte. Fig. 4-33 shows a read pattern
following the write pattern in Fig. 4-32. Notice how read addresses are based on the MAP bytes from Fig. 4-32.

0    1    2    3

4    5    6   7   8    9

16

17

SCL

CHIP ADDRESS
(READ)

DATA
BYTE 1

DATA
BYTE N

STOP

SDA

7 6 5 4 3 2 1 0

7   0

7   0

Addr = 01100

1
D
A

0
D
A

MAP
ADDRESS

MAP
ADDRESS
+ (N–1 )

1
=
W
R
ACK

/

ACK

NACK

START

SDA
Source

Pull-up

Master

Slave

M

Slave

M

Pull-up

Figure 4-33. Control Port Timing, I2C Reads with Autoincrement (8-Bit Data Access)

60

DS1155F2

To generate a read address not based on the last received MAP address, an aborted write operation can be used as a
preamble (see Fig. 4-34). Here, a write operation is aborted (after the ACK for the control byte) by sending a Stop
condition.

CS43131
4.13 Control Port Operation

0    1    2    3

4    5    6   7   8    9

16

17   18

25

26 27

34

35

36

37 38

39 40 41 42 43 44

45

0    1    2    3

4    5    6   7   8    9

16 17

SCL

SDA

CHIP ADDRESS
( WRITE)

MAP BYTE
High (23:16)

MAP BYTE
Mid (15:8)

MAP BYTE
Low (7:0)

CONTROL
BYTE

STOP

CHIP ADDRESS
( READ)

DATA
BYTE 1

DATA
BYTE N

STOP

7 6 5 4 3 2 1 0

7   0

7   0

7   0

7 6 5 4 3 2 1 0

7 6 5 4 3 2 1 0

7   0

7   0

Addr = 01100

1
D
A

0
D
A

0
=
W
R

/

START

ACK

ACK

ACK

ACK

Empty

0
0
=
E
Z
S

I

1
=
R
C
N

I

Addr = 01100

1
D
A

0
D
A

1
=
W
R

/

MAP
ADDRESS

MAP
ADDRESS
+ (N-1 )

ACK

START

ACK

ACK

NACK

SDA
Source

Pull-up

Master

Master

Master

Master

Master

Master

Slave

M

Slave

M

Slave

Slave

Slave

Slave

Slave

Pull-up

Figure 4-34. Control Port Timing, I2C Reads with Preamble and Autoincrement (8-Bit Data Access)

DS1155F2

61

CS43131
4.14 Programmable Filter

4.14 Programmable Filter

In the CS43131, there are a series of programmable filters which is open for user's customization. The filter coefficients
can be programmed for altering frequency response or other characteristics to fit the design intention. The filter runs at the
input sample rate as set by xSP. This feature is intended to be used for normal PCM playback under single-, double-, and
quad-speed settings. (If operating at 192 kHz, MCLK_INT is required to be at 24.576 MHz.) For WBF mode and impedance
measurement mode, the filter should be properly turned off.

The filter series are composed of 1 first-order IIR system (FOS) and 3 second-order IIR system (SOS), which effectively
is a seventh-order system. FOS and SOS structures are illustrated as in Fig. 4-35 and Fig. 4-36, respectively. Any filter
stage can be chosen to be either utilized or bypassed through coefficient settings. Each stage is represented by filter
coefficients, which is accessed through I2C writes. The filter coefficients are located in register address 0x09 000C to
0x09 0041. Each coefficient is comprised of a most-significant byte, a least-significant byte, and a sign byte.

Y[n]

Y[n]

X[n]

X[n]

+

+

+

+

+

+

Z‐1

‐a1

b0

b1

Figure 4-35. First-Order IIR System

Z‐1

Z‐1

‐a1

‐a2

b0

b1

b2

Figure 4-36. Second-Order IIR System

The filter can only be programmed when PDN_HP is set. Program the filter coefficients when PDN_HP is cleared will result
in non-expected behavior.

To properly enable each filter's coefficients, after the coefficients is programmed in control port, user enable the control
port filter coefficients through registers Programmable Filter Control 1 and Programmable Filter Control 2. When user not
using the programmable filters, the filter should be disabled properly.

62

DS1155F2

CS43131
5 Applications

5 Applications

This section provides recommended application procedures and instruction sequences for standard CS43131 operations.

5.1  PLL Clocking

Data-path logic is in the MCLK_INT domain, where MCLK_INT is expected to be 22.5792 or 24.576 MHz. For clocking
scenarios in which the external system MCLK provided to CS43131 is neither 22.5792 nor 24.576 MHz, the PLL must be
turned on to provide the desired internal MCLK. At start up, the system uses RCO as the internal MCLK for PLL
programming over I2C and switches to the PLL output after it settles. PLL start-up time is a maximum of 1 ms.

5.2  Power Sequencing

Note the following for power-up sequencing on the CS43131:

• VP must be powered up first.

• All other supplies can come up in any order before RESET is released.

Note the following for power-down sequencing on the CS43131:

• After RESET is asserted, VA/VCP/VL/VD can be removed in any order.

• VP must be powered down last.

5.3  Crystal Tuning

The CS43131 uses an external crystal as the source for internal MCLK. Refer to Table 3-16 for the load capacitance that
is supported by CS43131. Table 5-1 lists supported crystals that meet the requirements for CS43131 and also shows also
shows the XTAL_IBIAS settings for different crystals.

Table 5-1.  Example List of Supported Crystals

Manufacturer 1

River Electronics

NDK

TXC

Part Number 1

Frequency (MHz)

FCX-06-22.5792J51933
FCX-06-24.5760J51930
NX2016SA 22.5792M EXS00A-CS09116
NX2016SA 24.576M EXS00A-CS09117
8Y22570001
8Y24570001

22.5792
24.576
22.5792
24.576
22.5792
24.576

Bias Current
Strength (µA)
12.5
7.5
15

Crystal Setting Register
(0x20052)
0x04
0x06
0x02

12.5

0x04

1.Contact your local Cirrus Logic representative for a list of supported manufacturers and part numbers.

The crystal setting register (0x20052) must be set appropriately based on the crystal used.

The frequency at which the crystal eventually oscillates can be calculated using the formula below:

Fosc= 1/(2*π*sqrt[Lm*(Cm (C0+CL))/(Cm+C0+CL)]) ,

where

Lm = motional inductance of crystal
Cm = motional capacitance of crystal
C0 = shunt capacitance
CL = load capacitance

Trace capacitance and pad capacitance (approximately 0.5 pF) must also be taken into account while calculating the value
of the load capacitors. Below are the steps to tune the crystal to the correct frequency:

1. Select load capacitor values that match the load capacitance spec in crystal manufacturer's data sheet.

DS1155F2

63

2. Power up and verify communication with CS43131. If there is no communication, it is possible that the crystal did

not start. Check power rails and load capacitance and try again.

3. Clear PDN_CLKOUT in the Power Down Control (0x20000) register. This sets the clock output at MCLK_INT/2

frequency from CLKOUT pin.

4. Measure the frequency and verify that it is within acceptable range of the desired frequency. If yes, continue

normal operation. If not, power down the chip, change the load capacitor values and go back to step 2.

CS43131
5.4 Alert Mixing Shutdown

Note: These steps need to be performed only once per PCB.

5.4  Alert Mixing Shutdown

To prevent a DSD mute pattern from turning off the DAC while mixing DSD data with PCM data, turn off the auto mute by
clearing the DSD_AMUTE bit.

5.5  Enable/Disable Alternate Headphone Path (HPINx)

If the user decides to use the HPINx path, the following sequences must be followed to enable/disable the alternate
headphone path (HPINx).

5.5.1

HPINx Alternate Headphone Path Enable Sequence

To enable the HPINx path, follow the sequence in Ex. 5-1.

Example 5-1. HPINx Enable Sequence

TASK

REGISTER/BIT FIELDS

Enable headphone input HP Output Control 1. 0x80000

HP_CLAMPA
HP_CLAMPB
OUT_FS
HP_IN_EN
HP_IN_LP
Reserved
+1dB_EN

Wait for 1.1 ms.
Enable low power mode

HP Output Control 1. 0x80000

HP_CLAMPA
HP_CLAMPB
OUT_FS
HP_IN_EN
HP_IN_LP
Reserved
+1dB_EN

VALUE
0x38
0
0
11
1
0
0
0

0x3C
0
0
11
1
1
0
0

DESCRIPTION

Function disabled
Function disabled
Headphone output voltage setting is irrelevant
Enable HPIN switch
Function disabled

Function disabled
Function disabled
Headphone output voltage setting is irrelevant
Enable HPIN switch
Function enabled

5.5.2

HPINx Disable Sequence

To disable the HPINx path, follow the sequence in Ex. 5-2. For pop-free operation, the audio input must be completely
ramped down before executing this sequence.

Example 5-2. HPINx Disable

TASK
Disable HPINx low power
mode

REGISTER/BIT FIELDS

HP Output Control 1. 0x80000

HP_CLAMPA
HP_CLAMPB
OUT_FS
HP_IN_EN
HP_IN_LP
Reserved
+1dB_EN

VALUE
0x38
0
0
11
1
0
0
0

DESCRIPTION

Function disabled
Function disabled
Headphone output voltage setting is irrelevant
Enable HPIN switch
Function disabled

64

DS1155F2

CS43131
5.6 Headphone Power Down Sequences

Example 5-2. HPINx Disable (Cont.)

TASK

REGISTER/BIT FIELDS

Disable headphone input HP Output Control 1. 0x80000

HP_CLAMPA
HP_CLAMPB
OUT_FS
HP_IN_EN
HP_IN_LP
Reserved
+1dB_EN

DESCRIPTION

Disable HPIN

VALUE
0x30
0
0
11
0
0
0
0

5.6  Headphone Power Down Sequences

Examples of power down sequences for PCM and DSD are shown in Ex. 5-3 and Ex. 5-4, respectively. Follow the stated
sequence every time to shut down the headphone output. The sequence assumes that the PDN_DONE_INT interrupt bit
is unmasked.

5.6.1

PCM Power Down Sequence

Example 5-3. PCM Power Down Sequence

STEP

TASK

1 Enable PDN_DONE

interrupt

2 Power down amplifier

Interrupt Mask 1. 0xF0010

REGISTER/BIT FIELDS

DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

3 Wait for interrupt. Check for PDN_DONE_INT = 1 in Interrupt Status 1 register (0xF0000).
Power Down Control. 0x20000
4 Power down ASP

DESCRIPTION

Enable PDN_DONE interrupt

VALUE
data(0xF0010)
AND (0xFE)
x
x
x
x
x
x
x
0
data(0x20000)
OR (0x10)
x
x
x
1
x
x
x
x

data(0x20000)
OR (0x40)
x
1
x
x
x
x
x
x

Turn off HP

Turn off ASP

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

5.6.2

DSD Power Down Sequence

Example 5-4. DSD Power Down Sequence

STEP

TASK

REGISTER/BIT FIELDS

1 Enable PDN_DONE

Interrupt Mask 1. 0xF0010

interrupt

DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK

VALUE
data(0xF0010)
AND (0xFE)
x
x
x
x
x
x
x
0

DESCRIPTION

Enable PDN_DONE interrupt

DS1155F2

65

CS43131
5.7 Headphone Power-Up Sequence

Example 5-4. DSD Power Down Sequence (Cont.)

STEP

TASK

REGISTER/BIT FIELDS

2 Power down amplifier

Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

DESCRIPTION

VALUE
data(0x20000)
OR (0x10)
x
x
x
1
x
x
x
x

Turn off HP

3 Wait for interrupt. Check for PDN_DONE_INT = 1 in Interrupt Status 1 register (0xF0000).
4 Power down XSP/ASP/

Power Down Control. 0x20000

DSDIF interfaces

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

data(0x20000)
OR (0xE0)
1
1
1
x
x
x
x
x

5.7  Headphone Power-Up Sequence

An example of the power-up sequence for PCM and DSD are shown in Ex. 5-5 and Ex. 5-6, respectively. Follow the stated
sequence every time to power up the headphone output.

5.7.1

PCM Power-Up Sequence

Example 5-5. PCM Power-Up Sequence

STEP

TASK

1 Pop-free power-up settings

0x10010
0x80032

REGISTER/BIT FIELDS

2 Power on appropriate interface.Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

3 Power on amplifier

Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

0x80032
0x10010

4 Wait for 12 ms
5 Restore default settings

DESCRIPTION

VALUE
0x99
0x20
data (0x20000)
AND (0xBF)
x
0
x
x
x
x
x
0
data (0x20000)
AND (0xEF)
x
x
x
0
x
x
x
0

0x00
0x00

Power up ASP

Power up HP

66

DS1155F2

CS43131
5.8 Power-Down Sequence in External VCPFILT Mode

5.7.2

DSD Power-Up Sequence

Example 5-6. DSD Power-Up Sequence

STEP

TASK

1 Pop-free power-up settings

0x10010
0x80032

REGISTER/BIT FIELDS

2 Power on appropriate interface.Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

3 Power on amplifier

Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

0x80032
0x10010

4 Wait for 12 ms
5 Restore default settings

DESCRIPTION

For DoP on XSP, HH = 7F.
For DoP on ASP, HH = BF.
For DSD interface, HH = DF.
Enable XSP, ASP, or DSDIF interface

Power up HP

VALUE
0x99
0x20
data (0x20000)
AND (0xHH)

B
B
B
x
x
x
x
x
data (0x20000)
AND (0xEF)
x
x
x
0
x
x
x
0

0x00
0x00

5.8  Power-Down Sequence in External VCPFILT Mode

These sequences allow the CS43131 to be powered down in external VCPFILT mode without any audible pops.

5.8.1

PCM Pop-Free Power-Down Sequence in External VCPFILT Mode

STEP

TASK

1 Pop-free power-down settings

2 Mute both channels

REGISTER/BIT FIELDS

0x10010
0x80046
PCM Path Signal Control 1. 0x90003

3 Wait 150 ms for mute to occur
4 Enable PDN_DONE interrupt

5 Power down amplifier

PCM_RAMP_DOWN
PCM_VOL_BEQA
PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA
PCM_MUTE_A
PCM_MUTE_B

Interrupt Mask 1. 0xF0010

DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

VALUE
0x99
0x21
data(0x90003)
OR (0x03)
x
x
xx
x
x
1
1

data(0xF0010)
AND (0xFE)
x
x
x
x
x
x
x
0
data(0x20000)
OR (0x10)
x
x
x
1
x
x
x
x

DESCRIPTION

Channel A is muted
Channel B is muted

Enable PDN_DONE interrupt

Turn off HP

6 Wait for interrupt. Check for PDN_DONE_INT = 1 in Interrupt Status 1 register (0xF0000).

DS1155F2

67

CS43131
5.8 Power-Down Sequence in External VCPFILT Mode

7 Power down ASP

Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

8 Unmute both channels

PCM Path Signal Control 1. 0x90003

9 Restore default settings

PCM_RAMP_DOWN
PCM_VOL_BEQA
PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA
PCM_MUTE_A
PCM_MUTE_B

0x80046
0x10010

data(0x20000)
OR (0x40)
x
1
x
x
x
x
x
x
data(0x90003)
AND (0xFC)
x
x
xx
x
x
0
0
0x20
0x00

Turn off ASP

Channel A is unmuted
Channel B is unmuted

5.8.2

DSD Pop-Free Power-Down Sequence in External VCPFILT Mode

STEP

TASK

1 Pop-free power-down settings

2 Mute both channels

REGISTER/BIT FIELDS

0x10010
0x80046
DSD Processor Path Signal Control 1.
0x70002

3 Wait 150 ms for mute to occur
4 Enable PDN_DONE interrupt

5 Power down amplifier

DSD_RAMP_UP
DSD_VOL_BEQA
DSD_SZC
Reserved
DSD_AMUTE
DSD_AMUTE_BEQA
DSD_MUTE_A
DSD_MUTE_B

Interrupt Mask 1. 0xF0010

DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

DESCRIPTION

Channel A is muted
Channel B is muted

Enable PDN_DONE interrupt

Turn off HP

VALUE
0x99
0x21
data(0x70002)
OR (0x03)
x
x
x
x
x
x
1
1

data(0xF0010)
AND (0xFE)
x
x
x
x
x
x
x
0
data(0x20000)
OR (0x10)
x
x
x
1
x
x
x
x

6 Wait for interrupt. Check for PDN_DONE_INT = 1 in Interrupt Status 1 register (0xF0000).
7 Power down XSP/ASP/DSDIF interfaces Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

data(0x20000)
OR (0xE0)
1
1
1
x
x
x
x
x

68

DS1155F2

8 Unmute both channels

DSD Processor Path Signal Control 1.
0x70002

DSD_RAMP_UP
DSD_VOL_BEQA
DSD_SZC
Reserved
DSD_AMUTE
DSD_AMUTE_BEQA
DSD_MUTE_A
DSD_MUTE_B

0x80046
0x10010

9 Restore default settings

CS43131
5.9 Enabling and Disabling NOS Filter

data(0x70002)
AND (0xFC)
x
x
x
x
x
x
0
0
0x20
0x00

Channel A is unmuted
Channel B is unmuted

5.9  Enabling and Disabling NOS Filter

Section 5.9.1 and Section 5.9.2 describe pop-free sequences for enabling and disabling the NOS filter, respectively.

5.9.1

Sequence for Enabling NOS Filter

STEP

TASK

1 Set mute to occur with soft ramp

only

REGISTER/BIT FIELDS

PCM Path Signal Control 1. 0x90003

PCM_RAMP_DOWN
PCM_VOL_BEQA
PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA
PCM_MUTE_A
PCM_MUTE_B

2 Mute both channels

PCM Path Signal Control 1. 0x90003

PCM_RAMP_DOWN
PCM_VOL_BEQA
PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA
PCM_MUTE_A
PCM_MUTE_B

3 Wait for 150 ms for mute to occur
4 Enable NOS filter

PCM Filter Option. 0x90000

5 Restore PCM_SZC mode if

desired

FILTER_SLOW_FASTB
PHCOMP_LOWLATB
NOS
Reserved
PCM_WBF_EN
HIGH_PASS
DEEMP_ON

PCM Path Signal Control 1. 0x90003

PCM_RAMP_DOWN
PCM_VOL_BEQA
PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA
PCM_MUTE_A
PCM_MUTE_B

6 Unmute both channels

PCM Path Signal Control 1. 0x90003

PCM_RAMP_DOWN
PCM_VOL_BEQA
PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA
PCM_MUTE_A
PCM_MUTE_B

VALUE
data (0x90003)
AND (0xEF) OR
(0x20)
x
x
10
x
x
x
x
data (0x90003)
OR (0x03)
x
x
xx
x
x
1
1

data (0x90000)
OR (0x20)
x
x
1
0 0
x
x
x
0xHH
x
x
BB
x
x
x
x
data (0x90003)
AND (0xFC)
x
x
xx
x
x
0
0

DESCRIPTION

Enable soft ramp

Channel A output is muted
Channel B output is muted

NOS emulation mode is on

Restore PCM_SZC to desired value

Function is disabled
Function is disabled

DS1155F2

69

5.9.2

Sequence for Disabling NOS Filter

STEP

TASK

REGISTER/BIT FIELDS

1 Set mute to occur with soft ramp

PCM Path Signal Control 1. 0x90003

only

PCM_RAMP_DOWN
PCM_VOL_BEQA
PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA
PCM_MUTE_A
PCM_MUTE_B

2 Mute both channels

PCM Path Signal Control 1. 0x90003

PCM_RAMP_DOWN
PCM_VOL_BEQA
PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA
PCM_MUTE_A
PCM_MUTE_B

3 Wait for 150 ms for mute to occur
4 Disable NOS filter

PCM Filter Option. 0x90000

FILTER_SLOW_FASTB
PHCOMP_LOWLATB
NOS
Reserved
PCM_WBF_EN
HIGH_PASS
DEEMP_ON

5 Restore PCM_SZC mode if

PCM Path Signal Control 1. 0x90003

desired

PCM_RAMP_DOWN
PCM_VOL_BEQA
PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA
PCM_MUTE_A
PCM_MUTE_B

6 Unmute both channels

PCM Path Signal Control 1. 0x90003

PCM_RAMP_DOWN
PCM_VOL_BEQA
PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA
PCM_MUTE_A
PCM_MUTE_B

CS43131
5.10 Sequence for Using PCM Invert Bits

VALUE
data (0x90003)
AND (0xEF) OR
(0x20)
x
x
10
x
x
x
x
data (0x90003)
OR (0x03)
x
x
xx
x
x
1
1

data (0x90000)
AND (0xDF)
x
x
0
0 0
x
x
x
0xHH
x
x
BB
x
x
x
x
data (0x90003)
AND (0xFC)
x
x
xx
x
x
0
0

DESCRIPTION

Enable soft ramp

Channel A output is muted
Channel B output is muted

NOS emulation mode is off

Restore PCM_SZC to desired value

Function is disabled
Function is disabled

5.10 Sequence for Using PCM Invert Bits

Section 5.10.1 and Section 5.10.2 describe sequences for enabling the PCM_INV_A and PCM_INV_B bits, respectively.

5.10.1 Sequence for Enabling Channel A Invert

STEP

TASK

1 Invert channel A calibration

2 Enable channel A invert

REGISTER/BIT FIELDS

0x180005
0x180006
0x180015
0x180016
0x180025
0x180026
0x180035
0x180036
PCM Path Signal Control 2. 0x90004

Reserved
PCM_INV_A
PCM_INV_B
PCM_SWAP_CHAN
PCM_COPY_CHAN

VALUE
0xDC
0xFA
0xFB
0xFB
0xF5
0xFE
0x8F
0xFC
data (0x90004)
OR (0x08)
0000
1
x
x
x

DESCRIPTION

Enable Channel A invert

70

DS1155F2

CS43131
5.10 Sequence for Using PCM Invert Bits

5.10.2 Sequence for Disabling Channel A Invert

STEP

TASK

1 Restore channel A calibration

2 Disable channel A invert

REGISTER/BIT FIELDS

0x180005
0x180006
0x180015
0x180016
0x180025
0x180026
0x180035
0x180036
PCM Path Signal Control 2. 0x90004

Reserved
PCM_INV_A
PCM_INV_B
PCM_SWAP_CHAN
PCM_COPY_CHAN

5.10.3 Sequence for Enabling Channel B Invert

STEP

TASK

1 Invert channel B calibration

2 Enable channel B invert

REGISTER/BIT FIELDS

0x18000D
0x18000E
0x18001D
0x18001E
0x18002D
0x18002E
0x18003D
0x18003E
PCM Path Signal Control 2. 0x90004

Reserved
PCM_INV_A
PCM_INV_B
PCM_SWAP_CHAN
PCM_COPY_CHAN

5.10.4 Sequence for Disabling Channel B Invert

STEP

TASK

1 Restore channel B calibration

2 Disable channel B invert

REGISTER/BIT FIELDS

0x18000D
0x18000E
0x18001D
0x18001E
0x18002D
0x18002E
0x18003D
0x18003E
PCM Path Signal Control 2. 0x90004

Reserved
PCM_INV_A
PCM_INV_B
PCM_SWAP_CHAN
PCM_COPY_CHAN

VALUE
0x24
0x05
0x05
0x04
0x0B
0x01
0x71
0x03
data (0x90004)
AND (0xF7)
0000
0
x
x
x

VALUE
0x74
0xFA
0xCF
0xFB
0xD0
0xFE
0x64
0xFC
data (0x90004)
OR (0x04)
0000
x
1
x
x

VALUE
0x8C
0x05
0x31
0x04
0x30
0x01
0x9C
0x03
data (0x90004)
AND (0xFB)
0000
x
0
x
x

DESCRIPTION

Disable Channel A invert

DESCRIPTION

Enable Channel B invert

DESCRIPTION

Disable Channel B invert

DS1155F2

71

CS43131
5.11 Sequences for Using the PCM Channel Swap Bit

5.11 Sequences for Using the PCM Channel Swap Bit

The following subsections describe sequences for enabling and disabling the PCM_SWAP_CHAN bit.

5.11.1 Sequence for Enabling the PCM_SWAP_CHAN Bit

STEP

TASK

1 Swap channel A/B calibration

2 Enable PCM channel swap

REGISTER/BIT FIELDS

0x180005
0x180007
0x180015
0x180017
0x180025
0x180027
0x180035
0x180037
0x18000D
0x18000F
0x18001D
0x18001F
0x18002D
0x18002F
0x18003D
0x18003F
PCM Path Signal Control 2. 0x90004

Reserved
PCM_INV_A
PCM_INV_B
PCM_SWAP_CHAN
PCM_COPY_CHAN

VALUE
0x8C
0xAB
0x31
0xB2
0x30
0x84
0x9C
0xAE
0x24
0xA3
0x05
0xD4
0x0B
0xC7
0x71
0xE7
data (0x90004)
OR (0x02)
0000
x
x
1
x

5.11.2 Sequence for Disabling the PCM_SWAP_CHAN Bit

STEP

TASK

1 Restore channel A/B calibration

2 Disable PCM channel swap

REGISTER/BIT FIELDS

0x180005
0x180007
0x180015
0x180017
0x180025
0x180027
0x180035
0x180037
0x18000D
0x18000F
0x18001D
0x18001F
0x18002D
0x18002F
0x18003D
0x18003F
PCM Path Signal Control 2. 0x90004

Reserved
PCM_INV_A
PCM_INV_B
PCM_SWAP_CHAN
PCM_COPY_CHAN

VALUE
0x24
0xA3
0x05
0xD4
0x0B
0xC7
0x71
0xE7
0x8C
0xAB
0x31
0xB2
0x30
0x84
0x9C
0xAE
data (0x90004)
AND (0xFD)
0000
x
x
0
x

DESCRIPTION

Enable PCM channel swap

DESCRIPTION

Disable PCM channel swap

72

DS1155F2

CS43131
5.12 Sequences for Enabling and Disabling Mono Mode for PCM Playback

5.12 Sequences for Enabling and Disabling Mono Mode for PCM Playback

The following subsections describe sequences for enabling and disabling mono mode for PCM playback.

5.12.1 Sequence for Enabling Mono Mode for PCM Playback

STEP
1

Enable mono mode

TASK

REGISTER/BIT FIELDS

0x180009
0x18000A
0x18000B
0x18000C
0x18000F
0x180010
0x180019
0x18001A
0x18001B
0x18001C
0x18001F
0x180020
0x180029
0x18002A
0x18002B
0x18002C
0x18002F
0x180030
0x180039
0x18003A
0x18003B
0x18003C
0x18003F
0x180040

5.12.2 Sequence for Disabling Mono Mode for PCM Playback

STEP
1

Disable mono mode

TASK

REGISTER/BIT FIELDS

0x180009
0x18000A
0x18000B
0x18000C
0x18000F
0x180010
0x180019
0x18001A
0x18001B
0x18001C
0x18001F
0x180020
0x180029
0x18002A
0x18002B
0x18002C
0x18002F
0x180030
0x180039
0x18003A
0x18003B
0x18003C
0x18003F
0x180040

VALUE
0x2F
0xB4
0x25
0x80
0x55
0xFA
0x2F
0xB4
0x25
0x80
0x4E
0xFD
0x2F
0xB4
0x25
0x80
0x7C
0xFD
0x2F
0xB4
0x25
0x80
0x52
0xFE

VALUE
0xD1
0x4B
0xDA
0x7F
0xAB
0x05
0xD1
0x4B
0xDA
0x7F
0xB2
0x02
0xD1
0x4B
0xDA
0x7F
0x84
0x02
0xD1
0x4B
0xDA
0x7F
0xAE
0x01

DS1155F2

73

CS43131
5.13 Example Sequences

5.13 Example Sequences

This section provides recommended instruction sequences for standard CS43131 operations.

5.13.1 Power-up Sequence to I2S Playback

In Ex. 5-7, a 22.5792-MHz crystal is used, ASP is set to I2S master at 44.1 kHz, and full-scale output is 1.732 Vrms.

Example 5-7. Startup to I2S Playback

STEP

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

1 Apply all relevant power supplies, then assert RESET.
2 Wait for 1.5 ms.
3 Configure XTAL driver
4 Configure XTAL bias

Crystal Setting. 0x20052

current strength (assuming
River Crystal at
22.5792 MHz)

Reserved
XTAL_IBIAS

5 Read Interrupt Status 1 register (0xF0000) to clear any pending interrupts.
6 Enable XTAL interrupts

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Power Down Control. 0x20000

7 Start XTAL

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

8 Configure ASP interface. Sample rate set to 44.1 kHz. ASP is clock master.
9 Set ASP sample rate

Serial Port Sample Rate. 0x1000B

Reserved
ASP_SPRATE

10 Set ASP sample bit size.

Serial Port Sample Bit Size. 0x1000C

XSP is don't care

Reserved
XSP_SPSIZE
ASP_SPSIZE

11 Set ASP numerator

ASP Numerator 1. 0x40010

ASP_N_LSB

ASP Numerator 2. 0x40011

ASP_N_MSB

12 Set ASP denominator

ASP Denominator 1. 0x40012

ASP_M_LSB

ASP Denominator 2. 0x40013

ASP_M_MSB

13 Set ASP LRCK high time ASP LRCK High Time 1. 0x40014

ASP_LCHI_LSB

ASP LRCK High Time 2. 0x40015

ASP_LCHI_MSB

14 Set ASP LRCK period

ASP LRCK Period 1. 0x40016

ASP_LCPR_LSB

ASP LRCK Period 2. 0x40017

ASP_LCPR_MSB

15 Configure ASP clock

ASP Clock Configuration. 0x40018

Reserved
ASP_M/SB
ASP_SCPOL_OUT
ASP_SCPOL_IN
ASP_LCPOL_OUT
ASP_LCPOL_IN

0x04
0000 0
100

0xE7
1
1
1
0
0
1
1
1
0xF6
1
1
1
1
0
1
1
0

Bias current set to 12.5 µA

Enable XTAL_READY interrupt
Enable XTAL_ERROR interrupt

Power up XTAL driver

LSB of ASP sample rate fractional divide numerator

LSB of ASP sample rate fractional divide denominator

XSP sample bit size set to 24 bits
ASP sample bit size set to 32 bits

0x01
0000
0001 Set sample rate to 44.1 kHz
0x04
0000
01
00
0x01
0x01
0x00
0x00 MSB of ASP sample rate fractional divide numerator
0x08
0x08
0x00
0x00 MSB of ASP sample rate fractional divide denominator
0x1F
0x1F LSB of ASP LRCK high time duration
0x00
0x00 MSB of ASP LRCK high time duration
0x3F
0x3F LSB of ASP LRCK period
0x00
0x00 MSB of ASP LRCK period
0x1C
000
1
1
1
0
0

Set ASP port to be master
Configure clock polarity for I2S input

74

DS1155F2

Example 5-7. Startup to I2S Playback (Cont.)

STEP

TASK

REGISTER/BIT FIELDS

16 Configure ASP frame

ASP Frame Configuration. 0x40019

Reserved
ASP_STP
ASP_5050
ASP_FSD

17 Set ASP channel location ASP Channel 1 Location. 0x50000

18 Set ASP channel size and

enable

ASP_RX_CH1

ASP Channel 2 Location. 0x50001

ASP_RX_CH2

ASP Channel 1 Size and Enable. 0x5000A

Reserved
ASP_RX_CH1_AP
ASP_RX_CH1_EN
ASP_RX_CH1_RES

ASP Channel 2 Size and Enable. 0x5000B

Reserved
ASP_RX_CH2_AP
ASP_RX_CH2_EN
ASP_RX_CH2_RES

19 Configure PCM interface. HPF filter is used. Deemphasis off.
20 Configure PCM filter

PCM Filter Option. 0x90000
FILTER_SLOW_FASTB
PHCOMP_LOWLATB
NOS
Reserved
PCM_WBF_EN
HIGH_PASS
DEEMP_ON

21 Set volume for channel B PCM Volume B. 0x90001

22 Set volume for channel A PCM Volume A. 0x90002

PCM_VOLUME_B

23 Configure PCM path signal

control

PCM_VOLUME_A

PCM Path Signal Control 1. 0x90003

PCM_RAMP_DOWN
PCM_VOL_BEQA

PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA

PCM_MUTE_A
PCM_MUTE_B

PCM Path Signal Control 2. 0x90004

Reserved
PCM_INV_A
PCM_INV_B
PCM_SWAP_CHAN
PCM_COPY_CHAN

24 Configure HP
25 Configure Class H amplifierClass H Control. 0xB0000

Reserved
ADPT_PWR
HV_EN
EXT_VCPFILT

26 Set HP output to full scale HP Output Control 1. 0x80000

27 Configure Headphone

detect

HP_CLAMPA
HP_CLAMPB
OUT_FS
HP_IN_EN
HP_IN_LP
Reserved
+1dB_EN

HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

CS43131
5.13 Example Sequences

Configure ASP port to accept I2S input

DESCRIPTION

VALUE
0x0A
000
0
1
010
0x00
0x00 ASP Channel 1 starts on SCLK0
0x00
0x00 ASP Channel 2 starts on SCLK0
0x07
0000
0
1
11
0x0F
0000
1
1
11

ASP Channel 1 Active Phase
ASP Channel 1 Enable
ASP Channel 1 Size is 32 bits

ASP Channel 2 Active Phase
ASP Channel 2 Enable
ASP Channel 2 Size is 32 bits

High pass filter is selected

0x02
0
0
0
0 0
0
1
0
0x00
0x00 Set volume to 0 dB
0x00
0x00 Set volume to 0 dB
0xEC
1
1

Soft ramp down of volume on filter change
Volume setting on both channels controlled by PCM_
VOLUME_A
Enable soft ramp
Mute after reception of 8192 samples of 0 or –1.
Mute only when AMUTE condition is detected on both
channels
Function is disabled
Function is disabled

Disable all functions in this register

Output signal determines voltage level
High voltage mode enabled
Using internal VCPFILT source.

Set headphone output to full scale (1.732 V rms)

HP detect disabled
HP detect input is not inverted
Tip sense rising debounce time set to 0 ms
Tip sense falling debounce time set to 500 ms

10
1
1

0
0
0x00
0000
0
0
0
0

0x1E
000
1 11
1
0
0x30
0
0
11
0
0
0
0
0x04
00
0
0 0
10
0

DS1155F2

75

Example 5-7. Startup to I2S Playback (Cont.)

STEP

TASK

28 Headphone detect

REGISTER/BIT FIELDS

HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

VALUE
0xC4
11
0
0 0
10
0

DESCRIPTION

HP detect enabled
HP detect input is not inverted
Tip sense rising debounce time set to 0 ms
Tip sense falling debounce time set to 500 ms

CS43131
5.13 Example Sequences

29 Enable interrupts
30 Read Interrupt Status 1 register (0xF0000) and Interrupt Status 2 register (0xF0001) to clear sticky bits.
31 Enable headphone detect

interrupts

32 Enable ASP interrupts

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Interrupt Mask 2. 0xF0011
ASP_OVFL_INT_MASK
ASP_ERROR_INT_MASK
ASP_LATE_INT_MASK
ASP_EARLY_INT_MASK
ASP_NOLRCK_INT_MASK
Reserved

Enable HPDETECT_PLUG interrupt
Enable HPDETECT_UNPLUG interrupt

Enable ASP_OVFL interrupt
Enable ASP_ERROR interrupt
Enable ASP_LATE interrupt
Enable ASP_EARLY interrupt
Enable ASP_NOLRCK interrupt

0x87
1
0
0
0
0
1
1
1
0x07
0
0
0
0
0
111

0x04
0000 0
1
00

33 Wait for interrupt. Check if XTAL_READY_INT = 1 in Interrupt Status 1 register (0xF0000).
34 Switch MCLK source to

System Clocking Control 1. 0x10006

XTAL

Reserved
MCLK_INT
MCLK_SRC_SEL

MCLK Source set to XTAL. MCLK_INT frequency set to
22.5792 MHz

35 Wait at least 150 µs.
36 Enable ASP clocks

Pad Interface Configuration. 0x1000D

Reserved
XSP_3ST
ASP_3ST

37 Power up HP

Refer to Ex. 5-5 for PCM power-up sequence

5.13.2 Power-Up Sequence to DSD Playback

0x02
0000 00
1
0

XSP Interface status is don't care (set to default)
Enable serial clocks in Master Mode

In Ex. 5-8, a 22.5792-MHz crystal is used, the PLL is used to create a 24.576-MHz MCLK, XSP is set as DSD slave at
2.8224 MHz, and full-scale output is 1.732 Vrms.

Example 5-8. Startup to DSD Playback

STEP
1

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

Apply all relevant power supplies, then assert RESET.

2 Wait for 1.5 ms.
3 Configure XTAL driver
4 Configure XTAL bias current

Crystal Setting. 0x20052

strength (assuming River Crystal
at 22.5792 MHz)

Reserved
XTAL_IBIAS

5 Read Interrupt Status 1 register (0xF0000) to clear any pending interrupts.
6

Enable XTAL interrupts

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

0x04
0000 0
100

0xE7
1
1
1
0
0
1
1
1
0xF6
1
1
1
1
0
1
1
0

Bias current set to 12.5 µA

Enable XTAL_READY interrupt
Enable XTAL_ERROR interrupt

Power up XTAL driver

7

Start XTAL

76

DS1155F2

Example 5-8. Startup to DSD Playback (Cont.)

STEP

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

CS43131
5.13 Example Sequences

8 Configure PLL. Input is 22.5792 MHz. Output is 24.576 MHz.
9

Power Down Control. 0x20000

Power up PLL

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

PLL Setting 9. 0x40002

Reserved
PLL_REF_PREDIV
PLL Setting 6. 0x30008

PLL_OUT_DIV

PLL Setting 2. 0x30002
PLL_DIV_FRAC_0
PLL Setting 3. 0x30003
PLL_DIV_FRAC_1
PLL Setting 4. 0x30004
PLL_DIV_FRAC_2
PLL Setting 5. 0x30005

PLL_DIV_INT

PLL Setting 8. 0x3001B

Reserved
PLL_MODE
Reserved

PLL Setting 7. 0x3000A
PLL_CAL_RATIO

10 Set PLL predivide

11 Set PLL Output Divide

12 Set Fractional portion of PLL

divide ratio

13 Set integer portion of PLL divide

ratio

14 Set PLL Mode

15 Set PLL Calibration Ratio

Divide PLL Reference by 8

Power up PLL

0xF2
1
1
1
1
0
0
1
0
0x03
0000 00
11
0x08
0x08 Divide PLL output by 8
0x00
0x00
0xF7
0xF7
0x06
0x06
0x44
0x44
0x01
0000 00
0
1
0x8B
0x8B Set PLL Cal Ratio to 139

Use 500/512 factor

16 Read Interrupt Status 1 register (0xF0000) to clear any pending interrupts.
17 Enable PLL Interrupts

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK

0xE1
1
1
1
0
0
0
0
1
0x01
0000 000
1
19 Configure DSDIF to playback 64•Fs DSD stream. DSDIF is configured as Slave
20 Configure DSD Volume

Reserved
PLL_START

DSD Volume A. 0x70001

PLL Setting 1. 0x30001

18 Start PLL

21 Configure DSD path Signal

Control1

DSD Processor Path Signal Control 1.
0x70002

DSD_VOLUME_A

DSD_RAMP_UP
DSD_VOL_BEQA
DSD_SZC
Reserved
DSD_AMUTE

DSD_AMUTE_BEQA

DSD_MUTE_A
DSD_MUTE_B

22 Configure DSD Interface

DSD Interface Configuration. 0x70003

Reserved
DSD_M/SB
DSD_PM_EN
DSD_PM_SEL

Enable PLL Ready and Error Interrupts

Start PLL

0x00
0x00 Channel A volume set to 0dB
0xCC

1
1
0
0
1

1

0
0
0x00
0000 0
0
0
0

DSD Volume B equals DSD volume A
Immediate change

Mute occurs after 256 repeated 8-bit DSD mute patterns

Mute happens only when mute pattern is detected in both
channels
Function is disabled
Function is disabled

DSD is clock slave
Function is disabled
Function is disabled

DS1155F2

77

CS43131
5.13 Example Sequences

Example 5-8. Startup to DSD Playback (Cont.)

STEP

TASK

23 Configure DSD path Signal

Control 2

REGISTER/BIT FIELDS
DSD Processor Path Signal Control 2.
0x70004

VALUE
0x13

DESCRIPTION

Reserved
DSD_PRC_SRC
DSD_EN
Reserved
DSD_SPEED
STA_DSD_DET
INV_DSD_DET

24 Configure HP
25 Configure Class H Amplifier

Class H Control. 0xB0000

Reserved
ADPT_PWR
HV_EN
EXT_VCPFILT

26 Set HP output to full scale

HP Output Control 1. 0x80000

27 Configure Headphone Detect

28 Headphone Detect

HP_CLAMPA
HP_CLAMPB
OUT_FS
HP_IN_EN
HP_IN_LP
Reserved
+1dB_EN

HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

0
00
1
0
0
1
1

0x1E
000
111
1
0
0x30
0
0
11
0
0
0
0
0x04
00
0
0 0
10
0
0xC4
11
0
0 0
10
0

Set source of DSD processor to DSDIF
Enable DSD playback

Set DSD clock speed to 64•FS
Static DSD detection enabled
Invalid DSD detection enabled

Output signal determines voltage level
High Voltage Mode Enabled
Using Internal VCPFILT source.

Set headphone output to Full Scale (1.732 V rms)

HP detect disabled
HP detect input is not inverted
Tip Sense rising debounce time set to 0 ms
Tip sense falling debounce time set to 500 ms

HP detect enabled
HP detect input is not inverted
Tip sense rising debounce time set to 0 ms
Tip sense falling debounce time set to 500 ms

29 Enable Interrupts
30 Read Interrupt Status 1 register (0xF0000) and Interrupt Status 5 register (0xF0004) to clear sticky bits
31 Enable Headphone Detect

Interrupts

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Interrupt Mask 5. 0xF0014

DSD_STUCK_INT_MASK
DSD_INVAL_A_INT_MASK
DSD_INVAL_B_INT_MASK
DSD_SILENCE_A_INT_MASK
DSD_SILENCE_B_INT_MASK
DSD_RATE_ERROR_INT_MASK
DOP_MRK_DET_INT_MASK
DOP_ON_INT_MASK

0x81
1
0
0
0
0
0
0
1
0x03
0
0
0
0
0
0
1
1

0x01
0000 0
0
01

Unmask HPDETECT_PLUG interrupt and
HPDETECT_UNPLUG interrupt

Enable DSD_STUCK interrupt
Enable DSD_INVAL_A interrupt
Enable DSD_INVAL_B interrupt
Enable DSD_SILENCE_A interrupt
Enable DSD_SILENCE_B interrupt
Enable DSD_RATE_ERROR interrupt
Disable DOP_MRK_DET interrupt
Disable DOP_ON interrupt

33 Wait for interrupt. Check if PLL_READY_INT = 1 in Interrupt Status 1 register(0xF0000)
34 Switch MCLK source to PLL

System Clocking Control 1. 0x10006

Reserved
MCLK_INT
MCLK_SRC_SEL

MCLK Source set to PLL. MCLK_INT frequency set to
24.576 MHz

35 Wait at least 150 µs.
36 Power up HP

Refer to Ex. 5-6 for DSD power-up sequence. Note that in Step 1 of Ex. 5-6, use HH = DF for the DSD interface.

78

DS1155F2

32 Enable DSD Interrupts

CS43131
5.13 Example Sequences

5.13.3 Power-Up Sequence to DoP Playback with PLL

In Ex. 5-9, an external 19.2-MHz MCLK is used with a PLL to generate an internal MCLK or 22.5792 MHz, and the ASP
is in clock master receiving DoP data with LRCLK at 176.4 kHz and SCLK at 8.4672 MHz.

Example 5-9. DoP Playback with PLL

STEP

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

1 Apply all relevant power supplies, then assert RESET.
2 Wait for 1.5 ms.
3 Configure PLL. XTI/MCLK input coming from an external 19.2 MHz source with PLL output set to 22.5792 MHz. Refer to Section 4.7.2 for register

settings for other frequency combinations

4 Power up PLL

Power Down Control. 0x20000

5 Set PLL Predivide value

6 Set PLL output divide

7 Set Fractional portion of PLL Divide Ratio

8 Set Integer portion of PLL Divide Ratio

9 Set PLL mode

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

PLL Setting 9. 0x40002

Reserved
PLL_REF_PREDIV
PLL Setting 6. 0x30008

PLL_OUT_DIV

PLL Setting 2. 0x30002
PLL_DIV_FRAC_0
PLL Setting 3. 0x30003
PLL_DIV_FRAC_1
PLL Setting 4. 0x30004
PLL_DIV_FRAC_2
PLL Setting 5. 0x30005

PLL_DIV_INT

PLL Setting 8. 0x3001B

Reserved
PLL_MODE
Reserved

10 Read Interrupt Status 1 register (0xF0000) to clear sticky bits.
11 Set PLL calibration ratio

PLL Setting 7. 0x3000A
PLL_CAL_RATIO

12 Enable PLL interrupts

13 Start PLL

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK

PLL Setting 1. 0x30001

Reserved
PLL_START

Power up PLL block

Set PLL predivide value to 8

0xFA
x
x
x
x
x
0
x
0
0x03
0000 00
11
0x08
0x08 Set PLL output divide value to 8
0x00
0x00 Set LSB of PLL fractional divider value to 0
0x00
0x00 Set Middle Byte of PLL fractional divider value to 0
0x80
0x80 Set MSB of PLL fractional divider value to 0x80
0x49
0x49 Set PLL integer Divide value to 0x49
0x01
0000 00
0
1

500/512 factor is used in PLL frequency calculation

0x97
0x97 PLL Calibration Ratio is set to 0x97 (151)
0xF9
1
1
1
1
1
0
0
1
0x01
0000 000
1

DAC_OVFL_INT is don't care
Unmask HPDETECT_PLUG interrupt
Unmask HPDETECT_UNPLUG interrupt
XTAL_READY_INT is Don't Care
XTAL_ERROR_INT is Don't Care
PLL_READY Interrupt is already unmasked
PLL_ERROR Interrupt is already unmasked
PDN_DONE_INT is Don't Care

Enable PLL Output

14 Playback DoP audio. Assuming 64•Fs DSD stream
15 Configure ASP interface for DoP input
16 Set ASP sample rate

Serial Port Sample Rate. 0x1000B

Reserved
ASP_SPRATE

0x05
0000
0101 Set sample rate to 176.4 kHz

17 Set ASP sample bit size. XSP is don't care

18 Set ASP numerator

Reserved
XSP_SPSIZE
ASP_SPSIZE

Serial Port Sample Bit Size. 0x1000C 0x05
0000
01
01
0x03
0x03 LSB of ASP sample rate fractional divide

XSP sample bit size set to 24 bits
ASP sample bit size set to 24 bits

ASP Numerator 1. 0x40010

ASP_N_LSB

numerator

ASP Numerator 2. 0x40011

ASP_N_MSB

0x00
0x00 MSB of ASP sample rate fractional divide

numerator

DS1155F2

79

Example 5-9. DoP Playback with PLL (Cont.)

STEP

TASK

19 Set ASP denominator

REGISTER/BIT FIELDS

ASP Denominator 1. 0x40012

ASP_M_LSB

VALUE
0x08
0x08 LSB of ASP sample rate fractional divide

DESCRIPTION

denominator

ASP Denominator 2. 0x40013

ASP_M_MSB

0x00
0x00 MSB of ASP sample rate fractional divide

denominator

CS43131
5.13 Example Sequences

20 Set ASP LRCK high time

ASP LRCK High Time 1. 0x40014

21 Set ASP LRCK period

22 Configure ASP clock

ASP_LCHI_LSB

ASP LRCK High Time 2. 0x40015

ASP_LCHI_MSB

ASP LRCK Period 1. 0x40016

ASP_LCPR_LSB

ASP LRCK Period 2. 0x40017

ASP_LCPR_MSB

ASP Clock Configuration. 0x40018

Reserved
ASP_M/SB
ASP_SCPOL_OUT
ASP_SCPOL_IN
ASP_LCPOL_OUT
ASP_LCPOL_IN

23 Configure ASP frame

ASP Frame Configuration. 0x40019

24 Set ASP channel location

ASP Channel 1 Location. 0x50000

Reserved
ASP_STP
ASP_5050
ASP_FSD

25 Set ASP channel size and enable

ASP_RX_CH1

ASP Channel 2 Location. 0x50001

ASP_RX_CH2

ASP Channel 1 Size and Enable.
0x5000A

Reserved
ASP_RX_CH1_AP
ASP_RX_CH1_EN
ASP_RX_CH1_RES

ASP Channel 2 Size and Enable.
0x5000B

Reserved
ASP_RX_CH2_AP
ASP_RX_CH2_EN
ASP_RX_CH2_RES

0x17
0x17 LSB of ASP LRCK high time duration
0x00
0x00 MSB of ASP LRCK high time duration
0x2F
0x2F LSB of ASP LRCK period
0x00
0x00 MSB of ASP LRCK period
0x1C
000
1
1
1
0
0
0x0A
000
0
1
010
0x00
0x00 ASP Channel 1 starts on SCLK0
0x00
0x00 ASP Channel 2 starts on SCLK0
0x06

Set ASP port to be Master
Set output SCLK polarity
Input SCLK polarity is don't care
Set Output LRCK polarity
Input LRCK polarity is don't care

Configure ASP port to accept I2S input

0000
0
1
10
0x0E

0000
1
1
10

ASP Channel 1 active phase
ASP Channel 1 enable
ASP Channel 1 size is 24 bits

ASP Channel 2 active phase
ASP Channel 2 enable
ASP Channel 2 size is 24 bits

26 Wait for interrupt. Check if PLL_READY_INT = 1 in Interrupt Status 1 register(0xF0000).
27 Configure DSD processor
28 Configure DSD volume

DSD Volume A. 0x70001

29 Configure DSD Path Signal Control 1

DSD_VOLUME_A

DSD Processor Path Signal Control 1.
0x70002

0x00
0x00 Channel A volume set to 0 dB
0xCC

30 Configure DSD interface

DSD_RAMP_UP
DSD_VOL_BEQA
DSD_SZC
Reserved
DSD_AMUTE

DSD_AMUTE_BEQA

DSD_MUTE_A
DSD_MUTE_B

DSD Interface Configuration.
0x70003

Reserved
DSD_M/SB
DSD_PM_EN
DSD_PM_SEL

1
1
0
0
1

1

0
0
0x04

0000 0
1
0
0

DSD Volume B equals DSD volume A
Immediate change

Mute occurs after 256 repeated 8-bit DSD mute
patterns
Mute happens only when mute pattern is detected
in both channels
Function is disabled
Function is disabled

DSD is clock master
Function is disabled
Function is disabled

80

DS1155F2

Example 5-9. DoP Playback with PLL (Cont.)

STEP

TASK

31 Configure DSD Path Signal Control 2

REGISTER/BIT FIELDS
DSD Processor Path Signal Control 2.
0x70004

Reserved
DSD_PRC_SRC
DSD_EN
Reserved
DSD_SPEED
STA_DSD_DET
INV_DSD_DET

32 Configure DSD path Signal Control 3

DSD Processor Path Signal Control 3.
0x70006

DSD_ZERODB

DSD_HPF_EN
Reserved
SIGCTL_DSDEQPCM
DSD_INV_A
DSD_INV_B
DSD_SWAP_CHAN
DSD_COPY_CHAN

33 Configure headphone output for 1.732 V rms
34 Configure Class H amplifier

Class H Control. 0xB0000

Reserved
ADPT_PWR
HV_EN
EXT_VCPFILT

35 Set HP output to full scale

HP Output Control 1. 0x80000

36 Headphone detect

HP_CLAMPA
HP_CLAMPB
OUT_FS
HP_IN_EN
HP_IN_LP
Reserved
+1dB_EN

HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

CS43131
5.13 Example Sequences

DESCRIPTION

Set source of DSD processor to ASP
Enable DSD playback

Set DSD clock speed to 64•Fs
Static DSD detection disabled
Invalid DSD detection disabled

The SACD 0–dB reference level (50%modulation
index) matches PCM 0-dB full scale.
Enable HPF in DSD processor

Function is disabled
Function is disabled
Function is disabled
Function is disabled
Function is disabled

Output signal determines voltage level
High voltage mode enabled
Using internal VCPFILT source.

Set headphone output to full scale (1.732 V rms)

HP detect enabled
HP detect input is not inverted
Tip Sense rising debounce time set to 0 ms
Tip sense falling debounce time set to 500 ms

VALUE
0x50

0
10
1
0
0
0
0
0xC0

1

1
0
0
0
0
0
0

0x1E
000
1 11
1
0
0x30
0
0
11
0
0
0
0
0xC4
11
0
0 0
10
0

37 Enable interrupts
38 Read Interrupt Status 1 register (0xF0000), Interrupt Status 2 register (0xF0001) and Interrupt Status 5 register (0xF0004) to clear sticky bits.
39 Enable headphone detect interrupts

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Interrupt Mask 2. 0xF0011
ASP_OVFL_INT_MASK
ASP_ERROR_INT_MASK
ASP_LATE_INT_MASK
ASP_EARLY_INT_MASK
ASP_NOLRCK_INT_MASK
Reserved

40 Enable ASP interrupts

41 Enable DSD and DoP interrupts

Interrupt Mask 5. 0xF0014

DSD_STUCK_INT_MASK
DSD_INVAL_A_INT_MASK
DSD_INVAL_B_INT_MASK
DSD_SILENCE_A_INT_MASK
DSD_SILENCE_B_INT_MASK
DSD_RATE_ERROR_INT_MASK
DOP_MRK_DET_INT_MASK
DOP_ON_INT_MASK

42 Wait for interrupt. Check if PLL_READY_INT = 1 in Interrupt Status 1 register(0xF0000).
43 Set MCLK source and frequency

System Clocking Control. 0x10006

Reserved
MCLK_INT
MCLK_SRC_SEL

44 Wait for at least 150 µs.

DS1155F2

0x99
1
0
0
1
1
0
0
1
0x07
0
0
0
0
0
111
0x01
0
0
0
0
0
0
0
1

0x05
0000 0
1
01

DAC_OVFL_INT is don't care
Enable HPDETECT_PLUG interrupt
Enable HPDETECT_UNPLUG interrupt
XTAL_READY_INT is don't care
XTAL_ERROR_INT is don't care
PLL_READY interrupt already enabled
PLL_ERROR interrupt already enabled
PDN_DONE_INT is don't care

Enable ASP_OVFL interrupt
Enable ASP_ERROR interrupt
Enable ASP_LATE interrupt
Enable ASP_EARLY interrupt
Enable ASP_NOLRCK interrupt

Enable DSD_STUCK interrupt
Enable DSD_INVAL_A interrupt
Enable DSD_INVAL_B interrupt
Enable DSD_SILENCE_A interrupt
Enable DSD_SILENCE_B interrupt
Enable DSD_RATE_ERROR interrupt
Enable DOP_MRK_DET interrupt
Disable DOP_ON interrupt

MCLK Frequency is set to 22.5792 MHz
MCLK Source is set to PLL

81

CS43131
5.13 Example Sequences

Example 5-9. DoP Playback with PLL (Cont.)

STEP

TASK

45 Enable ASP clocks

VALUE
Pad Interface Configuration. 0x1000D 0x02

REGISTER/BIT FIELDS

DESCRIPTION

46 Power up HP

Reserved
XSP_3ST
ASP_3ST

0000 00
1
0

XSP Interface status is don't care (set to default)
Enable serial clocks in Master Mode

Refer to Ex. 5-6 for DSD power-up sequence. Note that in Step 1 of Ex. 5-6, use HH = BF for DoP
over ASP interface.

5.13.4 Power-up Sequence to I2S Playback in Mono Mode

In Ex. 5-7, a 22.5792-MHz crystal is used, ASP is set to I2S master at 44.1 kHz, and full-scale output is 1.732 Vrms.

Example 5-10. Startup to I2S Playback in Mono Mode

STEP

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

1 Apply all relevant power supplies, then assert RESET.
2 Wait for 1.5 ms.
3 Configure XTAL driver
4 Configure XTAL bias

Crystal Setting. 0x20052

current strength (assuming
River Crystal at
22.5792 MHz)

Reserved
XTAL_IBIAS

5 Read Interrupt Status 1 register (0xF0000) to clear any pending interrupts.
6 Enable XTAL interrupts

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Power Down Control. 0x20000

7 Start XTAL

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

8 Configure ASP interface. Sample rate set to 44.1 kHz. ASP is clock master.
9 Set ASP sample rate

Serial Port Sample Rate. 0x1000B

10 Set ASP sample bit size.

XSP is don't care

Reserved
ASP_SPRATE

Serial Port Sample Bit Size. 0x1000C

Reserved
XSP_SPSIZE
ASP_SPSIZE

11 Set ASP numerator

ASP Numerator 1. 0x40010

ASP_N_LSB

ASP Numerator 2. 0x40011

ASP_N_MSB

12 Set ASP denominator

ASP Denominator 1. 0x40012

ASP_M_LSB

ASP Denominator 2. 0x40013

ASP_M_MSB

13 Set ASP LRCK high time ASP LRCK High Time 1. 0x40014

ASP_LCHI_LSB

ASP LRCK High Time 2. 0x40015

ASP_LCHI_MSB

14 Set ASP LRCK period

ASP LRCK Period 1. 0x40016

ASP_LCPR_LSB

ASP LRCK Period 2. 0x40017

ASP_LCPR_MSB

0x04
0000 0
100

0xE7
1
1
1
0
0
1
1
1
0xF6
1
1
1
1
0
1
1
0

Bias current set to 12.5 µA

Enable XTAL_READY interrupt
Enable XTAL_ERROR interrupt

Power up XTAL driver

LSB of ASP sample rate fractional divide numerator

XSP sample bit size set to 24 bits
ASP sample bit size set to 32 bits

0x01
0000
0001 Set sample rate to 44.1 kHz
0x04
0000
01
00
0x01
0x01
0x00
0x00 MSB of ASP sample rate fractional divide numerator
0x08
0x08
0x00
0x00 MSB of ASP sample rate fractional divide denominator
0x1F
0x1F LSB of ASP LRCK high time duration
0x00
0x00 MSB of ASP LRCK high time duration
0x3F
0x3F LSB of ASP LRCK period
0x00
0x00 MSB of ASP LRCK period

LSB of ASP sample rate fractional divide denominator

82

DS1155F2

CS43131
5.13 Example Sequences

Example 5-10. Startup to I2S Playback in Mono Mode (Cont.)

STEP

TASK

15 Configure ASP clock

REGISTER/BIT FIELDS
ASP Clock Configuration. 0x40018

Reserved
ASP_M/SB
ASP_SCPOL_OUT
ASP_SCPOL_IN
ASP_LCPOL_OUT
ASP_LCPOL_IN

16 Configure ASP frame

ASP Frame Configuration. 0x40019

Reserved
ASP_STP
ASP_5050
ASP_FSD

17 Set ASP channel location ASP Channel 1 Location. 0x50000

ASP_RX_CH1

ASP Channel 2 Location. 0x50001

ASP_RX_CH2

DESCRIPTION

Set ASP port to be master
Configure clock polarity for I2S input

VALUE
0x1C
000
1
1
1
0
0
0x0A
000
0
1
010
0x00
0x00 ASP Channel 1 starts on SCLK0
0x00
0x00 ASP Channel 2 starts on SCLK0

Configure ASP port to accept I2S input

18 Set ASP channel size and
enable. Set both Channel 1
and Channel 2 to the same
active phase to get the
same data for mono mode.

ASP Channel 1 Size and Enable. 0x5000A

0x07/0x0F for Left/Right channel

Reserved
ASP_RX_CH1_AP
ASP_RX_CH1_EN
ASP_RX_CH1_RES

0000
0/1
1
11

ASP Channel 1 Active Phase
ASP Channel 1 Enable
ASP Channel 1 Size is 32 bits

ASP Channel 2 Size and Enable. 0x5000B

0x07/0x0F for Left/Right channel

Reserved
ASP_RX_CH2_AP
ASP_RX_CH2_EN
ASP_RX_CH2_RES

0000
0/1
1
11

ASP Channel 2 Active Phase
ASP Channel 2 Enable
ASP Channel 2 Size is 32 bits

19 Configure PCM interface. HPF filter is used. Deemphasis off.
20 Configure PCM filter

PCM Filter Option. 0x90000
FILTER_SLOW_FASTB
PHCOMP_LOWLATB
NOS
Reserved
PCM_WBF_EN
HIGH_PASS
DEEMP_ON

21 Set volume for channel B PCM Volume B. 0x90001

PCM_VOLUME_B

22 Set volume for channel A PCM Volume A. 0x90002

PCM_VOLUME_A

23 Configure PCM path signal

PCM Path Signal Control 1. 0x90003

control

PCM_RAMP_DOWN
PCM_VOL_BEQA

PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA

PCM_MUTE_A
PCM_MUTE_B

PCM Path Signal Control 2. 0x90004

Reserved
PCM_INV_A
PCM_INV_B
PCM_SWAP_CHAN
PCM_COPY_CHAN

24 Configure HP
25 Configure Class H amplifierClass H Control. 0xB0000

Reserved
ADPT_PWR
HV_EN
EXT_VCPFILT

26 Set HP output to full scale HP Output Control 1. 0x80000

HP_CLAMPA
HP_CLAMPB
OUT_FS
HP_IN_EN
HP_IN_LP
Reserved
+1dB_EN

High pass filter is selected

0x02
0
0
0
0 0
0
1
0
0x00
0x00 Set volume to 0 dB
0x00
0x00 Set volume to 0 dB
0xEC
1
1

Soft ramp down of volume on filter change
Volume setting on both channels controlled by PCM_
VOLUME_A
Enable soft ramp
Mute after reception of 8192 samples of 0 or –1.
Mute only when AMUTE condition is detected on both
channels
Function is disabled
Function is disabled

Disable all functions in this register

Output signal determines voltage level
High voltage mode enabled
Using internal VCPFILT source.

Set headphone output to full scale (1.732 V rms)

10
1
1

0
0
0x00
0000
0
0
0
0

0x1E
000
1 11
1
0
0x30
0
0
11
0
0
0
0

DS1155F2

83

CS43131
5.13 Example Sequences

Example 5-10. Startup to I2S Playback in Mono Mode (Cont.)

STEP

TASK

27 Configure Headphone

detect

28 Headphone detect

REGISTER/BIT FIELDS

HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

VALUE
0x04
00
0
0 0
10
0
0xC4
11
0
0 0
10
0

DESCRIPTION

HP detect disabled
HP detect input is not inverted
Tip sense rising debounce time set to 0 ms
Tip sense falling debounce time set to 500 ms

HP detect enabled
HP detect input is not inverted
Tip sense rising debounce time set to 0 ms
Tip sense falling debounce time set to 500 ms

29 Enable interrupts
30 Read Interrupt Status 1 register (0xF0000) and Interrupt Status 2 register (0xF0001) to clear sticky bits.
31 Enable headphone detect

interrupts

32 Enable ASP interrupts

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Interrupt Mask 2. 0xF0011
ASP_OVFL_INT_MASK
ASP_ERROR_INT_MASK
ASP_LATE_INT_MASK
ASP_EARLY_INT_MASK
ASP_NOLRCK_INT_MASK
Reserved

Enable HPDETECT_PLUG interrupt
Enable HPDETECT_UNPLUG interrupt

Enable ASP_OVFL interrupt
Enable ASP_ERROR interrupt
Enable ASP_LATE interrupt
Enable ASP_EARLY interrupt
Enable ASP_NOLRCK interrupt

0x87
1
0
0
0
0
1
1
1
0x07
0
0
0
0
0
111

0x04
0000 0
1
00

33 Wait for interrupt. Check if XTAL_READY_INT = 1 in Interrupt Status 1 register (0xF0000).
34 Switch MCLK source to

System Clocking Control 1. 0x10006

XTAL

Reserved
MCLK_INT
MCLK_SRC_SEL

MCLK Source set to XTAL. MCLK_INT frequency set to
22.5792 MHz

35 Wait at least 150 µs.
36 Enable ASP clocks

Pad Interface Configuration. 0x1000D

Reserved
XSP_3ST
ASP_3ST

0x02
0000 00
1
0

XSP Interface status is don't care (set to default)
Enable serial clocks in Master Mode

37 Enable mono mode
38 Power up HP

Refer to Section 5.12.1 for the Sequence for Enabling Mono Mode
Refer to Ex. 5-5 for PCM power-up sequence

5.13.5 Power-Up Sequence to DSD Playback in Mono Mode

In Ex. 5-8, a 22.5792-MHz crystal is used, the PLL is used to create a 24.576-MHz MCLK, XSP is set as DSD slave at
2.8224 MHz, and full-scale output is 1.732 Vrms.

Example 5-11. Startup to DSD Playback in Mono Mode

STEP
1

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

Apply all relevant power supplies, then assert RESET.

2 Wait for 1.5 ms.
3 Configure XTAL driver
4 Configure XTAL bias current

strength (assuming River Crystal
at 22.5792 MHz)

Crystal Setting. 0x20052

Reserved
XTAL_IBIAS

5 Read Interrupt Status 1 register (0xF0000) to clear any pending interrupts.
6

Enable XTAL interrupts

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK

0x04
0000 0
100

0xE7
1
1
1
0
0
1
1
1

Bias current set to 12.5 µA

Enable XTAL_READY interrupt
Enable XTAL_ERROR interrupt

84

DS1155F2

Example 5-11. Startup to DSD Playback in Mono Mode (Cont.)

STEP
7

Start XTAL

TASK

REGISTER/BIT FIELDS

Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

VALUE
0xF6
1
1
1
1
0
1
1
0

Power up XTAL driver

CS43131
5.13 Example Sequences

DESCRIPTION

8 Configure PLL. Input is 22.5792 MHz. Output is 24.576 MHz.
9

Power Down Control. 0x20000

Power up PLL

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

PLL Setting 9. 0x40002

Reserved
PLL_REF_PREDIV
PLL Setting 6. 0x30008

PLL_OUT_DIV

PLL Setting 2. 0x30002
PLL_DIV_FRAC_0
PLL Setting 3. 0x30003
PLL_DIV_FRAC_1
PLL Setting 4. 0x30004
PLL_DIV_FRAC_2
PLL Setting 5. 0x30005

PLL_DIV_INT

PLL Setting 8. 0x3001B

Reserved
PLL_MODE
Reserved

PLL Setting 7. 0x3000A
PLL_CAL_RATIO

10 Set PLL predivide

11 Set PLL Output Divide

12 Set Fractional portion of PLL

divide ratio

13 Set integer portion of PLL divide

ratio

14 Set PLL Mode

15 Set PLL Calibration Ratio

Divide PLL Reference by 8

Power up PLL

0xF2
1
1
1
1
0
0
1
0
0x03
0000 00
11
0x08
0x08 Divide PLL output by 8
0x00
0x00
0xF7
0xF7
0x06
0x06
0x44
0x44
0x01
0000 00
0
1
0x8B
0x8B Set PLL Cal Ratio to 139

Use 500/512 factor

16 Read Interrupt Status 1 register (0xF0000) to clear any pending interrupts.
17 Enable PLL Interrupts

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK

0xE1
1
1
1
0
0
0
0
1
0x01
0000 000
1
19 Configure DSDIF to playback 64•Fs DSD stream. DSDIF is configured as Slave
20 Configure DSD Volume

Reserved
PLL_START

DSD Volume A. 0x70001

PLL Setting 1. 0x30001

18 Start PLL

21 Configure DSD path Signal

Control1

DSD Processor Path Signal Control 1.
0x70002

DSD_VOLUME_A

Enable PLL Ready and Error Interrupts

Start PLL

0x00
0x00 Channel A volume set to 0dB
0xCC

DSD_RAMP_UP
DSD_VOL_BEQA
DSD_SZC
Reserved
DSD_AMUTE

DSD_AMUTE_BEQA

DSD_MUTE_A
DSD_MUTE_B

1
1
0
0
1

1

0
0

DSD Volume B equals DSD volume A
Immediate change

Mute occurs after 256 repeated 8-bit DSD mute patterns

Mute happens only when mute pattern is detected in both
channels
Function is disabled
Function is disabled

DS1155F2

85

Example 5-11. Startup to DSD Playback in Mono Mode (Cont.)

STEP

TASK

22 Configure DSD Interface

REGISTER/BIT FIELDS
DSD Interface Configuration. 0x70003

Reserved
DSD_M/SB
DSD_PM_EN
DSD_PM_SEL

23 Configure DSD path Signal

Control 2

DSD Processor Path Signal Control 2.
0x70004

Reserved
DSD_PRC_SRC
DSD_EN
Reserved
DSD_SPEED
STA_DSD_DET
INV_DSD_DET

VALUE
0x00
0000 0
0
0
0
0x13

0
00
1
0
0
1
1

CS43131
5.13 Example Sequences

DESCRIPTION

DSD is clock slave
Function is disabled
Function is disabled

Set source of DSD processor to DSDIF
Enable DSD playback

Set DSD clock speed to 64•FS
Static DSD detection enabled
Invalid DSD detection enabled

DSD Processor Path Signal Control 3.
0x70006

0xC5/0xC7 for Left/Right channel

24 Configure DSD path Signal

Control 3.
Enable mono mode:

a. Select Channel A/B

(DSD_SWAP_CHAN)
b. Copy Channel A to B
(DSD_COPY_CHAN)

c. Invert Channel B
(DSD_INV_B)

DSD_ZERODB

DSD_HPF_EN
Reserved
SIGCTL_DSDEQPCM
DSD_INV_A
DSD_INV_B
DSD_SWAP_CHAN
DSD_COPY_CHAN

25 Configure HP
26 Configure Class H Amplifier

Class H Control. 0xB0000

Reserved
ADPT_PWR
HV_EN
EXT_VCPFILT

27 Set HP output to full scale

HP Output Control 1. 0x80000

28 Configure Headphone Detect

29 Headphone Detect

HP_CLAMPA
HP_CLAMPB
OUT_FS
HP_IN_EN
HP_IN_LP
Reserved
+1dB_EN

HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

1

1
0
0
0
1
0/1
1

0x1E
000
111
1
0
0x30
0
0
11
0
0
0
0
0x04
00
0
0 0
10
0
0xC4
11
0
0 0
10
0

The SACD 0–dB reference level (50%modulation index)
matches PCM 0-dB full scale.
Enable HPF in DSD processor

Function is disabled
Function is disabled
Function is enabled
Function is enabled/disabled
Function is enabled

Output signal determines voltage level
High Voltage Mode Enabled
Using Internal VCPFILT source.

Set headphone output to Full Scale (1.732 V rms)

HP detect disabled
HP detect input is not inverted
Tip Sense rising debounce time set to 0 ms
Tip sense falling debounce time set to 500 ms

HP detect enabled
HP detect input is not inverted
Tip sense rising debounce time set to 0 ms
Tip sense falling debounce time set to 500 ms

30 Enable Interrupts
31 Read Interrupt Status 1 register (0xF0000) and Interrupt Status 5 register (0xF0004) to clear sticky bits
32 Enable Headphone Detect

Interrupts

33 Enable DSD Interrupts

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Interrupt Mask 5. 0xF0014

DSD_STUCK_INT_MASK
DSD_INVAL_A_INT_MASK
DSD_INVAL_B_INT_MASK
DSD_SILENCE_A_INT_MASK
DSD_SILENCE_B_INT_MASK
DSD_RATE_ERROR_INT_MASK
DOP_MRK_DET_INT_MASK
DOP_ON_INT_MASK

0x81
1
0
0
0
0
0
0
1
0x03
0
0
0
0
0
0
1
1

Unmask HPDETECT_PLUG interrupt and
HPDETECT_UNPLUG interrupt

Enable DSD_STUCK interrupt
Enable DSD_INVAL_A interrupt
Enable DSD_INVAL_B interrupt
Enable DSD_SILENCE_A interrupt
Enable DSD_SILENCE_B interrupt
Enable DSD_RATE_ERROR interrupt
Disable DOP_MRK_DET interrupt
Disable DOP_ON interrupt

34 Wait for interrupt. Check if PLL_READY_INT = 1 in Interrupt Status 1 register(0xF0000)

86

DS1155F2

Example 5-11. Startup to DSD Playback in Mono Mode (Cont.)

STEP

TASK

REGISTER/BIT FIELDS

35 Switch MCLK source to PLL

System Clocking Control 1. 0x10006

Reserved
MCLK_INT
MCLK_SRC_SEL

VALUE
0x01
0000 0
0
01

CS43131
5.13 Example Sequences

DESCRIPTION

MCLK Source set to PLL. MCLK_INT frequency set to
24.576 MHz

36 Wait at least 150 µs.
37 Power up HP

Refer to Ex. 5-6 for DSD power-up sequence. Note that in Step 1 of Ex. 5-6, use HH = DF for the DSD interface.

5.13.6 Power-Up Sequence to DoP Playback with PLL in Mono Mode

In Ex. 5-9, an external 19.2-MHz MCLK is used with a PLL to generate an internal MCLK or 22.5792 MHz, and the ASP
is in clock master receiving DoP data with LRCLK at 176.4 kHz and SCLK at 8.4672 MHz.

Example 5-12. DoP Playback with PLL in Mono Mode

STEP

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

1 Apply all relevant power supplies, then assert RESET.
2 Wait for 1.5 ms.
3 Configure PLL. XTI/MCLK input coming from an external 19.2 MHz source with PLL output set to 22.5792 MHz. Refer to Section 4.7.2 for register

settings for other frequency combinations

4 Power up PLL

Power Down Control. 0x20000

5 Set PLL Predivide value

6 Set PLL output divide

7 Set Fractional portion of PLL Divide Ratio

8 Set Integer portion of PLL Divide Ratio

9 Set PLL mode

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

PLL Setting 9. 0x40002

Reserved
PLL_REF_PREDIV
PLL Setting 6. 0x30008

PLL_OUT_DIV

PLL Setting 2. 0x30002
PLL_DIV_FRAC_0
PLL Setting 3. 0x30003
PLL_DIV_FRAC_1
PLL Setting 4. 0x30004
PLL_DIV_FRAC_2
PLL Setting 5. 0x30005

PLL_DIV_INT

PLL Setting 8. 0x3001B

Reserved
PLL_MODE
Reserved

10 Read Interrupt Status 1 register (0xF0000) to clear sticky bits.
11 Set PLL calibration ratio

PLL Setting 7. 0x3000A
PLL_CAL_RATIO

12 Enable PLL interrupts

13 Start PLL

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK

PLL Setting 1. 0x30001

Reserved
PLL_START

Power up PLL block

Set PLL predivide value to 8

0xFA
x
x
x
x
x
0
x
0
0x03
0000 00
11
0x08
0x08 Set PLL output divide value to 8
0x00
0x00 Set LSB of PLL fractional divider value to 0
0x00
0x00 Set Middle Byte of PLL fractional divider value to 0
0x80
0x80 Set MSB of PLL fractional divider value to 0x80
0x49
0x49 Set PLL integer Divide value to 0x49
0x01
0000 00
0
1

500/512 factor is used in PLL frequency calculation

0x97
0x97 PLL Calibration Ratio is set to 0x97 (151)
0xF9
1
1
1
1
1
0
0
1
0x01
0000 000
1

DAC_OVFL_INT is don't care
Unmask HPDETECT_PLUG interrupt
Unmask HPDETECT_UNPLUG interrupt
XTAL_READY_INT is Don't Care
XTAL_ERROR_INT is Don't Care
PLL_READY Interrupt is already unmasked
PLL_ERROR Interrupt is already unmasked
PDN_DONE_INT is Don't Care

Enable PLL Output

14 Playback DoP audio. Assuming 64•Fs DSD stream
15 Configure ASP interface for DoP input
16 Set ASP sample rate

Serial Port Sample Rate. 0x1000B

Reserved
ASP_SPRATE

0x05
0000
0101 Set sample rate to 176.4 kHz

DS1155F2

87

Example 5-12. DoP Playback with PLL in Mono Mode (Cont.)

CS43131
5.13 Example Sequences

STEP

TASK

17 Set ASP sample bit size. XSP is don't care

18 Set ASP numerator

REGISTER/BIT FIELDS

VALUE
Serial Port Sample Bit Size. 0x1000C 0x05
0000
01
01
0x03
0x03 LSB of ASP sample rate fractional divide

XSP sample bit size set to 24 bits
ASP sample bit size set to 24 bits

Reserved
XSP_SPSIZE
ASP_SPSIZE

ASP Numerator 1. 0x40010

ASP_N_LSB

DESCRIPTION

numerator

19 Set ASP denominator

ASP Denominator 1. 0x40012

ASP Numerator 2. 0x40011

ASP_N_MSB

ASP_M_LSB

ASP Denominator 2. 0x40013

ASP_M_MSB

20 Set ASP LRCK high time

ASP LRCK High Time 1. 0x40014

21 Set ASP LRCK period

22 Configure ASP clock

ASP_LCHI_LSB

ASP LRCK High Time 2. 0x40015

ASP_LCHI_MSB

ASP LRCK Period 1. 0x40016

ASP_LCPR_LSB

ASP LRCK Period 2. 0x40017

ASP_LCPR_MSB

ASP Clock Configuration. 0x40018

Reserved
ASP_M/SB
ASP_SCPOL_OUT
ASP_SCPOL_IN
ASP_LCPOL_OUT
ASP_LCPOL_IN

23 Configure ASP frame

ASP Frame Configuration. 0x40019

24 Set ASP channel location

ASP Channel 1 Location. 0x50000

Reserved
ASP_STP
ASP_5050
ASP_FSD

25 Set ASP channel size and enable

ASP_RX_CH1

ASP Channel 2 Location. 0x50001

ASP_RX_CH2

ASP Channel 1 Size and Enable.
0x5000A

Reserved
ASP_RX_CH1_AP
ASP_RX_CH1_EN
ASP_RX_CH1_RES

ASP Channel 2 Size and Enable.
0x5000B

Reserved
ASP_RX_CH2_AP
ASP_RX_CH2_EN
ASP_RX_CH2_RES

0x00
0x00 MSB of ASP sample rate fractional divide

numerator

0x08
0x08 LSB of ASP sample rate fractional divide

denominator

0x00
0x00 MSB of ASP sample rate fractional divide

denominator

0x17
0x17 LSB of ASP LRCK high time duration
0x00
0x00 MSB of ASP LRCK high time duration
0x2F
0x2F LSB of ASP LRCK period
0x00
0x00 MSB of ASP LRCK period
0x1C
000
1
1
1
0
0
0x0A
000
0
1
010
0x00
0x00 ASP Channel 1 starts on SCLK0
0x00
0x00 ASP Channel 2 starts on SCLK0
0x06

Set ASP port to be Master
Set output SCLK polarity
Input SCLK polarity is don't care
Set Output LRCK polarity
Input LRCK polarity is don't care

Configure ASP port to accept I2S input

0000
0
1
10
0x0E

0000
1
1
10

ASP Channel 1 active phase
ASP Channel 1 enable
ASP Channel 1 size is 24 bits

ASP Channel 2 active phase
ASP Channel 2 enable
ASP Channel 2 size is 24 bits

26 Wait for interrupt. Check if PLL_READY_INT = 1 in Interrupt Status 1 register(0xF0000).
27 Configure DSD processor
28 Configure DSD volume

DSD Volume A. 0x70001

29 Configure DSD Path Signal Control 1

DSD_VOLUME_A

DSD Processor Path Signal Control 1.
0x70002

0x00
0x00 Channel A volume set to 0 dB
0xCC

DSD_RAMP_UP
DSD_VOL_BEQA
DSD_SZC
Reserved
DSD_AMUTE

DSD_AMUTE_BEQA

DSD_MUTE_A
DSD_MUTE_B

1
1
0
0
1

1

0
0

DSD Volume B equals DSD volume A
Immediate change

Mute occurs after 256 repeated 8-bit DSD mute
patterns
Mute happens only when mute pattern is detected
in both channels
Function is disabled
Function is disabled

88

DS1155F2

Example 5-12. DoP Playback with PLL in Mono Mode (Cont.)

STEP

TASK

30 Configure DSD interface

REGISTER/BIT FIELDS

DSD Interface Configuration.
0x70003

Reserved
DSD_M/SB
DSD_PM_EN
DSD_PM_SEL

31 Configure DSD Path Signal Control 2

DSD Processor Path Signal Control 2.
0x70004

Reserved
DSD_PRC_SRC
DSD_EN
Reserved
DSD_SPEED
STA_DSD_DET
INV_DSD_DET

CS43131
5.13 Example Sequences

DESCRIPTION

DSD is clock master
Function is disabled
Function is disabled

Set source of DSD processor to ASP
Enable DSD playback

Set DSD clock speed to 64•Fs
Static DSD detection disabled
Invalid DSD detection disabled

VALUE
0x04

0000 0
1
0
0
0x50

0
10
1
0
0
0
0

32 Configure DSD path Signal Control 3.

Enable mono mode:

a. Select Channel A/B (DSD_SWAP_CHAN)
b. Copy Channel A to B (DSD_COPY_CHAN)
c. Invert Channel B (DSD_INV_B)

DSD Processor Path Signal Control 3.
0x70006

0xC5/0xC7 for Left/Right channel

DSD_ZERODB

DSD_HPF_EN
Reserved
SIGCTL_DSDEQPCM
DSD_INV_A
DSD_INV_B
DSD_SWAP_CHAN
DSD_COPY_CHAN

33 Configure headphone output for 1.732 V rms
34 Configure Class H amplifier

Class H Control. 0xB0000

Reserved
ADPT_PWR
HV_EN
EXT_VCPFILT

35 Set HP output to full scale

HP Output Control 1. 0x80000

36 Headphone detect

HP_CLAMPA
HP_CLAMPB
OUT_FS
HP_IN_EN
HP_IN_LP
Reserved
+1dB_EN

HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

1

1
0
0
0
1
0/1
1

0x1E
000
1 11
1
0
0x30
0
0
11
0
0
0
0
0xC4
11
0
0 0
10
0

The SACD 0–dB reference level (50%modulation
index) matches PCM 0-dB full scale.
Enable HPF in DSD processor

Function is disabled
Function is disabled
Function is enabled
Function is enabled/disabled
Function is enabled

Output signal determines voltage level
High voltage mode enabled
Using internal VCPFILT source.

Set headphone output to full scale (1.732 V rms)

HP detect enabled
HP detect input is not inverted
Tip Sense rising debounce time set to 0 ms
Tip sense falling debounce time set to 500 ms

37 Enable interrupts
38 Read Interrupt Status 1 register (0xF0000), Interrupt Status 2 register (0xF0001) and Interrupt Status 5 register (0xF0004) to clear sticky bits.
39 Enable headphone detect interrupts

40 Enable ASP interrupts

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Interrupt Mask 2. 0xF0011
ASP_OVFL_INT_MASK
ASP_ERROR_INT_MASK
ASP_LATE_INT_MASK
ASP_EARLY_INT_MASK
ASP_NOLRCK_INT_MASK
Reserved

0x99
1
0
0
1
1
0
0
1
0x07
0
0
0
0
0
111
0x01
0
0
0
0
0
0
0
1

DAC_OVFL_INT is don't care
Enable HPDETECT_PLUG interrupt
Enable HPDETECT_UNPLUG interrupt
XTAL_READY_INT is don't care
XTAL_ERROR_INT is don't care
PLL_READY interrupt already enabled
PLL_ERROR interrupt already enabled
PDN_DONE_INT is don't care

Enable ASP_OVFL interrupt
Enable ASP_ERROR interrupt
Enable ASP_LATE interrupt
Enable ASP_EARLY interrupt
Enable ASP_NOLRCK interrupt

Enable DSD_STUCK interrupt
Enable DSD_INVAL_A interrupt
Enable DSD_INVAL_B interrupt
Enable DSD_SILENCE_A interrupt
Enable DSD_SILENCE_B interrupt
Enable DSD_RATE_ERROR interrupt
Enable DOP_MRK_DET interrupt
Disable DOP_ON interrupt

41 Enable DSD and DoP interrupts

Interrupt Mask 5. 0xF0014

DSD_STUCK_INT_MASK
DSD_INVAL_A_INT_MASK
DSD_INVAL_B_INT_MASK
DSD_SILENCE_A_INT_MASK
DSD_SILENCE_B_INT_MASK
DSD_RATE_ERROR_INT_MASK
DOP_MRK_DET_INT_MASK
DOP_ON_INT_MASK

DS1155F2

89

Example 5-12. DoP Playback with PLL in Mono Mode (Cont.)

STEP

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

CS43131
5.13 Example Sequences

42 Wait for interrupt. Check if PLL_READY_INT = 1 in Interrupt Status 1 register(0xF0000).
43 Set MCLK source and frequency

System Clocking Control. 0x10006

Reserved
MCLK_INT
MCLK_SRC_SEL

0x05
0000 0
1
01

MCLK Frequency is set to 22.5792 MHz
MCLK Source is set to PLL

44 Wait for at least 150 µs.
45 Enable ASP clocks

46 Power up HP

5.13.7 Analog-In Startup

Pad Interface Configuration. 0x1000D 0x02

Reserved
XSP_3ST
ASP_3ST

0000 00
1
0

XSP Interface status is don't care (set to default)
Enable serial clocks in Master Mode

Refer to Ex. 5-6 for DSD power-up sequence. Note that in Step 1 of Ex. 5-6, use HH = BF for DoP
over ASP interface.

Ex. 5-13 shows an example sequence of starting up the CS43131 in analog passthrough mode.

Example 5-13. Start Up to Analog-In

STEP
1

2
3
4

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

Apply all relevant power supplies, then assert RESET.
Wait for 1.5 ms. MCLK Source is set to RCO by default.
Enable Headphone detect. Refer to Section 5.13.11 “Headphone Detection”
Enable HPINx path. Refer to Section 5.5.1 “HPINx Alternate Headphone Path Enable Sequence”

5.13.8 Switching from Analog-In to PCM Playback

Ex. 5-14 assumes that:

• The CS43131 is powered up, out of reset, and is currently operating in analog passthrough mode as in Ex. 5-13.

• The ASP and PCM interfaces are not yet configured.

• CS43131 XTI/XTO is connected to a 22.5792-MHz crystal.

• ASP interface is slave.

Example 5-14. Switching from Analog-In to PCM Playback

STEP
1
2

TASK

REGISTER/BIT FIELDS

Configure XTAL driver.
Configure XTAL bias current
strength (assuming River Crystal
at 22.5792 MHz)

Crystal Setting. 0x20052
Reserved
XTAL_IBIAS

3
4

Read Interrupt Status 1 register (0xF0000) to clear sticky bits.
Enable XTAL interrupts

Interrupt Mask 1. 0xF0010

5

Start XTAL

DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

VALUE

0x04
0000 0
100

DESCRIPTION

Bias current set to 12.5 µA

Enable XTAL_READY interrupt
Enable XTAL_ERROR interrupt

Power up XTAL driver

data(0xF0010)
AND 0xE7
x
x
x
0
0
x
x
x
data (0x20000)
AND 0xF6
x
x
x
x
0
x
x
0

0x01
0000
0001

Configure ASP interface. Sample rate set to 44.1 kHz. ASP is slave to incoming clock.
Set ASP sample rate

Serial Port Sample Rate. 0x1000B

Reserved
ASP_SPRATE

6
7

90

Set sample rate to 44.1 kHz

DS1155F2

Example 5-14. Switching from Analog-In to PCM Playback (Cont.)

STEP
8

TASK
Set ASP sample bit size. XSP is
don't care

REGISTER/BIT FIELDS
Serial Port Sample Bit Size. 0x1000C

Reserved
XSP_SPSIZE
ASP_SPSIZE

9

Set ASP numerator

ASP Numerator 1. 0x40010

ASP_N_LSB

ASP Numerator 2. 0x40011

ASP_N_MSB

10 Set ASP denominator

ASP Denominator 1. 0x40012

ASP_M_LSB

ASP Denominator 2. 0x40013

ASP_M_MSB

11 Set ASP LRCK high time

ASP LRCK High Time 1. 0x40014

ASP_LCHI_LSB

ASP LRCK High Time 2. 0x40015

ASP_LCHI_MSB

12 Set ASP LRCK period

ASP LRCK Period 1. 0x40016

ASP_LCPR_LSB

ASP LRCK Period 2. 0x40017

ASP_LCPR_MSB

13 Configure ASP clock

ASP Clock Configuration. 0x40018

Reserved
ASP_M/SB
ASP_SCPOL_OUT
ASP_SCPOL_IN
ASP_LCPOL_OUT
ASP_LCPOL_IN

14 Configure ASP frame

ASP Frame Configuration. 0x40019

Reserved
ASP_STP
ASP_5050
ASP_FSD

15 Set ASP channel location

ASP Channel 1 Location. 0x50000

ASP_RX_CH1

ASP Channel 2 Location. 0x50001

ASP_RX_CH2

16 Set ASP channel size and enableASP Channel 1 Size and Enable.

0x5000A

Reserved
ASP_RX_CH1_AP
ASP_RX_CH1_EN
ASP_RX_CH1_RES

ASP Channel 2 Size and Enable.
0x5000B

Reserved
ASP_RX_CH2_AP
ASP_RX_CH2_EN
ASP_RX_CH2_RES

17 Configure PCM interface. HPF filter is used. Deemphasis off.
PCM Filter Option. 0x90000
18 Configure PCM Filter
FILTER_SLOW_FASTB
PHCOMP_LOWLATB
NOS
Reserved
PCM_WBF_EN
HIGH_PASS
DEEMP_ON

19 Set Volume for Channel B

PCM Volume B. 0x90001

20 Set Volume for Channel A

PCM Volume A. 0x90002

PCM_VOLUME_A

PCM_VOLUME_B

VALUE
0x04
0000
01
00
0x01
0x01
0x00
0x00
0x08
0x08
0x00
0x00
0x1F
0x1F
0x00
0x00
0x3F
0x3F
0x00
0x00
0x0C
000
0
1
1
0
0
0x0A
000
0
1
010
0x00
0x00
0x00
0x00
0x07

0000
0
1
11
0x0F

0000
1
1
11

0x02
0
0
0
0 0
0
1
0
0x00
0x00
0x00
0x00

CS43131
5.13 Example Sequences

DESCRIPTION

XSP sample bit size is don't care
ASP sample bit size set to 32 bits

LSB of ASP sample rate fractional divide numerator

MSB of ASP sample rate fractional divide numerator

LSB of ASP sample rate fractional divide denominator

MSB of ASP sample rate fractional divide denominator

LSB of ASP LRCK high time duration

MSB of ASP LRCK high time duration

LSB of ASP LRCK period

MSB of ASP LRCK period

Set ASP port to be Slave
Configure clock polarity for I2S input

Configure ASP port to accept I2S input

ASP Channel 1 starts on SCLK0

ASP Channel 2 starts on SCLK0

ASP Channel 1 active phase
ASP Channel 1 enable
ASP Channel 1 size is 32 bits

ASP Channel 2 active phase
ASP Channel 2 enable
ASP Channel 2 size is 32 bits

High Pass Filter is selected

Set volume to 0 dB

Set volume to 0 dB

DS1155F2

91

Example 5-14. Switching from Analog-In to PCM Playback (Cont.)

STEP

TASK

REGISTER/BIT FIELDS

21 Configure PCM Path Signal

Control

22 Configure HP interface
23 Configure Class H Amplifier

24 Headphone Detect

PCM Path Signal Control 1. 0x90003

PCM_RAMP_DOWN
PCM_VOL_BEQA

PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA

PCM_MUTE_A
PCM_MUTE_B

PCM Path Signal Control 2. 0x90004

Reserved
PCM_INV_A
PCM_INV_B
PCM_SWAP_CHAN
PCM_COPY_CHAN

Class H Control. 0xB0000

Reserved
ADPT_PWR
HV_EN
EXT_VCPFILT
HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

CS43131
5.13 Example Sequences

DESCRIPTION

Soft ramp down of volume on filter change
Volume setting on both channels controlled by PCM_
VOLUME_A
Enable soft ramp
Mute after reception of 8192 samples of 0 or –1.
Mute only when AMUTE condition is detected on both
channels
Function is disabled
Function is disabled

Disable all functions in this register

Output signal determines voltage level
High voltage mode enabled
Using Internal VCPFILT source.

HP Detect enabled
HP detect input is not inverted
Tip Sense rising debounce time set to 0 ms
Tip sense falling debounce time set to 500 ms

VALUE
0xEC
1
1

10
1
1

0
0
0x00
0000
0
0
0
0

0x1E
000
1 11
1
0
0xC4
11
0
0 0
10
0

25 Enable interrupts
26 Read Interrupt Status 1 register (0xF0000) and Interrupt Status 2 register (0xF0001) to clear sticky bits.
27 Enable headphone detect

Interrupt Mask 1. 0xF0010

interrupts

28 Enable ASP interrupts

DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Interrupt Mask 2. 0xF0011
ASP_OVFL_INT_MASK
ASP_ERROR_INT_MASK
ASP_LATE_INT_MASK
ASP_EARLY_INT_MASK
ASP_NOLRCK_INT_MASK
Reserved

Initiate a soft ramp down of HPINx input to mute.

29
30 Disable HPINx
31 Wait for interrupt. Check if XTAL_READY_INT = 1 in Interrupt Status 1 register(0xF0000).
32 Switch MCLK source to XTAL

System Clocking Control 1. 0x10006

Refer to Section 5.5.2

data(0xF0010)
AND 0x9F
x
0
0
x
x
x
x
x
0x07
0
0
0
0
0
111

0x04
0000 0
1
00

Reserved
MCLK_INT
MCLK_SRC_SEL

33 Wait at least 150 µs.
34 Power up ASP

Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

Enable HPDETECT_PLUG interrupt
Enable HPDETECT_UNPLUG interrupt

Enable ASP_OVFL interrupt
Enable ASP_ERROR interrupt
Enable ASP_LATE interrupt
Enable ASP_EARLY interrupt
Enable ASP_NOLRCK interrupt

MCLK Source set to XTAL. MCLK_INT frequency set
to 22.5792MHz

Enable ASP data pins
XTAL is already enabled

0xB6
1
0
1
1
0
1
1
0

35 Power up HP

Refer to Ex. 5-5 for PCM power-up sequence

92

DS1155F2

CS43131
5.13 Example Sequences

5.13.9 Switching from PCM to Analog-In Playback

Ex. 5-15 makes the following assumptions:

• The CS43131 is powered up, out of reset, and currently operating in PCM playback mode.

• A headphone is connected to the headphone jack.

• Headphone detect is enabled and HPDETECT_PLUG_INT = 1.

• XTAL is used as MCLK source.

Example 5-15. Switching from PCM to Analog-In Playback

STEP
1

TASK

Enable soft ramp

REGISTER/BIT FIELDS
PCM Path Signal Control 1. 0x90003

PCM_RAMP_DOWN
PCM_VOL_BEQA
PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA
PCM_MUTE_A
PCM_MUTE_B

2
3

PCM Power Down Sequence
Set MCLK Source to RCO

Refer to Section 5.6.1
System Clocking Control 1. 0x10006

Reserved
MCLK_INT
MCLK_SRC_SEL

4 Wait for 150 µs.
5

Power down crystal

Power Down Control. 0x20000

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

6

Enable HPINx

Refer to Section 5.5.1

VALUE
data(0x90003) OR
(0xA0)
1
x
10
x
x
0
0

0x06
0000 0
1
10

data (0x20000) OR
(0x08)
x
1
x
1
1
x
x
0

DESCRIPTION

Enable soft ramp

Frequency of MCLK_INT is don't care
MCLK source set to RCO

ASP already powered down

HP already powered down
Power down XTAL.

DS1155F2

93

CS43131
5.13 Example Sequences

5.13.10 Switching MCLK Frequency

Ex. 5-16 shows steps necessary to switch the MCLK frequency in order to play audio at a different sample rate that is no
longer an integer divide of current MCLK. It makes the following assumptions:

• The CS43131 is already powered up and out of reset.

• MCLK_INT is 22.5792 MHz, and the sample rate is an integer divide of MCLK.

• ASP is used for audio delivery and PDN_HP = 0.

Example 5-16. Sequence for Switching MCLK Frequency

STEP
1
2
3

TASK

Power down PCM
Switch MCLK Source to RCO
Set MCLK Source to RCO

VALUE
Refer to Ex. 5-3 for PCM power-down sequence

REGISTER/BIT FIELDS

DESCRIPTION

System Clocking Control 1. 0x10006

Reserved
MCLK_INT
MCLK_SRC_SEL

0x06
0000 0
1
10

Frequency of MCLK_INT is don't care
MCLK source set to RCO

Switch to a different MCLK Frequency. Assuming new MCLK frequency is 24.576MHz.

4 Wait for 150 µs.
5
6 Change MCLK_INT frequency to

24.576 MHz

System Clocking Control 1. 0x10006

Reserved
MCLK_INT
MCLK_SRC_SEL

0x02
0000 0
0
10

MCLK_INT frequency set to 24.576 MHz

7 Configure ASP for appropriate sample rate, bit size and clock mode. Unmute PCM CHA and CHB outputs. Enable appropriate interrupts
8

Switch MCLK source to direct MCLK mode System Clocking Control 1. 0x10006

Reserved
MCLK_INT
MCLK_SRC_SEL

0x0
0000 0
0
00

MCLK_INT frequency set to 24.576 MHz
MCLK source set to direct MCLK mode

9 Wait at least 150 µs.
10 Power up ASP

11 Power up HP

5.13.11 Headphone Detection

Power Down Control. 0x20000

data(0x20000)
AND (0xBF)
x
0
x
1
0
x
x
0
Refer to Ex. 5-5 for PCM power-up sequence

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

Enable ASP data pins

XTAL is already enabled

Ex. 5-17 shows steps necessary to detect the presence of a headphone. It makes the following assumptions:

• The CS43131 is already powered up and out of reset.

• The HP Detect register is not configured.

Example 5-17. Sequence for Headphone Detection

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

STEP
1
2
3

Read Interrupt Status 1 register (0xF0000) to clear any sticky bits.
Read HP Status register (0xD0001) to clear any sticky bits.
Enable HPDETECT interrupts

Interrupt Mask 1. 0xF0010

4

Configure HP Detect parameters

DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK

HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

data (0xF0010)
AND 0x9F
x
0
0
x
x
x
x
x
0x04
00
0
0 0
10
0

Enable HPDETECT interrupts

Rising edge debounce time set to 0 ms
Falling edge debounce time set to 500 ms

94

DS1155F2

Example 5-17. Sequence for Headphone Detection (Cont.)

STEP
5

Enable HP Detect

HP Detect. 0xD0000

TASK

REGISTER/BIT FIELDS

HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

VALUE
data (0xD0000)
OR (0xC0)
11
x
x x
xx
0

CS43131
5.13 Example Sequences

DESCRIPTION

Enable headphone detection

6 Wait for interrupt. Check if HPDETECT_PLUG_INT or HPDETECT_UNPLUG_INT is set in the Interrupt Status 1 register (0xF0000).

5.13.12 DoP and PCM Mixing

Ex. 5-18 shows steps necessary to mix DoP and PCM. The XSP is in clock master receiving DoP data with LRCLK at
176.4 kHz and SCLK at 8.4672 MHz. The ASP is clock master receiving PCM data with LRCLK at 44.1 kHz and SCLK at
2.8224 MHz.

Example 5-18. DoP and PCM Mixing

STEP
1

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

Apply all relevant power supplies, then assert RESET.

2 Wait for 1.5 ms
3
4

Configure XTAL Driver
Configure XTAL bias current
strength (assuming River
Crystal at 22.5792 MHz)

5

Enable XTAL interrupts

6

Start XTAL

Crystal Setting. 0x20052

Reserved
XTAL_IBIAS

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Power Down Control. 0x20000

PDN_XSP
PDN_XSP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

0x04
0000 0
100
0xE7
1
1
1
0
0
1
1
1
0xF6
1
1
1
1
0
1
1
0

Bias current set to 12.5 µA

Enable XTAL_READY interrupt
Enable XTAL_ERROR interrupt

Power up XTAL driver

7
8
9

Playback DoP audio. Assuming 64•Fs DSD stream
Configure XSP interface for DoP input.
Set sample bit size.

10 Set XSP Numerator

11 Set XSP Denominator

12 Set XSP LRCK high Time

13 Set XSP LRCK period

XSP_N_LSB

XSP_M_LSB

XSP_N_MSB

XSP Numerator 2. 0x40021

XSP Numerator 1. 0x40020

XSP Denominator 1. 0x40022

Reserved
XSP_SPSIZE
ASP_SPSIZE

LSB of XSP sample rate fractional divide numerator

XSP sample bit size is set to 24 bits
ASP sample bit size is set to 24 bits

Serial Port Sample Bit Size. 0x1000C 0x05
0000
01
01
0x03
0x03
0x00
0x00 MSB of XSP sample rate fractional divide numerator
0x08
0x08
0x00
0x00 MSB of XSP sample rate fractional divide denominator
0x17
0x17
0x00
0x00 MSB of XSP LRCK high time duration
0x2F
0x2F
0x00
0x00 MSB of XSP LRCK period

LSB of XSP sample rate fractional divide denominator

LSB of XSP LRCK high time duration

XSP LRCK High Time 2. 0x40025

XSP LRCK High Time 1. 0x40024

XSP LRCK Period 1. 0x40026

XSP LRCK Period 2. 0x40027

XSP Denominator 2. 0x40023

LSB of XSP LRCK period

XSP_LCPR_MSB

XSP_LCPR_LSB

XSP_LCHI_MSB

XSP_LCHI_LSB

XSP_M_MSB

DS1155F2

95

CS43131
5.13 Example Sequences

Example 5-18. DoP and PCM Mixing (Cont.)

STEP

TASK

REGISTER/BIT FIELDS

14 Configure XSP Clock

XSP Clock Configuration. 0x40028

Reserved
XSP_M/SB
XSP_SCPOL_OUT
XSP_SCPOL_IN
XSP_LCPOL_OUT
XSP_LCPOL_IN

15 Configure XSP Frame

XSP Frame Configuration. 0x40029

Reserved
XSP_STP
XSP_5050
XSP_FSD

16 Set XSP Channel Location

XSP Channel 1 Location. 0x60000

XSP_RX_CH1

XSP Channel 2 Location. 0x60001

XSP_RX_CH2

17 Set XSP Channel Size and

Enable

XSP Channel 1 Size and Enable.
0x6000A

DESCRIPTION

Set XSP port to be Master
Set output SCLK polarity
Input SCLK polarity is don’t care
Set Output LRCLK polarity
Input LRCLK polarity is don’t care

VALUE
0x1C
000
1
1
1
0
0
0x0A
000
0
1
010
0x00
0x00 XSP Channel 1 starts on SCLK0
0x00
0x00 XSP Channel 2 starts on SCLK0
0x06

Configure XSP port to accept I2S input

Reserved
XSP_RX_CH1_AP
XSP_RX_CH1_EN
XSP_RX_CH1_RES

XSP Channel 2 Size and Enable.
0x6000B

Reserved
XSP_RX_CH2_AP
XSP_RX_CH2_EN
XSP_RX_CH2_RES

0000
0
1
10
0x0E

0000
1
1
10

XSP Channel 1 Active Phase
XSP Channel 1 Enable
XSP Channel 1 Size is 24 bits

XSP Channel 2 Active Phase
XSP Channel 2 Enable
XSP Channel 2 Size is 24 bits

18 Configure DSD Processor
19 Configure DSD Volume

20 Configure DSD path Signal

Control 1

DSD Volume A. 0x70001
DSD_VOLUME_A
DSD Processor Path Signal Control 1.
0x70002

0x00
0x00 Channel A volume set to 0 dB
0xCC

DSD_RAMP_UP
DSD_VOL_BEQA
DSD_SZC
Reserved
DSD_AMUTE
DSD_AMUTE_BEQA

DSD_MUTE_A
DSD_MUTE_B

21 Configure DSD Interface

DSD Interface Configuration.
0x70003

Reserved
DSD_M/SB
DSD_PM_EN
DSD_PM_SEL

22 Configure DSD path Signal

Control 2

DSD Processor Path Signal Control 2.
0x70004

Reserved
DSD_PRC_SRC
DSD_EN
Reserved
DSD_SPEED
STA_DSD_DET
INV_DSD_DET

23 Configure DSD path Signal

Control 3

DSD Processor Path Signal Control 3.
0x70006

DSD_ZERODB
DSD_HPF_EN
Reserved
SIGCTL_DSDEQPCM
DSD_INV_A
DSD_INV_B
DSD_SWAP_CHAN
DSD_COPY_CHAN

24 Configure HP Output for 1.732 Vrms

1
1
0
0
1
1

0
0
0x00

0000 0
0
0
0
0x70

0
11
1
0
0
0
0
0xC0

1
1
0
0
0
0
0
0

DSD Volume B equals DSD volume A
Immediate change

Mute occurs after 256 repeated 8-bit DSD mute patterns
Mute happens only when mute pattern is detected in both
channels
Function is disabled
Function is disabled

DSD_M/SB is don’t care
Function is disabled
Function is disabled

Set source of DSD processor to XSP
Enable DSD playback

Set DSD clock speed to 64•FS
Static DSD detection disabled
Invalid DSD detection disabled

DSD stream volume setting
Enable DSD HPF

Function is disabled
Function is disabled
Function is disabled
Function is disabled
Function is disabled

96

DS1155F2

CS43131
5.13 Example Sequences

Example 5-18. DoP and PCM Mixing (Cont.)

STEP

TASK

REGISTER/BIT FIELDS

25 Configure Class H Amplifier Class H Control. 0xB0000

Reserved
ADPT_PWR
HV_EN
EXT_VCPFILT

26 Set HP output to full scale

HP Output Control 1. 0x80000

27 Headphone Detect

HP_CLAMPA
HP_CLAMPB
OUT_FS
HP_IN_EN
HP_IN_LP
Reserved
+1dB_EN

HP Detect. 0xD0000
HPDETECT_CTRL
HPDETECT_INV
HPDETECT_RISE_DBC_TIME
HPDETECT_FALL_DBC_TIME
Reserved

VALUE
0x1E
000
111
1
0
0x30
0
0
11
0
0
0
0
0xC4
11
0
00
10
0

DESCRIPTION

Output Signal determines voltage level
High Voltage Mode enabled
Using Internal VCPFILT source.

Set HP output to Full Scale (1.732 Vrms)

HP detect enabled
HP detect input is not inverted
Tip Sense rising debounce time set to 0 ms
Tip sense falling debounce time set to 500 ms

28 Enable Interrupts
29 Read Interrupt Status 1 register (0xF0000), Interrupt Status 2 register (0xF0001) and Interrupt Status 5 register (0xF0004) to clear sticky bits
30 Enable Headphone Detect

Interrupts

31 Enable XSP Interrupts

32 Enable DSD and DoP

Interrupts

33 Set MCLK Source and

Frequency

34 Wait for at least 150 µs
35 Enable XSP Clocks

Interrupt Mask 1. 0xF0010
DAC_OVFL_INT_MASK
HPDETECT_PLUG_INT_MASK
HPDETECT_UNPLUG_INT_MASK
XTAL_READY_INT_MASK
XTAL_ERROR_INT_MASK
PLL_READY_INT_MASK
PLL_ERROR_INT_MASK
PDN_DONE_INT_MASK
Interrupt Mask 2. 0xF0011
XSP_OVFL_INT_MASK
XSP_ERROR_INT_MASK
XSP_LATE_INT_MASK
XSP_EARLY_INT_MASK
XSP_NOLRCK_INT_MASK
Reserved

Interrupt Mask 5. 0xF0014

DSD_STUCK_INT_MASK
DSD_INVAL_A_INT_MASK
DSD_INVAL_B_INT_MASK
DSD_SILENCE_A_INT_MASK
DSD_SILENCE_B_INT_MASK
DSD_RATE_ERROR_INT_MASK
DOP_MRK_DET_INT_MASK
DOP_ON_INT_MASK

System Clocking Control. 0x10006

Reserved
MCLK_INT
MCLK_SRC_SEL

0x99
1
0
0
1
1
0
0
1
0x07
0
0
0
0
0
111
0x01
0
0
0
0
0
0
0
1
0x04
0000 0
1
00

Pad Interface Configuration. 0x1000D 0x01

DAC_OVFL_INT is don’t care
Unmask HPDETECT_PLUG interrupt
Unmask HPDETECT_UNPLUG interrupt
XTAL_READY_INT is don’t care
XTAL_ERROR_INT is don’t care
PLL_READY Interrupt is already unmasked
PLL_ERROR Interrupt is already unmasked
PDN_DONE_INT is don’t care

Enable XSP_OVFL interrupt
Enable XSP_ERROR interrupt
Enable XSP_LATE interrupt
Enable XSP_EARLY interrupt
Enable XSP_NOLRCK interrupt

Enable DSD_STUCK interrupt
Enable DSD_INVAL_A interrupt
Enable DSD_INVAL_B interrupt
Enable DSD_SILENCE_A interrupt
Enable DSD_SILENCE_B interrupt
Enable DSD_RATE_ERROR interrupt
Enable DOP_MRK_DET interrupt
Disable DOP_ON interrupt

MCLK Frequency is set to 22.5792 MHz
MCLK Source is set to XTAL

36 Enable XSP and CLKOUT

Power Down Control. 0x20000

Reserved
XSP_3ST
ASP_3ST

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

ASP Interface status is don’t care (set to default)
Enable XSP serial clocks in master mode

Enable XSP Data pins and CLKOUT

XTAL is already enabled

0000 00
0
1
0x74
0
1
1
1
0
1
0
0

37 Apply the DSD Power-up Sequence in Ex. 5-6. Note that in Step 1 of Ex. 5-6, use HH = 7F for DoP over XSP interface.
38 Enable ASP
39 Set ASP sample rate

Serial Port Sample Rate. 0x1000B

Reserved
ASP_SPRATE

0x01
0000
0001 Set sample rate to 44.1 kHz

DS1155F2

97

Example 5-18. DoP and PCM Mixing (Cont.)

CS43131
5.13 Example Sequences

STEP

TASK

40 Set ASP sample bit size

41 Set ASP Numerator

42 Set ASP Denominator

43 Set ASP LRCK high Time

44 Set ASP LRCK period

45 Configure ASP Clock

46 Configure ASP Frame

47 Set ASP Channel Location

48 Set ASP Channel Size and

Enable

DESCRIPTION

ASP_N_LSB

ASP_M_LSB

ASP_N_MSB

ASP_M_MSB

REGISTER/BIT FIELDS

ASP_LCHI_LSB

ASP_LCHI_MSB

ASP Numerator 2. 0x40011

ASP Numerator 1. 0x40010

ASP Denominator 1. 0x40012

ASP Denominator 2. 0x40013

ASP LRCK Period 1. 0x40016

ASP sample bit size set to 32 bits

ASP LRCK High Time 2. 0x40015

ASP LRCK High Time 1. 0x40014

LSB of ASP LRCK high time duration

Reserved
XSP_SPSIZE
ASP_SPSIZE

LSB of ASP sample rate fractional divide numerator

LSB of ASP sample rate fractional divide denominator

VALUE
Serial Port Sample Bit Size. 0x1000C 0x04
0000
01
00
0x01
0x01
0x00
0x00 MSB of ASP sample rate fractional divide numerator
0x08
0x08
0x00
0x00 MSB of ASP sample rate fractional divide denominator
0x1F
0x1F
0x00
0x00 MSB of ASP LRCK high time duration
0x3F
0x3F
0x00
0x00 MSB of ASP LRCK period
0x1C
000
1
1
1
0
0
0x0A
000
0
1
010
0x00
0x00 ASP Channel 1 starts on SCLK0
0x00
0x00 ASP Channel 2 starts on SCLK0
0x07

Set ASP port to be Master
Set output SCLK polarity
Input SCLK polarity is don’t care
Set Output LRCLK polarity
Input LRCLK polarity is don’t care

Reserved
ASP_M/SB
ASP_SCPOL_OUT
ASP_SCPOL_IN
ASP_LCPOL_OUT
ASP_LCPOL_IN

Reserved
ASP_STP
ASP_5050
ASP_FSD

Configure ASP port to accept I2S input

ASP Frame Configuration. 0x40019

ASP Clock Configuration. 0x40018

ASP Channel 1 Location. 0x50000

ASP Channel 2 Location. 0x50001

ASP LRCK Period 2. 0x40017

LSB of ASP LRCK period

ASP_LCPR_MSB

ASP_LCPR_LSB

ASP_RX_CH1

ASP_RX_CH2

ASP Channel 1 Size and Enable.
0x5000A

Reserved
ASP_RX_CH1_AP
ASP_RX_CH1_EN
ASP_RX_CH1_RES

ASP Channel 2 Size and Enable.
0x5000B

Reserved
ASP_RX_CH2_AP
ASP_RX_CH2_EN
ASP_RX_CH2_RES

0000
0
1
11
0x0F

0000
1
1
11

ASP Channel 1 Active Phase
ASP Channel 1 Enable
ASP Channel 1 Size is 32 bits

ASP Channel 2 Active Phase
ASP Channel 2 Enable
ASP Channel 2 Size is 32 bits

49 Setup PCM
50 Configure PCM Filter

PCM Filter Option. 0x90000
FILTER_SLOW_FASTB
PHCOMP_LOWLATB
NOS
Reserved
PCM_WBF_EN
HIGH_PASS
DEEMP_ON

51 Set Volume for Channel B

PCM Volume B. 0x90001

52 Set Volume for Channel A

PCM Volume A. 0x90002

PCM_VOLUME_A

PCM_VOLUME_B

0x02
0
0
0
0 0
0
1
0
0x0C
0x0C Set volume to –6 dB
0x0C
0x0C Set volume to –6 dB

High Pass Filter is selected

98

DS1155F2

Example 5-18. DoP and PCM Mixing (Cont.)

STEP

TASK

53 Configure PCM Path Signal

Control

REGISTER/BIT FIELDS
PCM Path Signal Control 1. 0x90003

PCM_RAMP_DOWN
PCM_VOL_BEQA
PCM_SZC
PCM_AMUTE
PCM_AMUTEBEQA
PCM_MUTE_A
PCM_MUTE_B

PCM Path Signal Control 2. 0x90004

Reserved
PCM_INV_A
PCM_INV_B
PCM_SWAP_CHAN
PCM_COPY_CHAN

VALUE
0xEC
1
1
10
1
1
0
0
0x00
0000
0
0
0
0

CS43131
5.14 Headphone Load Measurement

DESCRIPTION

Soft ramp down of volume on filter change
Volume setting on both channels controlled by PCM_VOLUME_A
Enable soft ramp
Mute after reception of 8192 samples of 0 or -1.
Mute only when AMUTE condition is detected on both channels
Function is disabled
Function is disabled

Disable all functions in this register

54 Read interrupt status 2

register

55 Enable ASP Interrupts

56 Enable ASP Clocks

Interrupt Status 2. 0xF0001

Clear sticky bits

Interrupt Mask 2. 0xF0011
ASP_OVFL_INT_MASK
ASP_ERROR_INT_MASK
ASP_LATE_INT_MASK
ASP_EARLY_INT_MASK
ASP_NOLRCK_INT_MASK
Reserved

0x07
0
0
0
0
0
111
Pad Interface Configuration. 0x1000D 0x00

Enable ASP_OVFL interrupt
Enable ASP_ERROR interrupt
Enable ASP_LATE interrupt
Enable ASP_EARLY interrupt
Enable ASP_NOLRCK interrupt

57 Enable ASP

Power Down Control. 0x20000

Reserved
XSP_3ST
ASP_3ST

PDN_XSP
PDN_ASP
PDN_DSDIF
PDN_HP
PDN_XTAL
PDN_PLL
PDN_CLKOUT
Reserved

Enable ASP serial clocks

Enable ASP

0000 00
0
0
0x24
0
0
1
0
0
1
0
0

58 Enable PCM/DoP mix
59 Configure DSD Volume

DSD Volume A. 0x70001

DSD_VOLUME_A

60 Prepare for PCM/DoP Mix

operation

DSD and PCM Mixing Control.
0x70005

0x0C
0x0C Channel A volume set to 0 dB
0x02

61 Wait for 6 ms
62 Enable PCM/DoP mix

Reserved
MIX_PCM_PREP
MIX_PCM_DSD

DSD and PCM Mixing Control.
0x70005

Reserved
MIX_PCM_PREP
MIX_PCM_DSD

0000 00
1
0

0x03

0000 00
1
1

Enable PCM playback path for DoP Mixing

Enable PCM/DoP Mixing

5.14 Headphone Load Measurement

The CS43131 can be configured to measure the impedance of headphone load. Please refer to Section 4.5.2 for a
description of headphone load detection. The following subsections describe the steps needed to measure DC impedance
or both AC/DC impedance of the headphone.

DS1155F2

99

CS43131
5.14 Headphone Load Measurement

5.14.1 Measuring Only DC Impedance

Fig. 5-1 shows and Ex. 5-19 describes the steps necessary for measuring DC impedance with the following assumptions:

• The CS43131 is already powered up and out of reset.

• MCLK_INT is 22.5792 or 24.576 MHz sourced from MCLK/XTAL or PLL (MCLK_SRC_SEL = 00 or 01).

• HP_IN_EN = 0 and HPLOAD_EN = 0.

• A headphone is already plugged in and HPDETECT_PLUG_INT = 1.

DC Impedance Measurement

Read Interrupt Status 4

Enable HP Load Interrupts. Set Interrupt
Mask 4 (0xF0013) to 0 x00

DAC Response

User Commands

Select Channel A or B
HPLOAD_EN = 0 (Disabled)
HPLOAD_ CHN_SEL = X (Channel A /B )
HPLOAD_ DC_START = 0 (Stop )
HPLOAD _AC_START = 0 (Stop)

Enable impedance subsystem
HPLOAD _EN = 1

NO

HPLOAD_ON_INT
= 1?

YES

Start DC impedance measurement
HPLOAD_ DC_START = 1

HPLOAD_DC_DONE_INT
= 1?

YES

HPLOAD _UNPLUG_INT
= 1 ?

NO

HPLOAD_OOR_ INT
= 1?

NO

HPLOAD _HPON_INT
= 1 ?

NO

Read DC impedance
value from
RL_DC_STAT_0 and
RL_DC_STAT_1

NO

NO

YES

YES

HPLOAD_ UNPLUG_INT
= 1?

YES

Error Occurred

YES

Disable Impedance Measurement
Subsystem
HPLOAD _EN = 0

NO

New Measurement
on same channel?

Stop DC impedance measurement
HPLOAD_DC_START = 0

NO

HPLOAD _OFF_INT
= 1?

YES

New
Measurement?

YES

YES

Disable HP Load Interrupts. Set Interrupt
Mask 4 (0xF0013)  to 0xFF.

NO

Figure 5-1. DC Impedance Measurement Flowchart

100

DS1155F2

CS43131
5.14 Headphone Load Measurement

Ex. 5-19 demonstrates measuring DC impedance for both channels of the CS43131.

Example 5-19. Sequence for DC Impedance Measurement

STEP

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

1 Read Interrupt Status 4 register (0xF0003) to clear sticky bits.
2 Enable HP Load Interrupts

Interrupt Mask 4. 0xF0013

HPLOAD_NO_DC_INT_MASK
HPLOAD_UNPLUG_INT_MASK
HPLOAD_HPON_INT_MASK
HPLOAD_OOR_INT_MASK
HPLOAD_AC_DONE_INT_MASK
HPLOAD_DC_DONE_INT_MASK
HPLOAD_OFF_INT_MASK
HPLOAD_ON_INT_MASK

3 Select Channel A

HP Load 1. 0xE0000

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

4 Enable impedance subsystem

HP Load 1. 0xE0000

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

Enable HPLOAD_NO_DC interrupt
Enable HPLOAD_UNPLUG interrupt
Enable HPLOAD_HPON interrupt
Enable HPLOAD_OOR interrupt
Enable HPLOAD_AC_DONE interrupt
Enable HPLOAD_DC_DONE interrupt
Enable HPLOAD_OFF interrupt
Enable HPLOAD_ON interrupt

HPOUTA selected

Enable impedance subsystem

0x00
0
0
0
0
0
0
0
0
0x00
0
00
0
00
0
0
0x80
1
00
0
00
0
0

5 Wait for interrupt. Check if HPLOAD_ON_INT = 1 in Interrupt Status 4 register (0xF0003)
6 Start DC impedance measurement

HP Load 1. 0xE0000

7 Wait for interrupt. Read Interrupt Status 4 register (0xF0003). If HPLOAD_UNPLUG_INT = 1, go to the last step as an error has occurred. If

HPLOAD_OOR_INT = 1, go to the last step as an error has occurred. Otherwise, if HPLOAD_DC_DONE_INT = 1, go to the next step.

8 DC impedance values are available in HP DC Load Status 0 (0xE000D) and HP DC Load Status 1 (0xE000E) registers.
9 Turn off impedance measurement

HP Load 1. 0xE0000

subsystem

Start DC impedance measurement

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

0x81
1
00
0
00
0
1

0x00
0
00
0
00
0
0

0x10
0
00
1
00
0
0
0x90
1
00
1
00
0
0

0x91
1
00
1
00
0
1

Disable impedance measurement

Stop DC impedance measurement

HPOUTB selected

Enable impedance subsystem

HPOUTB selected

HPOUTB selected

Start DC impedance measurement

10 Wait for interrupt. Read Interrupt Status 4 register (0xF0003). Check for HPLOAD_OFF_INT = 1.
11 Select Channel B

HP Load 1. 0xE0000

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

12 Enable impedance subsystem

HP Load 1. 0xE0000

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

13 Wait for interrupt. Check if HPLOAD_ON_INT = 1 in Interrupt Status 4 register (0xF0003)
14 Start DC impedance measurement

HP Load 1. 0xE0000

15 Wait for interrupt. Read Interrupt Status 4 register (0xF0003). If HPLOAD_UNPLUG_INT = 1, go to the last step as an error has occurred. If
HPLOAD_OOR_INT = 1, go to the last step as an error has occurred. Otherwise, if HPLOAD_DC_DONE_INT = 1, go to the next step.

16 DC impedance values are available in HP DC Load Status 0 (0xE000D) and HP DC Load Status 1 (0xE000E) registers.

DS1155F2

101

Example 5-19. Sequence for DC Impedance Measurement (Cont.)

STEP

TASK

subsystem

REGISTER/BIT FIELDS

17 Turn off impedance measurement

VALUE
0x00
0
00
0
00
0
0
18 Wait for interrupt. Check if HPLOAD_OFF_INT = 1 in Interrupt Status 4 register (0xF0003).
19 Disable HP Load Interrupts

HP Load 1. 0xE0000
HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

Interrupt Mask 4. 0xF0013

0xFF

CS43131
5.14 Headphone Load Measurement

DESCRIPTION

Disable impedance measurement subsystem

102

DS1155F2

CS43131
5.14 Headphone Load Measurement

5.14.2 Measuring AC and DC Impedance

Fig. 5-2 shows and Ex. 5-20 describes the steps necessary to measure AC/DC impedance with the following assumptions:

• The CS43131 is already powered up and out of reset.

• MCLK_INT is 22.5792 or 24.576 MHz sourced from MCLK/XTAL or PLL (MCLK_SRC_SEL = 00 or 01).

• HP_IN_EN = 0 and HPLOAD_EN = 0.

• A headphone is already plugged in and HPDETECT_PLUG_INT = 1.

AC/DC Impedance Measurement

Read Interrupt Status 4

Enable HP Load Interrupts. Set Interrupt
Mask 4 (0 xF0013 ) to 0x00

Select Channel A or B
HPLOAD_ EN = 0 (Disabled)
HPLOAD _CHN_SEL  = X (Channel A/B)
HPLOAD _DC_START = 0 (Stop)
HPLOAD_AC_START = 0 ( Stop)

Enable impedance subsystem
HPLOAD_EN = 1

NO

HPLOAD_ON_ INT
= 1?

YES

Start DC impedance measurement
HPLOAD _DC_START = 1

DAC Response

User Commands

HPLOAD_ DC_DONE_ INT
= 1?

YES

HPLOAD_UNPLUG_INT
= 1?

NO

HPLOAD_OOR _INT
= 1?

NO

HPLOAD_HPON_INT
= 1?

NO

NO

NO

YES

YES

HPLOAD _UNPLUG_INT
= 1?

YES

Error Occurred

YES

Read DC impedance
value from
RL_DC_STAT_0 and
RL_DC_STAT_1

Disable Impedance Measurement
Subsystem
HPLOAD_EN = 0

NO

HPLOAD_OFF_INT
= 1?

YES

Disable HP Load Interrupts. Set Interrupt
Mask 4 (0xF0013) to 0 xFF

Start AC impedance measurement
HPLOAD _AC_START = 1

Set Frequency
HPLOAD _MEAS_FREQ_LSB  = 0x??
HPLOAD _MEAS_FREQ_MSB  = 0x??

Stop DC impedance measurement
HPLOAD_ DC_START =  0

HPLOAD_AC_ DONE_ INT
= 1 ?

YES

HPLOAD_ UNPLUG_ INT
= 1?

NO

HPLOAD _OOR_INT
= 1?

NO

HPLOAD_HPON_INT
= 1?

NO

NO

NO

YES

YES

Read AC impedance
value from
RL_AC_STAT_0 and
RL_AC_STAT_1

HPLOAD_UNPLUG_ INT
= 1?

YES

Error Occurred

YES

Stop AC impedance measurement
HPLOAD _AC_START = 0

Disable Impedance Measurement
Subsystem
HPLOAD _EN = 0

NO

New AC
measurement on
same channel?

YES

NO

HPLOAD_ OFF_ INT
= 1 ?

YES

New
Measurement?

YES

Disable HP Load Interrupts. Set Interrupt
Mask 4 (0xF0013 ) to 0xFF

NO

Figure 5-2. AC and DC Impedance Measurement Flowchart

DS1155F2

103

Ex. 5-20 demonstrates measuring both AC and DC impedance for both channels of the CS43131.

Example 5-20. AC and DC Impedance Measurement

CS43131
5.14 Headphone Load Measurement

TASK

REGISTER/BIT FIELDS

VALUE

DESCRIPTION

STEP
1
2

Read Interrupt Status 4 register (0xF0003) to clear sticky bits.
Enable HP Load Interrupts

Interrupt Mask 4. 0xF0013

HPLOAD_NO_DC_INT_MASK
HPLOAD_UNPLUG_INT_MASK
HPLOAD_HPON_INT_MASK
HPLOAD_OOR_INT_MASK
HPLOAD_AC_DONE_INT_MASK
HPLOAD_DC_DONE_INT_MASK
HPLOAD_OFF_INT_MASK
HPLOAD_ON_INT_MASK

3

Select Channel A

HP Load 1. 0xE0000

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

4

Enable impedance subsystem

HP Load 1. 0xE0000

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

5 Wait for interrupt. Check if HPLOAD_ON_INT = 1 in Interrupt Status 4 register (0xF0003)
6

Start DC impedance measurement

HP Load 1. 0xE0000

Enable HPLOAD_NO_DC interrupt
Enable HPLOAD_UNPLUG interrupt
Enable HPLOAD_HPON interrupt
Enable HPLOAD_OOR interrupt
Enable HPLOAD_AC_DONE interrupt
Enable HPLOAD_DC_DONE interrupt
Enable HPLOAD_OFF interrupt
Enable HPLOAD_ON interrupt

HPOUTA selected

Enable impedance subsystem

0x00
0
0
0
0
0
0
0
0
0x00
0
00
0
00
0
0
0x80
1
00
0
00
0
0

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

8
9

7 Wait for interrupt. Read Interrupt Status 4 register (0xF0003). If HPLOAD_UNPLUG_INT = 1, go to the last step as an error has occurred. If
HPLOAD_OOR_INT = 1, go to the last step as an error has occurred. Otherwise, if HPLOAD_DC_DONE_INT = 1, go to the next step.
DC impedance values are available in HP DC Load Status 0 (0xE000D) and HP DC Load Status 1 (0xE000E) registers.
HP Load Measurement 1. 0xE0003
Set HP load measurement frequency to
desired frequency. Assuming 1 kHz.
HPLOAD_MEAS_FREQ_LSB
HP Load Measurement 2. 0xE0004
HPLOAD_MEAS_FREQ_MSB

MSB of load measurement frequency

Set measurement frequency = 1 kHz

Start DC impedance measurement

10 Start AC impedance measurement

HP Load 1. 0xE0000

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

Start AC impedance measurement

11 Wait for interrupt. Read Interrupt Status 4 register (0xF0003). If HPLOAD_UNPLUG_INT = 1, go to the last step as an error has occurred. If
HPLOAD_OOR_INT = 1, go to the last step as an error has occurred. Otherwise, if HPLOAD_AC_DONE_INT = 1, go to the next step.

12 AC impedance values are available in HP AC Load Status 0 (0xE0010) and HP AC Load Status 1 (0xE0011) registers.
13 Stop AC impedance measurement.
14
15 Disable impedance measurement

If another frequency point is desired, go back to step 9. Otherwise continue.

HP Load 1. 0xE0000

HP Load 1. 0xE0000

0x80

0x10

subsystem and select channel B

16 Wait for interrupt. Read Interrupt Status 4 register (0xF0003). Check for HPLOAD_OFF_INT = 1. If Channel B measurement is desired, continue

to the next step; otherwise go to step 30 to end the impedance measurement.

17 Enable impedance subsystem

HP Load 1. 0xE0000

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

0x90
1
00
1
00
0
0

Enable impedance subsystem

HPOUTB selected

18 Wait for interrupt. Check if HPLOAD_ON_INT = 1 in Interrupt Status 4 register (0xF0003)

104

DS1155F2

0x81
1
00
0
00
0
1

0xA8
0xA8
0x00
0x00
0x82
1
00
0
00
1
0

Example 5-20. AC and DC Impedance Measurement (Cont.)

STEP

TASK

REGISTER/BIT FIELDS

19 Start DC impedance measurement

HP Load 1. 0xE0000

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

CS43131
5.14 Headphone Load Measurement

VALUE
0x91
1
00
1
00
0
1

DESCRIPTION

HPOUTB selected

Start DC impedance measurement

20 Wait for interrupt. Read Interrupt Status 4 register (0xF0003). If HPLOAD_UNPLUG_INT = 1, go to the last step as an error has occurred. If
HPLOAD_OOR_INT = 1, go to the last step as an error has occurred. Otherwise, if HPLOAD_DC_DONE_INT = 1, go to the next step.

21 DC impedance values are available in HP DC Load Status 0 (0xE000D) and HP DC Load Status 1 (0xE000E) registers.
22 Set HP load measurement frequency to
desired frequency. Assuming 1 kHz.

HP Load Measurement 1. 0xE0003
HPLOAD_MEAS_FREQ_LSB
HP Load Measurement 2. 0xE0004
HPLOAD_MEAS_FREQ_MSB

0xA8
0xA8
0x00
0x00
0x92
1
00
1
00
1
0

Set measurement frequency = 1 kHz

MSB of load measurement frequency

HPOUTB selected

Start AC impedance measurement

23 Start AC impedance measurement

HP Load 1. 0xE0000

HPLOAD_EN
Reserved
HPLOAD_CHN_SEL
Reserved
HPLOAD_AC_START
HPLOAD_DC_START

24 Wait for interrupt. Read Interrupt Status 4 register (0xF0003). If HPLOAD_UNPLUG_INT = 1, go to the last step as an error has occurred. If
HPLOAD_OOR_INT = 1, go to the last step as an error has occurred. Otherwise, if HPLOAD_AC_DONE_INT = 1, go to the next step.

25 AC impedance values are available in HP AC Load Status 0 (0xE0010) and HP AC Load Status 1 (0xE0011) registers.
26 Stop AC impedance measurement.
27
28 Disable impedance measurement

If another frequency point is desired go back to step 22. Otherwise continue.

HP Load 1. 0xE0000

HP Load 1. 0xE0000

0x90

0x00

subsystem and select channel B

29 Wait for interrupt. Check if HPLOAD_OFF_INT = 1 in Interrupt Status 4 register (0xF0003).
30 Disable HP Load Interrupts

Interrupt Mask 4. 0xF0013

0xFF

DS1155F2

105

6 Register Quick Reference

The registers for each CS43131 module are located at specific base addresses within the 24-bit register address space.
The organization of this register space is summarized in Table 6-1.

CS43131
6 Register Quick Reference

Table 6-1.  Register Base Addresses

Base Address
0x01 0000
0x03 0000
0x04 0000
0x06 0000
0x08 0000
0x0F 0000

Module

Global Registers
PLL Registers
ASP and XSP Registers
DSD Registers
Headphone and PCM Registers
Interrupt Status and Mask Registers

Reference
Section 6.1
Section 6.2
Section 6.3
Section 6.4
Section 6.5
Section 6.6

Notes: Default values are shown below the bit field names. The default values in all reserved bits must be preserved.

6.1  Global Registers

Address
0x01 0000 Device ID A and B

Function

p. 113

(Read Only)

0x01 0001 Device ID C and D

p. 113

(Read Only)

0x01 0002 Device ID E (Read
Only)

p. 113

0x01 0004 Revision ID (Read
Only)

p. 113

0x01 0005 Subrevision ID (Read

p. 113

Only)

0x01 0006 System Clocking

p. 114

0x01 0007–
0x01 000A

Control

Reserved

0x01 000B Serial Port Sample
Rate

p. 114

0x01 000C Serial Port Sample Bit

p. 114

Size

0x01 000D Pad Interface
Configuration

p. 114

0x01 000E–
0x01 FFFF

Reserved

0x02 0000 Power Down Control

p. 115
0x02 0001–
0x02 0051

Reserved

0x02 0052 Crystal Setting

p. 115

0x02 0053–
0x03 0000

Reserved

6.2  PLL Registers

Address
0x03 0001 PLL Setting 1

Function

p. 116

0x03 0002 PLL Setting 2

p. 116

0x03 0003 PLL Setting 3

p. 116

0x03 0004 PLL Setting 4

p. 116

106

7

0

0

0

x

0

0

0

0

0

0

0

6

1

0

0

x

x

0

0

0

0

0

0

DEVIDA

DEVIDC

DEVIDE

AREVID

—

—

5

0

0

0

x

x
—
0

0

0

0

0

0

—

4

0

1

1

x

x

0

0

0

0

0

0

0

0

0

7

0

0

0

0

0

0

0

6

0

0

0

0

0

—
0

0

5

0

0

0

0

3

0

0

0

x

x

0

0

0

0

0

0

0

0

0

SUBREVID

—

—

—

—

0

0

0

3

4
—
0
0
PLL_DIV_FRAC_0
0
0
PLL_DIV_FRAC_1
0
0
PLL_DIV_FRAC_2
0
0

2

0

0

0

x

DEVIDB

DEVIDD

—

MTLREVID

1

1

1

0

x

0

1

1

0

x

x
MCLK_INT
1

x
x
MCLK_SRC_SEL
0
1

XSP_SPSIZE

0

0

1

0

0

ASP_SPRATE

0

0

0

1

ASP_SPSIZE

0
XSP_3ST
1

1
ASP_3ST
1

0

0

1

0

2

0

0

0

0

0

XTAL_IBIAS
0

0

1

0

0

0

0

0

—
0

0

0

0

0
PLL_START
0

0

0

0

DS1155F2

PDN_XSP
1

PDN_ASP
1

PDN_DSDIF
1

PDN_HP
1

PDN_XTAL
1

PDN_PLL
1

PDN_CLKOUT
1

Address
0x03 0005 PLL Setting 5

Function

p. 116
0x03 0006–
0x03 0007

Reserved

0x03 0008 PLL Setting 6

p. 117

0x03 0009 Reserved

0x03 000A PLL Setting 7

p. 117

0x03 000B–
0x03 001A

Reserved

0x03 001B PLL Setting 8

p. 117
0x03 001C–
0x04 0001

Reserved

7

0

0

0

0

1

0

0

0

6.3  ASP and XSP Registers

Address
0x04 0002 PLL Setting 9

Function

p. 117

0x04 0003 Reserved

0x04 0004 CLKOUT Control

p. 118

0x04 0005–
0x04 000F

Reserved

0x04 0010 ASP Numerator 1

p. 118

0x04 0011 ASP Numerator 2

p. 118

0x04 0012 ASP Denominator 1

p. 118

0x04 0013 ASP Denominator 2

p. 119

0x04 0014 ASP LRCK High Time

p. 119

1

0x04 0015 ASP LRCK High Time

p. 119

2

0x04 0016 ASP LRCK Period 1

p. 119

0x04 0017 ASP LRCK Period 2

p. 119

0x04 0018 ASP Clock

Configuration

p. 120

0x04 0019 ASP Frame

p. 120

0x04 001A–
0x04 001F

Configuration

Reserved

0x04 0020 XSP Numerator 1

p. 120

0x04 0021 XSP Numerator 2

p. 121

0x04 0022 XSP Denominator 1

p. 121

0x04 0023 XSP Denominator 2

p. 121

0x04 0024 XSP LRCK High Time

p. 121

1

0x04 0025 XSP LRCK High Time

p. 121

2

DS1155F2

7

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

—

6

1

0

0

0

0

0

0

0

6

0

0
—
0

0

0

0

0

0

0

0

0

0
—

0
—
0

0

0

0

0

0

0

0

5

0

0

0

0

0

0

0

0

5

0

0

0

0

0

0

0

0

0

0

1

0

0

0

0

0

0

0

0

0

0

—

4

0

0

1

PLL_DIV_INT

—

PLL_OUT_DIV

3

0

0

0

—

0
0
PLL_CAL_RATIO
0
0

0

0

0

4

0

0

0

0

0

0

0

—

—

—

—

0

—
0

0

3

0

0
CLKOUT_DIV
0

0

0

0

1

ASP_N_LSB

ASP_N_MSB

ASP_M_LSB

ASP_M_MSB

0
0
ASP_LCHI_LSB
1
1
ASP_LCHI_MSB
0
0
ASP_LCPR_LSB
1
1
ASP_LCPR_MSB
0
0
ASP_SCPOL_
ASP_M/SB
OUT
1
ASP_5050
1

0
ASP_STP
0

—

XSP_N_LSB

XSP_N_MSB

XSP_M_LSB

0

0

0

0

0

0

0

0

XSP_M_MSB

0
0
XSP_LCHI_LSB
1
1
XSP_LCHI_MSB
0
0

CS43131
6.3 ASP and XSP Registers

2

0

0

0

0

0

0

—
0

0

2

0

0

0

0

0

0

0

0

1

0

1

1

0

0

0

0

0

0

PLL_MODE
1

0

0

0

0

0

0

0

0

—
1

0

1
0
PLL_REF_PREDIV
0
1

CLKOUT_SEL

0

0

0

0

0

0

0

1

0

1

0

0

0

1

0

0

0

1

0

1

0
ASP_SCPOL_
IN
1

0

0

0

0

0

0

1

0

0
ASP_LCPOL_
OUT
0
ASP_FSD
1

0

0

0

1

0

1

0

0
ASP_LCPOL_
IN
0

0

0

1

0

0

0

1

0

107

Address
0x04 0026 XSP LRCK Period 1

Function

p. 122

0x04 0027 XSP LRCK Period 2

p. 122

0x04 0028 XSP Clock

Configuration

p. 122

0x04 0029 XSP Frame

p. 122

0x04 002A–
0x04 FFFF

Configuration

Reserved

0x05 0000 ASP Channel 1

p. 123

Location

0x05 0001 ASP Channel 2

p. 123

0x05 0002–
0x05 0009

Location

Reserved

0x05 000A ASP Channel 1 Size

and Enable

p. 123

0x05 000B ASP Channel 2 Size

and Enable

p. 123

0x05 000C–
0x05 FFFF

Reserved

6.4  DSD Registers

Address
Function
0x06 0000 XSP Channel 1

p. 124

Location

0x06 0001 XSP Channel 2

p. 124

0x06 0002–
0x06 0009

Location

Reserved

0x06 000A XSP Channel 1 Size

and Enable

p. 124

0x06 000B XSP Channel 2 Size

and Enable

p. 124

0x06 000C–
0x06 FFFF

Reserved

0x07 0000 DSD Volume B

p. 124

0x07 0001 DSD Volume A

p. 125

0x07 0002 DSD Processor Path

Signal Control 1

p. 125

0x07 0003 DSD Interface

p. 125

Configuration

0x07 0004 DSD Processor Path

Signal Control 2

p. 126

0x07 0005 DSD and PCM Mixing

Control

p. 126

7

0

0

0

0

0

0

0

0

0

0

0

7

0

0

0

0

0

0

0

0
DSD_RAMP_
UP
1

0
—

0

0

6

0

0
—

0
—
0

0

0

0

0

0

0

0

6

0

0

0

0

0

0

1

—

—

—

—

5

1

0

0

0

0

0

0

0

0

0

0

5

0

0

0

0

0

0

1

1
DSD_SZC

1
DSD_VOL_
BEQA
0
—
0
0
DSD_PRC_SRC

1

0

0

0x07 0006 DSD Processor Path

DSD_ZERODB DSD_HPF_EN

Signal Control 3

p. 126
0x07 0007–
0x07 FFFF

Reserved

0

0

1

0

CS43131
6.4 DSD Registers

2

1

1

1

0

1

3
4
XSP_LCPR_LSB
1
1
XSP_LCPR_MSB
0
0
XSP_SCPOL_
XSP_M/SB
OUT
1
XSP_5050
1

0
XSP_STP
0

—

ASP_RX_CH1

ASP_RX_CH2

0

0

0

0

0
XSP_SCPOL_
IN
1

0

0

0

0

0

ASP_RX_
CH1_AP
0
ASP_RX_
CH2_AP
1

ASP_RX_
CH1_EN
1
ASP_RX_
CH2_EN
1

0

3

0

0

0

0

2

0

0

0

XSP_RX_CH1

XSP_RX_CH2

0
XSP_LCPOL_
OUT
0
XSP_FSD
1

0

0

0

0

0
XSP_LCPOL_
IN
0

0

0

0

0

0

ASP_RX_CH1_RES

1

0

ASP_RX_CH2_RES

1

0

1

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

4

0

0

0

0

0

0

—

—

—

—

XSP_RX_
CH1_AP
0
XSP_RX_
CH2_AP
1

0

XSP_RX_
CH1_EN
1
XSP_RX_
CH2_EN
1

0

0

0

XSP_RX_CH1_RES

1

0

XSP_RX_CH2_RES

1

0

0

0

0

0

0

0

DSD_VOLUME_B
1
1
DSD_VOLUME_A
1
1
—

DSD_AMUTE DSD_AMUTE_

0
—
0
DSD_EN

0

—

BEQA
0
DSD_M_SB
0

DSD_SPEED

0

1
—
0

0

0
SIGCTL_
DSDEQPCM
0

—

0

0
DSD_INV_A

0
DSD_INV_B

0

0

0

0

DSD_MUTE_A DSD_MUTE_B

0

0

DSD_PM_EN DSD_PM_SEL

0
STA_DSD_
DET
1
MIX_PCM_
PREP
0
DSD_SWAP_
CHAN
0

0
INV_DSD_
DET
0
MIX_PCM_
DSD
0
DSD_COPY_
CHAN
0

0

0

0

0
—

0

0

108

DS1155F2

6.5  Headphone and PCM Registers

CS43131
6.5 Headphone and PCM Registers

7

6

5

HP_CLAMPA  HP_CLAMPB

OUT_FS

1
NOS

Address
0x08 0000 HP Output Control 1

Function

p. 127

0x09 0000 PCM Filter Option

p. 128

0x09 0001 PCM Volume B

p. 128

0x09 0002 PCM Volume A

p. 128

0x09 0003 PCM Path Signal

Control 1

p. 129

0x09 0004 PCM Path Signal

Control 2

p. 129

0x09 000A Programmable Filter
Control 1

p. 130

0x09 000B Programmable Filter
Control 2

p. 130
0x09 000C
p. 130

0x09 000D
p. 130

Programmable Filter
Coefficients

Programmable Filter
Coefficients

0x09 000E Programmable Filter

Coefficients

p. 130

0x09 000F
p. 130

0x09 0010
p. 130

Programmable Filter
Coefficients

Programmable Filter
Coefficients

0x09 0011 Programmable Filter

Coefficients

p. 130

0x09 0012
p. 130

0x09 0013
p. 130

Programmable Filter
Coefficients

Programmable Filter
Coefficients

0x09 0014 Programmable Filter

Coefficients

p. 130

0x09 0015
p. 130

0x09 0016
p. 130

Programmable Filter
Coefficients

Programmable Filter
Coefficients

0x09 0017 Programmable Filter

Coefficients

p. 130

0x09 0018
p. 130

Programmable Filter
Coefficients

0x09 0019
p. 130

Programmable Filter
Coefficients

0x09 001A Programmable Filter

Coefficients

p. 130

0x09 001B
p. 130

Programmable Filter
Coefficients

0x09 001C
p. 130

Programmable Filter
Coefficients

DS1155F2

0
FILTER_
SLOW_FASTB
0

0
PHCOMP_
LOWLATB
0

0

1

0
PCM_RAMP_
DOWN
1

1
PCM_VOL_
BEQA
0

SOS1_CTRL

0

0

0

0

1

0

0

0

0

0

0

0

0

0

0

0

0

0

0

1

—

—

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

1

1

1

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

4

1

3
HP_IN_EN

0

—

0
0
PCM_VOLUME_B
1
1
PCM_VOLUME_A
1
1
PCM_AMUTE

2
HP_IN_LP

0
PCM_WBF_
EN
0

0

0
PCM_
AMUTEBEQA
0

1

PCM_INV_A PCM_INV_B

0

0

FOS_CTRL

0
SOS1_
COEFF_CP
0

0
SOS2_
COEFF_CP
0

PCM_SZC

SOS2_CTRL

0

0

0

0

SOS1_COEFF_B0_LSBYTE

0

0

SOS1_COEFF_B0_MSBYTE

0

—

0

0

0

SOS1_COEFF_B1_LSBYTE

0

0

SOS1_COEFF_B1_MSBYTE

0

—

0

0

0

SOS1_COEFF_B2_LSBYTE

0

0

SOS1_COEFF_B2_MSBYTE

0

—

0

0

0

SOS1_COEFF_A1_LSBYTE

0

0

SOS1_COEFF_A1_MSBYTE

0

—

0

0

0

SOS1_COEFF_A2_LSBYTE

0

0

SOS1_COEFF_A2_MSBYTE

0

—

0

0

0

SOS2_COEFF_B0_LSBYTE

0

0

SOS2_COEFF_B0_MSBYTE

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

1
—
0
HIGH_PASS

0
+1dB_EN

0
DEEMP_ON

1

0

0

0

0

0

PCM_MUTE_A PCM_MUTE_B

0
PCM_SWAP_
CHAN
0
SOS3_ON
0
FOS_COEFF_
CP
0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0
PCM_COPY_
CHAN
0
—
0
—

0

0

0

SOS1_
COEFF_B0_
SIGN

0

0

0

SOS1_
COEFF_B1_
SIGN

0

0

0

SOS1_
COEFF_B2_
SIGN

0

0

0

SOS1_
COEFF_A1_
SIGN

0

0

0

SOS1_
COEFF_A2_
SIGN

0

0

0

109

Address
0x09 001D Programmable Filter

Function

Coefficients

p. 130

0x09 001E
p. 130

Programmable Filter
Coefficients

0x09 001F
p. 130

Programmable Filter
Coefficients

0x09 0020 Programmable Filter

Coefficients

p. 130

0x09 0021
p. 130

0x09 0022
p. 130

Programmable Filter
Coefficients

Programmable Filter
Coefficients

0x09 0023 Programmable Filter

Coefficients

p. 130

0x09 0024
p. 130

Programmable Filter
Coefficients

0x09 0025
p. 130

Programmable Filter
Coefficients

0x09 0026 Programmable Filter

Coefficients

p. 130

0x09 0027
p. 130

Programmable Filter
Coefficients

0x09 0028
p. 130

Programmable Filter
Coefficients

0x09 0029 Programmable Filter

Coefficients

p. 130

0x09 002A
p. 130

Programmable Filter
Coefficients

0x09 002B
p. 130

Programmable Filter
Coefficients

0x09 002C Programmable Filter

Coefficients

p. 130

0x09 002D
p. 130

Programmable Filter
Coefficients

0x09 002E
p. 130

Programmable Filter
Coefficients

0x09 002F Programmable Filter

Coefficients

p. 130

0x09 0030
p. 130

Programmable Filter
Coefficients

0x09 0031
p. 130

Programmable Filter
Coefficients

0x09 0032 Programmable Filter

Coefficients

p. 130

0x09 0033
p. 130

Programmable Filter
Coefficients

0x09 0034
p. 130

Programmable Filter
Coefficients

0x09 0035 Programmable Filter

Coefficients

p. 130

110

CS43131
6.5 Headphone and PCM Registers

7

0

0

0

0

0

0

0

0

0

0

0

0

0

0

1

0

0

0

0

0

0

0

0

0

0

6

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

5

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

4

—

0

3

0

SOS2_COEFF_B1_LSBYTE

0

0

SOS2_COEFF_B1_MSBYTE

0

—

0

0

0

SOS2_COEFF_B2_LSBYTE

0

0

SOS2_COEFF_B2_MSBYTE

0

—

0

0

0

SOS2_COEFF_A1_LSBYTE

0

0

SOS2_COEFF_A1_MSBYTE

0

—

0

0

0

SOS2_COEFF_A2_LSBYTE

0

0

SOS2_COEFF_A2_MSBYTE

0

—

0

0

0

SOS3_COEFF_B0_LSBYTE

0

0

SOS3_COEFF_B0_MSBYTE

0

—

0

0

0

SOS3_COEFF_B1_LSBYTE

0

0

SOS3_COEFF_B1_MSBYTE

0

—

0

0

0

SOS3_COEFF_B2_LSBYTE

0

0

SOS3_COEFF_B2_MSBYTE

0

—

0

0

0

SOS3_COEFF_A1_LSBYTE

0

0

SOS3_COEFF_A1_MSBYTE

0

—

0

0

0

2

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

1

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0
SOS2_
COEFF_B0_
SIGN

0

0

0

SOS2_
COEFF_B1_
SIGN

0

0

0

SOS2_
COEFF_B2_
SIGN

0

0

0

SOS2_
COEFF_A1_
SIGN

0

0

0

SOS2_
COEFF_A2_
SIGN

0

0

0

SOS3_
COEFF_B0_
SIGN

0

0

0

SOS3_
COEFF_B1_
SIGN

0

0

0

SOS3_
COEFF_B2_
SIGN

0

0

0

SOS3_
COEFF_A1_
SIGN

0

DS1155F2

Address
0x09 0036
p. 130

Function
Programmable Filter
Coefficients

0x09 0037
p. 130

Programmable Filter
Coefficients

0x09 0038 Programmable Filter

Coefficients

p. 130

0x09 0039
p. 130

Programmable Filter
Coefficients

0x09 003A
p. 130

Programmable Filter
Coefficients

0x09 003B Programmable Filter

Coefficients

p. 130

0x09 003C
p. 130

Programmable Filter
Coefficients

0x09 003D
p. 130

Programmable Filter
Coefficients

0x09 003E Programmable Filter

Coefficients

p. 130

0x09 003F
p. 130

Programmable Filter
Coefficients

0x09 0040
p. 130

Programmable Filter
Coefficients

0x09 0041 Programmable Filter

Coefficients

p. 130

0x0B 0000 Class H Control

p. 131

0x0D 0000 HP Detect

7

0

0

0

0

1

0

0

0

0

0

0

0

6

0

0

0

0

0

0

0

0

0

0

0

0

—
0
0
HPDETECT_CTRL

5

0

0

0

0

0

0

0

0

0

0

0

0

0
HPDETECT_
INV
0
HPDETECT_
UNPLUG_DBC
0

p. 131

0x0D 0001 HP Status (Read Only)

p. 131
0x0D 0002–
0x0D FFFF

Reserved

0
—

0

0

0x0E 0000 HP Load 1

HPLOAD_EN

p. 132

0x0E 0001–
0x0E 0002

Reserved

0x0E 0003 HP Load Measurement

p. 132

1

0x0E 0004 HP Load Measurement

p. 132

2

0x0E 0005–
0x0E 000C

Reserved

0x0E 000D HP DC Load Status 0

p. 133

(Read Only)

0x0E 000E HP DC Load Status 1

p. 133

(Read Only)

0x0E 000F Reserved

0x0E 0010 HP AC Load Status 0

p. 133

(Read Only)

0x0E 0011 HP AC Load Status 1

p. 133

0x0E 0012–
0x0E 0019

(Read Only)

Reserved

0

0

0

0

0

0

0

0

0

0

0

0
HPDETECT_
PLUG_DBC
0

0

0

0

0

0

0

0

0

0

0

0

0

—

0

0

0

0

0

0

0

0

0

0

0

0

CS43131
6.5 Headphone and PCM Registers

4

3

SOS3_COEFF_A2_LSBYTE

0

0

SOS3_COEFF_A2_MSBYTE

0

—

0

0

0

FOS_COEFF_B0_LSBYTE

0

0

FOS_COEFF_B0_MSBYTE

0

—

0

0

0

FOS_COEFF_B1_LSBYTE

0

0

FOS_COEFF_B1_MSBYTE

0

—

0

0

0

FOS_COEFF_A1_LSBYTE

0

0

FOS_COEFF_A1_MSBYTE

0

—

0

1

0

0

ADPT_PWR
1

2

0

0

0

0

0

0

0

0

0

0

0

0

1

1

0

0

0

0

0

0

0

0

0

0

0

0

HV_EN
1

HPDETECT_RISE_DBC_TIME HPDETECT_FALL_DBC_TIME

0

0

0

SOS3_
COEFF_A2_
SIGN

0

0

0

FOS_COEFF_
B0_SIGN

0

0

0

FOS_COEFF_
B1_SIGN

0

0

0

FOS_COEFF_
A1_SIGN

0

EXT_VCPFILT
0
—

0

0

0

HPLOAD_
CHN_SEL
0

0

—

—

0

0

0

0

0

—

HPLOAD_MEAS_FREQ_LSB

0

0

HPLOAD_MEAS_FREQ_MSB

0

0

—

0

0

RL_DC_STAT_0
0
0
RL_DC_STAT_1
0
0

—

0
0
RL_AC_STAT_0
0
0
RL_AC_STAT_1
0
0

—

0

0

1
—

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

HPLOAD_AC_
START
0

HPLOAD_DC_
START
0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

0

DS1155F2

111

CS43131
6.6 Interrupt Status and Mask Registers

Address
0x0E 001A HP Load Status (Read

Function

Only)

Reserved

p. 133

0x0E 001B–
0x0E FFFF

7
HPLOAD_DC_
ONCE
0

6
HPLOAD_
BUSY
0

0

0

5

0

0

—

4

0

0

3
HPLOAD_AC_
DONE
0

2
HPLOAD_AC_
BUSY
0

1
HPLOAD_DC_
DONE
0

0
HPLOAD_DC_
BUSY
0

—

0

0

0

0

6.6  Interrupt Status and Mask Registers

Address
0x0F 0000 Interrupt Status 1

Function

(Read Only)

p. 134

0x0F 0001 Interrupt Status 2

(Read Only)

p. 134

0x0F 0002 Interrupt Status 3

(Read Only)

p. 135

0x0F 0003 Interrupt Status 4

(Read Only)

p. 135

0x0F 0004 Interrupt Status 5

(Read Only)

p. 136

0x0F 0005–
0x0F 000F

Reserved

0x0F 0010 Interrupt Mask 1

p. 136

0x0F 0011 Interrupt Mask 2

7
DAC_OVFL_
INT
0
ASP_OVFL_
INT
0
XSP_OVFL_
INT
0
HPLOAD_NO_
DC_INT
0
DSD_STUCK_
INT

6
HP_DETECT_
PLUG_INT
0
ASP_ERROR_
INT
0
XSP_ERROR_
INT
0
HPLOAD_
UNPLUG_INT
0
DSD_INVAL_
A_INT

5
HP_DETECT_
UNPLUG_INT
0
ASP_LATE_
INT
0
XSP_LATE_
INT
0
HPLOAD_
HPON_INT
0
DSD_INVAL_
B_INT

0

0

0

0

0

0

4
XTAL_
READY_INT
0
ASP_EARLY_
INT
0
XSP_EARLY_
INT
0
HPLOAD_
OOR_INT
0
DSD_
SILENCE_A_
INT
0

3
XTAL_
ERROR_INT
0
ASP_
NOLRCK_INT
0
XSP_
NOLRCK_INT
0
HPLOAD_AC_
DONE_INT
0
DSD_
SILENCE_B_
INT
0

—

0

0

DAC_OVFL_
INT_MASK

1
ASP_OVFL_
INT_MASK

HP_DETECT_
PLUG_INT_
MASK
1
ASP_ERROR_
INT_MASK

HP_DETECT_
UNPLUG_
INT_MASK
1
ASP_LATE_
INT_MASK

XTAL_
READY_INT_
MASK
1
ASP_EARLY_
INT_MASK

p. 137

0x0F 0012 Interrupt Mask 3

1
XSP_OVFL_
INT_MASK

1
XSP_ERROR_
INT_MASK

1
XSP_LATE_
INT_MASK

1
XSP_EARLY_
INT_MASK

p. 137

0x0F 0013 Interrupt Mask 4

p. 138

0x0F 0014 Interrupt Mask 5

1
HPLOAD_NO_
DC_INT_
MASK
1
DSD_STUCK_
INT_MASK

1
HPLOAD_
UNPLUG_
INT_MASK
1
DSD_INVAL_
A_INT_MASK

1
HPLOAD_
HPON_INT_
MASK
1
DSD_INVAL_
B_INT_MASK

p. 138

0x0F 0015–
0x0F FFFF

Reserved

0x10 0000 ASP Master Mode
Slew Rate Control

p. 139

0x10 0001 XSP Master Mode
Slew Rate Control

p. 139

1

0

0

0

—

—

1

0

0

0

1

0

1

1

1
HPLOAD_
OOR_INT_
MASK
1
DSD_
SILENCE_A_
INT_MASK
1

2
PLL_READY_
INT
0

1
PLL_ERROR_
INT
0
—

0
PDN_DONE_
INT
0

0

0
—

0

0
HPLOAD_DC_
DONE_INT
0
DSD_RATE_
ERROR_INT

0
HPLOAD_
OFF_INT
0
DOP_MRK_
DET_INT

0
HPLOAD_ON_
INT
0
DOP_ON_INT

0

0

0

0

0

0

PLL_READY_
INT_MASK

PLL_ERROR_
INT_MASK

PDN_DONE_
INT_MASK

1

0

1
—

0
—

1

0

1
HPLOAD_DC_
DONE_INT_
MASK
1
DSD_RATE_
ERROR_INT_
MASK
1

1
HPLOAD_
OFF_INT_
MASK
1
DOP_MRK_
DET_INT_
MASK
1

1
HPLOAD_ON_
INT_MASK

1
DOP_ON_
INT_MASK

XTAL_
ERROR_INT_
MASK
1
ASP_
NOLRCK_
INT_MASK
1
XSP_
NOLRCK_
INT_MASK
1
HPLOAD_AC_
DONE_INT_
MASK
1
DSD_
SILENCE_B_
INT_MASK
1

—

—

—

0

0

0

0

0

SCLK1_SLEW_RATE

1

0

DSDCLK_SCLK2_SLEW_RATE

1

0

0

1

1

—

—

1

0

0

0

112

DS1155F2

7 Register Descriptions

All registers are read/write, except for the device’s ID, revision, and status registers, which are read only. The following
tables describe bit assignments. The default state of each bit after a power-up sequence or reset is listed in each bit
description. All reserved bits must maintain their default state.

CS43131
7 Register Descriptions

7.1  Global Registers

7.1.1 Device ID A and B

R/O

Default

Bits

7:4

3:0

7

0

Name

6

1

DEVIDA

5

0

DEVIDA

Part number first digit: 4

DEVIDB

Part number second digit: 3

7.1.2 Device ID C and D

R/O

Default

Bits

7:4

3:0

7

0

Name

6

0

DEVIDC

DEVIDC

Part number third digit: 1

DEVIDD

Part number fourth digit: 3

7.1.3 Device ID E

R/O

Default

Bits

7:4

3:0

7.1.4
R/O

Default

7

0

Name

6

0

DEVIDE

DEVIDE

Part number fifth digit: 1

—

Reserved

Revision ID

7

x

6

x

AREVID

5

0

5

0

5

x

Bits

7:4

Name

AREVID

4

0

4

1

4

1

4

x

3

0

Description

3

0

Description

3

0

Description

3

x

Description

2

0

2

0

2

0

2

x

DEVIDB

DEVIDD

—

MTLREVID

1

1

1

1

1

0

1

x

Address 0x10000

0

1

Address 0x10001

0

1

Address 0x10002

0

0

Address 0x10004

0

x

Alpha revision. CS43131 alpha revision level. AREVID and MTLREVID from the complete device revision ID (e.g., A0,
B2).

3:0 MTLREVID Metal revision. CS43131 metal revision level. AREVID and MTLREVID from the complete device revision ID (e.g., A0,

B2).

Subrevision ID

7

0

6

x

7.1.5
R/O

Default

Bits

Name

5

x

4

x

SUBREVID

3

x

Description

Address 0x10005

2

x

1

x

0

x

7:0

SUBREVID CS43131 subrevision level.

DS1155F2

113

System Clocking Control

CS43131
7.1 Global Registers

Address 0x10006

7

0

Name

—

Reserved

6

0

5
—

0

4

0

3

0

2
MCLK_INT

1
0
MCLK_SRC_SEL

1

1

0

Description

7.1.6
R/W

Default

Bits

7:3

2

MCLK_INT

The frequency of internal MCLK.

0 Internal MCLK is expected to be 24.576 MHz
1 (Default) Internal MCLK is expected to be 22.5792 MHz

1:0 MCLK_SRC_

Select the source of internal MCLK.

SEL

00 Direct MCLK/XTAL Mode
01 PLL Mode
10 (Default) RCO Mode
11 Reserved

Serial Port Sample Rate

6

0

—

5

0

7

0

Name

—

Reserved

7.1.7
R/W

Default

Bits

7:4

4

0

3

0

Description

Address 0x1000B

2

0

ASP_SPRATE

1

0

0

1

3:0 ASP_SPRATE ASP sample rate. This register must be programmed for both Master Mode and Slave Mode operation. If ASP_SPRATE

= 384 kHz and the CS43131 operates in Master Mode, MCLK_INT is required to be 24.576 MHz. For all other rates,
MCLK_INT can be either 22.5792 MHz or 24.576 MHz.

0000 32 kHz
0001 (Default) 44.1 kHz
0010 48 kHz
0011 88.2 kHz
0100 96 kHz
0101 176.4 kHz
0110 192 kHz
0111 352.8 kHz
1000 384 kHz
1001–1111 Reserved

7.1.8
R/W

Default

Bits

7:4

Serial Port Sample Bit Size

6

0

5

0

7
—

0

Name

—

Reserved

3:2 XSP_SPSIZE XSP sample bit size.

00 32 bits
01 (Default) 24 bits
10–11 Reserved

1:0 ASP_SPSIZE ASP sample bit size.

00 32 bits
01 (Default) 24 bits
10 16 bits
11 8 bits

Pad Interface Configuration

6

0

5

0

—

7

0

Name

—

Reserved

7.1.9
R/W

Default

Bits

7:2

114

4

0

4

0

3

0

XSP_SPSIZE

Description

3

0

Description

2

1

2

0

Address 0x1000C

1

0

ASP_SPSIZE

0

1

Address 0x1000D

1
XSP_3ST

1

0
ASP_3ST

1

DS1155F2

CS43131
7.1 Global Registers

Bits

Name

1

XSP_3ST

Determines the state of the XSP clock drivers when in Master Mode. When in Slave Mode, the serial port clocks are
inputs, whose function is not affected by this bit. Before setting an xSP_3ST bit, the associated serial port must be
powered down and not powered up until the xSP_3ST bit is cleared.

0 When in Master Mode, serial port clocks are active.
1 (Default) When in Master Mode, serial port clocks are Hi-Z.

Description

0

ASP_3ST

Determines the state of the ASP clock drivers when in Master Mode. When in Slave Mode, the serial port clock pins are
inputs, whose function is not affected by this bit. Before setting an xSP_3ST bit, the associated serial port must be
powered down and not powered up until the xSP_3ST bit is cleared.

0 When in Master Mode, serial port clocks are active.
1 (Default) When in Master Mode, serial port clocks are Hi-Z.

7.1.10 Power Down Control

Address 0x20000

R/W

7
PDN_XSP

6
PDN_ASP

5
PDN_DSDIF

4
PDN_HP

3
PDN_XTAL

2
PDN_PLL

1
PDN_CLKOUT

Default

1

1

1

1

1

1

1

0
—

0

Bits

Name

Description

7

6

5

4

3

2

1

0

PDN_XSP

XSP input path power control. Configures XSP SDIN path power state.

0 Powered up.
1 (Default) Powered down.

PDN_ASP

ASP input path power control. Configures ASP SDIN path power state.

0 Powered up.
1 (Default) Powered down.

PDN_DSDIF DSD interface power control. Sets the power state of the DSD interface block.

0 Powered up.
1 (Default) Powered down.

PDN_HP

Power down HPOUTx.

0 Powered up. The HP driver and DACx are powered up.
1 (Default) Powered down. The HP driver and DACx are powered down. When this bit is set, the audio outputs are

soft ramped to mute.

PDN_XTAL Power down crystal oscillator.

0 Powered up. The XTAL driver is powered up to start generating MCLK.
1 (Default) Powered down. The XTAL driver is powered down.

PDN_PLL

PLL output power control. Sets the power state of the PLL block.

0 Powered up.
1 (Default) Powered down. PLL block is powered down.

PDN_
CLKOUT

CLKOUT output power control. Sets the power state of the CLOCKOUT output.

0 Powered up
1 (Default) Powered down. CLKOUT are driven low.

—

Reserved

7.1.11 Crystal Setting

7

0

Name

6

0

5
—

0

4

0

3

0

Description

Address 0x20052

2

1

1
XTAL_IBIAS

0

0

0

R/W

Default

Bits

7:3

2:0

—

Reserved

XTAL_IBIAS Crystal bias current strength.
010 15.0 µA
100 (Default) 12.5 µA
110 7.5 µA
Others Reserved

DS1155F2

115

7.2  PLL Registers

7.2.1
R/W

Default

Bits

7:1

PLL Setting 1

6

0

5

0

7

0

Name

—

Reserved

4
—

0

3

0

Description

0

PLL_START PLL start bit. Enable PLL output after it has been properly configured.

0 (Default) PLL is not started
1  PLL is started

CS43131
7.2 PLL Registers

Address 0x30001

0
PLL_START

0

Address 0x30002

0

0

1

0

1

0

2

0

2

0

Address 0x30003

0

0

Address 0x30004

0

0

Address 0x30005

0

0

1

0

1

0

1

0

5

0

4
3
PLL_DIV_FRAC_0

0

0

Description

PLL fractional portion of divide ratio LSB. There are 3 bytes of PLL feedback divider fraction portion and this is LSB byte;
e.g., 0xFF means (2-17 + 2-18 + …+2-24).
0000 0000 (Default)

5

0

4
3
PLL_DIV_FRAC_1

0

0

Description

2

0

PLL fractional portion of divide ratio middle byte; e.g., 0xFF means (2-9 + 2-10 + …+2-16).
0000 0000 (Default)

7.2.2
R/W

Default

PLL Setting 2

7

0

6

0

Bits

7:0

Name

PLL_DIV_
FRAC_0

7.2.3
R/W

Default

PLL Setting 3

7

0

6

0

Bits

7:0

Name

PLL_DIV_
FRAC_1

7.2.4
R/W

Default

PLL Setting 4

7

0

6

0

Bits

7:0

Name

PLL_DIV_
FRAC_2

5

0

4
3
PLL_DIV_FRAC_2

0

0

Description

2

0

PLL fractional portion of divide ratio MSB; e.g., 0xFF means (2-1 + 2-2 + …+2-8).
0000 0000 (Default)

7.2.5
R/W

Default

PLL Setting 5

7

0

6

1

Bits

Name

5

0

4

0

PLL_DIV_INT

3

0

Description

2

0

7:0 PLL_DIV_INT PLL integer portion of divide ratio. Integer portion of PLL feedback divider.

0100 0000 (Default)

116

DS1155F2

7.2.6
R/W

Default

PLL Setting 6

7

0

6

0

5

0

Bits

7:0

Name

PLL_OUT_
DIV

Final PLL clock output divide value.

0001 0000 (Default)

4

1

PLL_OUT_DIV

3

0

Description

7.2.7
R/W

Default

PLL Setting 7

7

1

6

0

Bits

7:0

Name

PLL_CAL_
RATIO

5

0

4
3
PLL_CAL_RATIO

0

0

Description

CS43131
7.2 PLL Registers

Address 0x30008

0

0

Address 0x3000A

0

0

1

0

1

0

2

0

2

0

PLL calibration ratio. See Section 4.7.2 for configuration details. Target value for PLL VCO calibration.

1000 0000 (Default)

7.2.8
R/W

Default

Bits

7:2

1

0

7.2.9
R/W

Default

Bits

7:2

1:0

PLL Setting 8

7

0

Name

—

Reserved

6

0

5

0

—

4

1

3

0

Description

PLL_MODE 500/512 factor used in PLL frequency calculation equation, Eq. 4-1.

0 No bypass
1 (Default) Bypass

—

Reserved

PLL Setting 9

7

0

Name

6

0

5

0

—

4

0

3

0

Description

—

Reserved

PLL_REF_
PREDIV

PLL reference divide select.

00 Divide by 1
01 Divide by 2
10 (Default) Divide by 4
11 Divide by 8

Address 0x3001B

1
PLL_MODE

1

0
—

1

Address 0x40002

1
0
PLL_REF_PREDIV

1

0

2

0

2

0

DS1155F2

117

7.3  ASP and XSP Registers

7.3.1
R/W

Default

Bits

7:5

CLKOUT Control

6
—

0

5

0

7

0

Name

—

Reserved

4

0

3
CLKOUT_DIV

0

Description

4:2 CLKOUT_DIV Divider setting on internal MCLK path to CLKOUT.
000 (Default) Divide by 2
001 Divide by 3
010 Divide by 4
011 Divide by 8
100–111 Reserved

1:0 CLKOUT_SEL Select the source of CLKOUT.

00 (Default) XTAL/MCLK path
01 PLL output path
10–11 Reserved

7.3.2
R/W

Default

ASP Numerator 1

7

0

6

0

5

0

Bits

Name

4

0

ASP_N_LSB

3

0

Description

2

0

2

0

CS43131
7.3 ASP and XSP Registers

Address 0x40004

CLKOUT_SEL

0

0

Address 0x40010

0

1

1

0

1

0

7:0 ASP_N_LSB The value in this register cannot be changed while the serial port is powered up.

ASP sample rate fractional divide numerator LSB. Along with ASP_M_MSB/LSB, selects the fractional divide value for
setting the SCLK frequency.
(Default) ASP_N = 1

7.3.3
R/W

Default

ASP Numerator 2

7

0

6

0

5

0

Bits

Name

4

0

ASP_N_MSB

3

0

Description

Address 0x40011

2

0

1

0

0

0

7:0 ASP_N_MSB The value in this register cannot be changed while the serial port is powered up.

ASP sample rate fractional divide numerator MSB. Along with ASP_M_MSB/LSB, selects the fractional divide value for
setting the SCLK frequency.
(Default) ASP_N = 1

7.3.4
R/W

Default

ASP Denominator 1

7

0

6

0

5

0

Bits

Name

4

0

ASP_M_LSB

3

1

Description

Address 0x40012

2

0

1

0

0

0

7:0 ASP_M_LSB The value in this register cannot be changed while the serial port is powered up.

ASP sample rate fractional divide denominator LSB. Along with ASP_N_MSB/LSB, selects the fractional divide value for
setting the SCLK frequency.
(Default) ASP_M = 8

118

DS1155F2

7.3.5
R/W

Default

ASP Denominator 2

7

0

6

0

5

0

Bits

Name

ASP_M_MSB

4

0

3

0

Description

CS43131
7.3 ASP and XSP Registers

Address 0x40013

2

0

1

0

0

0

7:0 ASP_M_MSB The value in this register cannot be changed while the serial port is powered up.

ASP sample rate fractional divide denominator LSB. Along with ASP_N_MSB/LSB, selects the fractional divide value for
setting the SCLK frequency.
(Default) ASP_M = 8

4
3
ASP_LCHI_LSB

1

1

Description

Address 0x40014

2

1

1

1

0

1

The value in this register cannot be changed while the serial port is powered up.
ASP LRCK high duration, in units of ASP_SCLK periods stored in ASP_LCHI_MSB/LSB. This value must be less than
ASP_LCPR.
(Default) ASP_LCHI = 31

4
3
ASP_LCHI_MSB

0

0

Description

Address 0x40015

2

0

1

0

0

0

The value in this register cannot be changed while the serial port is powered up.
ASP LRCK high duration, in units of ASP_SCLK periods stored in ASP_LCHI_MSB/LSB. This value must be less than
ASP_LCPR.
(Default) ASP_LCHI = 31

7.3.6
R/W

Default

ASP LRCK High Time 1

7

0

6

0

5

0

Bits

7:0

Name

ASP_LCHI_
LSB

7.3.7
R/W

Default

ASP LRCK High Time 2

7

0

6

0

5

0

Bits

7:0

Name

ASP_LCHI_
MSB

7.3.8
R/W

Default

ASP LRCK Period 1

7

0

6

0

5

1

7.3.9
R/W

Default

ASP LRCK Period 2

7

0

6

0

5

0

3
4
ASP_LCPR_LSB

1

1

Description

2

1

4
3
ASP_LCPR_MSB

0

0

Description

2

0

Address 0x40016

0

1

Address 0x40017

0

0

1

1

1

0

Bits

Name

7:0 ASP_LCPR_

LSB

The value in this register cannot be changed while the serial port is powered up.
ASP LRCK period, in units of ASP_SCLK periods stored in ASP_LCPR_MSB/LSB.
(Default) ASP_LCPR = 63

Bits

Name

7:0 ASP_LCPR_

MSB

The value in this register cannot be changed while the serial port is powered up.
ASP LRCK period, in units of ASP_SCLK periods stored in ASP_LCPR_MSB/LSB.
(Default) ASP_LCPR = 63

DS1155F2

119

7.3.10 ASP Clock Configuration

CS43131
7.3 ASP and XSP Registers

Address 0x40018

R/W

Default

Bits

7:5

7

0

6

—

0

5

0

4

ASP_M/SB

3
ASP_SCPOL_
OUT

2
ASP_SCPOL_
IN

1
ASP_LCPOL_
OUT

0
ASP_LCPOL_
IN

0

1

1

0

0

Name

—

Reserved

Description

4

ASP_M/SB ASP port master or slave configuration.

0 (Default) Slave Mode (input)
1 Master Mode (output)

3 ASP_SCPOL_

ASP SCLK output drive polarity.

OUT

0 Normal
1 (Default) Inverted

2 ASP_SCPOL_

ASP SCLK input polarity (pad to logic).

IN

0 Normal
1 (Default) Inverted

1

0

ASP_LCPOL_
OUT

ASP_LCPOL_
IN

ASP LRCK output drive polarity.

0 (Default) Normal
1 Inverted

ASP LRCK input polarity (pad to logic).

0 (Default) Normal
1 Inverted

7.3.11 ASP Frame Configuration

Address 0x40019

R/W

Default

Bits

7:5

4

3

7

0

Name

—

Reserved

6
—

0

5

0

4
ASP_STP

3
ASP_5050

0

1

2

0

1
ASP_FSD

1

0

0

Description

ASP_STP

ASP start phase. Controls which LRCK/FSYNC phase starts a frame.

0 (Default) The frame begins when LRCK/FSYNC transitions from high to low
1 The frame begins when LRCK/FSYNC transitions from low to high

ASP_5050

ASP LRCK fixed 50/50 duty cycle.

0 Programmable duty cycle per ASP_LCHI and ASP_LCPR.
1 (Default) Fixed 50% duty cycle

2:0

ASP_FSD

ASP frame start delay (units of ASP_SCLK periods).

000 0 delay
001 0.5 delay
010 (Default) 1.0 delay
...
101 2.5 delay
110–111 Reserved

7.3.12 XSP Numerator 1

R/W

Default

7

0

Bits

Name

6

0

5

0

4

0

XSP_N_LSB

3

0

Description

Address 0x40020

2

0

1

0

0

1

7:0 XSP_N_LSB The value in this register cannot be changed while the serial port is powered up.

XSP sample rate fractional divide numerator LSB. Along with XSP_M_MSB/LSB, selects the fractional divide value for
setting the SCLK frequency.
(Default) XSP_N = 1

120

DS1155F2

7.3.13 XSP Numerator 2

R/W

Default

7

0

Bits

Name

6

0

5

0

4

0

XSP_N_MSB

3

0

Description

CS43131
7.3 ASP and XSP Registers

Address 0x40021

2

0

1

0

0

0

7:0 XSP_N_MSB The value in this register cannot be changed while the serial port is powered up.

XSP sample rate fractional divide numerator MSB. Along with XSP_M_MSB/LSB, selects the fractional divide value for
setting the SCLK frequency.
(Default) XSP_N = 1

7.3.14 XSP Denominator 1

R/W

Default

7

0

Bits

Name

6

0

5

0

4

0

XSP_M_LSB

3

0

Description

Address 0x40022

2

0

1

1

0

0

7:0 XSP_M_LSB The value in this register cannot be changed while the serial port is powered up.

XSP sample rate fractional divide denominator LSB. Along with XSP_N_MSB/LSB, selects the fractional divide value for
setting the SCLK frequency.
(Default) XSP_M = 2

7.3.15 XSP Denominator 2

R/W

Default

7

0

Bits

Name

6

0

5

0

XSP_M_MSB

4

0

3

0

Description

Address 0x40023

2

0

1

0

0

0

7:0 XSP_M_MSB The value in this register cannot be changed while the serial port is powered up.

XSP sample rate fractional divide denominator MSB. Along with XSP_N_MSB/LSB, selects the fractional divide value
for setting the SCLK frequency.
(Default) XSP_M = 2

7.3.16 XSP LRCK High Time 1

6

0

5

0

3
4
XSP_LCHI_LSB

1

1

Description

Address 0x40024

2

1

1

1

0

1

The value in this register cannot be changed while the serial port is powered up.
XSP LRCK high duration, in units of XSP_SCLK periods stored in XSP_LCHI_LSB/MSB. This value must be less than
XSP_LCPR.
(Default) XSP_LCHI = 31

7.3.17 XSP LRCK High Time 2

6

0

5

0

4
3
XSP_LCHI_MSB

0

0

Description

Address 0x40025

2

0

1

0

0

0

The value in this register cannot be changed while the serial port is powered up.
XSP LRCK high duration, in units of XSP_SCLK periods stored in XSP_LCHI_LSB/MSB. This value must be less than
XSP_LCPR.
(Default) XSP_LCHI = 31

R/W

Default

7

0

Bits

7:0

Name

XSP_LCHI_
LSB

R/W

Default

7

0

Bits

7:0

Name

XSP_LCHI_
MSB

DS1155F2

121

7.3.18 XSP LRCK Period 1

R/W

Default

7

0

Bits

Name

7:0 XSP_LCPR_

LSB

6

0

5

1

4
3
XSP_LCPR_LSB

1

1

Description

2

1

The value in this register cannot be changed while the serial port is powered up.
XSP LRCK period, in units of XSP_SCLK periods stored in XSP_LCPR_LSB/MSB.
(Default) XSP_LCPR = 63

7.3.19 XSP LRCK Period 2

R/W

Default

7

0

Bits

Name

7:0 XSP_LCPR_

MSB

6

0

5

0

4
3
XSP_LCPR_MSB

0

0

Description

2

0

The value in this register cannot be changed while the serial port is powered up.
XSP LRCK period, in units of XSP_SCLK periods stored in XSP_LCPR_LSB/MSB.
(Default) XSP_LCPR = 63

CS43131
7.3 ASP and XSP Registers

Address 0x40026

1

1

1

0

0

1

Address 0x40027

0

0

7.3.20 XSP Clock Configuration

Address 0x40028

R/W

Default

Bits

7:5

7

0

6

—

0

5

0

4

XSP_M/SB

3
XSP_SCPOL_
OUT

2
XSP_SCPOL_
IN

1
XSP_LCPOL_
OUT

0
XSP_LCPOL_
IN

0

1

1

0

0

Name

—

Reserved

Description

4

XSP_M/SB XSP port master or slave configuration.

0 (Default) Slave Mode (input)
1 Master Mode (output)

3 XSP_SCPOL_

XSP SCLK output drive polarity.

OUT

0 Normal
1 (Default) Inverted

2 XSP_SCPOL_

XSP SCLK input polarity (pad to logic).

IN

0 Normal
1 (Default) Inverted

1

0

XSP_LCPOL_
OUT

XSP_LCPOL_
IN

XSP LRCK output drive polarity.

0 (Default) Normal
1 Inverted

XSP LRCK input polarity (pad to logic).

0 (Default) Normal
1 Inverted

7.3.21 XSP Frame Configuration

Address 0x40029

R/W

Default

Bits

7:5

4

3

122

7

0

Name

—

Reserved

6
—

0

5

0

4
XSP_STP

3
XSP_5050

0

1

2

0

1
XSP_FSD

1

0

0

Description

XSP_STP

XSP start phase. Controls which LRCK/FSYNC phase starts a frame.

0 (Default) The frame begins when LRCK/FSYNC transitions from high to low
1 The frame begins when LRCK/FSYNC transitions from low to high

XSP_5050

XSP LRCK fixed 50/50 duty cycle.

0 Programmable duty cycle per XSP_LCHI and XSP_LCPR
1 (Default) Fixed 50% duty cycle

DS1155F2

CS43131
7.3 ASP and XSP Registers

Bits

2:0

Name

Description

XSP_FSD

XSP frame start delay (units of XSP_SCLK periods).

000 0 delay
001 0.5 delay
010 (Default) 1.0 delay
...
101 2.5 delay
110–111 Reserved

7.3.22 ASP Channel 1 and 2 Location

Address 0x50000, 0x50001

R/W

Default

7

0

Bits

Name

6

0

5

0

ASP_RX_CH1

ASP_RX_CH2

4

0

3

0

Description

2

0

1

0

0

0

7:0 ASP_RX_CHn ASP Rx channel n location. Sets the location in ASP_SCLK periods of the ASP Rx channel n from the start of the TDM

frame.

0x00 Start on SCLK 0
...
0xFF Start on SCLK 255

Defaults are 0x00.

7.3.23 ASP Channel 1 Size and Enable

R/W

Default

7

0

6

0

—

5

0

7.3.24 ASP Channel 2 Size and Enable

R/W

Default

Bits

7:4

7

0

6

0

—

5

0

Name

—

Reserved

4

0

4

0

3
ASP_RX_CH1_
AP

2
ASP_RX_CH1_
EN

0

1

3
ASP_RX_CH2_
AP

2
ASP_RX_CH2_
EN

Address 0x5000A

1

0

ASP_RX_CH1_RES

1

1

0

Address 0x5000B

0

ASP_RX_CH2_RES

1

1

1

0

Description

3

2

ASP_RX_
CHn_AP

ASP_RX_
CHn_EN

1:0

ASP_RX_
CHn_RES

ASP RX channel n active phase. Valid only in 50/50 mode (ASP_5050 = 1).

0 (Default when n = 1) In 50/50 mode, channel data is input when LRCK/FSYNC is low
1 (Default when n = 2) In 50/50 mode, channel data is input when LRCK/FSYNC is high

ASP RX channel n enable. Configures the state of the data for the ASP on channel n. The same rule applies to CHx_EN.

0 (Default) Input channel data is not propagated to the internal data path
1 Input channel data is propagated to the internal data path

ASP RX channel n size (in bits). Sets the output resolution of the ASP RX channel n samples.

00 8 bits per sample
01 16 bits per sample
10 (Default) 24 bits per sample
11 32 bits per sample

DS1155F2

123

7.3.25 XSP Channel 1 and 2 Location

R/W

Default

7

0

Bits

Name

6

0

5

0

XSP_RX_CH1

XSP_RX_CH2

4

0

3

0

Description

CS43131
7.4 DSD Registers

Address 0x60000, 0x60001

2

0

1

0

0

0

7:0 XSP_RX_CHn XSP Rx channel n location. Sets the location in XSP_SCLK periods of the XSP Rx channel n from the start of the TDM

frame.

0x00 Start on SCLK 0
...
0xFF Start on SCLK 255

Defaults are 0x00.

7.3.26 XSP Channel 1 Size and Enable

R/W

Default

7

0

6

0

—

5

0

7.3.27 XSP Channel 2 Size and Enable

R/W

Default

Bits

7:4

7

0

6

0

—

5

0

Name

—

Reserved

4

0

4

0

3
XSP_RX_CH1_
AP

2
XSP_RX_CH1_
EN

0

1

3
XSP_RX_CH2_
AP

2
XSP_RX_CH2_
EN

Address 0x6000A

1

0

XSP_RX_CH1_RES

1

1

0

Address 0x6000B

1

XSP_RX_CH2_RES

1

1

1

0

Description

3

2

XSP_RX_
CHn_AP

XSP_RX_
CHn_EN

1:0

XSP_RX_
CHn_RES

XSP Rx channel n active phase. Valid only in 50/50 mode (XSP_5050 = 1).

0 (Default when n = 1) In 50/50 mode, channel data is input when LRCK/FSYNC is low
1 (Default when n = 2) In 50/50 mode, channel data is input when LRCK/FSYNC is high

XSP Rx channel n enable. Configures the state of the data for the XSP on channel n. The same rule applies to CHx_EN.

0 Input channel data is not propagated to the internal data path
1 (Default) Input channel data is propagated to the internal data path

XSP Rx channel n size (in bits). Sets the output resolution of the XSP Rx channel n samples.

00 8 bits per sample
01 16 bits per sample
10 (Default) 24 bits per sample
11 32 bits per sample

7.4  DSD Registers

7.4.1
R/W

Default

DSD Volume B

7

0

6

1

Bits

7:0

Name

DSD_
VOLUME_B

5

1

4
3
DSD_VOLUME_B

1

1

Description

Address 0x70000

2

0

1

0

0

0

Digital volume control registers for DSD processor channel B. It allows independent control of the signal level in 1/2 dB
increments from 0 dB. Volume settings are decoded as shown below. The volume changes are dictated by the DSD_
SZC bit. The same condition applies to DSD_VOLUME_A setting.

0000 0000 0 dB
0000 0001 –0.5 dB
...
01111000 –60 dB (Default)
...
1111 1110 –127 dB
1111 1111 Digital mute

124

DS1155F2

CS43131
7.4 DSD Registers

Address 0x70001

0

0

Address 0x70002

0

1

0

1

DSD_MUTE_A DSD_MUTE_B

4
3
DSD_VOLUME_A

1

1

Description

2

0

Digital volume control registers for channel A. See DSD_VOLUME_B for description.

7.4.2
R/W

Default

DSD Volume A

7

0

6

1

5

1

Bits

7:0

Name

DSD_
VOLUME_A

7.4.3
R/W

DSD Processor Path Signal Control 1

7
DSD_RAMP_
UP

6
DSD_VOL_
BEQA

5

DSD_SZC

3

DSD_AMUTE

2
DSD_AMUTE_
BEQA

4

—

0

Default

1

0

1

1

0

0

0

Bits

Name

Description

7

6

5

4

3

2

1

0

DSD_RAMP_
UP

DSD_VOL_
BEQA

Soft volume ramp-up after error. An unmute is performed after any error is recovered.

0 Immediate unmute is performed
1 (Default) Unmute behavior is controlled by DSD_SZC settings

DSD_VOLUME_B equals DSD_VOLUME_A.

0  (Default) Volume setting of both channels in DSD processor are controlled independently
1 Volume setting of both channels are controlled by DSD_VOLUME_A. DSD_VOLUME_B is ignored

DSD_SZC

Soft ramp control.

0 Immediate change
1 (Default) Soft ramp

—

Reserved

DSD_AMUTE DSD auto mute.

0 Function disabled
1 (Default) Mute occurs after reception of 256 repeated 8-bit DSD mute patterns. A single bit not fitting the repeated

pattern releases the mute. Detection and muting is done independently for each channel.

DSD_
AMUTE_
BEQA

DSD Processor Auto mute channel B equals channel A.

0 (Default) Function disabled
1 Only mute when both channels AMUTE conditions are detected

DSD_MUTE_
A

DSD Processor Channel A mute.
0 (Default) Function is disabled
1 Channel output is muted. Muting function is affected by the DSD_SZC bit

DSD_MUTE_
B

DSD Processor Channel B mute.
0 (Default) Function is disabled.
1 Channel output is muted. Muting function is affected by the DSD_SZC bit.

7.4.4
R/W

Default

Bits

7:3

DSD Interface Configuration

Address 0x70003

7

0

Name

—

Reserved

6
—

0

5

0

4
—

0

3
—

0

2
DSD_M/SB

1

0

DSD_PM_EN DSD_PM_SEL

0

0

0

Description

2

DSD_M/SB DSD clock master or Slave Mode.

0 (Default) Slave Mode
1 Master Mode

1

DSD_PM_EN DSD phase modulation mode. Can only be used when DSD_SPEED = 00 (64•Fs) or 01 (128•Fs).

0 (Default) this function is disabled (DSD normal mode)
1 DSD phase modulation input mode is enabled, and the DSD_PM_SEL bit must be set accordingly.

0 DSD_PM_SEL DSD phase modulation mode select.

0 (Default) The 2x data rate (BCKA) clock must be input to DSD_SCLK for phase modulation mode.
1 The 1x data rate (BCKD) clock must be input to DSD_SCLK for phase modulation mode.

DS1155F2

125

DSD Processor Path Signal Control 2

CS43131
7.4 DSD Registers

Address 0x70004

7

—

0

6

5

4

DSD_PRC_SRC

DSD_EN

0

0

0

3

0

DSD_SPEED

2

0

1
STA_DSD_
DET

0

INV_DSD_DET

1

0

7.4.5
R/W

Default

Description

Bits

7

6:5

Name

—

Reserved

DSD_PRC_
SRC

Select the source for DSD processor.

00 (Default) DSD interface
01 Reserved
10 ASP
11 XSP

4

DSD_EN

Enable DSD playback.

0 (Default) Function disabled
1 DSD playback is enabled

3:2 DSD_SPEED Setup DSD clock speed.

00 (Default) 64•Fs
01 128•Fs
10 256•Fs
11 Reserved

1

0

STA_DSD_
DET

INV_DSD_
DET

Static DSD detection.
0 Function disabled
1 (Default) Static DSD detection is enabled. The DSD processor checks for 28 consecutive zeros or ones and, if

detected, sets the DSD_STUCK_INT interrupt status bit and mutes the output until the static condition is cleared. If
DSD_AMUTE is enabled, AMUTE will be in effect in this scenario.

Invalid DSD detection.

0 (Default) Function disabled
1 Invalid DSD detection is enabled. The DSD processor checks for 25 out of 28 bits of the same value and, if

detected, sets the DSD_INVAL_A_INT and/or DSD_INVAL_B_INT interrupt status bits.

7.4.6
R/W

Default

Bits

7:2

1

DSD and PCM Mixing Control

7

0

6

0

5

0

—

4

0

Name

—

Reserved

3

0

Description

Address 0x70005

2

0

1
MIX_PCM_
PREP

0
MIX_PCM_
DSD

0

0

MIX_PCM_
PREP

Enable PCM playback path for PCM and DSD mixing. This bit must be set prior to setting MIX_PCM_DSD. Disable this
bit after disabling MIX_PCM_DSD. This mode requires DSD_EN to be enabled and DSD_PRC_SRC set to receive DSD
through either the DSD interface or XSP.

0 (Default) Function disabled
1 Enable PCM playback path for PCM and DSD mixing

0

MIX_PCM_
DSD

Enable PCM stream mixing into DSD stream. This bit must be set only after MIX_PCM_PREP is enabled. Disable this
bit prior to disabling MIX_PCM_PREP bit. This mode requires DSD_EN to be enabled and DSD_PRC_SRC set to
receive DSD through either the DSD interface or XSP.

0 (Default) Function disabled
1 Enable PCM stream mixing into the DSD stream

7.4.7
R/W

DSD Processor Path Signal Control 3

Address 0x70006

7

6

DSD_ZERODB DSD_HPF_EN

Default

0

1

5

—

0

4
SIGCTL_
DSDEQPCM

3

2

DSD_INV_A

DSD_INV_B

1
DSD_SWAP_
CHAN

0
DSD_COPY_
CHAN

0

0

0

0

0

Setting on DSD stream volume to match PCM stream volume.

0 (Default) The SACD +3.1-dB level (71% modulation index) matches PCM 0 dB full scale.
1 The SACD 0-dB reference level (50% modulation index) matches PCM 0 dB full scale.

Description

Bits

7

Name

DSD_
ZERODB

126

DS1155F2

Bits

Name

Description

6 DSD_HPF_EN Enable the high pass filter in the DSD processor.

CS43131
7.5 Headphone  and PCM Registers

5

4

3

2

1

0

0 HPF disabled
1 (Default) Enable HPF in the DSD processor

—

Reserved

SIGCTL_
DSDEQPCM

Enable DSD signal path control register bits to be controlled by PCM setting. DSD setting is ignored. Register bits
affected are the following:
DSD_RAMP_UP, DSD_VOL_BEQA, DSD_SZC, DSD_AMUTE, DSD_AMUTE_BEQA, DSD_MUTE_A, DSD_MUTE_B,
DSD_INV_A, DSD_INV_B, DSD_SWAP_CHAN, DSD_COPY_CHAN
After set, each DSD_x register bit is equal to setting of PCM_x register bit.

0 (Default) Function is disabled
1 Function is enabled

DSD_INV_A DSD Processor Channel A signal invert.

0 (Default) Function is disabled
1 Signal polarity of channel A is inverted

DSD_INV_B DSD Processor Channel B signal invert

0 (Default) the function is disabled
1 Signal polarity of channel B is inverted

DSD_SWAP_
CHAN

DSD_COPY_
CHAN

Swap channels A and B at the input. This bit takes effect before DSD_COPY_CHAN and DSD_INV_x.

0 (Default) Function disabled
1 Enable channel A and B swapping

Copy channel A to channel B. This bit takes effect after DSD_SWAP_CHAN, but before DSD_INV_x.

0 (Default) Function disabled
1 Enable copy A to B function

7.5  Headphone  and PCM Registers

7.5.1
R/W

HP Output Control 1

7

6

HP_CLAMPA HP_CLAMPB

Default

0

0

5

1

OUT_FS

4

1

3
HP_IN_EN

2
HP_IN_LP

0

0

1
—

0

0
+1dB_EN

0

Address 0x80000

Bits

Name

Description

7

HP_CLAMPA Opt-out on clamping HPOUTA output to ground when PDN_HP is enabled.

0 (Default) Function disabled. HPOUTA is clamped when PDN_HP is set and HP_IN_EN is cleared. HPOUT is not

clamped when PDN_HP is cleared.

1 HPOUTA clamp is released if and only if PDN_HP is set.

6

HP_CLAMPB Opt-out on clamping HPOUTB output to ground when PDN_HP is enabled.

0 (Default) Function disabled. HPOUTB is clamped when PDN_HP is set and HP_IN_EN is cleared. HPOUT is not

clamped when PDN_HP is cleared.

1 HPOUTB clamp is released if and only if PDN_HP is set.

5:4

OUT_FS

Output full scale setting. This setting must only be updated when PDN_HP is set.

00 0.5 V
01 1 V
10 1.41 V
11 (Default) 1.73 V

HP_IN_EN HPIN switches enable.

0 (Default) Switch open
1 Switch closed

HP_IN_LP When selected, HPIN mode is placed into low power mode. This setting is only in effect when HP_IN_EN = 1. It should
only be set after HP_IN_EN = 1. It should be cleared before HP_IN_EN is cleared. When HP_IN_LP = 1, the maximum
supported speed for I2C is 400 kHz.

0 (Default) HPINx path is not in the power mode.
1 HPINx path is in the low power mode.

—

Reserved

+1dB_EN

If selected, output full scale voltage is at 2 V. This setting is only in effect when OUT_FS = 11 and HV_EN = 1. This setting
is ignored if OUT_FS and HV_EN is set to any other settings. It should only be updated when PDN_HP is set.

0 (Default) Output full scale voltage is determined by OUT_FS setting.
1 Output full scale voltage is at 2 V.

3

2

1

0

DS1155F2

127

7.5.2
R/W

PCM Filter Option

7
FILTER_
SLOW_FASTB

6
PHCOMP_
LOWLATB

Default

0

0

5

NOS

0

Bits

Name

4

0

—

3

0

Description

CS43131
7.5 Headphone  and PCM Registers

Address 0x90000

2

1

0

PCM_WBF_EN HIGH_PASS

DEEMP_ON

0

1

0

7

6

5

4:3

2

1

0

FILTER_
SLOW_
FASTB

PHCOMP_
LOWLATB

Fast and slow filter selection.

0 (Default) Fast filter is selected.
1 Slow filter is selected.

Low-latency and phase-compensated filter selection

0 (Default) Low-latency is selected.
1 Phase-compensated filter is selected.

NOS

Nonoversampling emulation mode on. When enabled, FILTER_SLOW_FASTB and PHCOMP_LOWLATB are ignored.

0 (Default) NOS emulation mode is off.
1  NOS emulation mode is on.

—

Reserved

PCM_WBF_
EN

Wideband flatness mode enable. This should only be used in PCM playback when xSP sample rate is at 192 kHz. This
bit must be changed while PDN_HP is set.

0 (Default) Wideband flatness mode disabled
1 Wideband flatness mode enabled

HIGH_PASS High-pass filter enable.

0 High-pass filter is disabled.
1 (Default) High-pass filter is selected.

DEEMP_ON Deemphasis filter on.

0 (Default) Deemphasis for 44.1 kHz is disabled.
1 Deemphasis for 44.1 kHz is enabled.

4
3
PCM_VOLUME_B

1

1

Description

Address 0x90001

2

0

1

0

0

0

Digital volume control registers for PCM channel B. It allows independent control of the signal level in 1/2 dB increments
from 0 to –127.5 dB. Volume settings are decoded as shown below. The volume changes are dictated by the PCM_SZC
bits. The same rule applies to PCM_VOLUME_A setting.

7.5.3
R/W

Default

PCM Volume B

7

0

6

1

5

1

Bits

7:0

Name

PCM_
VOLUME_B

0000 0000 0 dB
0000 0001 –0.5 dB
...
01111000 –60 dB (Default)
...
1111 1110 –127 dB
1111 1111 Digital mute

7.5.4
R/W

Default

PCM Volume A

7

0

6

1

5

1

Bits

7:0

Name

PCM_
VOLUME_A

3
4
PCM_VOLUME_A

1

1

Description

Address 0x90002

2

0

1

0

0

0

Digital volume control registers for channel A. See PCM_VOLUME_B for description.

128

DS1155F2

PCM Path Signal Control 1

Address 0x90003

CS43131
7.5 Headphone  and PCM Registers

7.5.5
R/W

7
PCM_RAMP_
DOWN

6
PCM_VOL_
BEQA

Default

1

0

Bits

Name

5

1

PCM_SZC

4

0

3

PCM_AMUTE

2
PCM_
AMUTEBEQA

1

0

PCM_MUTE_A PCM_MUTE_B

1

0

0

0

Description

7

6

PCM_RAMP_
DOWN

Soft volume ramp-down before filter mode change. A mute is performed before filter mode change and an unmute is
performed after executing the filter mode change.

PCM_VOL_
BEQA

0 Immediate mute is performed prior to executing a filter mode change
1 (Default) This mute and unmute is controlled by PCM_SZC.

PCM_VOLUME_B equals PCM_VOLUME_A.

0  (Default) Volume setting of both channels are controlled independently.
1 Volume setting of both channels are controlled by PCM_VOLUME_A. PCM_VOLUME_B is ignored.

5:4

PCM_SZC Soft ramp and zero cross control.

00 Immediate change
01 In PCM mode, zero cross change
10 (Default) Soft ramp
11 In PCM mode, soft ramp and zero crossings

3

PCM_AMUTE PCM auto mute.

0 Function disabled
1 (Default) Mute occurs after reception of 8,192 consecutive audio samples of static +1, 0, or –1. A single sample of

non-static data releases the mute. Detection and muting is done independently for each channel.

2

1

0

PCM_
AMUTEBEQA

PCM_MUTE_
A

PCM_MUTE_
B

Auto mute channel B equals channel A.

0 (Default) Function disabled.
1 Only mute when both channels AMUTE conditions are detected.

Channel A mute.

0 (Default) Function is disabled.
1 Channel output is muted. Muting function is affected by the PCM_SZC bits.

Channel A mute.

0 (Default) Function is disabled.
1 Channel output is muted. Muting function is affected by the PCM_SZC bits.

7.5.6
R/W

Default

Bits

7:4

PCM Path Signal Control 2

Address 0x90004

7

0

6

0

—

5

0

4

0

3

2

PCM_INV_A

PCM_INV_B

1
PCM_SWAP_
CHAN

0
PCM_COPY_
CHAN

0

0

0

0

Name

—

Reserved

Description

3

2

1

0

PCM_INV_A Channel A signal invert.

0 (Default) Function is disabled
1 Signal polarity of channel A is inverted

PCM_INV_B Channel B signal invert.

0 (Default) the function is disabled
1 Signal polarity of channel B is inverted

PCM_SWAP_
CHAN

PCM_COPY_
CHAN

Swap channels A and B at the input. This bit takes effect before PCM_COPY_CHAN.

0 (Default) Function disabled
1 Enable channel A and B swapping

Copy channel A to channel B. This bit takes effect after PCM_SWAP_CHAN.

0 (Default) Function disabled
1 Enable copy A to B function

DS1155F2

129

7.5.7
R/W

Default

Bits

7:6

Programmable Filter Control 1

7

0

SOS1_CTRL

6

0

5

0

SOS2_CTRL

Name

SOS1_CTRL SOS1 filter control.

00 SOS1 filter disabled.
01 Reserved.
10 Reserved.
11 SOS1 filter enabled.

5:4

SOS2_CTRL SOS2 filter control.

00 SOS2 filter disabled.
01 Reserved.
10 Reserved.
11 SOS2 filter enabled.

3:2

FOS_CTRL FOS filter control.

00 FOS filter disabled.
01 Reserved.
10 Reserved.
11 FOS filter enabled.

SOS3_ON

SOS3 filter enable.

0 (default) SOS3 filter is disabled.
1 SOS3 filter is enabled.

—

Reserved

Programmable Filter Control 2

7

0

6

0

—

5

0

Name

—

Reserved

CS43131
7.5 Headphone  and PCM Registers

Address 0x9 000A

3

0

FOS_CTRL

2

0

1
SOS3_ON

0

0
—

0

Description

Address 0x9 000B

3
SOS1_
COEFF_CP

2
SOS2_
COEFF_CP

1
FOS_COEFF_
CP

0

0

0

0

—

0

Description

4

0

4

0

SOS1_
COEFF_CP

SOS2_
COEFF_CP

FOS_COEFF_
CP

Enable SOS1 coefficients from the control port. When the filter is not in use, this bit must be cleared to 0.

0 (default) SOS1 coefficients from the control port are not effective.
1 SOS1 coefficients from the control port are effective.

Enable SOS2 coefficients from the control port. When the filter is not in use, this bit must be cleared to 0.

0 (default) SOS2 coefficients from the control port are not effective.
1 SOS2 coefficients from the control port are effective.

Enable FOS coefficients from the control port. When the filter is not in use, this bit must be cleared to 0.

0 (default) FOS coefficients from the control port are not effective.
1 FOS coefficients from the control port are effective.

—

Reserved

Programmable Filter Coefficients

Address 0x9000C–0x90041

7

6

5

4

3

2

1

0

xOSx_COEFF_xx_LSBYTE

xOSx_COEFF_xx_MSBYTE

—

See Quick Reference

Description

Refer to Section 4.14 for details. Format is Q1.17.

Default

Bits

7:0

Name

See Quick
Reference

xOSx_COEFF_
xx_SIGN

130

DS1155F2

1

0

7.5.8
R/W

Default

Bits

7:4

3

2

1

0

7.5.9
R/W

CS43131
7.5 Headphone  and PCM Registers

Address 0xB0000

2

1

1
HV_EN

1

0
EXT_VCPFILT

0

7.5.10 Class H Control

R/W

Default

Bits

7:5

4:2

6
—

0

5

0

7

0

Name

—

Reserved

4

1

3
ADPT_PWR

1

Description

ADPT_PWR Adaptive power adjustment. Configures how power to HP amplifiers adapts to the output signal level.

000 Reserved
001 Fixed, Mode 0 (±VP_LDO)
010 Fixed, Mode 1 (±VCP)
011–110 Reserved
111 (Default) Adapt to signal. The output signal dynamically determines the voltage level.

1

HV_EN

High voltage mode enable.

0 Function disabled (VP_LDO = 2.6V)
1 (Default) Function enabled (VP_LDO = 3.0 V). This requires VP min to be 3.3 V. Also, this mode only applies to

0 EXT_VCPFILT External VCP_FILT± voltage mode.

load 600  and above.

0 (Default) Function disabled
1 When enabled, VCP_FILT± voltages can be provided externally at ±3.0 V. See power sequencing/timing

requirement in related functional description.

Address 0xD0000

0

—

0

7.5.11 HP Detect

R/W

7

6

HPDETECT_CTRL

5
HPDETECT_
INV

4

3

2

1

HPDETECT_RISE_DBC_TIME HPDETECT_FALL_DBC_TIME

Default

0

0

0

0

0

1

0

Bits

Name

Description

7:6 HPDETECT_

CTRL

HP detect control. Configures operation of the HP detect circuit. The internal weak current source pull-up is enabled in
all modes.

00 (Default) Disabled. The HP detect digital circuit is powered down and does not report to the status registers

(HPDETECT_PLUG_INT and HPDETECT_UNPLUG_INT are also cleared).

5

HPDETECT_
INV

4:3 HPDETECT_
RISE_DBC_
TIME

2:1 HPDETECT_
FALL_DBC_
TIME

01–10 Reserved
11 Enabled

HP detect invert. Can be used to invert the signal from the HP detect circuit.

0 (Default) Not inverted
1 Inverted

Tip sense rising debounce time.

00 (Default) 0 ms
01 250 ms
10 500 ms
11 1.0 s

Tip sense falling debounce time.

00 0 ms
01 250 ms
10 (Default) 500 ms
11 1.0 s

0

—

Reserved

7.5.12 HP Status

R/O

Default

7

—

0

Bits

Name

6
HPDETECT_
PLUG_DBC

5
HPDETECT_
UNPLUG_DNC

0

0

4

0

3

0

Description

Address 0xD0001

2

—

0

1

0

0

0

7

6

—

Reserved

HPDETECT_
PLUG_DBC

HPDETECT plug debounce status. Setting HPDETECT_INV reverses the meaning of this bit.

0 (Default) Condition is not present
1 Condition is present

DS1155F2

131

CS43131
7.5 Headphone  and PCM Registers

Bits

5

Name

HPDETECT_
UNPLUG_
DBC

HPDETECT unplug debounce status. Setting HPDETECT_INV reverses the meaning of this bit.

Description

0 (Default) Condition is not present
1 Condition is present

4:0

—

Reserved

7.5.13 HP Load 1

R/W

7

HPLOAD_EN

Default

0

Bits

Name

6

0

—

5

0

4
HPLOAD_
CHN_SEL

0

3

0

—

2

0

1
HPLOAD_AC_
START

0
HPLOAD_DC_
START

0

0

Description

Address 0xE0000

7

HPLOAD_EN HP load enable.

6:5

4

0 (Default) Function disabled
1 Function enabled

—

Reserved

HPLOAD_
CHN_SEL

Select channel to perform HP load measurement.

0 (Default) HPOUTA
1 HPOUTB

3:2

—

Reserved

1 HPLOAD_AC_

START

HP load AC measurement trigger. A change from 0 to 1 initiates the measurement process. After the measurement
completes, this bit must be manually changed back to 0 before initiating another process.
(Default) HPLOAD_AC_START = 0

0

HPLOAD_
DC_START

HP load DC measurement trigger. A change from 0 to 1 initiates the measurement process. After measurement
complete, this bit must be manually changed back to 0 before initiating another process.
(Default) HPLOAD_DC_START = 0

7.5.14 HP Load Measurement 1

Address 0xE0003

7

0

Name

6

0

5

0

4

3

HPLOAD_MEAS_FREQ_LSB

0

0

2

0

1

0

0

0

Description

HPLOAD_
MEAS_
FREQ_LSB

LSB of HP load measurement frequency selection for AC detect (5.86 Hz/lsb when MCLK_INT = 24.576 MHz. 5.94 Hz/
lsb when MCLK_INT = 22.5792 MHz). Frequency range is 20 Hz to 20 kHz.
Default: 0000 0000

7.5.15 HP Load Measurement 2

Address 0xE0004

7

0

Name

6

0

5

0

4

3

HPLOAD_MEAS_FREQ_MSB

0

0

2

0

1

0

0

0

Description

HPLOAD_
MEAS_
FREQ_MSB

MSB of HP load measurement frequency selection for AC detect (5.86 Hz/lsb when MCLK_INT = 24.576 MHz. 5.94 Hz/
lsb when MCLK_INT = 22.5792 MHz). Frequency range is 20 Hz to 20 kHz.
Default: 0000 0000

DS1155F2

R/W

Default

Bits

7:0

R/W

Default

Bits

7:0

132

R/O

Default

Bits

7:0

7

0

Name

RL_DC_
STAT_0

R/O

Default

Bits

7:0

7

0

Name

RL_DC_
STAT_1

[2]: 0.5
[1]: 0.25
[0]: 0.125

Default: 0000000

7.5.17 HP DC Load Status 1

7.5.16 HP DC Load Status 0

6

0

5

0

4
3
RL_DC_STAT_0

0

0

Description

Byte 0 of HP DC load measured in .RL_DC_STAT_1[7:0] and RL_DC_STAT_0[7:3] represent integer portion of
impedance value.
RL_DC_STAT_0[2:0] represent fractional portion, with fractional weighting as follows:

CS43131
7.5 Headphone  and PCM Registers

Address 0xE000D

2

0

1

0

0

0

6

0

5

0

4
3
RL_DC_STAT_1

0

0

Description

Address 0xE000E

2

0

1

0

0

0

Byte 1 of HP DC load measured in .Refer to RL_DC_STAT_0 for details of measurement interpretation.
Default: 0000000

7.5.18 HP AC Load Status 0

R/O

Default

Bits

7:0

7

0

Name

RL_AC_
STAT_0

6

0

5

0

4
3
RL_AC_STAT_0

0

0

Description

2

0

Byte 0 of HP AC load measured in .
RL_AC_STAT_1[7:0] and RL_AC_STAT_0[7:3] represent integer portion of impedance value.
RL_AC_STAT_0[2:0] represent fractional portion, with fractional weighting as follows:

[2]: 0.5
[1]: 0.25
[0]: 0.125

Default: 0000000

7.5.19 HP AC Load Status 1

R/O

Default

Bits

7:0

7

0

Name

RL_AC_
STAT_1

6

0

5

0

4
3
RL_AC_STAT_1

0

0

Description

2

0

Byte 1 of HP AC load measured in .Refer to RL_AC_STAT_0 for details of measurement interpretation.
Default: 0000000

Address 0xE0010

0

0

Address 0xE0011

0

0

1

0

1

0

7.5.20 HP Load Status

R/O

7
HPLOAD_DC_
ONCE

6
HPLOAD_
BUSY

Default

0

0

5

0

—

4

0

3
HPLOAD_AC_
DONE

2
HPLOAD_AC_
BUSY

1
HPLOAD_DC_
DONE

0
HPLOAD_DC_
BUSY

0

0

0

0

Address 0xE001A

Bits

Name

7

6

HPLOAD_
DC_ONCE

HPLOAD_
BUSY

DS1155F2

Status of HP load DC measurement been performed at least once.

Description

0 Condition is not present
1 Condition is present

Status of HP load measurement block state machine.

0 State machine is not busy
1 State machine is busy

133

CS43131
7.6 Interrupt Status and Mask Registers

Bits

5:4

Name

—

Reserved

Description

3 HPLOAD_AC_

HP load AC measurement is done status.

DONE

0 Condition is not present
1 Condition is present

2 HPLOAD_AC_

HP AC load measurement is “in process” status.

BUSY

HPLOAD_
DC_DONE

HPLOAD_
DC_BUSY

1

0

0 Condition is not present
1 Condition is present

HP load DC measurement is done status.

0 Condition is not present
1 Condition is present

HP DC load measurement is “in process” status.

0 Condition is not present
1 Condition is present

7.6  Interrupt Status and Mask Registers

7.6.1
R/O

Interrupt Status 1

Address 0xF0000

7
DAC_OVFL_
INT

6
HPDETECT_
PLUG_INT

5
HPDETECT_
UNPLUG_INT

4
XTAL_READY_
INT

3
XTAL_
ERROR_INT

2
PLL_READY_
INT

1
PLL_ERROR_
INT

0
PDN_DONE_
INT

Default

0

0

0

0

0

0

0

0

Bits

Name

Description

7

6

5

4

3

2

DAC_OVFL_
INT

HPDETECT_
PLUG_INT

HPDETECT_
UNPLUG_INT

XTAL_
READY_INT

XTAL_
ERROR_INT

PLL_READY_
INT

Status indicating DAC modulator overflow condition is detected.

0 Condition is not present
1 Condition is present

Status indicating HP plug event is detected.

0 Condition is not present
1 Condition is present

Status indicating HP unplug event is detected.

0 Condition is not present
1 Condition is present

Status indicating XTAL is ready after PDN_XTAL is cleared.

0 Condition is not present
1 Condition is present

Status indicating XTAL error condition is detected after PDN_XTAL is cleared.

0 Condition is not present
1 Condition is present

Status indicating PLL ready condition is detected after PLL_START is set.

0 Condition is not present
1 Condition is present

1 PLL_ERROR_

Status indicating PLL error condition is detected after PLL_START is set.

INT

0 Condition is not present
1 Condition is present

0

PDN_DONE_
INT

Status indicating PDN_HP process is completed after a request.

0 Condition is not present
1 Condition is present

7.6.2
R/O

Interrupt Status 2

7
ASP_OVFL_
INT

6
ASP_ERROR_
INT

5
ASP_LATE_
INT

4
ASP_EARLY_
INT

3
ASP_
NOLRCK_INT

Default

0

0

0

0

0

Address 0xF0001

2

0

1

—

0

0

0

Bits

7

Name

ASP_OVFL_
INT

ASP RX request overload.

0 Condition is not present
1 Condition is present

Description

134

DS1155F2

ASP RX LRCK error. Logical OR of LRCK early and LRCK late errors.

Description

CS43131
7.6 Interrupt Status and Mask Registers

0 Condition is not present
1 Condition is present

ASP RX LRCK late.

0 Condition is not present
1 Condition is present

ASP RX LRCK early.

0 Condition is not present
1 Condition is present

ASP RX no LRCK.

0 Condition is not present
1 Condition is present

Bits

Name

6

5

4

3

ASP_
ERROR_INT

ASP_LATE_
INT

ASP_EARLY_
INT

ASP_
NOLRCK_INT

2:0

—

Reserved

7.6.3
R/O

Interrupt Status 3

7
XSP_OVFL_
INT

6
XSP_ERROR_
INT

5
XSP_LATE_
INT

4
XSP_EARLY_
INT

3
XSP_
NOLRCK_INT

Default

0

0

0

0

0

Address 0xF0002

2

0

1

—

0

0

0

Bits

Name

7

6

5

4

3

XSP_OVFL_
INT

XSP_
ERROR_INT

XSP_LATE_
INT

XSP_EARLY_
INT

XSP_
NOLRCK_INT

XSP RX request overload.

0 Condition is not present
1 Condition is present

XSP RX LRCK error. Logical OR of LRCK early and LRCK late errors.

Description

0 Condition is not present
1 Condition is present

XSP RX LRCK late.

0 Condition is not present
1 Condition is present

XSP RX LRCK early.

0 Condition is not present
1 Condition is present

XSP RX no LRCK.

0 Condition is not present
1 Condition is present

2:0

—

Reserved

7.6.4
R/O

Interrupt Status 4

Address 0xF0003

7
HPLOAD_NO_
DC_INT

6
HPLOAD_
UNPLUG_INT

5
HPLOAD_
HPON_INT

4
HPLOAD_
OOR_INT

3
HPLOAD_AC_
DONE_INT

2
HPLOAD_DC_
DONE_INT

1
HPLOAD_
OFF_INT

0
HPLOAD_ON_
INT

Default

0

0

0

0

0

0

0

0

Description

HP load error condition: AC load detection is performed without DC load detection done first.

0 Condition is not present
1 Condition is present

HP load error condition: Unplug event happened during load detection process.

0 Condition is not present
1 Condition is present

HP load error condition: HPLOAD_EN is set before PDN_HP is set and PDN_DONE_INT event is received.

0 Condition is not present
1 Condition is present

HP load error condition: HPLOAD out of range result is measured.

0 Condition is not present
1 Condition is present

Bits

Name

7

6

5

4

HPLOAD_
NO_DC_INT

HPLOAD_
UNPLUG_INT

HPLOAD_
HPON_INT

HPLOAD_
OOR_INT

DS1155F2

135

CS43131
7.6 Interrupt Status and Mask Registers

Bits

Name

3 HPLOAD_AC_

DONE_INT

2

1

0

HPLOAD_
DC_DONE_
INT

HPLOAD_
OFF_INT

HPLOAD_
ON_INT

Description

Status indicating HP AC load measurement is completed.

0 Condition is not present
1 Condition is present

Status indicating HP DC load measurement is completed.

0 Condition is not present
1 Condition is present

HP load state machine is properly shut down after HPLOAD_EN is cleared.

0 Condition is not present
1 Condition is present

HP load state machine is properly turned on after HPLOAD_EN is set.

0 Condition is not present
1 Condition is present

7.6.5
R/O

Interrupt Status 5

7

6

5

DSD_STUCK_
INT

DSD_INVAL_
A_INT

DSD_INVAL_
B_INT

4
DSD_
SILENCE_A_
INT

3
DSD_
SILENCE_B_
INT

2

1

0

DSD_RATE_
ERROR_INT

DOP_MRK_
DET_INT

DOP_ON_INT

Address 0xF0004

Default

0

0

0

0

0

0

0

0

Bits

Name

7 DSD_STUCK_

INT

6

5

4

3

2

1

DSD_INVAL_
A_INT

DSD_INVAL_
B_INT

DSD_
SILENCE_A_
INT

DSD_
SILENCE_B_
INT

DSD_RATE_
ERROR_INT

DOP_MRK_
DET_INT

Description

At least one DSD input channel is stuck at 0 or 1.

0 Condition is not present
1 Condition is present

Channel A input exceeds the max peak level of +3.1-dB SACD.

0 Condition is not present
1 Condition is present

Channel B input exceeds the max peak level of +3.1-dB SACD.

0 Condition is not present
1 Condition is present

Channel A contains DSD silence pattern.

0 Condition is not present
1 Condition is present

Channel B contains DSD silence pattern.

0 Condition is not present
1 Condition is present

DSD data rate related error is detected. The rate of the input DSD stream is not as described in DSD_SPEED setting. If
missed DoP header(s) is detected, the interrupt will also be triggered.

0 Condition is not present
1 Condition is present

A valid sequence of DoP markers has been detected.

0 Condition is not present
1 Condition is present

0 DOP_ON_INT The DoP decoder is powered up.

0 Condition is not present
1 Condition is present

7.6.6
R/W

Interrupt Mask 1

Address 0xF0010

7

DAC_OVFL_
INT_MASK

6
HPDETECT_
PLUG_INT_
MASK

5
HPDETECT_
UNPLUG_INT_
MASK

4
XTAL_READY_
INT_MASK

3
XTAL_
ERROR_INT_
MASK

2

1

0

PLL_READY_
INT_MASK

PLL_ERROR_
INT_MASK

PDN_DONE_
INT_MASK

Default

1

1

1

1

1

1

1

1

Bits

7

Name

DAC_OVFL_
INT_MASK

DAC_OVFL_INT mask.

0 Unmasked
1 (Default) Masked

Description

136

DS1155F2

CS43131
7.6 Interrupt Status and Mask Registers

Description

Bits

Name

6

5

4

3

2

HPDETECT_
PLUG_INT_
MASK

HPDETECT_
UNPLUG_
INT_MASK

XTAL_
READY_INT_
MASK

XTAL_
ERROR_INT_
MASK

PLL_READY_
INT_MASK

HP_DETECT_PLUG_INT mask.

0 Unmasked
1 (Default) Masked

HP_DETECT_UNPLUG_INT mask.

0 Unmasked
1 (Default) Masked

XTAL_READY_INT mask.

0 Unmasked
1 (Default) Masked

XTAL_ERROR_INT mask.

0 Unmasked
1 (Default) Masked

PLL_READY_INT mask.

0 Unmasked
1 (Default) Masked

1 PLL_ERROR_

PLL_ERROR_INT mask.

INT_MASK

0

PDN_DONE_
INT_MASK

0 Unmasked
1 (Default) Masked

PDN_DONE_INT mask.

0 Unmasked
1 (Default) Masked

7.6.7
R/W

Interrupt Mask 2

7

6

5

4

ASP_OVFL_
INT_MASK

ASP_ERROR_
INT_MASK

ASP_LATE_
INT_MASK

ASP_EARLY_
INT_MASK

3
ASP_
NOLRCK_INT_
MASK

Default

1

1

1

1

1

Bits

Name

Description

7

6

5

4

3

ASP_OVFL_
INT_MASK

ASP_
ERROR_INT_
MASK

ASP_LATE_
INT_MASK

ASP_OVFL_INT mask.

0 Unmasked
1 (Default) Masked

ASP_ERROR_INT mask.

0 Unmasked
1 (Default) Masked

ASP_LATE_INT mask.

0 Unmasked
1 (Default) Masked

ASP_EARLY_
INT_MASK

ASP_EARLY_INT mask.

0 Unmasked
1 (Default) Masked

ASP_
NOLRCK_
INT_MASK

ASP_NOLRCK_INT mask.

0 Unmasked
1 (Default) Masked

2:0

—

Reserved

7.6.8
R/W

Interrupt Mask 3

7

6

5

4

XSP_OVFL_
INT_MASK

XSP_ERROR_
INT_MASK

XSP_LATE_
INT_MASK

XSP_EARLY_
INT_MASK

3
XSP_
NOLRCK_INT_
MASK

Default

1

1

1

1

1

Bits

7

Name

XSP_OVFL_
INT_MASK

XSP_OVFL_INT mask.

0 Unmasked
1 (Default) Masked

Description

2

0

2

0

Address 0xF0011

0

0

Address 0xF0012

0

0

1

—

0

1

—

0

DS1155F2

137

Bits

Name

Description

CS43131
7.6 Interrupt Status and Mask Registers

6

5

4

3

XSP_
ERROR_INT_
MASK

XSP_LATE_
INT_MASK

XSP_EARLY_
INT_MASK

XSP_ERROR_INT mask.

0 Unmasked
1 (Default) Masked

XSP_LATE_INT mask.

0 Unmasked
1 (Default) Masked

XSP_EARLY_INT mask.

0 Unmasked
1 (Default) Masked

XSP_
NOLRCK_
INT_MASK

XSP_NOLRCK_INT mask.

0 Unmasked
1 (Default) Masked

2:0

—

Reserved

7.6.9
R/W

Interrupt Mask 4

7

HPLOAD_NO_
DC_INT_MASK

6
HPLOAD_
UNPLUG_INT_
MASK

5
HPLOAD_
HPON_INT_
MASK

4
HPLOAD_
OOR_INT_
MASK

3
HPLOAD_AC_
DONE_INT_
MASK

2
HPLOAD_DC_
DONE_INT_
MASK

Default

1

1

1

1

1

1

Bits

Name

Description

Address 0xF0013

1
HPLOAD_
OFF_INT_
MASK

1

0

HPLOAD_ON_
INT_MASK

1

7

6

5

4

HPLOAD_
NO_DC_INT_
MASK

HPLOAD_
UNPLUG_
INT_MASK

HPLOAD_
HPON_INT_
MASK

HPLOAD_
OOR_INT_
MASK

HPLOAD_NO_DC_INT mask.

0 Unmasked
1 (Default) Masked

HPLOAD_UNPLUG_INT mask.

0 Unmasked
1 (Default) Masked

HPLOAD_HPON_INT mask.

0 Unmasked
1 (Default) Masked

HPLOAD_OOR_INT mask.

0 Unmasked
1 (Default) Masked

3 HPLOAD_AC_

HPLOAD_AC_DONE_INT mask.

2

1

0

DONE_INT_
MASK

HPLOAD_
DC_DONE_
INT_MASK

HPLOAD_
OFF_INT_
MASK

HPLOAD_
ON_INT_
MASK

0 Unmasked
1 (Default) Masked

HPLOAD_DC_DONE_INT mask.

0 Unmasked
1 (Default) Masked

HPLOAD_OFF_INT mask.

0 Unmasked
1 (Default) Masked

HPLOAD_ON_INT mask.

0 Unmasked
1 (Default) Masked

7.6.10 Interrupt Mask 5

R/W

7

6

5

DSD_STUCK_
INT_MASK

DSD_INVAL_
A_INT_MASK

DSD_INVAL_
B_INT_MASK

4
DSD_
SILENCE_A_
INT_MASK

3
DSD_
SILENCE_B_
INT_MASK

2
DSD_RATE_
ERROR_INT_
MASK

1
DOP_MRK_
DET_INT_
MASK

0

DOP_ON_INT_
MASK

Address 0xF0014

Default

1

1

1

1

1

1

1

1

Bits

Name

Description

7 DSD_STUCK_

DSD_STUCK_INT mask.

INT_MASK

0 Unmasked
1 (Default) Masked

138

DS1155F2

Bits

Name

Description

CS43131
7.6 Interrupt Status and Mask Registers

6

5

4

3

2

1

0

DSD_INVAL_
A_INT_MASK

DSD_INVAL_A_INT mask.

0 Unmasked
1 (Default) Masked

DSD_INVAL_
B_INT_MASK

DSD_INVAL_B_INT mask.

0 Unmasked
1 (Default) Masked

DSD_
SILENCE_A_
INT_MASK

DSD_
SILENCE_B_
INT_MASK

DSD_RATE_
ERROR_INT_
MASK

DOP_MRK_
DET_INT_
MASK

DOP_ON_
INT_MASK

DSD_SILENCE_A_INT mask.

0 Unmasked
1 (Default) Masked

DSD_SILENCE_B_INT mask.

0 Unmasked
1 (Default) Masked

DSD_RATE_ERROR_INT mask.

0 Unmasked
1 (Default) Masked

DOP_MRK_DET_INT mask.

0 Unmasked
1 (Default) Masked

DOP_ON_INT mask.

0 Unmasked
1 (Default) Masked

7.6.11 ASP Master Mode Slew Rate Control

R/W

Default

Bits

7:4

3:2

7

0

Name

6

0

—

5

1

4

0

3

2

SCLK1_SLEW_RATE

1

0

Description

—

Reserved

SCLK1_
SLEW_RATE

SCLK1 slew rate control.

00 Reserved
01 Recommended drive strength for clock rate higher than 12.288 MHz
10 (Default) Recommended drive strength for clock rate 12.288 MHz or lower.
11 Reserved

1:0

—

Reserved

7.6.12 XSP Master Mode Slew Rate Control

R/W

Default

Bits

7:4

3:2

7

0

Name

6

0

—

5

1

4

0

3

2

DSDCLK_SCLK2_SLEW_RATE

1

0

Description

—

Reserved

DSDCLK_
SCLK2_
SLEW_RATE

DSDCLK/SCLK2 slew rate control.

00 Reserved
01 Recommended drive strength for clock rate higher than 12.288 MHz
10 (Default) Recommended drive strength for clock rate 12.288 MHz or lower.
11 Reserved

1:0

—

Reserved

Address 0x10 0000

—

0

0

Address 0x10 0001

—

0

0

1

1

1

1

DS1155F2

139

CS43131
8 PCB Layout Considerations

8 PCB Layout Considerations

The following sections provide general guidelines for PCB layout to ensure the best performance of the CS43131.

8.1  Power Supply

As with any high-resolution converter, the CS43131 requires careful attention to power supply and grounding
arrangements if its potential performance is to be realized. Fig. 2-1 shows the recommended power arrangements with
VA and VCP connected to independent clean supplies. VL and VD, which power the digital circuitry, may be run from the
shared system logic supply.

8.2  Grounding

Note the following:

• Extensive use of power and ground planes, ground-plane fill in unused areas, and surface-mount decoupling

capacitors are recommended.

• Decoupling capacitors must be as close as possible to the CS43131 pins.

• To minimize inductance effects, the low-value ceramic capacitor must be closest to the pin and mounted on the

same side of the board as the CS43131.

• To avoid unwanted coupling into the modulators, all signals, especially clocks, must be isolated from the FILT+ and

FILT- pins.

• The FILT+ capacitors must be positioned to minimize the electrical path from the pin to VA.

• The FILT– capacitors must be positioned to minimize the electrical path from the pin to –VA.

• The VCP_FILT+ and VCP_FILT– capacitors must be positioned to minimize the electrical path from each respective

pin to GNDCP.

8.3  HPREFA and HPREFB Routing

For best interchannel isolation performance, HPREFA and HPREFB must be routed independently to the headphone
connector reference pin. The HPREFA and HPREFB are electrically connected to system’s ground plane through via at
the headphone connector ground pin. Fig. 2-1 illustrates the recommended arrangements.

For interfacing the HPREFA and HPREFB pins with an IC that performs alternate pinout headset detect functions, both
signals must be routed independently to the CS43131’s ground pin connecting the detected headset ground pole. Follow
the recommended grounding scheme of the CS43131.

8.4  QFN Thermal Pad

The CS43131 comes in a compact QFN package, the underside of which reveals a large metal pad that serves as a
thermal relief to provide maximum heat dissipation. This pad must mate with a matching copper pad on the PCB and must
be electrically connected to ground. A series of vias must be used to connect this copper pad to one or more larger ground
planes on other PCB layers. For best performance in split-ground systems, connect this thermal pad to GNDA.

140

DS1155F2

9 Performance Plots

9.1  Digital Filter Response

9.1.1

Combined Filter Response—Single Speed (Fs = 32 kHz, Slow Roll-Off)

CS43131
9 Performance Plots

  0.02

 0.015

  0.01

 0.005

     0

−0.005

 −0.01

−0.015

)

B
d
(

e
d
u
t
i
n
g
a
M

 −0.02

   0 0.05  0.1 0.15  0.2 0.25  0.3 0.35  0.4 0.45  0.5
Frequency (Normalized to Fs)

Figure 9-1. Passband Ripple

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

0.4

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

0.6

0.5

0.7
Frequency (Normalized to Fs)
Figure 9-2. Stopband Attenuation

0.8

0.9

  1

   0

 500

1000

1500
Time (µs)

2000

2500

3000

   0

 500

1000

1500
Time (µs)

2000

2500

3000

Figure 9-3. Impulse Response—Linear Phase

Figure 9-4. Impulse Response—Minimum Phase

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

   0

 500

1000

1500
Time (µs)

2000

2500

3000

   0

 500

1000

1500
Time (µs)

2000

2500

3000

Figure 9-5. Step Response—Linear Phase

Figure 9-6. Step Response—Minimum Phase

DS1155F2

141

9.1.2

Combined Filter Response—Single Speed (Fs = 32 kHz, Fast Roll-Off)

CS43131
9.1 Digital Filter Response

  0.02

 0.015

  0.01

 0.005

     0

−0.005

 −0.01

−0.015

)

B
d
(

e
d
u
t
i
n
g
a
M

 −0.02

   0 0.05  0.1 0.15  0.2 0.25  0.3 0.35  0.4 0.45  0.5
Frequency (Normalized to Fs)

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

0.4

0.5

0.6

0.7
Frequency (Normalized to Fs)

0.8

0.9

  1

Figure 9-7. Passband Ripple

Figure 9-8. Stopband Attenuation

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

   0

 500

1000

1500
Time (µs)

2000

2500

3000

   0

 500

1000

1500
Time (µs)

2000

2500

3000

Figure 9-9. Impulse Response—Linear Phase

Figure 9-10. Impulse Response—Minimum Phase

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

   0

 500

1000

1500
Time (µs)

2000

2500

3000

   0

 500

1000

1500
Time (µs)

2000

2500

3000

Figure 9-11. Step Response—Linear Phase

Figure 9-12. Step Response—Minimum Phase

142

DS1155F2

9.1.3

Combined Filter Response—Single Speed (Fs = 44.1 and 48 kHz, Slow Roll-Off)

CS43131
9.1 Digital Filter Response

  0.02

 0.015

  0.01

 0.005

     0

−0.005

 −0.01

−0.015

)

B
d
(

e
d
u
t
i
n
g
a
M

 −0.02

   0 0.05  0.1 0.15  0.2 0.25  0.3 0.35  0.4 0.45  0.5
Frequency (Normalized to Fs)

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

0.4

0.5

0.6

0.7
Frequency (Normalized to Fs)

0.8

0.9

  1

Figure 9-13. Passband Ripple

Figure 9-14. Stopband Attenuation

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

   0

 500

1000

1500

2000

2500

   0

 500

1000

1500

2000

2500

Time (µs)

Time (µs)

Figure 9-15. Impulse Response—Linear Phase

Figure 9-16. Impulse Response—Minimum Phase

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

   0

 500

1000

1500

2000

2500

   0

 500

1000

1500

2000

2500

Time (µs)

Time (µs)

Figure 9-17. Step Response—Linear Phase

Figure 9-18. Step Response—Minimum Phase

DS1155F2

143

9.1.4

Combined Filter Response—Single Speed (Fs = 44.1 and 48 kHz, Fast Roll-Off)

CS43131
9.1 Digital Filter Response

  0.02

 0.015

  0.01

 0.005

     0

−0.005

 −0.01

−0.015

)

B
d
(

e
d
u
t
i
n
g
a
M

 −0.02

   0 0.05  0.1 0.15  0.2 0.25  0.3 0.35  0.4 0.45  0.5
Frequency (Normalized to Fs)

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

0.4

0.5

0.6

0.7
Frequency (Normalized to Fs)

0.8

0.9

  1

Figure 9-19. Passband Ripple

Figure 9-20. Stopband Attenuation

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

   0

 500

1000

1500

2000

2500

   0

 500

1000

1500

2000

2500

Time (µs)

Time (µs)

Figure 9-21. Impulse Response—Linear Phase

Figure 9-22. Impulse Response—Minimum Phase

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

   0

 500

1000

1500

2000

2500

   0

 500

1000

1500

2000

2500

Time (µs)

Time (µs)

Figure 9-23. Step Response—Linear Phase

Figure 9-24. Step Response—Minimum Phase

144

DS1155F2

9.1.5

Combined Filter Response—Double Speed (Slow Roll-Off)

CS43131
9.1 Digital Filter Response

 0.02

 0.01

    0

−0.01

−0.02

−0.03

)

B
d
(

e
d
u
t
i
n
g
a
M

−0.04

   0

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

 0.1

0.05

0.15
Frequency (Normalized to Fs)
Figure 9-25. Passband Ripple

 0.2

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

0.25

0.4

0.5

0.6

0.7
Frequency (Normalized to Fs)

0.8

0.9

  1

Figure 9-26. Stopband Attenuation

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

  0

100

200

300
Time (µs)

400

500

600

  0

100

200

300
Time (µs)

400

500

600

Figure 9-27. Impulse Response—Linear Phase

Figure 9-28. Impulse Response—Minimum Phase

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

  0

100

200

300
Time (µs)

400

500

600

  0

100

200

300
Time (µs)

400

500

600

Figure 9-29. Step Response—Linear Phase

Figure 9-30. Step Response—Minimum Phase

DS1155F2

145

9.1.6

Combined Filter Response—Double Speed (Fast Roll-Off)

CS43131
9.1 Digital Filter Response

 0.06

 0.04

 0.02

    0

−0.02

)

B
d
(

e
d
u
t
i
n
g
a
M

−0.04

   0 0.05  0.1 0.15  0.2 0.25  0.3 0.35  0.4 0.45  0.5
Frequency (Normalized to Fs)
Figure 9-31. Passband Ripple

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

0.4

0.5

0.6

0.7
Frequency (Normalized to Fs)

0.8

0.9

  1

Figure 9-32. Stopband Attenuation

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

  0

100

200

300
Time (µs)

400

500

600

  0

100

200

300
Time (µs)

400

500

600

Figure 9-33. Impulse Response—Linear Phase

Figure 9-34. Impulse Response—Minimum Phase

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

  0

100

200

300
Time (µs)

400

500

600

  0

100

200

300
Time (µs)

400

500

600

Figure 9-35. Step Response—Linear Phase

Figure 9-36. Step Response—Minimum Phase

146

DS1155F2

9.1.7

Combined Filter Response—Quad Speed (Slow Roll-Off)

CS43131
9.1 Digital Filter Response

 0.1

0.05

0.15
Frequency (Normalized to Fs)
Figure 9-37. Passband Ripple

 0.2

)

B
d
(

e
d
u
t
i
n
g
a
M

 0.01

    0

−0.01

−0.02

−0.03

−0.04

−0.05

   0

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

0.25

0.4

0.5

0.6

0.7
Frequency (Normalized to Fs)

0.8

0.9

  1

Figure 9-38. Stopband Attenuation

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

  0

 50

100

150
Time (µs)

200

250

300

  0

 50

100

150
Time (µs)

200

250

300

Figure 9-39. Impulse Response—Linear Phase

Figure 9-40. Impulse Response—Minimum Phase

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

  0

 50

100

150
Time (µs)

200

250

300

  0

 50

100

150
Time (µs)

200

250

300

Figure 9-41. Step Response—Linear Phase

Figure 9-42. Step Response—Minimum Phase

DS1155F2

147

9.1.8

Combined Filter Response—Quad Speed (Fast Roll-Off)

CS43131
9.1 Digital Filter Response

 0.03

 0.02

 0.01

    0

−0.01

−0.02

−0.03

−0.04

)

B
d
(

e
d
u
t
i
n
g
a
M

−0.05

   0

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

 0.1

0.05

0.15
Frequency (Normalized to Fs)
Figure 9-43. Passband Ripple

 0.2

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

0.25

0.4

0.5

0.6

0.7
Frequency (Normalized to Fs)

0.8

0.9

  1

Figure 9-44. Stopband Attenuation

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

  0

 50

100

150
Time (µs)

200

250

300

  0

 50

100

150
Time (µs)

200

250

300

Figure 9-45. Impulse Response—Linear Phase

Figure 9-46. Impulse Response—Minimum Phase

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

  0

 50

100

150
Time (µs)

200

250

300

  0

 50

100

150
Time (µs)

200

250

300

Figure 9-47. Step Response—Linear Phase

Figure 9-48. Step Response—Minimum Phase

148

DS1155F2

9.1.9

Combined Filter Response—Octuple Speed

CS43131
9.1 Digital Filter Response

 0.01

    0

−0.01

−0.02

−0.03

−0.04

−0.05

−0.06

−0.07

−0.08

−0.09

)

B
d
(

e
d
u
t
i
n
g
a
M

 −0.1

   0

0.02

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

 0.1

0.12

0.4

0.5

0.04

0.06
Frequency (Normalized to Fs)

0.08

0.6

0.7
Frequency (Normalized to Fs)

0.8

0.9

  1

Figure 9-49. Passband Ripple

Figure 9-50. Stopband Attenuation

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

−0.4

−0.6

  0

 10

 20

 30

 40

 50
Time (µs)

 60

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

1.2

  1

0.8

0.6

0.4

0.2

  0

 70

 80

 90

100

  0

 10

 20

 30

 40

 50
Time (µs)

 60

 70

 80

 90

100

Figure 9-51. Impulse Response

Figure 9-52. Step Response

9.1.10 Combined Filter Response—Single Speed (NOS = 1)

Note: 44.1 kHz and 48 kHz only.

   0

−0.5

  −1

−1.5

  −2

−2.5

  −3

−3.5

)

B
d
(

e
d
u
t
i
n
g
a
M

  −4

   0 0.05  0.1 0.15  0.2 0.25  0.3 0.35  0.4 0.45  0.5
Frequency (Normalized to Fs)

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

  0

0.5

  1

1.5
Frequency (Normalized to Fs)

  2

Figure 9-53. Passband Ripple

Figure 9-54. Stopband Attenuation

DS1155F2

2.5

149

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

−0.2

  0

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

−0.2

  0

 50

100

150

Time (µs)

CS43131
9.1 Digital Filter Response

 50

100

150

Time (µs)

Figure 9-55. Impulse Response

Figure 9-56. Step Response

9.1.11 Combined Filter Response—Double Speed (NOS = 1)

   0

−0.5

  −1

−1.5

  −2

−2.5

  −3

−3.5

)

B
d
(

e
d
u
t
i
n
g
a
M

  −4

   0 0.05  0.1 0.15  0.2 0.25  0.3 0.35  0.4 0.45  0.5
Frequency (Normalized to Fs)

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

  0

0.5

  1

1.5
Frequency (Normalized to Fs)

  2

2.5

Figure 9-57. Passband Ripple

Figure 9-58. Stopband Attenuation

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

−0.2

  0

 10

 20

 30

 40

 50
Time (µs)

 60

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 70

 80

 90

100

−0.2

  0

 10

 20

 30

 40

 50
Time (µs)

 60

 70

 80

 90

100

Figure 9-59. Impulse Response

Figure 9-60. Step Response

150

DS1155F2

9.1.12 Combined Filter Response—Quad Speed (NOS = 1)

CS43131
9.1 Digital Filter Response

   0

−0.5

  −1

−1.5

  −2

−2.5

  −3

−3.5

)

B
d
(

e
d
u
t
i
n
g
a
M

  −4

   0 0.05  0.1 0.15  0.2 0.25  0.3 0.35  0.4 0.45  0.5
Frequency (Normalized to Fs)

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

  0

0.2

0.4
Frequency (Normalized to Fs)

0.6

0.8

  1

1.2

Figure 9-61. Passband Ripple

Figure 9-62. Stopband Attenuation

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

−0.2

  0

 10

 20

 30

 40

 50
Time (µs)

 60

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

)

V

(
e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 70

 80

 90

100

−0.2

  0

 10

 20

 30

 40

 50
Time (µs)

 60

 70

 80

 90

100

Figure 9-63. Impulse Response

Figure 9-64. Step Response

9.1.13 Combined Filter Response—Wideband Flatness Mode

)

B
d
(

e
d
u
t
i
n
g
a
M

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

  0

0.1

0.4

0.3

0.2

0.5
Frequency (Normalized to Fs)
Figure 9-65. Magnitude Response

0.7

0.6

0.8

0.9

  1

DS1155F2

151

9.1.14 Combined Filter Response—DSD

CS43131
9.1 Digital Filter Response

)

B
d
(

e
d
u
t
i
n
g
a
M

 0.01

    0

−0.01

−0.02

−0.03

−0.04

−0.05

−0.06

−0.07

−0.08

−0.09

 −0.1

 0

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

−0.2

   0

 −20

 −40

 −60

 −80

−100

−120

−140

−160

−180

)

B
d
(

e
d
u
t
i
n
g
a
M

 5

10

15

20

25

30

(cid:23)0

 200

 400

Frequency ((cid:78)Hz)

Figure 9-66. Passband Ripple

 800

 600
Frequency ((cid:78)Hz)

1000

1200

1400

Figure 9-67. Stopband Attenuation

 1.2

   1

 0.8

 0.6

 0.4

 0.2

   0

)

V

(

e
d
u
t
i
l

p
m
A
d
e
z

i
l

a
m
r
o
N

 70

 80

 90

100

−0.2

  0

 10

 20

 30

 40

 50
Time (µs)

 60

 70

 80

 90

100

  0

 10

 20

 30

 40

 50
Time (µs)

 60

Figure 9-68. Impulse Response

Figure 9-69. Step Response

9.1.15 Highpass Filter and Deemphasis

)

B
d
(

e
d
u
t
i
n
g
a
M

0

−5

−10

−15

−20

−25

−30

  0

 −1

 −2

 −3

 −4

 −5

 −6

 −7

 −8

 −9

)

B
d
(

e
d
u
t
i
n
g
a
M

0.00001

0.0001
0.01
0.001
Frequency (Normalized to Fs)

0.1

1

−10

   0 0.05  0.1 0.15  0.2 0.25  0.3 0.35  0.4 0.45  0.5
Frequency (Normalized to Fs)

Figure 9-70. Highpass Filter for PCM and DSD Paths

Figure 9-71. Deemphasis

152

DS1155F2

10 Package Dimensions

10.1 40-Pin QFN Package Dimensions

CS43131
10 Package Dimensions

Figure 10-1. 40-Pin QFN Package Drawing

Table 10-1.  40-Pin QFN Package Dimensions

Description

Dim

Total thickness
Stand off
Mold thickness
L/F thickness
Lead width
Body size

Lead pitch
EP size

X
Y

X
Y

Minimum
0.7
0
—

0.15

3.4
3.4
0.35

A
A1
A2
A3
b
D
E
e
J
K
L
aaa
bbb
ccc
ddd
eee

Lead length
Package edge tolerance
Mold flatness
Coplanarity
Lead offset
Exposed pad offset
Notes:
 • Dimensioning and tolerances per ASME Y 14.5M–1995.
 • X/Y Dimensions are estimates.
 • The Ball 1 location indicator shown above is for illustration purposes only and may not be to scale.
 • Dimensioning and tolerances per ASME Y 14.5M–1994.
 • Dimension “b” applies to the solder sphere diameter and is measured at the midpoint between the

Maximum
0.8
0.05
—

0.25

3.6
3.6
0.45

Millimeters
Nominal
0.75
0.035
0.55
0.203 REF
0.2
5 BSC
5 BSC
0.4 BSC
3.5
3.5
0.4
0.1
0.1
0.08
0.1
0.1

package body and the seating plane.

DS1155F2

153

10.2 42-Ball WLCSP Package Dimensions

CS43131
10.2 42-Ball WLCSP Package Dimensions

154

DS1155F2

CS43131
11 Thermal Characteristics

11 Thermal Characteristics

Table 11-1.  Typical JEDEC Four-Layer, 2s2p Board Thermal Characteristics

Parameter

Symbol

WLCSP

Junction-to-ambient thermal resistance

Junction-to-board thermal resistance

Junction-to-case thermal resistance

Junction-to-board thermal-characterization parameter

Junction-to-package-top thermal-characterization parameter

JA
JB
JC
JB
JT

42.3

11.1

0.22

11.0

0.09

Notes:
 • Natural convection at the maximum recommended operating temperature TA (see Table 3-2)
 • Four-layer, 2s2p PCB as specified by JESD51-9 and JESD51-11; dimensions: 101.5 x 114.5 x 1.6 mm
 • Thermal parameters as defined by JESD51-12

QFN

32.7

8.8

0.92

8.8

0.23

Units

°C/W

°C/W

°C/W

°C/W

°C/W

12 Ordering Information

Table 12-1.  Ordering Information 1

Product

Description

Package

CS43131 130-dB, 32-Bit

High-Performance DAC with
Integrated Headphone Driver
and Impedance Detection

42-ball WLCSP
40-pin QFN

RoHS
Compliant
Yes
Yes

Grade

Temperature
Range

Container

Order Number

Commercial –20°C to +70°C Tape and Reel
Commercial –20°C to +70°C

Tray
Tape and Reel

CS43131-CWZR
CS43131-CNZ
CS43131-CNZR

1.The Revision ID fields in Section 7.1.4, “Revision ID,” list the alpha (AREVID) and metal (MTLREVID) revisions.

13 References

• NXP Semiconductors, The I2C-Bus Specification and User Manual (UM10204). http://www.nxp.com/

14 Revision History

Revision
F1
OCT 2017
F2
DEC 2022

Initial release

Table 14-1.  Revision History

Changes

Updated reset values for Interrupt Mask 2 register
Updated Ambient Temperature Minimum in Table 3-2 Recommended Operating Conditions from –10°C to –20°C
Updated Temperature Range in Table 12-1 Ordering Information from –10°C to –20°C

Important: Please check with your Cirrus Logic sales representative to confirm that you are using the latest revision of this document and to
determine whether there are errata associated with this device.

DS1155F2

155

CS43131
14 Revision History

Contacting Cirrus Logic Support
For all product questions and inquiries, contact a Cirrus Logic Sales Representative.
To find one nearest you, go to www.cirrus.com.

IMPORTANT NOTICE

The products and services of Cirrus Logic International (UK) Limited; Cirrus Logic, Inc.; and other companies in the Cirrus Logic group (collectively either “Cirrus
Logic” or “Cirrus”) are sold subject to Cirrus Logic’s terms and conditions of sale supplied at the time of order acknowledgment, including those pertaining to
warranty, indemnification, and limitation of liability. Software is provided pursuant to applicable license terms. Cirrus Logic reserves the right to make changes to
its products and specifications or to discontinue any product or service without notice. Customers should therefore obtain the latest version of relevant information
from Cirrus Logic to verify that the information is current and complete. Testing and other quality control techniques are utilized to the extent Cirrus Logic deems
necessary. Specific testing of all parameters of each device is not necessarily performed. In order to minimize risks associated with customer applications, the
customer must use adequate design and operating safeguards to minimize inherent or procedural hazards. Cirrus Logic is not liable for applications assistance
or customer product design. The customer is solely responsible for its overall product design, end-use applications, and system security, including the specific
manner in which it uses Cirrus Logic components. Certain uses or product designs may require an intellectual property license from a third party. Features and
operations described herein are for illustrative purposes only and do not constitute a suggestion or instruction to adopt a particular product design or a particular
mode of operation for a Cirrus Logic component.

CERTAIN APPLICATIONS USING SEMICONDUCTOR PRODUCTS MAY INVOLVE POTENTIAL RISKS OF DEATH, PERSONAL INJURY, OR SEVERE
PROPERTY OR ENVIRONMENTAL DAMAGE (“CRITICAL APPLICATIONS”). CIRRUS LOGIC PRODUCTS ARE NOT DESIGNED, AUTHORIZED OR
WARRANTED FOR USE IN PRODUCTS SURGICALLY IMPLANTED INTO THE BODY, AUTOMOTIVE SAFETY OR SECURITY DEVICES, NUCLEAR
SYSTEMS, LIFE SUPPORT PRODUCTS OR OTHER CRITICAL APPLICATIONS. INCLUSION OF CIRRUS LOGIC PRODUCTS IN SUCH APPLICATIONS IS
UNDERSTOOD TO BE FULLY AT THE CUSTOMER’S RISK AND CIRRUS LOGIC DISCLAIMS AND MAKES NO WARRANTY, EXPRESS, STATUTORY OR
IMPLIED, INCLUDING THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR PARTICULAR PURPOSE, WITH REGARD TO ANY
CIRRUS LOGIC PRODUCT THAT IS USED IN SUCH A MANNER. IF THE CUSTOMER OR CUSTOMER’S CUSTOMER USES OR PERMITS THE USE OF
CIRRUS LOGIC PRODUCTS IN CRITICAL APPLICATIONS, CUSTOMER AGREES, BY SUCH USE, TO FULLY INDEMNIFY CIRRUS LOGIC, ITS OFFICERS,
DIRECTORS, EMPLOYEES, DISTRIBUTORS AND OTHER AGENTS FROM ANY AND ALL LIABILITY, INCLUDING ATTORNEYS’ FEES AND COSTS, THAT
MAY RESULT FROM OR ARISE IN CONNECTION WITH THESE USES.

This document is the property of Cirrus Logic, and you may not use this document in connection with any legal analysis concerning Cirrus Logic products
described herein. No license to any technology or intellectual property right of Cirrus Logic or any third party is granted herein, including but not limited to any
patent right, copyright, mask work right, or other intellectual property rights. Any provision or publication of any third party’s products or services does not
constitute Cirrus Logic’s approval, license, warranty or endorsement thereof. Cirrus Logic gives consent for copies to be made of the information contained herein
only for use within your organization with respect to Cirrus Logic integrated circuits or other products of Cirrus Logic, and only if the reproduction is without
alteration and is accompanied by all associated copyright, proprietary and other notices and conditions (including this notice). This consent does not extend to
other copying such as copying for general distribution, advertising or promotional purposes, or for creating any work for resale. This document and its information
is provided “AS IS” without warranty of any kind (express or implied). All statutory warranties and conditions are excluded to the fullest extent possible. No
responsibility is assumed by Cirrus Logic for the use of information herein, including use of this information as the basis for manufacture or sale of any items, or
for infringement of patents or other rights of third parties. Cirrus Logic, Cirrus, the Cirrus Logic logo design, and SoundClear are among the trademarks of Cirrus
Logic. Other brand and product names may be trademarks or service marks of their respective owners.

DSD and DSD Direct Stream Digital are registered trademarks of Sony Kabushiki TA Sony Corporation.

Copyright © 2015–2022 Cirrus Logic, Inc. All rights reserved.

156

DS1155F2

