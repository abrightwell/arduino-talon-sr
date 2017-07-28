#include <PWM.h>

int talon = 3;
int frequency = 333;

void setup() {
	InitTimersSafe();
	
	if (SetPinFrequency(talon, frequency)) {
		pinMode(talon, OUTPUT);
	}
}

void loop() {
	pwmWrite(talon, 129);
}
