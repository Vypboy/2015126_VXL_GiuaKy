#include "global.h"

int status=0;
int Counter = 0;

//tang gia tri Counter 1 dv
void Inc_Counter(){
	Counter=(Counter+1)%10;
}
//giam gia tri Counter 1 dv
void Dec_Counter(){
	if(Counter>0) Counter--;
	else if(Counter==0) Counter=9;
}
//giam gia tri counter 1 dv sau 1s
void CountDown(){
	if(timer1_flag==1){
		setTimer1(1000);
		if(Counter>0) Counter--;
	}
}

