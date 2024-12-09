/*
 * scheduler.h
 *
 *  Created on: Nov 24, 2024
 *      Author: GIGABYTE
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>

typedef struct {
	void (*pTask)(void); // Pointer to the task (must be a ’ void ( void ) ’ function )
	uint32_t Delay; // Delay (ticks) until the function will (next) be run
	uint32_t Period;// Interval (ticks) between subsequent runs
	uint8_t RunMe; // Incremented (by scheduler) when task is due to execute
	uint32_t TaskID;
} sTask;

#define SCH_MAX_TASKS 40
#define NO_TASK_ID 0

void SCH_INIT();
uint32_t SCH_Add_Task( void ( * pFunction) () , uint32_t DELAY, uint32_t PERIOD);
// return an ID that is corresponding with the added task
void SCH_Update();
void SCH_Dispatch_Tasks ();
uint8_t SCH_Delete_Task(uint32_t taskID);


//optional
void SCH_Report_Status (void);
void SCH_Go_To_Sleep ();
#endif /* INC_SCHEDULER_H_ */
