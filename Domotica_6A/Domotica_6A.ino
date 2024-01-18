#include "Domotica_6A.h"
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  CLK.RTC_begin();
  CLK.RTC_first_time();
}

void loop() {
  // put your main code here, to run repeatedly:
  TSK.tiempoActual = millis();
  
  //TSK.tarea_1();
  TSK.tarea_2();
  TSK.RTC_showtime();
}
