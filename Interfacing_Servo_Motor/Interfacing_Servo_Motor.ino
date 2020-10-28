#include<Servo.h>
Servo myservo;
int potpin =0;// analog pin used to connect the potentiometer
int val;
void setup() {
 myservo.attach(3);// attaches the servo on pin 3 to the servo object
}

void loop() {
 val = analogRead(potpin);
 val = map(val,0,1023,0,180);
 myservo.write(val); 
 delay(15);
}
