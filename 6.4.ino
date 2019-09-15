void setup() {
 
  Serial.begin(9600);
  pinMode(6, INPUT);
}

void loop() {
 
  if (digitalRead(6) == HIGH) {
    Serial.println("Active");
  }
  else {
    Serial.println("Inactive");
  }
  delay(1000);
}
