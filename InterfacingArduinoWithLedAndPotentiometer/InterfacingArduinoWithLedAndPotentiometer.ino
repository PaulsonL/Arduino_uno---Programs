int Pot_Pin = A0 ;
int Led_Pin = 3 ;
int read_value ;
float write_value ;


void setup() {
  Serial.begin(9600);
  pinMode(Pot_Pin,INPUT);
  pinMode(Led_Pin,OUTPUT);
   
}

void loop() {
  read_value = analogRead(Pot_Pin);
  write_value = (255/1023.0)*read_value;
  Serial.println(write_value);
  analogWrite(Led_Pin,write_value);
  delay(500);

}
