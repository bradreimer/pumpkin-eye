#include <ESP32Servo.h>

static const int servoPin = 18;
const int EyeballMinAngle = -180;
const int EyeballMaxAngle = 156;

Servo servo1;

void setup() {

  Serial.begin(115200);
  servo1.attach(servoPin);
}

void loop() {
  for(int posDegrees = EyeballMinAngle; posDegrees <= EyeballMaxAngle; posDegrees++) {
    servo1.write(posDegrees);
    delay(20);
  }
  delay(1000);
}