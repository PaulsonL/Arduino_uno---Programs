#include <SoftwareSerial.h>
SoftwareSerial task(3,2); // Rx , Tx
int a;
void setup(){
  Serial.begin(9600);
  pinMode(2,INPUT);   // Tx;
  pinMode(3,OUTPUT);  // Rx; 
}
void loop(){
  digitalWrite(2,HIGH);
  if( digitalRead(3) == 1 )
  Serial.println("Paulson");
  else
  Serial.println("Raja");
}
