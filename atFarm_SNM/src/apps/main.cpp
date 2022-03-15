#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include "../src/apps/App_atModbus.h"

TaskHandle_t Task_Modbus;  
void atModbus_Application(void *parameter)
{
  while (1)
  {
    atMB_app.Run_Application(APP_RUN_MODE_AUTO);
    vTaskDelay(1/ portTICK_PERIOD_MS);
  }
}

void setup() {

    xTaskCreatePinnedToCore(
  atModbus_Application,  //task function
  "Modbus_Application",  // name task
  50000,  //stack size of task
  NULL, 
  1,
  &Task_Modbus,
  0
  );

}

void loop() {
  // put your main code here, to run repeatedly:
}