/*
 * main.c
 *
 *  Created on: Jan 11, 2022
 *      Author: rsamonte
 */


#include<stdio.h>
#include<stdint.h>


int main(void)
{
	int age;
	printf("Enter your age: \n");
	scanf("%i'", &age);
	//fflush(stdout);

	if (age < 18){
			printf("Your age is %i \nYou are not old enough to vote!\n", age);


		} else  {
			printf("Your age is %i \nYou are old enough to vote!\n", age);
		}


	printf("Press enter key to exit");

	while(getchar() != '\n'){




	}
	getchar();

	return 0;
}
