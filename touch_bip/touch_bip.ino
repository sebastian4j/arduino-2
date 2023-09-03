const int SENSOR = 7;
const int BIP = 3;

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR, INPUT);
  pinMode(BIP, OUTPUT);     
}

void loop() {
  int state = digitalRead(SENSOR);
  if(state == HIGH) {
    sonar();
  } else {
    noSonar(); 
  }
}

void sonar() {
  digitalWrite(BIP, HIGH);
  delay(1);
  digitalWrite(BIP, LOW); 
  delay(1);       
}

void noSonar() {
  digitalWrite(BIP, LOW);
}

