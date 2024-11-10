/*
 * unittest.c
 *
 *  Created on: Oct 26, 2024
 *      Author: GIGABYTE
 */


#include "unittest.h"

void unittest_blinky(){
	HAL_GPIO_TogglePin(LED_BLINKY_GPIO_Port, LED_BLINKY_Pin);
}

void unittest_button_toggle(){
	HAL_GPIO_TogglePin(LED_TOGGLE_GPIO_Port, LED_TOGGLE_Pin);
}

