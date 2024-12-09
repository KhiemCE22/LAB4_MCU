/*
 * button.c
 *
 *  Created on: Oct 26, 2024
 *      Author: GIGABYTE
 */

#include "button.h"
#define BTN_COUNT 3

int button_flag[BTN_COUNT] = {0, 0, 0};
int TimeOutForKeyPress = 500;
int keyReg0[BTN_COUNT] = { NORMAL_STATE, NORMAL_STATE, NORMAL_STATE };
int keyReg1[BTN_COUNT] = { NORMAL_STATE, NORMAL_STATE, NORMAL_STATE };
int keyReg2[BTN_COUNT] = { NORMAL_STATE, NORMAL_STATE, NORMAL_STATE };
int keyReg3[BTN_COUNT] = { NORMAL_STATE, NORMAL_STATE, NORMAL_STATE }; // previous stable state

int isButtonPress(int index){
	if (button_flag[index] == 1){
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}
void getKeyInput(){
	for (int index = 0; index < BTN_COUNT; index ++){
		keyReg2[index] = keyReg1[index];
		keyReg1[index] = keyReg0[index];
		if (index == 0)
			keyReg0[index] = HAL_GPIO_ReadPin(BT1_GPIO_Port, BT1_Pin);
		else if (index == 1)
			keyReg0[index] = HAL_GPIO_ReadPin(BT2_GPIO_Port, BT2_Pin);
		else if (index == 2)
			keyReg0[index] = HAL_GPIO_ReadPin(BT3_GPIO_Port, BT3_Pin);
		else {
			// Do Nothing
		}

		if ((keyReg0[index] == keyReg1[index])  && (keyReg1[index] == keyReg2[index])){
			if (keyReg0[index] != keyReg3[index]){
				keyReg3[index] = keyReg0[index];
				if (keyReg0[index] == PRESSED_STATE){
					TimeOutForKeyPress = 500;
					//TODO
					button_flag[index] = 1;
				}
			}
			else {
				TimeOutForKeyPress --;
				if (TimeOutForKeyPress == 0){
					TimeOutForKeyPress = 500;
					if (keyReg0[index] == PRESSED_STATE){
						//TODO
						button_flag[index] = 1;
					}
				}
			}
		}
	}


}
