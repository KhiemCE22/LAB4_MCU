/*
 * 7segment_led.h
 *
 *  Created on: Oct 26, 2024
 *      Author: GIGABYTE
 */

#ifndef INC_LED7_SEGMENT_H_
#define INC_LED7_SEGMENT_H_

#include "global.h"


void display7SEG();
void clear_all();

void turn_on_1(); //7-segment led first
void turn_on_2(); //7-segment led second
void turn_on_3(); //7-segment led third
void turn_on_4(); //7-segment led fourth

void display7SEG_X(int time);
void display7SEG_Y(int time);
#endif /* INC_LED7_SEGMENT_H_ */
