 /*
 * sd_if.h
 *
 *  Created on: Feb 24, 2019
 *      Author: tombo
 */

#ifndef MAIN_INCLUDE_SD_IF_H_
#define MAIN_INCLUDE_SD_IF_H_

#include "esp_err.h"

// Header: time, MAC, Uptime, Alt, Lat, Lon, PM1, PM2.5, PM10, Temp, Hum
#define DATA_HEADER "Time (UTC),MAC,PM1 (ug/m3),PM2.5 (ug/m3),PM10 (ug/m3)\n"
#define DATA_FORMAT "%02d:%02d:%02d,%s,%.2f,%.2f,%.2f\n"

esp_err_t SD_Initialize(void);
esp_err_t SD_Deinitialize(void);
esp_err_t SD_LogData(char* pkt, struct tm *timeinfo);


#endif /* MAIN_INCLUDE_SD_IF_H_ */
