/*
 * led_traffic.h
 *
 *  Created on: Oct 26, 2024
 *      Author: GIGABYTE
 */

#ifndef INC_TRAFFIC_LIGHT_H_
#define INC_TRAFFIC_LIGHT_H_
#include "global.h"

void light_traffic_redX();
void light_traffic_yellowX();
void light_traffic_greenX();

void light_traffic_redY();
void light_traffic_yellowY();
void light_traffic_greenY();


void toggle_all_yellow();
void toggle_all_red();
void toggle_all_green();


void clear_red_green_yellow();
#endif /* INC_TRAFFIC_LIGHT_H_ */
