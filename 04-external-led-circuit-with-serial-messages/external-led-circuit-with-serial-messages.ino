void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12,HIGH);
  Serial.println("Power On!");
  delay(2000);
  
  digitalWrite(12,LOW);
  Serial.println("Power Off!");
  delay(1000);
}
