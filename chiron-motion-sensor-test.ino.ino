/*
 * 1% Unit Test for HC-SR501 Motion Sensor
 * This sketch will read the sensor and print the result to the Serial Monitor.
 */

int sensorPin = 7;      // The OUT pin from the sensor is on Pin 7
int sensorState = 0;    // A variable to store the sensor's state (HIGH or LOW)

void setup() {
  // We need to talk to the Serial Monitor (our "console")
  Serial.begin(9600); 
  
  // We are "reading" from the sensor, so we set the pin as an INPUT
  pinMode(sensorPin, INPUT);
  
  Serial.println("System online. Calibrating sensor...");
  delay(10000); // Give the sensor 10 seconds to warm up and calibrate
  Serial.println("Sensor ready.");
}

void loop() {
  // Read the value from the sensor (it's either HIGH for "motion" or LOW for "no motion")
  sensorState = digitalRead(sensorPin);

  if (sensorState == HIGH) {
    // If motion is detected, print it!
    Serial.println("MOTION DETECTED!");
  } else {
    // If no motion, print that.
    Serial.println("No motion.");
  }

  delay(500); // Wait half a second before checking again
}