/*
 * gpio_driver.c
 *
 *  Created on: Feb 1, 2024
 *      Author: p
 */

#include <gpio_driver.h>
#include <stm32f4xx.h>

void init_gpio(char *port, int pin){
	GPIOB -> MODER |= (1<<2U);
	GPIOB -> ODR |= (1<<1U);
}

