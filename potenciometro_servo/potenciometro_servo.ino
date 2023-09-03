#include <Servo.h>
 
Servo servo;
int potenciometro = -1; 
double fx = double(180)/double(1023);

void setup() {
  Serial.begin(9600);
  servo.attach(9);
}
 
void loop() {
  potenciometro = analogRead(A0);
  int tmp = (int)(potenciometro * fx);
  mover(tmp);
}

void mover(int grados) {
  servo.write(grados);
  delay(100);
}

