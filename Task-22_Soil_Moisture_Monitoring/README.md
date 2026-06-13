# Task 22 - Soil Moisture Monitoring

## Objective
To monitor soil moisture levels using an analog sensor and Raspberry Pi Pico.

## Components Required
- Raspberry Pi Pico
- Soil Moisture Sensor
- Jumper Wires

## Connections

| Sensor Pin | Pico Pin |
|------------|----------|
| VCC | 3.3V |
| GND | GND |
| AO | GP26 (ADC0) |

## Working
The Pico reads the analog value from the soil moisture sensor and displays the moisture level through Serial Output.

## Output
Moisture Value: 0 - 4095

## Result
Successfully monitored soil moisture levels using Raspberry Pi Pico.
