#include <LiquidCrystal.h>
int contrast = 20 ;
LiquidCrystal lcd(12,11,5,4,3,2);

void setup(){
  analogWrite(9,contrast);
  lcd.begin(16,2);
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print(" Hey  " );
  lcd.setCursor(0,1);
  lcd.print(" Paulson here ! ");
  
  
}
