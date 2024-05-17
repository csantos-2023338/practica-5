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
#include <LiquidCrystal.h>

int seconds = 0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2);
  lcd_1.print("Carlos Santos");
}

void loop()
{
  lcd_1.setCursor(0, 1);
  lcd_1.print(2023338);

}
