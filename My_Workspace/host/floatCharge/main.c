/*
 * main.c
 *
 *  Created on: Jan 9, 2022
 *      Author: rsamonte
 */


#include<stdio.h>

int main(void)

{
	double charge, chargeE;
	double electrons;
	printf("Enter # charge: ");
	scanf("%lf'", &charge);

	printf("Enter the charge of an electron: ");
	scanf("%le", &chargeE);

	electrons = (charge/chargeE)* -1;

	printf("Total number of electrons = %le\n", electrons);
	printf("Total number of electrons = %lf\n", electrons);

	printf("Press 'enter' key to exit the application \n");
	while(getchar() != '\n'){




	}
	getchar();

	return 0;

}
