/*
 * button.h
 *
 *  Created on: Oct 26, 2024
 *      Author: GIGABYTE
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE SET
#define PRESSED_STATE RESET


#include "global.h"



int isButtonPress(int index);
void getKeyInput();
#endif /* INC_BUTTON_H_ */
