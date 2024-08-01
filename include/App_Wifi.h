#ifndef    _APP_WIFI_H_
#define    _APP_WIFI_H_ 

#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"

extern EventGroupHandle_t g_wifi_event_group;

void app_wifi_init();

#endif