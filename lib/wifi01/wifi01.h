/**
 * @file wifi01.h
 * //@defgroup bmp280 bmp280
 * @{
 *
 * ESP-IDF wifi test implementation 
 * 
   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
 */
#ifndef __WIFI01_H__
#define __WIFI01_H__

#include <string.h>
#include <time.h>
#include <sys/time.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event_loop.h"
#include "esp_log.h"
#include "esp_attr.h"
#include "esp_sleep.h"
#include "nvs_flash.h"
#include <stdio.h>
#include <string.h>
#include <stdint.h>

#include "lwip/err.h"
#include "lwip/apps/sntp.h"


#ifdef __cplusplus
extern "C" {
#endif

//void obtain_time(void);
void wifi_activate(bool auto_reconnect, bool sntp_sync);
void wifi_deactivate(void);
void sntp_start(void);

#ifdef __cplusplus
}
#endif

/**@}*/

#endif  // __WIFI01_H__
