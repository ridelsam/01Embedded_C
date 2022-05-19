/*
 * main.c
 *
 *  Created on: Jan 12, 2022
 *      Author: rsamonte
 */


#include<stdio.h>
#include<stdint.h>

void wait_for_user_input (void);


int main(void)
{
	float income, tax;

	printf("Enter your income \n");


	if (scanf("%f'", &income) == 0) {

		printf("Wrong input! Exiting...\n");
		wait_for_user_input();
		return 0;

	}




	if ((income <= 9525) && (income>=0)) {

		tax = 0;
		printf("Your tax is $%f\n", tax);
		wait_for_user_input();


	} else if ((income > 9525) && (income<=38700)) {

		tax = income*0.12;
		printf("Your tax is $%f\n", tax);
		wait_for_user_input();


	} else if ((income > 38700) && (income<=82500)) {

		tax = income*0.22;
		printf("Your tax is $%f\n", tax);
		wait_for_user_input();


	} else if (income>82500) {

		tax = (income*0.32) + 1000;
		printf("Your tax is $%f\n", tax);
		wait_for_user_input();

	} else if (income<0) {

		printf("Wrong input! Exiting...\n");
		wait_for_user_input();
	}


	return 0;
}


void wait_for_user_input (void)
{
	printf("Press enter key to exit\n");

	while(getchar() != '\n'){

			//just read the input buffer and do nothing
	}
	getchar();


}
