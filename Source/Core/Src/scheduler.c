/*
 * scheduler.c
 *
 *  Created on: Nov 24, 2024
 *      Author: GIGABYTE
 */


#include "scheduler.h"

#define RETURN_ERROR 0
#define RETURN_NORMAL 1
#define tick 10

sTask SCH_tasks_G[SCH_MAX_TASKS] ;

void SCH_INIT(){
	uint8_t index;
	for (index = 0; index < SCH_MAX_TASKS; index++){
		SCH_Delete_Task(index);
	}
	// Timer_Init();
}

uint32_t SCH_Add_Task( void ( * pFunction) () , uint32_t DELAY, uint32_t PERIOD){
	uint8_t index = 0;
	while ((SCH_tasks_G[index].pTask != 0) && (index < SCH_MAX_TASKS)){
		index++;
	}
	if (index == SCH_MAX_TASKS){
		// return ERROR code
		return SCH_MAX_TASKS;
	}

	//normal
	SCH_tasks_G[index].pTask = pFunction;
	SCH_tasks_G[index].Delay = DELAY/tick;
	SCH_tasks_G[index].Period = PERIOD/tick;
	SCH_tasks_G[index].RunMe = 0;

	return index;
}


void SCH_Update(){
	// calculations are in *TICKS*
	uint8_t index;
	for (index = 0; index < SCH_MAX_TASKS; index++){
		if (SCH_tasks_G[index].pTask){
			if (SCH_tasks_G[index].Delay == 0){
				SCH_tasks_G[index].RunMe += 1;
				if (SCH_tasks_G[index].Period)
					SCH_tasks_G[index].Delay = SCH_tasks_G[index].Period;
			}
			else
				SCH_tasks_G[index].Delay -= 1;
		}
	}
}

void SCH_Dispatch_Tasks (){
	uint8_t index;
	for (index = 0; index < SCH_MAX_TASKS; index++){
		if (SCH_tasks_G[index].RunMe > 0){
			(*SCH_tasks_G[index].pTask)(); //Run task
			SCH_tasks_G[index].RunMe -= 1;
			if (SCH_tasks_G[index].Period == 0)
				SCH_Delete_Task(index);
		}
	}
	// Report system status
	// SCH_Report_Status();
	// The scheduler enters idle mode at this point
	// SCH_Go_To_Sleep();
}
uint8_t SCH_Delete_Task(uint32_t taskID){
	uint8_t Return_code;
	// return Return Code
	if (SCH_tasks_G[taskID].pTask == 0)
		// Error
		Return_code = RETURN_ERROR;
	else
		Return_code =  RETURN_NORMAL;

	SCH_tasks_G[taskID].pTask = 0x0000;
	SCH_tasks_G[taskID].Delay = 0;
	SCH_tasks_G[taskID].Period = 0;
	SCH_tasks_G[taskID].RunMe = 0;
	return Return_code;
}

