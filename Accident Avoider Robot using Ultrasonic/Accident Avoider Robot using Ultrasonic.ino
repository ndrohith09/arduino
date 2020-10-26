#define trigPin 3
#define echoPin 2
int leftmotor = 4;
int leftmotor1 = 5;
int rightmotor = 6;
int rightmotor1 = 7;

void setup()

{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //MOTORS
  pinMode(leftmotor, OUTPUT);// M1
  pinMode(leftmotor1, OUTPUT);// M2
  pinMode(rightmotor, OUTPUT);// M3
  pinMode(rightmotor1, OUTPUT);// M4

}
void loop() {
  int duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 58);
  if (distance < 10)
  {
    digitalWrite(leftmotor, HIGH);//FORWARD
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, HIGH);
    digitalWrite(rightmotor1, LOW);
  }
  if (distance >= 10)
  {
    digitalWrite(leftmotor, LOW);//BACKWARD
    digitalWrite(leftmotor1, HIGH);
    digitalWrite(rightmotor, LOW);
    digitalWrite(rightmotor1, HIGH);
    delay(2000);
    digitalWrite(leftmotor, LOW);//RIGHT
    digitalWrite(leftmotor1, HIGH);
    digitalWrite(rightmotor, HIGH);
    digitalWrite(rightmotor1, LOW);
    delay(2000);
  }
}
