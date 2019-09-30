#include <Wire.h>

#include <Adafruit_MCP23017.h>
Adafruit_MCP23017 mcp;


#define addr 0

int mcp_pin1 = 0 ;
int mcp_pin2 = 1 ;
int mcp_pin3 = 2 ;

void setup() {
   Serial.begin(9600);
   mcp.begin(addr);
   mcp.pinMode(mcp_pin1,OUTPUT);
   mcp.pinMode(mcp_pin2,OUTPUT);  
   mcp.pinMode(mcp_pin3,INPUT);
 }

void loop() {
  if(mcp.digitalRead(mcp_pin3) == 1 ){
  mcp.digitalWrite(mcp_pin1,HIGH);
  mcp.digitalWrite(mcp_pin2,LOW);
  delay(5000);
  }
  else{
  mcp.digitalWrite(mcp_pin1,LOW);
  mcp.digitalWrite(mcp_pin2,LOW);
  delay(5000);}
}
