#include <WiFi.h>
#include "../lib/modules/drv8833/motor_driver.h"
#include "../lib/tasks/motorControl/motor_control.h"

MotorDriver motor(4, 5, 6, 7); // Pin setup: AIN1, AIN2, BIN1, BIN2

const char* ssid = "Smartcar";
const char* password = "password";

void setup(){
  Serial.begin(9600);

  // Mulai Wi-Fi sebagai Access Point
  WiFi.softAP(ssid, password);
  Serial.println("Access Point Started");
  
  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());

  // Setup motor driver
  setupMotorDriver(motor);
}

void loop() {
  // Eksekusi motor tasks
  executeMotorTasks(motor);
}