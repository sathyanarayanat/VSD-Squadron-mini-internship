#define SERVO_PIN PD4
#define INPUT_PIN PD2

void setup() {
  pinMode(SERVO_PIN, OUTPUT);
  pinMode(INPUT_PIN, INPUT);
  digitalWrite(SERVO_PIN, LOW); // Set the initial position of the servo to 90 degrees
}

void loop() {
  static bool prevInputState = LOW; // Variable to store the previous state of the input pin
  
  // Read the current state of the input pin
  bool currentInputState = digitalRead(INPUT_PIN);
  
  // Check if the input pin transitioned from LOW to HIGH
  if (currentInputState == HIGH && prevInputState == LOW) {
    // Sweep the servo from 90 to 150 degrees
    for (int angle = 90; angle <= 150; angle++) {
      int pulseWidth = map(angle, 0, 180, 500, 2500); // Map the angle to the PWM pulse width
      digitalWrite(SERVO_PIN, HIGH);
      delayMicroseconds(pulseWidth);
      digitalWrite(SERVO_PIN, LOW);
      delay(15);
    }
    
    // Return the servo to the initial position (90 degrees)
    digitalWrite(SERVO_PIN, HIGH);
    delayMicroseconds(1500); // Set the pulse width for 90 degrees
    digitalWrite(SERVO_PIN, LOW);
    delay(15);
  }
  
  // Check if the input pin transitioned from HIGH to LOW
  if (currentInputState == LOW && prevInputState == HIGH) {
    // Sweep the servo from 90 to 30 degrees
    for (int angle = 90; angle >= 10; angle--) {
      int pulseWidth = map(angle, 0, 180, 500, 2500); // Map the angle to the PWM pulse width
      digitalWrite(SERVO_PIN, HIGH);
      delayMicroseconds(pulseWidth);
      digitalWrite(SERVO_PIN, LOW);
      delay(15);
    }
    
    // Return the servo to the initial position (90 degrees)
    digitalWrite(SERVO_PIN, HIGH);
    delayMicroseconds(1500); // Set the pulse width for 90 degrees
    digitalWrite(SERVO_PIN, LOW);
    delay(15);
  }
  
  // Update the previous input state
  prevInputState = currentInputState;
}
