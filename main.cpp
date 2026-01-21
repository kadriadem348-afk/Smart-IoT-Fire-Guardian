#include <ESP32Servo.h>
const int flamePin = 34;
const int tempPin = 35;
const int servoPin = 18;

Servo myservo;

void setup() {
  Serial.begin(115200);
  pinMode(flamePin, INPUT);
  myservo.attach(servoPin);
  myservo.write(0); 
}

void loop() {
  int flameDetected = digitalRead(flamePin);
  int tempValue = analogRead(tempPin);
  
  if (flameDetected == LOW) { 
    Serial.println("ALERT: FIRE DETECTED!");
    myservo.write(180); 
    delay(5000); 
  } else {
    myservo.write(0);
    Serial.println("System Secure");
  }
  
  delay(1000);
}
