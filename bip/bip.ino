int buzzPin =  3;

void setup() {        
  pinMode(buzzPin, OUTPUT);     
}

void loop() {
  digitalWrite(buzzPin, HIGH);
  delay(1);
  digitalWrite(buzzPin, LOW); 
  delay(1);       
}
