int IR_Pin = 7 ;
int Motor_1 = 2 ;
int Motor_2 = 3 ; 
void setup() {
  pinMode(IR_Pin,INPUT);
  pinMode(Motor_1,OUTPUT);
  pinMode(Motor_2,OUTPUT);

}

void loop() {
  if (digitalRead(IR_Pin)==HIGH)
  {
    digitalWrite(Motor_1,HIGH);
    digitalWrite(Motor_2,LOW);
  }
  else
  {
    digitalWrite(Motor_1,LOW);
    digitalWrite(Motor_2,LOW);
  }

}
