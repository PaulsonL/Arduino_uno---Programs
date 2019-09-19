
void setup(){
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
}

void loop(){
  if(digitalRead(2) == 0 )
  Serial.println(" Switch - 1 is pressed " );
  else if(digitalRead(3) == 0 )
  Serial.println(" Switch - 2 is pressed " );
  else if(digitalRead(4) == 0 )
  Serial.println(" Switch - 3 is pressed " );
  else if(digitalRead(5) == 0 )
  Serial.println(" Switch - 4 is pressed " );
  else if(digitalRead(6) == 0 )
  Serial.println(" Switch - 5 is pressed " );
  else if(digitalRead(7) == 0 )
  Serial.println(" Switch - 6 is pressed " );
  else
  Serial.println(" No switch is pressed");
  delay(1000);
}
