#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  Serial.begin(9600);
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
}

void loop() {
  if (Serial.available() > 0) {
    int data = Serial.read();
    int angle = map(data, 0, 255, 0, 180);
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
  }
}