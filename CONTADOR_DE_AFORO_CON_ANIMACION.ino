/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Perito en electonica
 * Quinto perito
 * EB5AM
 * Taller de electronica digital y reparacion de computadoras
 * Nombre: Francisco Barillas
*/

//Librerias
#include <LiquidCrystal.h>


//Definiciones de preprocesador
#define RS  12
#define Enable 11
#define D4 8
#define D5 7
#define D6 6
#define D7 5
#define TRIG 4
#define ECHO 3
#define BUZZ 2
int DO  = 494;
long DISTANCIA;
int PERSONAS = -1;
//Constructor
LiquidCrystal LCD_FRANCISCO_BARILLAS(RS, Enable, D4, D5, D6, D7); //Constructor que me permite usar la LCD

byte ninoConBrazoArriba[] = {
  B01110,
  B01110,
  B01110,
  B10101,
  B01110,
  B00100,
  B01010,
  B01010
};

byte ninoConBrazoAbajo[] = {
  B01110,
  B01110,
  B01110,
  B00100,
  B01110,
  B10101,
  B01010,
  B01010
};

void setup(){
  for(int i = 0; i <=16; i++){
   pinMode(i,OUTPUT);
}
   pinMode(TRIG, OUTPUT);
   pinMode(ECHO, INPUT);
   pinMode(BUZZ, OUTPUT);
   LCD_FRANCISCO_BARILLAS.begin(16,2); 
   LCD_FRANCISCO_BARILLAS.createChar(1,ninoConBrazoAbajo);
   LCD_FRANCISCO_BARILLAS.createChar(2,ninoConBrazoArriba);
   LCD_FRANCISCO_BARILLAS.setCursor(0,0); 
   LCD_FRANCISCO_BARILLAS.print("PERSONAS");
}
void loop(){
  Medicion();
  Limite_de_Personas();
}
int Medicion(){
  long T; 
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10); 
  digitalWrite(TRIG, LOW);
  T = pulseIn(ECHO, HIGH);
  DISTANCIA = T/58.2; 
  delay(100);
  return DISTANCIA;
  }
 
 void Limite_de_Personas(){
    if(DISTANCIA >= 2 && DISTANCIA <=4){
    PERSONAS = PERSONAS + 1;
      }
      
    switch(PERSONAS){
     case 1:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS"); 
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;

     case 2:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      
     case 3:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      
     case 4:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      
      case 5:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      
      case 6:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      case 7:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      case 8:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      
      case 9:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      
      case 10:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      
      case 11:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      case 12:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      case 13:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      case 14:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      case 15:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("PERSONAS");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      delay(300);
      break;
      case 16:
      LCD_FRANCISCO_BARILLAS.setCursor(0,0);
      LCD_FRANCISCO_BARILLAS.print("LIMITE ALCANZADO");
      LCD_FRANCISCO_BARILLAS.setCursor(PERSONAS-1,1); 
      LCD_FRANCISCO_BARILLAS.write(1);
      break;
    }
      if(PERSONAS > 17){
      Limite_Alcanzado();
      }
      }
void Limite_Alcanzado(){
     tone(BUZZ, 523);
      LCD_FRANCISCO_BARILLAS.setCursor(0,1);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);//animacion1
      delay(500);
      LCD_FRANCISCO_BARILLAS.setCursor(0,1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1);
      LCD_FRANCISCO_BARILLAS.write(2);
      LCD_FRANCISCO_BARILLAS.write(1); //animacion 2
      delay(500);
      }
 
    
