int Led_Pin = 13 ;
int Push_Button = 2;

void setup(){
  pinMode(Push_Button ,INPUT);
  pinMode(Led_Pin,OUTPUT);
}

void loop(){ 
  digitalWrite(Led_Pin,digitalRead(Push_Button));
 
}
