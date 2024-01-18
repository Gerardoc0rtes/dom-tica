#include "MicroSD.h"
MicroSD MSD;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  MSD.MicroSD_init( );
  
  //Serial.println("Hello, ESP32!");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay ( 2000 ); // this speeds up the simulation
  Serial.println("Guardando en MicroSD...");
  MSD.SaveFile ( );
  delay ( 500 );
  Serial.println("Leyendo MicroSD...");
  MSD.ReadFile ( );
}
