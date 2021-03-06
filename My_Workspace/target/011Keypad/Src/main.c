/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

void delay(void)
{
	for(uint32_t i =0; i<30000; i++);

}

int main(void)
{
	uint32_t volatile *const pClkCtrlReg = (uint32_t*)0x40023830;
	uint32_t volatile *const pPortDModeReg = (uint32_t*)0x40020C00;
	uint32_t volatile *const pPortDResistorReg = (uint32_t*)0x40020C0C;
	uint32_t volatile *const pPortDInReg = (uint32_t*)0x40020C10;
	uint32_t volatile *const pPortDOutReg = (uint32_t*)0x40020C14;

	char KeyPadKeys[16] = {'1', '2', '3', 'A', '4', '5', '6', 'B', '7', '8', '9', 'C', '*', '0', '#', 'D'};


	//1. Enable the clock for GPOID  peripheral in the AHB1ENR
	*pClkCtrlReg |= (1<<3);		//set GPIODEN

	//2. Configure the mode of the GPIOD pin 0, 1, 2, 3 as output
	//a. clear the 0th to 7th bit positions (CLEAR to make sure it's 00 to easily manipulate)
	*pPortDModeReg &= ~(0xFF);     //pushing 1111 1111 starting at 0th bit
	//b. SET 0101 0101 from pin 0 to pin 7
	*pPortDModeReg |= (0x55);


	//3. Configure the mode of the GPIOD pin 8, 9, 10, 11 as input
	//a. clear the 0th and 1st bit positions to make it Input
	*pPortDModeReg &= ~(0xFF<<16);     //pushing 00 starting at 16th bit

	//4. Activate internal pull-up resistors for pin 8, 9, 10, 11
	*pPortDResistorReg &= ~(0xFF<<16);			//Clear everything First
	*pPortDResistorReg |= (0x55<<16);     //pushing 01 starting at 16th bit



	while(1)
	{
		//5. Read from Pin 8, 9, 10, 11

		for (uint8_t i=0; i<=3; i++)
		{
			//5a	Set All Rows High
			*pPortDOutReg |= (0x0F);
			//5b	Clear Row i
			*pPortDOutReg &= ~(1<<i);


			//5c	Check each column and print appropriate key press

			if (!(*pPortDInReg & (1<<8))){
				delay();
				printf("Key '%c' is pressed", KeyPadKeys[i*4]);

			} else if(!(*pPortDInReg & (1<<9))) {
				delay();
				printf("Key '%c' is pressed", KeyPadKeys[(i*4)+1]);

			} else if(!(*pPortDInReg & (1<<10))) {
				delay();
				printf("Key '%c' is pressed", KeyPadKeys[(i*4)+2]);

			} else if(!(*pPortDInReg & (1<<11))) {
				delay();
				printf("Key '%c' is pressed", KeyPadKeys[(i*4)+3]);

			}
		}


	}


}


