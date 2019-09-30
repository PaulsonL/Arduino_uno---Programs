int row_pins[2] = { 4 , 5 } ;       //  Cathode
int column_pins[2] = { 2 , 3 };     //  Anode

void setup(){
  for( int i = 0 ; i < 2 ; i++ ){
    pinMode(row_pins[i],OUTPUT);
    digitalWrite(row_pins[i],HIGH);
}
  for( int i = 0 ; i < 2 ; i++ ){
    pinMode(column_pins[i],OUTPUT);
    digitalWrite(column_pins[i],LOW);
}
  
}
void loop(){
  digitalWrite(2,HIGH);     // 1st Led
  digitalWrite(4,LOW);
  delay(2000);
  
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  delay(1000);
 
  digitalWrite(3,HIGH);     // 2nd Led
  digitalWrite(4,LOW);
  delay(2000);
 
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(1000);
  
  digitalWrite(2,HIGH);     // 3rd Led
  digitalWrite(5,LOW);
  delay(2000);
  
  digitalWrite(2,LOW);
  digitalWrite(5,HIGH);
  delay(1000);
   
  digitalWrite(3,HIGH);      // 4th Led
  digitalWrite(5,LOW);
  delay(2000);
  
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  delay(1000);
  
}  
