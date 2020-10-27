int tsopPin = 12;
int ledPin = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);// connect led to 13th digital pin
}
void loop()
{
  int remote_val = remote();
  if (remote_val == 128)//no.1 in sony remote
  {
    digitalWrite(13,HIGH);
    delay(100);
  }
  if(remote_val ==129){
    digitalWrite(13,HIGH);
    delay(100);
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
