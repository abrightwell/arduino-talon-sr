# Arduino Talon SR

A test project for controlling a Talon SR with Arduino

### Requirements:

* [arduino-pwm-frequency-library](https://github.com/abrightwell/arduino-pwm-frequency-library)

## Talon SR

The Talon SR is a brushed DC motor speed controller produced by [Cross the Road
Electronics](http://crosstheroadelectronics.com).

### Technical Specs

* Input voltage: 6-28 VDC
* Continuous current: 60 A (above 40A continuous we recommend adding a fan)
* Peak current: 100 A
* Input PWM signal: 0.9-2 ms @ 333 Hz
* Input resolution: 10-bit (1024 steps)
* Output resolution: 10-bit (1024 steps)
* Output switching frequency: 15 kHz
