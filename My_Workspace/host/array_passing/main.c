/*
 * main.c
 *
 *  Created on: Jan 16, 2022
 *      Author: rsamonte
 */





#include<stdio.h>
#include<stdint.h>

void array_display(uint8_t const *const pArray, uint32_t nItems);

int main(void)
{
	uint8_t someData[10] = {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};

	printf("contents of this array\n");

	for(uint32_t i = 0 ; i < 10 ; i++)
	{
		printf("%x\t",someData[i]);
	}



	printf("\n");

	for(uint32_t i = 0 ; i < 10 ; i++)
	{
		someData[i] = 0x33;

	}

	uint32_t nItems = sizeof(someData) / sizeof(uint8_t);
	array_display(someData, nItems );

	return 0;
}

void array_display(uint8_t const *const pArray, uint32_t nItems)
{
	//display the contents of the received array
	for(uint32_t i = 0; i<nItems; i++)
	{
		printf("%x\t", pArray[i]);

	}




}
