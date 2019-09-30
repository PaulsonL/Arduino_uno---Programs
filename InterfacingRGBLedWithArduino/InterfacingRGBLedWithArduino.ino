int Red_Led = 3;          // Must be connected to any of the PWM pins in the digital side
int Green_Led = 5;
int Blue_Led = 6;
int Red_Brightness ;      // Value must be between 0 and 255  for analogWrite function
int Green_Brightness ;
int Blue_Brightness ;

void setup() {
  Serial.begin(9600);
  
  pinMode(Red_Led,OUTPUT);
  pinMode(Green_Led,OUTPUT);
  pinMode(Blue_Led,OUTPUT);

  Serial.println(" Set the brightness of RED Led " );
  while(Serial.available() == 0 ){
    // Wait
  }
  Red_Brightness =  Serial.parseInt();


  Serial.println(" Set the brightness of GREEN Led " );
  while(Serial.available() == 0){
    // Wait 
  }
  Green_Brightness = Serial.parseInt();

  Serial.println(" Set the brightness of BLUE Led " );
  while(Serial.available() == 0){
    // Wait 
  }
  Blue_Brightness = Serial.parseInt();
  
}

void loop() {

  analogWrite(Red_Led,Red_Brightness);
  analogWrite(Green_Led,Green_Brightness);
  analogWrite(Blue_Led,Blue_Brightness);

}
