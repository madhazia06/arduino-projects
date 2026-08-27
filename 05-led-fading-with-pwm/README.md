# LED Fading with PWM

A simple Arduino project that gradually increases and decreases the brightness of an LED connected to **pin 11**.

## Components

- Arduino
- LED
- Resistor
- Breadboard
- Jumper wires

## What I learned

- `analogWrite()` — controls the LED brightness using PWM.
- `for` loops — gradually increase and decrease the brightness.
- `#define` — assigns a name to the LED pin.
- PWM values range from **0 (OFF) to 255 (full brightness)**.

## How it works

The LED smoothly fades from **OFF to full brightness**, then gradually fades back to **OFF**. This cycle repeats continuously.
