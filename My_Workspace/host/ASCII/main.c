/*
 * main.c
 *
 *  Created on: Jan 9, 2022
 *      Author: rsamonte
 */

#include<stdio.h>

int main(void)
{
	char c1, c2, c3, c4, c5, c6;
	printf("Enter any 6 characters of your choice: ");
	scanf("%c %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5, &c6);
	printf("\nASCII codes: %u, %u, %u, %u, %u, %u", c1, c2, c3, c4, c5, c6);
	printf("\nASCII codes: %c, %c, %c, %c, %c, %c", c1, c2, c3, c4, c5, c6);

	printf("\nPress any key to exit\n");
	while(getchar()!= '\n')
	{
		//just read the input and do nothing




	}

	getchar();






}
