#include "MQTT.h"
 MQTT mqtt;

long lastMsg = 0;
void setup ( void ) {
  
  Serial.begin(115200);

  mqtt.setup_WiFi ( );
  mqtt.set_MQTT_server ( );
  mqtt.set_MQTT_callback (  );
  
}

void loop ( void ) {
  delay ( 10 );
  mqtt.reconnect_MQTT ( );
  long now = millis();
    if (now - lastMsg > 5000) {
      lastMsg = now;
      
    mqtt.publish_MQTT ( );
      }
 
  
}