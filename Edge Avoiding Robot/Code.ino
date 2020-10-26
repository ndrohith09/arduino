int leftir = 2;
int rightir = 3;
int leftmotor = 4;
int leftmotor1 = 5;
int rightmotor = 6;
int rightmotor1 = 7;

void setup() {
  Serial.begin(9600);
  pinMode(leftir, INPUT);
  pinMode(rightir, INPUT);
  pinMode(leftmotor, OUTPUT);
  pinMode(leftmotor1, OUTPUT);
  pinMode(rightmotor, OUTPUT);
  pinMode(rightmotor1, OUTPUT);
}

void loop() {
  if (digitalRead(leftir) == HIGH && digitalRead(rightir) == HIGH);
  {
    digitalWrite(leftmotor , HIGH);
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, HIGH);
    digitalWrite(rightmotor1, LOW);
    Serial.println("FORWARD");
  }
  if (digitalRead(leftir) == HIGH && digitalRead(rightir) == LOW);
  {
    digitalWrite(leftmotor , HIGH);
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, LOW);
    digitalWrite(rightmotor1, HIGH);
    Serial.println("LEFT");

  }
  if (digitalRead(leftir) == LOW && digitalRead(rightir) == HIGH);
  {
    digitalWrite(leftmotor , LOW);
    digitalWrite(leftmotor1, HIGH);
    digitalWrite(rightmotor, HIGH);
    digitalWrite(rightmotor1, LOW);
    Serial.println("RIGHT");
  }
  if (digitalRead(leftir) == LOW && digitalRead(rightir) == LOW);
  {
    digitalWrite(leftmotor , LOW);
    digitalWrite(leftmotor1, HIGH);
    digitalWrite(rightmotor, LOW);
    digitalWrite(rightmotor1, HIGH);

    delay(2000);
    digitalWrite(leftmotor , LOW);
    digitalWrite(leftmotor1, HIGH);
    digitalWrite(rightmotor, HIGH);
    digitalWrite(rightmotor1, LOW);
    Serial.println("BACKWARD AND RIGHT TURN");

  }
}
