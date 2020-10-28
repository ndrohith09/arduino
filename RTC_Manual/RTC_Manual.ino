void setup() {
  Serial.begin(115200);
  rtc.begin();
  rtc.setDOW(WEDNESDAY);
  rtc.setTime(12, 0, 0);
  rtc.setDate(1, 1, 2020);

}

void loop() {

  // send Days of weeks
  Serial.print(rtc.getDOWStr());
  Serial.print("");

  // send date
  Serial.print(rtc.getDateStr());
  Serial.print("-");

  //send time
  Serial.println(rtc.getTimeStr());
  delay(1000);  //wait one second before repeating
}
