#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);
  Wire.beginTransmission(0x20);
  Wire.write(0x00);
  Wire.write(0x00);
  Wire.endTransmission();

}

void loop() {
 
  Wire.beginTransmission(0x20);
  Wire.write(0x12);
  Wire.write(00000011);
  delay(1000);
  Serial.println(" On " );
  Wire.endTransmission();
  
  Wire.beginTransmission(0x20);
  Wire.write(0x12);
  Wire.write(00000000);
  delay(1000);
  Serial.println(" Off " );
  Wire.endTransmission();}

}
