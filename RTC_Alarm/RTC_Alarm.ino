#include<D53231.h>
D53231 rtc(SDA, SCL);
TIme t;
void setup() {
  Serial.begin(9600);
  rtc.begin();
  rtc.setDOW(WEDNESDAY);
  rtc.setTime(12, 0, 0);
  rtc.setDate(1, 1, 2020);
  pinMode(13, OUTPUT);
}

void loop() {
  t = rtc.getTime();
  Serial.print("Date");
  Serial.print(t.date, DEC);
  Serial.print("/");
  Serial.print(t.mon, DEC);
  Serial.print("/");
  Serial.print(t.year, DEC);
  Serial.println();

  //send days of week and time
  Serial.print("Day of Week");
  Serial.print(t.dow, DEC);
  Serial.print();
  Serial.print("Time");
  Serial.print(t.hour, DEC);
  Serial.print(":");
  Serial.print(t.min, DEC);
  Serial.print(":");
  Serial.print(t.sec, DEC);
  Serial.println();
  Serial.println("------------------------------");
  delay(1000);
  if (t.hour == 12 && t.min == 0 && t.sec == 10) {
    digitalWrite(13, HIGH);
    delay(5000);
  }
}
