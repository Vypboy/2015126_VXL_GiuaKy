#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "Software_timer.h"
#include "button.h"
#include "main.h"

#define INIT			1
#define NOR_STATE 		2
#define RESET_STATE		3
#define INC_STATE   	4
#define DEC_STATE   	5

#define LONG_INC_STATE 	10
#define LONG_DEC_STATE	11

//thoi gian trang thai MODE
#define MODE_TIME 	10000

extern int status;
extern int Counter;

void Inc_Counter();
void Dec_Counter();
void CountDown();
#endif /* INC_GLOBAL_H_ */
