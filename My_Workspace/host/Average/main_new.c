/*
 * main.c
 *
 *  Created on: Jan 9, 2022
 *      Author: rsamonte
 */

#include <stdio.h>

int main(void)
{
	float number1, number2, number3;
	float average;

	printf("Enter 3 numbers: ");
	scanf("%f %f %f", &number1, &number2, &number3);
	fflush(stdout);

	average = (number1 + number2 + number3)/3;

	printf("\nAverage is: %f \n", average);


	printf("Press enter key to exit");
	getchar();
	getchar();



}
