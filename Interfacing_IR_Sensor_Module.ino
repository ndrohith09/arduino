int ir = 2;
int led = 13;
void setup() {
  pinMode(ir,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  if (digitalRead(ir) == HIGH)//when ir is high led glows
  {
    digitalWrite(led,HIGH);
  }
  else {
    digitalWrite(led,LOW);
  }
}
