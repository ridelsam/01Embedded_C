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
	float n1;
	float n2;

	printf("Enter two numbers \n");

	printf("1st number:\n ");

	if (scanf("%f'", &n1) == 0) {

		printf("Wrong input! Exiting...\n");
		wait_for_user_input();
		return 0;

	}

	printf("2nd number:\n ");


	if (scanf("%f'", &n2) == 0) {

		printf("Wrong input! Exiting...\n");
		wait_for_user_input();
		return 0;

	}



	if (n1 > n2) {

			printf("1st number %f is bigger!\n", n1);
			wait_for_user_input();


	} else if (n2 > n1) {

			printf("2nd number %f is bigger!\n", n2);
			wait_for_user_input();

	} else {

			printf("Both numbers are equal\n");
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
