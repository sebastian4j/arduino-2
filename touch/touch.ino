const int SENSOR = 7;

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR, INPUT);
}

void loop() {
  int state = digitalRead(SENSOR);
  if(state == HIGH) {
    Serial.println("tocado");
  }
}