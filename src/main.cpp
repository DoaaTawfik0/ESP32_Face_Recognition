#include <Arduino.h>
#include "esp_camera.h"
#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include "FS.h"
#include "SD_MMC.h"
#include "SPI.h"
#include "App_Camera.h"

#include "../include/STD_TYPES.h"
#include "../include/ERROR_STATE.h"
#include "../include/BIT_MATH.h"

#include "../include/PIR_Interface.h"

void setup()
{
    Serial.begin(115200);

    /*When enabled, it allows the microcontroller to send extra debug information through the Serial port.
     This can include internal states, errors and other diagnostic messages 
     that are not part of the regular Serial output.*/
    Serial.setDebugOutput(true);
    Serial.println();
}

void loop()
{
  // put your main code here, to run repeatedly:
  delay(10000);
}
