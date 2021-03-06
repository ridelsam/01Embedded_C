/*
 * main.c
 *
 *  Created on: Jan 10, 2022
 *      Author: rsamonte
 */


#include<stdio.h>

int main(void)
{
	char data = 100;
	printf("Value of data is : %d\n", data);
	printf("Address of the variable data is : %p\n", &data);

	//Create a pointer variable and store the address of "data" variable

	char* pAddress = &data;

	//Perform read operation on the pointer variable to fetch 1 byte of data from the pointer

	char value = *pAddress;
	printf("Read value is: %d\n", value);

	//Perform write operation on the pointer to store the value 65

	*pAddress = 65;
	printf("Value of data is : %d\n", data);
	printf("Address of the new variable data is : %p\n", &data);



}
