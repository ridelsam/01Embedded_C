/*
 * main.c
 *
 *  Created on: Jan 14, 2022
 *      Author: rsamonte
 */


#include <stdint.h>
#include <stdio.h>

//Attempt


int main(void)
{


	uint32_t volatile *const pClkCtrlReg = (uint32_t*)0x40023830;
	uint32_t volatile *const pPortDModeReg = (uint32_t*)0x40020C00;
	uint32_t volatile *const pPortDOutReg = (uint32_t*)0x40020C14;
	uint32_t volatile *const pPortAModeReg = (uint32_t*)0x40020000;
	uint32_t volatile *const pPortAInReg = (uint32_t*)0x40020010;


	//1. Enable the clock for GPOID and GPIOA peripheral in the AHB1ENR


	*pClkCtrlReg |= (1<<3);		//set GPIODEN
	*pClkCtrlReg |= (1<<0);		//set GPIOAEN

	//2. Configure the mode of the GPIOD pin 12 as output
	//a. clear the 24th and 25th bit positions (CLEAR to make sure it's 00 to easily manipulate)
	*pPortDModeReg &= ~(3<<24);     //pushing 11 starting at 24th bit
	//b. make 24th bit position as 1 (SET)
	*pPortDModeReg |= (1<<24);

	//3. Configure the mode of the GPIOA pin 0 as input
	//a. clear the 0th and 1st bit positions to make it Input
	*pPortAModeReg &= ~(3<<0);     //pushing 11 starting at 0th bit

	while(1)
	{
		//4. Read from PA0 Pin
		uint8_t pinStatus = (uint8_t)(*pPortAInReg & 0x1);		//zero out all other bits except bit 0


		//5. Toggle LED Depending on Status of PA0

		if (pinStatus){


			//6.a SET 12th bit of the output data register to make IO pin 12 as HIGH
			*pPortDOutReg |= (1<<12);


		} else {
			//6.b CLEAR 12th bit of the output data register to make IO pin 12 as LOW
			*pPortDOutReg &= ~(1<<12);


		}

	}
}
