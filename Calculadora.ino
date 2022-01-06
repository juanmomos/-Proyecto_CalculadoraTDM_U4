#include <SoftwareSerial.h>
#include "Suma.h"                             //Librería suma creada por David
//.........................................................

//Agregar aquí las librerias

//.........................................................
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
 }
 Serial.println("Calculadora Colaborativa");

}


void loop() {
int a=0,b=0,ind;                             //variable donde se almacena los numeros ingresados
int i,j=0;                                      //indices de los ciclos
      Serial.println("1) Suma");                //Menú de opciones
      Serial.println("2) Resta");
      Serial.println("3) Multiplicacion");
      Serial.println("4) Division");
      Serial.println("5) Potencia");
      
      while(j!=1){                
        
    if (Serial.available() > 0) {
  indice =Serial.parseInt();
  switch(ind){
    case 1: 
          Serial.println("");                         //Separa la suma del menú
          Serial.println("Suma");
         Serial.print("Ingrese el primer Numero: ");
          
          while(i!=2){                                  //ciclo para agregar el primer número
             if (Serial.available() > 0) {  
               a =Serial.parseInt();
             if(a>0){
                Serial.println(a);
                i=2;              
             }
             }
            }
            
          Serial.print("Ingrese el segundo Numero: ");
          while(i!=1){                                    //ciclo para agregar el segundo número
             if (Serial.available() > 0) {
            b =Serial.parseInt();
             if(b>0){              
              Serial.println(b);
              i=1;  
             }
             }
          }

          Serial.print("Resultado: ");
          Serial.println(Suma(a,b));
          j=1;                                              //se reinicia la variable h para volver a mostrar el menú
          ind=0;                                         //se Reinicia indice del switch
          Serial.println("");
    break;

//......................................................................

//agregar aquí los siguientes cases

//......................................................................
    
    default:
    break;
  }
  }
  }
}
