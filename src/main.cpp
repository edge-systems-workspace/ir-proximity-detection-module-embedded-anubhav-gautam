#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @authorANUBHAV GAUTAM
 * @date 2026-01-7
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

int irPin = 2;

 // TODO 2:
 // Create variable to store sensor state

void setup() {

    pinMode(irPin, INPUT);
    Serial.begin(9600);
}

void loop() {

    int value = digitalRead(irPin);

    if (value == LOW) { // Active LOW sensor
        Serial.println("Object Detected");
    } else {
        Serial.println("No Object Detected");
    }

    delay(300);
}
