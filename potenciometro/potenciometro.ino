// 0 a 1023

long valor;
 
void setup() {
  Serial.begin(9600); 
}
 
void loop() {
  valor = analogRead(A0);
  Serial.println(valor);
  delay(500);
}