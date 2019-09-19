#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);
  pinMode(2,INPUT);
  Wire.beginTransmission(0x20);
  Wire.write(0x00);
  Wire.write(0x00);
  Wire.endTransmission();

}

void loop() {
  
  if( digitalRead(2) == 0 ){
  Wire.beginTransmission(0x20);
  Wire.write(0x12);
  Wire.write(00000011);
  delay(1000);
  Serial.println(" On " );
  Wire.endTransmission();}
  else{
  Wire.beginTransmission(0x20);
  Wire.write(0x12);
  Wire.write(00000000);
  delay(1000);
  Serial.println(" Off " );
  Wire.endTransmission();}

}
