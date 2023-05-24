#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define LED1_PIN 8
#define LED2_PIN 9
#define LED3_PIN 7
#define LED4_PIN 0
#define LED5_PIN 2

#define BUTTON_PIN 14

#define TRIG_PIN 22
#define ECHO_PIN 21

#define BEEPER_PIN 1

int main(void) {
    wiringPiSetup();

    pinMode(LED1_PIN, OUTPUT);
    pinMode(LED2_PIN, OUTPUT);
    pinMode(LED3_PIN, OUTPUT);
    pinMode(LED4_PIN, OUTPUT);
    pinMode(LED5_PIN, OUTPUT);

    pinMode(BUTTON_PIN, INPUT);
    pullUpDnControl(BUTTON_PIN, PUD_UP);

    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);

    pinMode(BEEPER_PIN, OUTPUT);

    int leds[] = {LED1_PIN, LED2_PIN, LED3_PIN, LED4_PIN, LED5_PIN};
    int numLeds = sizeof(leds) / sizeof(leds[0]);

    int isSystemOn = 0;
    int obstacleDistance = 0;

    while (1) {
        int buttonState = digitalRead(BUTTON_PIN);

        if (buttonState == LOW) {
            isSystemOn = !isSystemOn;
            delay(500);  // Debounce delay
        }

        if (isSystemOn) {
            digitalWrite(TRIG_PIN, HIGH);
            delayMicroseconds(10);
            digitalWrite(TRIG_PIN, LOW);

            while (digitalRead(ECHO_PIN) == LOW);
            long startTime = micros();

            while (digitalRead(ECHO_PIN) == HIGH);
            long endTime = micros();

            long travelTime = endTime - startTime;
            obstacleDistance = travelTime / 58;  // Divide by speed of sound (58 microseconds per centimeter)

            if (obstacleDistance < 0) {
                obstacleDistance = 0;
            }

            int i;
            for (i = 0; i < numLeds; i++) {
                digitalWrite(leds[i], i < obstacleDistance);
            }

            if (obstacleDistance == numLeds) {
                digitalWrite(BEEPER_PIN, HIGH);
            } else {
                digitalWrite(BEEPER_PIN, LOW);
            }

            delay(100);
        } else {
            // Turn off all LEDs and beeper
            int i;
            for (i = 0; i < numLeds; i++) {
                digitalWrite(leds[i], LOW);
            }
            digitalWrite(BEEPER_PIN, LOW);
        }
    }

    return 0;
}