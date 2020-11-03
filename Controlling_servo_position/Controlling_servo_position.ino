#include<Servo.h>
Servo myservo;
int    servopin = 9;
int servopos;
void setup() {
  myservo.attach(servopin);
  Serial.begin(9600);
}

void loop() {
  Serial.print("enter the servo position");
  while (Serial.available() == 0)
  {}
  servopos = Serial.parseInt();
  myservo.write(servopos);
  Serial.println(servopos);
}
