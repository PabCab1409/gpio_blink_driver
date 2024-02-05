/*
 * clock_driver.c
 *
 *  Created on: Feb 1, 2024
 *      Author: p
 */

#include <clock_driver.h>

extern int errno;

void init_clock(char *GPIOX) {

	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;
}
