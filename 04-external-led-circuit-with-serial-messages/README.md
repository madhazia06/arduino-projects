# External LED Circuit with Serial Messages

A simple Arduino circuit using an **external LED and resistor** connected to digital pin **12**. The LED blinks while its status is displayed on the Serial Monitor.

## Components

- Arduino
- LED
- Resistor
- Jumper wires
- Breadboard

## What I learned

- `pinMode()` — sets pin 12 as an output.
- `digitalWrite()` — turns the LED ON and OFF.
- `Serial.println()` — displays the LED status in the Serial Monitor.
- `delay()` — controls the timing of the LED.

## How it works

- The LED turns **ON** for 2 seconds and displays `Power On!`.
- The LED turns **OFF** for 1 second and displays `Power Off!`.
- The cycle repeats continuously.
