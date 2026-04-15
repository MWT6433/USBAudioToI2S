# 4.3 Class H Amplifier Output

Fig. 4-2 shows the Class H operation.

**Figure 4-2. Class H Operation**
*(Diagram Description: A block diagram showing "Class H Control" receiving "ADPT_PWR p. 131". Inside, there is a "Step-down/Inverting Charge Pump" block taking inputs "VP" and "VCP". The control logic switches between "+VP_LDO V" / "+VCP" for the positive rail and "-VP_LDO V" / "-VCP" for the negative rail. Outputs are "VCP_FILT+" and "VCP_FILT-".)*

The CS43131 headphone output amplifiers use Cirrus Logic two-mode Class H technology. This technology maximizes operating efficiency of the typical Class AB amplifier while maintaining high performance. In a Class H amplifier design, the rail voltages supplied to the amplifier vary with the needs of the music passage that is being amplified. This prevents unnecessarily wasting energy during low power passages of program material or when the program material is played back at a low volume level.

The internal charge pump, which creates the rail voltages for the headphone amplifiers, is the central component of the two-mode Class H technology implemented in the CS43131. The charge pump receives its input voltage from the voltage present on the VCP or VP pin. From this input voltage, the charge pump creates the differential rail voltages supplied to the amplifier output stages. The charge pump can supply two sets of differential rail voltages: ±VCP and ±VP_LDO.

HV_EN setting, as shown in Fig. 4-3, determines the VP_LDO voltage as shown in Table 4-1. HV_EN = 1 setting is required to support the 1.7-V full-scale voltage for a 600-Ω load and above. In this setting, minimum VP is required to be higher than 3.3 V, and any load below 600 Ω is not supported. When HV_EN = 0, the max output voltage is 1.4-V RMS full-scale voltage. In this setting, minimum VP is required to be higher than 3 V, and the full headphone load range is supported.

**Figure 4-3. Internal LDO Configuration**
*(Diagram Description: A block labeled "Internal LDO" takes "VP" as input and outputs "VP_LDO". It is controlled by "HV_EN p. 131".)*

**Table 4-1. VP_LDO Voltage Per HV_EN Setting**

| HV_EN | VP_LDO Voltage |
| :--- | :--- |
| 0 | 2.6 V |
| 1 | 3.0 V |

Table 4-2 shows the nominal signal and volume level ranges when the output is set to the adapt modes explained in Section 4.3.1. If the signal level is greater than the maximum value of this range, then clipping can occur.

**Table 4-2. Class H Supply Modes**

| Mode | Class H Supply Level | Signal <sup>1</sup> or Volume Level Range <sup>2,3,4</sup> |
| :--- | :--- | :--- |
| 0 | ±VP_LDO V, internally regulated from VP | ≥ −11 dB |
| 1 | ±VCP | < −11 dB |

1. In adapt-to-signal, the volume level ranges are approximations but are within −0.5 dB from the values shown.
2. Relative to digital full scale with output gain set to 0 dB.
3. In fixed modes, clipping can occur if the signal level exceeds the maximum of this range due to setting the amplifier’s supply too low.
4. Thresholds shown are nominal for a 16-Ω stereo load.

## 4.3.1 Power Supply Control Options

This section describes the two types of operation: standard Class AB and adapt-to-output signal. The set of rail voltages supplied to the amplifier output stages depends on the ADPT_PWR (see p. 131) setting.

### 4.3.1.1 Standard Class AB Operation (ADPT_PWR = 001 or 010)

If ADPT_PWR is set to 001 or 010, the rail voltages supplied to the amplifiers are held to ±VP_LDO or ±VCP, respectively. The rail voltages supplied to the output stages are held constant, regardless of the output signal level. The CS43131 amplifiers simply operate in a traditional Class AB configuration.

### 4.3.1.2 Adapt-to-Output Signal (ADPT_PWR = 111)

If ADPT_PWR is set to 111, the rail voltage sent to the amplifiers is based solely on whether the signal sent to the amplifiers would cause the amplifiers to clip when operating on the lower set of rail voltages at certain threshold values.

*   If it would cause clipping, the control logic instructs the charge pump to provide the next higher set of rail voltages to the amplifiers.
*   If it would not cause clipping, the control logic instructs the charge pump to provide the lower set of rail voltages to the amplifiers, eliminating the need to advise the CS43131 of volume settings external to the device.