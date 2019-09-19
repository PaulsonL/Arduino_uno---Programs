#include <SoftwareSerial.h>
SoftwareSerial task(5,2);
int data;

void setup(){
  pinMode(13,OUTPUT);
  task.begin(9600);
}

void loop(){
  if( task.available() > 0 ){
  data = task.read();

  if( data == '1' ){
  digitalWrite(13,HIGH);
  task.println(" LED ON " );}
  else{
  digitalWrite(13,LOW);
  task.println(" LED OFF ");}

  }
  delay(2000);
}

  
