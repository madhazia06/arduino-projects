# LED Blink with Serial Messages

A simple Arduino program that blinks the built-in LED on **pin 13** while displaying its status on the Serial Monitor.

## What I learned

- `pinMode()` — sets the LED pin as an output.
- `digitalWrite()` — turns the LED ON and OFF.
- `Serial.begin()` — starts serial communication.
- `Serial.println()` — displays messages in the Serial Monitor.
- `delay()` — controls how long the LED stays ON or OFF.

## How it works

- The LED turns **ON** for 2 seconds and prints `Power On!`.
- The LED turns **OFF** for 1 second and prints `Power Off!`.
- The cycle repeats continuously.
