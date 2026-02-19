#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Priyanshi
 * @date 19-02-2026
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

#define IR_PIN 2
int irState = LOW;

void setup() {
    Serial.begin(9600);
    pinMode(IR_PIN, INPUT);
    Serial.println("IR obstacle detection system initialized");
}

void loop() {
    irState = digitalRead(IR_PIN);

    if (irState == HIGH) {
        Serial.println("Obstacle Detected");
    } else {
        Serial.println("No Obstacle");
    }

    delay(300);
}
