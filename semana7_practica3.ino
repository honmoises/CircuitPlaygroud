//UNIVERSIDAD CENFOTEC
//INTRODUCCION A LAS TIC´S
//ALUMNO:
//PRACTICA SEMANA 7

//LIBRERIA DEL CP
#include <Adafruit_Circuit_Playground.h>

void setup() {
//INICIA EL CIRCUIT PLAYGROUND
 CircuitPlayground.begin();
 Serial.begin(9600);

}

void loop() {
//VER EL RESULTADO
CircuitPlayground.clearPixels();
if (CircuitPlayground.leftButton()) {
   Serial.println("Cartago Campeón");
   CircuitPlayground.setPixelColor(5,50,50,196);
   delay(100);
   CircuitPlayground.setPixelColor(6,50,50,196);
   delay(100);
   CircuitPlayground.setPixelColor(7,50,50,196);
   delay(100);
   CircuitPlayground.setPixelColor(8,50,50,196);
   delay(100);
   CircuitPlayground.setPixelColor(9,50,50,196);
   
   delay(200);
} else if (CircuitPlayground.rightButton()) {
   Serial.println("Liga Campeón");
   CircuitPlayground.setPixelColor(0,204,0,0);
   delay(100);
   CircuitPlayground.setPixelColor(1,204,0,0);
   delay(100);
   CircuitPlayground.setPixelColor(2,204,0,0);
   delay(100);
   CircuitPlayground.setPixelColor(3,204,0,0);
   delay(100);
   CircuitPlayground.setPixelColor(4,204,0,0);
   delay(200);

}

}
