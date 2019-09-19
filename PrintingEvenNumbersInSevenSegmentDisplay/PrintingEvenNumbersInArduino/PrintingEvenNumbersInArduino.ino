void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 2 ; i <= 9 ; i++ )
  {
     if(i/2==1)
     {
       digitalWrite(2,HIGH);
       digitalWrite(3,HIGH);
       digitalWrite(4,LOW);
       digitalWrite(5,HIGH);
       digitalWrite(6,HIGH);
       digitalWrite(7,LOW);
       digitalWrite(8,HIGH);
     }
     delay(1000);
     if(i/2==2)
     {
       digitalWrite(2,LOW);
       digitalWrite(3,HIGH);
       digitalWrite(4,HIGH);
       digitalWrite(5,LOW);
       digitalWrite(6,LOW);
       digitalWrite(7,HIGH);
       digitalWrite(8,HIGH);
     }
     delay(1000);
     if(i/2==3)
     {
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
       digitalWrite(4,HIGH);
       digitalWrite(5,HIGH);
       digitalWrite(6,HIGH);
       digitalWrite(7,HIGH);
       digitalWrite(8,HIGH);
     }
     delay(1000);
     if(i/2==4)
     {
       digitalWrite(2,HIGH);
       digitalWrite(3,HIGH);
       digitalWrite(4,HIGH);
       digitalWrite(5,HIGH);
       digitalWrite(6,HIGH);
       digitalWrite(7,HIGH);
       digitalWrite(8,HIGH);
     }
     delay(1000);
  }

}
