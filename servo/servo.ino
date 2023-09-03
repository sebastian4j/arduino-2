#include <Servo.h>
 
Servo servo;
 
void setup() {
  Serial.begin(9600);
  servo.attach(9);
}
 
void loop() {
  for (int a = 0; a < 180; a=a+10) {
    mover(a);  
  }
  for (int a = 180; a >= 0; a=a-10) {
    mover(a);  
  }
}

void mover(int grados) {
  servo.write(grados);
  delay(200);
}