# Task 26 - IR Sensor Obstacle Detection

## Objective
To detect the presence of an obstacle using an IR sensor and indicate detection using an LED.

## Components Required
- Arduino UNO
- IR Obstacle Sensor Module
- LED
- 220Ω Resistor
- Jumper Wires

## Circuit Connections

### IR Sensor Module

| IR Sensor Pin | Arduino UNO |
|---------------|-------------|
| VCC | 5V |
| GND | GND |
| OUT | D2 |

### LED

| LED Pin | Arduino UNO |
|----------|------------|
| Anode (+) | D7 |
| Cathode (-) | GND through 220Ω resistor |

## Working Principle

The IR sensor emits infrared light and detects reflections from nearby objects. When an object comes in front of the sensor, the output changes state and the Arduino turns ON the LED.


## Output

- LED ON → Obstacle detected
- LED OFF → No obstacle

## Result

An IR-based obstacle detection system was successfully implemented using Arduino UNO.
