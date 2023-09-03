const int entrada = 3;

void setup() {
  Serial.begin(9600);
  pinMode(entrada, INPUT);
}

void loop() {
  int leido = digitalRead(entrada);
  Serial.println(leido);
  delay(1000);
}