#include <WiFi.h>

const char* ssid = "Smartcar";
const char* password = "password";

void setup(){
  Serial.begin(9600);

  WiFi.softAP(ssid, password);
  Serial.println("Access Point Started");
  
  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {}
