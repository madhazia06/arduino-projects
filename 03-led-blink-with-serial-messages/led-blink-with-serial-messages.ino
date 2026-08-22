void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  Serial.println("Power On!");
  delay(2000);
  
  digitalWrite(13,LOW);
  Serial.println("Power Off!");
  delay(1000);
}
