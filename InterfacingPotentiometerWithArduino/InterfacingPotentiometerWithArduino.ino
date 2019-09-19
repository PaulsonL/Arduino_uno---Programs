int pot = A0;
int read_value;
float voltage;
void setup() {
  pinMode(pot,INPUT);
  Serial.begin(9600);
}

void loop() {
  read_value = analogRead(pot);
  voltage = (5/1023.0) * read_value ;
  Serial.println(voltage);
  delay(500);

}
