#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("HELLO WORLD");
  lcd.scrollDisplayLeft();//Letters move left with a delay of 1 sec (optional)
  delay(1000);
  lcd.setCursor(1, 0);
  lcd.print("ROBOT GEEK");
  lcd.scrollDisplayRight();//Letters move right with a delay of 1 sec(optional)
  delay(1000);
  
}

