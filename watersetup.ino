void setup() {
  pinMode(4,OUTPUT);
}

void loop() {
  delay(5000);
  digitalWrite(4,HIGH);
  delay(5000);
  digitalWrite(4,LOW);
}
