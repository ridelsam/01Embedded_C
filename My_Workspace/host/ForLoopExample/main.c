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

	int32_t num1, num2;
	uint16_t counter = 0;

	printf("Enter start and end numbers (put space in between): \n");

	scanf("%d %d", &num1, &num2);

	if(num1 > num2){
		//error
		printf("Ending number should be > starting number\n");
		wait_for_user_input ();
		return 0;

	}

	for (printf("Even numbers are: \n"); num1 <= num2; num1++)
	{
		if( !(num1 % 2)) {
			printf("%4d\t", num1);
			counter++;


	}





	}

	printf("\nTotal number of even numbers: %d: \n", counter);

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
