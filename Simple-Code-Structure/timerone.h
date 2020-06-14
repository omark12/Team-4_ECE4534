/*
 * timerone.h
 *
 */

#ifndef TIMERONE_H_
#define TIMERONE_H_


#include <stddef.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/Timer.h>
#include "ti_drivers_config.h"


void timerSecondCallback(Timer_Handle myHandle);
void initTimerOne();

#endif /* TIMERONE_H_ */
