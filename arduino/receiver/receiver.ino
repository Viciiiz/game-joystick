#include <ESP8266WiFi.h>

void setup() {
  // Initialize the ESP8266 module
  WiFi.mode(WIFI_STA);  // Set the WiFi mode to Station (client) mode
  WiFi.begin("Victor-xy-ESP8266", NULL, 0, NULL, true);  // Connect to the WiFi Direct network
  while (WiFi.status() != WL_CONNECTED) {  // Wait for the connection to be established
    delay(1000);
    Serial.println("Connecting to WiFi Direct...");
  }
  Serial.println("Connected to WiFi Direct");
}

void loop() {
  
}
