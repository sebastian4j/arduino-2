/*
este arhivo de arduino nano es de una placa, y a este funcionamiento no 
le importa el nombre de las luces para que digo esto para no modificaro en el futuro y sus colores
ideales en la placa son: rojo amarillo verde 
fecha: 27/08/2023 22:29
autor: Sebastián Elías Ávila Montecinos.

*/

int verde = 8;
int amarillo = 4;
int rojo = 2;
int pausa = 2000;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
}

void loop() {
  digitalWrite(verde, HIGH);
  delay(pausa);
  digitalWrite(verde, LOW);
  digitalWrite(rojo, HIGH);
  delay(pausa);
  digitalWrite(rojo, LOW);
  digitalWrite(amarillo, HIGH);
  delay(pausa);
  digitalWrite(amarillo, LOW);
}