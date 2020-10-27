int leftmotor = 4;
int leftmotor1 = 5;
int rightmotor = 6;
int rightmotor1 = 7;
int soundPin = 3;
int led = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  int a = digitalRead(3);
  Serial.println(a);
  if (digitalRead(3) == LOW) {
    digitalWrite(leftmotor, HIGH);
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, HIGH);
    digitalWrite(rightmotor1, LOW);
    digitalWrite(led, HIGH);
    delay(1000);
    
    while (digitalRead(3) == HIGH);
    digitalWrite(leftmotor, LOW);
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, LOW);
    digitalWrite(rightmotor1, LOW);
    digitalWrite(led, LOW);
  }
}
