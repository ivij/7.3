void setup() {
 
  Serial.begin(9600);
  pinMode(6, INPUT);
    pinMode(8, INPUT);
      pinMode(1, OUTPUT);
      
    pinMode(2, OUTPUT);
}

void loop() {
 
  if (digitalRead(6) == HIGH) {
    Serial.println("Active");
    digitalWrite(1,HIGH);
  }
  else {
    Serial.println("Inactive");
    digitalWrite(1,LOW);
  }
  if (digitalRead(8) == HIGH) {
    Serial.println("Active");
    digitalWrite(2,HIGH);
  }
  else {
    Serial.println("Inactive");
     digitalWrite(2,LOW);
  }
  delay(1000);
}
