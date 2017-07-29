#include <PWM.h>

int talon = 3;
int frequency = 333;
int channel1 = 5;

void setup() {
	Serial.begin(9600);
	InitTimersSafe();
	
	if (SetPinFrequency(talon, frequency)) {
		pinMode(talon, OUTPUT);
	}

	pinMode(channel1, INPUT);
}

void loop() {
	int pulse = pulseIn(channel1, HIGH, 25000);

	int value = map(pulse, 1155, 1905, 84, 174);

	if (value > 120 && value < 139) {
		value = 129;
	} else if (value < 84) {
		value = 84;
	} else if (value > 174) {
		value = 174;
	}

	delay(50);

	pwmWrite(talon, value);
}
