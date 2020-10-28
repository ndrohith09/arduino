int pir = 8;
int ld = 13;
void setup() {
  pinMode(8, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(pir) == HIGH)
  {
    digitalWrite(13, OUTPUT);
    Serial.println("Detected");
  }
  else
  {
    digitalWrite(13, LOW);
    Serial.println("not detected");
  }
}
