float temp;
int tempPin = A5;
int leftmotor = 2;
int leftmotor1 = 3;
int rightmotor = 4;
int rightmotor1 = 5;
int buzzer = 12;
void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
void loop() {
  int a = analogRead(tempPin);
  temp = a * 0.48828125;
  Serial.print(" temperature");
  Serial.print(temp);
  Serial.print("*C");
  Serial.println();
  delay(500);
  if (temp <= 40) {
    digitalWrite(leftmotor, HIGH);
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, HIGH);
    digitalWrite(rightmotor1, LOW);
    digitalWrite(buzzer, LOW);
  }
  if (temp >= 40) {
    digitalWrite(leftmotor, LOW);
    digitalWrite(leftmotor1, LOW);
    digitalWrite(rightmotor, LOW);
    digitalWrite(rightmotor1, LOW);
    digitalWrite(buzzer, HIGH);
  }
}
