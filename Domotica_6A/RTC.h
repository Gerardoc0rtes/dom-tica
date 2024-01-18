#include "RTClib.h"
RTC_DS1307 rtc;

 class RTC{

   public:
   String tiempo="", fecha="";
   uint8_t 
          hora= 0,
          minutos =0,
          segundos=0,
          mes = 0,
          dia =0;

    uint16_t ano =0;

   public:
        void RTC_begin (void);
        void RTC_first_time (void);
        void format_time (void);
        void format_date(void);
        void update_time(void);
        
 };



void RTC :: RTC_begin (void){
         if (! rtc.begin()) 
    Serial.println(F("Revisa conexiones"));
  
}

void RTC :: RTC_first_time (void){
    if (! rtc.isrunning()) {
    Serial.println("");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
    // rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0));


  }



}

void RTC :: update_time (void){
  DateTime now = rtc.now();
  hora = now.hour();
  minutos = now.minute();
  segundos = now.second();
  ano = now.year();
  mes = now.month();
  dia = now.day();
  }

void RTC :: format_date (void){
tiempo="";

if( hora < 10) tiempo += '0';
tiempo += hora;
tiempo += ':';

if( minutos < 10) tiempo += '0';
tiempo += minutos;
tiempo += ':';

if( segundos < 10) tiempo += '0';
tiempo += segundos;
}

void RTC :: format_time (void){
fecha="";

if( dia < 10) tiempo += '0';
fecha += dia;
fecha += '/';

if( mes < 10) fecha += '0';
fecha += mes;
fecha += '/';

if( ano < 10) fecha += '0';
fecha += ano;

}