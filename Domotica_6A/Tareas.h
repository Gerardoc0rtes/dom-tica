class Task {
public:
uint64_t tiempoActual =0,
          tiempoTranscurrido_tarea1 = 0,
          tiempoTranscurrido_RTC_showtime = 0,
          tiempoTranscurrido_tarea2 = 0;

public:
      void tarea_1 (void);
      void RTC_showtime (void);
      void tarea_2 (void);
};


void Task :: tarea_1 (void) {
  
  if ( tiempoActual - tiempoTranscurrido_tarea1 >= TIEMPO_TAREA_1 ) {
    
    tiempoTranscurrido_tarea1 = tiempoActual;
    Serial.println ( "Tarea 1" );
    
  }
}

void Task :: tarea_2 (void) {
  
  if ( tiempoActual - tiempoTranscurrido_tarea2 >= TIEMPO_TAREA_2 ) {
    
    tiempoTranscurrido_tarea2 = tiempoActual;
    Serial.println ( "Tarea 2" );
    
  }
  
}

void Task :: RTC_showtime (void) {
  
  if ( tiempoActual - tiempoTranscurrido_RTC_showtime >= TIEMPO_RTC_SHOWTIME ) {
    
    tiempoTranscurrido_RTC_showtime = tiempoActual;
    CLK.update_time();
    CLK.format_time();
    CLK.format_date();
    Serial.println (F ("hora:"));
    Serial.println(CLK.tiempo);
    Serial.println(F("fecha:"));
    Serial.println(CLK.fecha);
    
  }
}
