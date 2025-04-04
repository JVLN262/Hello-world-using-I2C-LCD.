// C++ code
//
// Pin connections
int potPin = A0;         // Potentiometer middle pin to A0
int redPin = 9;          // Red LED pin
int greenPin = 10;       // Green LED pin
int bluePin = 11;        // Blue LED pin

void setup() {
  // Set RGB pins as OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  int potVal = analogRead(potPin); // Read value from potentiometer (0 to 1023)

  if (potVal < 200) {
    // Very low value → LED OFF
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
  } 
  else if (potVal >= 200 && potVal < 700) {
    // Medium value → RED ON
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
  } 
  else if (potVal >= 700 && potVal < 900) {
    // High value → GREEN ON
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 0);
  } 
  else {
    // Very high value → BLUE ON
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
  }

  delay(100); // Small delay for stability
}
