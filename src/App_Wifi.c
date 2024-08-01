#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "sdkconfig.h"
#include "App_Wifi.h"
//#include "WiFi.h"

//// static const char *TAG = "app_wifi";

/*Connecting to Wifi*/
const char *ssid = "ssid";
const char *password = "YOUR_PASSWORD";



/*Commented Because of The problem of wifi.h*/

// void app_wifi_init(void)
// {
//     // Connect to Wi-Fi
//     WiFi.begin(ssid, password);
//     while (WiFi.status() != WL_CONNECTED)
//     {
//         delay(500);
//         Serial.print(".");
//     }
//     Serial.println("");
//     Serial.println("WiFi connected");
// }
