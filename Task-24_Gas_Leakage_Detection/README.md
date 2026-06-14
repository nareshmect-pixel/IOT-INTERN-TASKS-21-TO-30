# Task 24 - Gas Leakage Detection

## Objective
To detect gas leakage and activate an alarm system.

## Components
- Arduino UNO
- Gas Sensor (Simulated using Potentiometer)
- Piezo Buzzer
- LED
- 220Ω Resistor

## Connections

Potentiometer:
- Left Pin → 5V
- Middle Pin → A0
- Right Pin → GND

LED:
- Anode → D7
- Cathode → GND through 220Ω resistor

Buzzer:
- Positive → D8
- Negative → GND

## Working
The potentiometer simulates gas concentration. When the gas level exceeds a threshold, the LED and buzzer are activated.

## Result
Gas leakage detection system successfully simulated in Tinkercad.
