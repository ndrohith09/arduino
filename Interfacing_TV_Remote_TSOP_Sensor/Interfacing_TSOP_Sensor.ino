int tsopPin = 12;
void setup()
{
  Serial.begin(9600);
  pinMode(12, INPUT);
}
void loop()
{
  int remote_val = remote();
  if (remote_val > 0) {
    Serial.println(remote_val);
    delay(200);
  }
}
int remote() {
  int value = 0;
  int time = pulseIn(12, LOW);
  if (time > 2000) {
    for (int counter1 = 0; counter1 < 12; counter1++) {
      if (pulseIn(12, LOW) > 1000) {
        value = value + (1 << counter1);
      }
    }
  }
  return value;
}
