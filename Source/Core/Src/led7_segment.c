/*
 * led7_segment.c
 *
 *  Created on: Oct 26, 2024
 *      Author: GIGABYTE
 */


#include "led7_segment.h"

void display7SEG(int num){
	//use  BCD decoder
	int A,B,C,D;
	A = (num >> 3) & 1; //MSB
	B = (num >> 2) & 1;
	C = (num >> 1) & 1;
	D = (num >> 0) & 1; // LSB

	int a,b,c,d,e,f,g;

	a =  C || A || (!B && !D) || (B && D);
	b = !B || (C && D) || (!C && !D);
	c = !C || B || D;
	d =  A || (!B && !D) || (!B && C) || (C && !D) || (B && !C && D);
	e = (!B && !D) || (C && !D);
	f =  A || (B && !D) || (!C && !D) || (B && !C);
	g =  A || (!B && C) || (B && !D) || (B && !C);

	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, !a);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, !b);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, !c);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, !d);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, !e);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, !f);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, !g);

}
void clear_all(){
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin , SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin , SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin , SET);
	HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin , SET);
}


void turn_on_1(){ //7-segment led first
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin , RESET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin , SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin , SET);
	HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin , SET);
}


void turn_on_2(){ //7-segment led second
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin , SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin , RESET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin , SET);
	HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin , SET);
}

void turn_on_3(){ //7-segment led third
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin , SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin , SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin , RESET);
	HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin , SET);
}

void turn_on_4(){ //7-segment led fourth
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin , SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin , SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin , SET);
	HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin , RESET);
}
