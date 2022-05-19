/*
 * main.c
 *
 *  Created on: Jan 10, 2022
 *      Author: rsamonte
 */



#include<stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main(void)
{
	int *pAddress = (int*)&g_data;

	printf("Value of pAddress %p\n", pAddress);
	printf("Value at address %p is %x\n", pAddress, *pAddress);


	pAddress ++;
	printf("Value of pAddress %p\n", pAddress);
	printf("Value at address %p is %x\n", pAddress, *pAddress);

	pAddress ++;
	printf("Value of pAddress %p\n", pAddress);
	printf("Value at address %p is %x\n", pAddress, *pAddress);

}
