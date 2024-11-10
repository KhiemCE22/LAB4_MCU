/*
 * traffic_light.c
 *
 *  Created on: Oct 26, 2024
 *      Author: GIGABYTE
 */


#include "traffic_light.h"


void light_traffic_redX(){
	HAL_GPIO_WritePin(RED_X_GPIO_Port, RED_X_Pin, SET);
	HAL_GPIO_WritePin(YELLOW_X_GPIO_Port, YELLOW_X_Pin, RESET);
	HAL_GPIO_WritePin(GREEN_X_GPIO_Port, GREEN_X_Pin, RESET);
}
void light_traffic_yellowX(){
	HAL_GPIO_WritePin(RED_X_GPIO_Port, RED_X_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW_X_GPIO_Port, YELLOW_X_Pin, SET);
	HAL_GPIO_WritePin(GREEN_X_GPIO_Port, GREEN_X_Pin, RESET);
}
void light_traffic_greenX(){
	HAL_GPIO_WritePin(RED_X_GPIO_Port, RED_X_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW_X_GPIO_Port, YELLOW_X_Pin, RESET);
	HAL_GPIO_WritePin(GREEN_X_GPIO_Port, GREEN_X_Pin, SET);
}

void light_traffic_redY(){
	HAL_GPIO_WritePin(RED_Y_GPIO_Port, RED_Y_Pin, SET);
	HAL_GPIO_WritePin(YELLOW_Y_GPIO_Port, YELLOW_Y_Pin, RESET);
	HAL_GPIO_WritePin(GREEN_Y_GPIO_Port, GREEN_Y_Pin, RESET);
}
void light_traffic_yellowY(){
	HAL_GPIO_WritePin(RED_Y_GPIO_Port, RED_Y_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW_Y_GPIO_Port, YELLOW_Y_Pin, SET);
	HAL_GPIO_WritePin(GREEN_Y_GPIO_Port, GREEN_Y_Pin, RESET);
}
void light_traffic_greenY(){
	HAL_GPIO_WritePin(RED_Y_GPIO_Port, RED_Y_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW_Y_GPIO_Port, YELLOW_Y_Pin, RESET);
	HAL_GPIO_WritePin(GREEN_Y_GPIO_Port, GREEN_Y_Pin, SET);
}
