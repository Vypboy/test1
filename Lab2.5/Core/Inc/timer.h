/*
 * timer.h
 *
 *  Created on: Oct 4, 2022
 *      Author: HP_9480m
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void timerRun();

#endif /* INC_TIMER_H_ */
