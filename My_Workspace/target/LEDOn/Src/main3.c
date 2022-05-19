/*
 * main3.c
 *
 *  Created on: Jan 14, 2022
 *      Author: rsamonte
 */


#include <stdint.h>
#include <stdio.h>


int main(void)
{

	//Better way
	uint32_t *pClkCtrlReg = (uint32_t*)0x40023830;
	uint32_t *pPortDModeReg = (uint32_t*)0x40020C00;
	uint32_t *pPortDOutReg = (uint32_t*)0x40020C14;


	//1. Enable the clock for GPOID peripheral in the AHB1ENR

	/*
	uint32_t temp = *pClkCtrlReg; //Read Operation
	temp = temp | 0x80; //Modify (do it this way to protect other bits
	*pClkCtrlReg = temp; //Write Back
	*/

	//or

	// *pClkCtrlReg = *pClkCtrlReg | 0x08;

	//or (SET the 3rd bit position)
	*pClkCtrlReg |= (1<<3);

	//2. Configure the mode of the IO pin as output
	//a. clear the 24th and 25th bit positions (CLEAR to make sure it's 00 to easily be manipulated)
	*pPortDModeReg &= ~(3<<24);     //pushing 11 starting at 24th bit
	//b. make 24th bit position as 1 (SET)
	*pPortDModeReg |= (1<<24);

	//3. SET 12th bit of the output data register to make IO pin 12 as HIGH
	*pPortDOutReg |= (1<<12);




    /* Loop forever */
	while(1);
}
