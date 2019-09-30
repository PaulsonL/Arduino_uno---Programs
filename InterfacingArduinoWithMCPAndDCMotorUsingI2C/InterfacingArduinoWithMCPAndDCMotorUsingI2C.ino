#include <Wire.h>

#include <Adafruit_MCP23017.h>
Adafruit_MCP23017 mcp;


#define addr 0

int mcp_pin1 = 0 ;
int mcp_pin2 = 1;

void setup() {
   Serial.begin(9600);
   mcp.begin(addr);
   mcp.pinMode(mcp_pin1,OUTPUT);
   mcp.pinMode(mcp_pin2,OUTPUT);  
 }

void loop() {
 
  mcp.digitalWrite(mcp_pin1,HIGH);
  mcp.digitalWrite(mcp_pin2,LOW);
  delay(10000);
  mcp.digitalWrite(mcp_pin1,LOW);
  mcp.digitalWrite(mcp_pin2,HIGH);
  delay(5000);
}
