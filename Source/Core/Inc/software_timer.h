/*
 * software_timer.h
 *
 *  Created on: Oct 26, 2024
 *      Author: GIGABYTE
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define SIZE 10
extern int flag_timer[SIZE];

void setTimer(int index, int duration);
void runTimer(int index);

#endif /* INC_SOFTWARE_TIMER_H_ */
