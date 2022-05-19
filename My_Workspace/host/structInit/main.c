/*
 * main.c
 *
 *  Created on: Jan 15, 2022
 *      Author: rsamonte
 */




#include<stdio.h>
#include<stdint.h>


struct carModel
{
	unsigned int 	carNumber;
	uint32_t 		carPrice;
	uint16_t 		carMaxSpeed;
	float			carWeight;

};

int main(void)
{

	struct carModel carTesla = {2021, 15000, 220, 1330};
	printf("Size of struct carModel is %I64u\n", sizeof(struct carModel));



	getchar();

	return 0;

}




