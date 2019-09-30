#define A 2
#define B 3

int CurrentState = 0 ;
int LastState = 0;
int counter  = 0;

int Motor_Pin_1 = 8;
int Motot_Pin_2 = 9;


void setup(){
  pinMode(A,INPUT_PULLUP);
  pinMode(B,INPUT_PULLUP);
  pinMode(Motor_Pin_1,OUTPUT);
  pinMode(Motor_Pin_2,OUTPUT);
  
  Serial.begin(9600);
  LastState = digitalRead(A);
}

void loop(){
  CurrentState = digitalRead(A);
  if( CurrentState != LastState )
  {
    if( digitalRead(B) != CurrentState )
    {
      counter++;
      digitalWrite(Motor_Pin_1,HIGH);
      digitalWrite(Motor_Pin_2,LOW);
      
    }
    else
    {
      counter--;
      digitalWrite(Motor_Pin_1,LOW);
      digitalWrite(Motor_Pin_2,HIGH);
    }
    Serial.println(counter);
  }
  LastState = CurrentState; 
 }
