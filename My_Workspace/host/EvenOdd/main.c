/*
 * main.c
 *
 *  Created on: Jan 14, 2022
 *      Author: rsamonte
 */



#include<stdio.h>
#include<stdint.h>

void wait_for_user_input (void);


int main(void)
{

	int32_t num;
	printf("Enter a number: ");
	scanf("%d", &num);

	if (num & 1){

		printf("Your number is odd\n");

	} else {

		printf("Your number is even\n");

	}


	wait_for_user_input ();
}


void wait_for_user_input (void)
{
	printf("Press enter key to exit\n");

	while(getchar() != '\n'){

			//just read the input buffer and do nothing
	}
	getchar();


}
