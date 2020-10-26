int ledPin = 13;
int state;
int flag;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available() > 0)
  {
    state = Serial.read();
    flag = 0;
  }
  if (state == '0')//on pressing 0 in BlueTerm App(playstore) the led glows
  {
    digitalWrite(13, HIGH);
    if (flag = 0)
    {
      Serial.println("GLOWING");
      flag = 1;
    }
  }
  else if (state == '1')//on pressing 1 in BlueTerm App (playstore) the led turns off
  {
    digitalWrite(8, LOW);
    if (flag == 0)
    {
      Serial.println(" NOT GLOWING");
      flag = 1;
    }
  }
}

