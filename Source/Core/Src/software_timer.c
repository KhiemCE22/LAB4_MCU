/*
 * software_timer.c
 *
 *  Created on: Oct 26, 2024
 *      Author: GIGABYTE
 */

#include "software_timer.h"

int flag_timer[SIZE];
int timer_counter[SIZE];
int TIMER_CYLE = 10;

void setTimer(int index, int duration){
	timer_counter[index] = duration / TIMER_CYLE;
	flag_timer[index] = 0;
}

void runTimer(int index){
	if (timer_counter[index] > 0){
		timer_counter[index] --;
		if (timer_counter[index] <= 0)
			flag_timer[index] = 1;
	}
}


