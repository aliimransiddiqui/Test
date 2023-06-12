/*
 * wdt.h
 *
 *  Created on: 09.06.2023
 *      Author: ali-imran.siddiqui
 */

#ifndef UWT_WDT_H_
#define UWT_WDT_H_
#include <msp430.h>

#define  WDT_INTERRUPT_ENABLE   0       /*< Watchdog timer interrupt enable. This bit enables the WDTIFG interrupt for interval timer mode. It is not necessary to set this bit for watchdog mode */

void WDTInit();
void WDTHold();
void WDTRelease();
void WDTClear();

#endif /* UWT_WDT_H_ */
