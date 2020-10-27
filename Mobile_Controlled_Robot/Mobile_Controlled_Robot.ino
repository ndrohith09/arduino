int leftmotor = 6;
int leftmotor1 = 7;
int rightmotor = 8;
int rightmotor1 = 9;
void setup() {
  Serial.begin(9600);
  pinMode(leftmotor, OUTPUT);
  pinMode(leftmotor1, OUTPUT);
  pinMode(rightmotor, OUTPUT);
  pinMode(rightmotor1, OUTPUT);

  pinMode(2, INPUT);//CM8870 11th pin
  pinMode(3, INPUT);//CM8870 12th pin
  pinMode(4, INPUT);//CM8870 13th pin
  pinMode(5, INPUT);//CM8870 14th pin
}

void loop() {
  if (digitalRead(5) == 0 && digitalRead(4) == 0 && digitalRead(3) == 1 && digitalRead(2) == 0) {
    digitalWrite(leftmotor, HIGH);
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, HIGH);
    digitalWrite(rightmotor1, LOW);
    Serial.println("forward");
  }
  if (digitalRead(5) == 0 && digitalRead(4) == 1 && digitalRead(3) == 0 && digitalRead(2) == 0) {
    digitalWrite(leftmotor, LOW);
    digitalWrite(leftmotor1, HIGH);
    digitalWrite(rightmotor, HIGH);
    digitalWrite(rightmotor1, LOW);
    Serial.println("right");
  }
  if (digitalRead(5) == 0 && digitalRead(4) == 1 && digitalRead(3) == 1 && digitalRead(2) == 0) {
    digitalWrite(leftmotor, HIGH);
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, LOW);
    digitalWrite(rightmotor1, HIGH);
    Serial.println("left");
  }
  if (digitalRead(5) == 1 && digitalRead(4) == 0 && digitalRead(3) == 0 && digitalRead(2) == 0) {
    digitalWrite(leftmotor, LOW);
    digitalWrite(leftmotor1, HIGH);
    digitalWrite(rightmotor, LOW);
    digitalWrite(rightmotor1, HIGH);
    Serial.println("backward");
  }
  if (digitalRead(5) == 0 && digitalRead(4) == 1 && digitalRead(3) == 0 && digitalRead(2) == 1) {
    digitalWrite(leftmotor, LOW);
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, LOW);
    digitalWrite(rightmotor1, LOW);
    Serial.println("stop");
  }
}
