#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Alfred Kondoro");
  lcd.setCursor(0,1);
  lcd.print("Arduino Workshop");
}
void loop() {
}
