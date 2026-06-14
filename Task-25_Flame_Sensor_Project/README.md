# Task 25 - Flame Sensor Project

## Objective
To detect flame-like conditions using an LDR sensor module and activate an alarm system using an LED and buzzer.

## Components Required
- Arduino UNO
- LDR Sensor Module
- LED
- 220Ω Resistor
- Piezo Buzzer
- Jumper Wires

## Circuit Connections

### LDR Sensor Module

| LDR Module Pin | Arduino UNO |
|----------------|-------------|
| VCC | 5V |
| GND | GND |
| AO | A0 |
| DO | D2 |

### LED

| LED Pin | Arduino UNO |
|----------|------------|
| Anode (+) | D7 |
| Cathode (-) | GND through 220Ω resistor |

### Buzzer

| Buzzer Pin | Arduino UNO |
|------------|------------|
| Positive (+) | D8 |
| Negative (-) | GND |

## Working Principle

The LDR sensor module measures light intensity. A flame produces a high level of light, causing the sensor reading to increase. When the light intensity exceeds a predefined threshold, the Arduino activates the LED and buzzer to indicate flame detection.


## Output

- LED turns ON when flame-like light intensity is detected.
- Buzzer sounds an alarm.
- Serial Monitor displays the sensor value and detection status.

## Result

A flame detection system was successfully simulated using an LDR sensor module, LED, and buzzer in Tinkercad.
