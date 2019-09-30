String Name;
int Age;
int Height;

void setup() {
  Serial.begin(9600);
  // Haha I am not using any pin in arduino !
}

void loop() {
 
  Serial.println(" What's your name ? " );
  while(Serial.available() == 0 ){
    // Wait 
  }
  Name = Serial.readString();

  Serial.println(" How old are you " );
  while(Serial.available() == 0 ){
    // Wait 
  }
  Age = Serial.parseInt();

  Serial.println(" What's your height " );
  while(Serial.available() == 0){
    // Wait 
  }
  Height = Serial.parseInt();
 
  Serial.println(" ");
  Serial.print(" Hi ");
  Serial.print(Name);
  Serial.print(" you are ");
  Serial.println(Age);
  Serial.print(" your height is  ");
  Serial.println(Height);
  Serial.println(" ");
}
