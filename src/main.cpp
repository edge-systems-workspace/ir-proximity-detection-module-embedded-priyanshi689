#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */
#define IR_PIN 2
int irState = LOW;

 // TODO 1:
 // Define IR sensor digital pin (Use pin 2)

 // TODO 2:
 // Create variable to store sensor state

void setup() {
    Serial.begin(9600);
    pinMode(IR_PIN, INPUT);
    Serial.println("IR obstacle detection system initialized");

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)

    // TODO 4:
    // Configure IR pin as INPUT

    // TODO 5:
    // Print system initialization message
}

void loop() {
    irState = digitalRead(IR_PIN);

    if (irState == HIGH) {
        Serial.println("Obstacle Detected");
    } else {
        Serial.println("No Obstacle");
    }
    delay(300);

    // TODO 6:
    // Read digital value from IR sensor

    // TODO 7:
    // If obstacle detected
    //     Print "Obstacle Detected"
    // Else
    //     Print "No Obstacle"

    // TODO 8:
    // Add small delay (200–500ms)
}
