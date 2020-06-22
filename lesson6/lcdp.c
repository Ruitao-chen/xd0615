#include <stdio.h>
#include <LiquidCrystal.h>

String str="";
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
  lcd.begin(16, 2);
  Serial.begin(9600);
}
void loop() 
{
  if(Serial.available()>0)
  {
   str += char(Serial.read());
    delay(100);
  }
  if(str.length()>0)
  {
    Serial.println(str);
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print(str);
  }
  delay(100);
  str="";
}
 