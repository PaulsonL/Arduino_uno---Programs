#define A 2
#define B 3

int CurrentState = 0 ;
int LastState = 0;
int counter  = 0;

void setup(){
  pinMode(A,INPUT_PULLUP);
  pinMode(B,INPUT_PULLUP);
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
    }
    else
    {
      counter--;
    }
    Serial.println(counter);
  }
  LastState = CurrentState; 
 }
