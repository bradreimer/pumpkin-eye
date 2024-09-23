#include <ESP32Servo.h>

static const int servoPin = 18;
const int EyeballMinAngle = -180;
const int EyeballMaxAngle = 156;

Servo eyballServo1;

void setup() {

  Serial.begin(115200);
  eyballServo1.attach(servoPin);
}

void loop() {
  int eyeballAngle = random(EyeballMinAngle, EyeballMaxAngle);
  int eyeballDelay = random(300, 4000);

  Serial.print("Eyeball: angle=");
  Serial.print(eyeballAngle);
  Serial.print(" delay=");
  Serial.println(eyeballDelay);

  eyballServo1.write(eyeballAngle);
  delay(eyeballDelay);
}