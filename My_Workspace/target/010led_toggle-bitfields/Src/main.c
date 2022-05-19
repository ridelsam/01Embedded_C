/*
 * main.c
 *
 *  Created on: Jan 14, 2022
 *      Author: rsamonte
 */


#include <stdint.h>
#include <stdio.h>
#include "main.h"

//Attempt


int main(void)
{
	/*
	uint32_t volatile *const pClkCtrlReg = (uint32_t*)0x40023830;
	uint32_t volatile *const pPortDModeReg = (uint32_t*)0x40020C00;
	uint32_t volatile *const pPortDOutReg = (uint32_t*)0x40020C14;
	uint32_t volatile *const pPortAModeReg = (uint32_t*)0x40020000;
	uint32_t volatile *const pPortAInReg = (uint32_t*)0x40020010;

	*/


	//1. Enable the clock for GPOID and GPIOA peripheral in the AHB1ENR
	RCC_AHB1ENR_t volatile *const pClkCtrlReg  = (RCC_AHB1ENR_t*) 0x40023830;
	pClkCtrlReg->gpiod_en = 1;
	pClkCtrlReg->gpioa_en = 1;


	//2. Configure the mode of the GPIOD pin 12 as output
	GPIOx_MODE_t volatile *const pPortDModeReg  = (GPIOx_MODE_t*) 0x40020C00;
	pPortDModeReg->pin_12 = 01;

	//3. Configure the mode of the GPIOA pin 0 as input
	GPIOx_MODE_t volatile *const pPortAModeReg  = (GPIOx_MODE_t*) 0x40020000;
	pPortAModeReg->pin_0 = 00;


	while(1)
	{
		//4. Read from PA0 Pin
		GPIOx_IDR_t volatile *const pPortAInReg  = (GPIOx_IDR_t*) 0x40020010;
		uint8_t pinStatus = (uint8_t) (pPortAInReg->pin_0);



		//5. Toggle LED Depending on Status of PA0
		GPIOx_ODR_t volatile *const pPortDOutReg  = (GPIOx_ODR_t*) 0x40020C14;

		if (pinStatus){


			//6.a SET 12th bit of the output data register to make IO pin 12 as HIGH
			pPortDOutReg->pin_12 = 1;


		} else {
			//6.b CLEAR 12th bit of the output data register to make IO pin 12 as LOW
			pPortDOutReg->pin_12 = 0;

		}

	}
}
