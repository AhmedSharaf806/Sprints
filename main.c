/*
 * main.c
 *
 *  Created on: Dec 3, 2019
 *      Author: ahmed
 */

#include "led.h"
#include "gpio.h"
#include "softwareDelay.h"


int main(){

    Led_Init(LED_2);
    Led_Off(LED_2);

    while(1)
	{
	    Led_Toggle(LED_2);
	    SwDelay_ms(1000);
	}
}
