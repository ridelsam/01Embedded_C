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

	char *pAddress1;
	pAddress1 = (char*)&g_data;
	printf("Value at address %p is : %x \n", pAddress1, *pAddress1);


	int *pAddress2;
	pAddress2 = (int*)&g_data;
	printf("Value at address %p is : %x \n", pAddress2, *pAddress2);

	long long *pAddress3;
	pAddress3 = (long long*)&g_data;
	printf("Value at address %p is : %llx \n", pAddress3, *pAddress3);

	short *pAddress4;
	pAddress4 = (short*)&g_data;
	printf("Value at address %p is : %x \n", pAddress4, *pAddress4);


	return 0;

}
