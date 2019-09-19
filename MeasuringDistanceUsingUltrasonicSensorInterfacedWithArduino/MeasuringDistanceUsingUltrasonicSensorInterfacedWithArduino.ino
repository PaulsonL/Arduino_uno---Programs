int trig = 2 ;
int echo = 3 ;
long distance ;
long duration;


void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  digitalWrite(trig,LOW);
  Serial.begin(9600);
}


void loop(){

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  duration = pulseIn(echo,HIGH);

  distance = duration / 58 ;  // Because of delayMiroseconds(10) the duration is divided by 58 . 

   Serial.print(" Distance in cm :  " );
   Serial.println(distance);
   delay(1000);
   
}
