/*
   Fundacion Kinal
   Centro educativo tecnico laboral kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: TERCERA PARTE PRACTICA 5.
   Dev: Carlos Santos
   Fecha: 28 de abril
*/
#define reles 6
int buzz = 12;
int Led_pin1 =(2);
int Led_pin2 =(3);
int Led_pin3 =(4);
int Led_pin4 =(5);
int interruptor_1 = (8);
int x = (0);
 
void setup()
{
pinMode (8, INPUT);
pinMode (9, INPUT);
pinMode (10, INPUT);
pinMode (2, OUTPUT);
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);
pinMode (5, OUTPUT);
}
 
void loop()
{
  if (digitalRead (interruptor_1) == HIGH){
digitalWrite (2, HIGH);
digitalWrite (3, LOW);
digitalWrite (4, LOW);
digitalWrite (5, HIGH);
  delay(1000);
digitalWrite (2, LOW);
digitalWrite (3, LOW);
digitalWrite (4, LOW);
digitalWrite (5, HIGH);
  delay(1000);
digitalWrite (2, HIGH);
digitalWrite (3, HIGH);
digitalWrite (4, HIGH);
digitalWrite (5, LOW);
  delay(1000);
digitalWrite (2, LOW);
digitalWrite (3, HIGH);
digitalWrite (4, HIGH);
digitalWrite (5, LOW);
  delay(1000);
digitalWrite (2, HIGH);  
digitalWrite (3, LOW);
digitalWrite (4, HIGH);
digitalWrite (5, LOW);
  delay(1000);
digitalWrite (2, LOW);
digitalWrite (3, LOW);
digitalWrite (4, HIGH);
digitalWrite (5, LOW);
  delay(1000);
digitalWrite (2, HIGH);
digitalWrite (3, HIGH);
digitalWrite (4, LOW);
digitalWrite (5, LOW);
  delay(1000);
digitalWrite (2, LOW);
digitalWrite (3, HIGH);
digitalWrite (4, LOW);
digitalWrite (5, LOW);
  delay(1000);
digitalWrite (2, HIGH);
digitalWrite (3, LOW);
digitalWrite (4, LOW);
digitalWrite (5, LOW);
  delay(1000);
digitalWrite (2, LOW);
digitalWrite (3, LOW);
digitalWrite (4, LOW);
digitalWrite (5, LOW);
  delay(1000);
tone(buzz,250, 1000);
  delay(550);
  digitalWrite(reles, HIGH);
   delay(500);
   noTone(buzz);
   delay(500);
   digitalWrite(reles, LOW);
  }
  
}
