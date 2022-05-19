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

	int32_t num , output;
	printf("Enter a number: ");
	scanf("%d", &num);

	//Clear 4, 5, 6 bits

	output = num | 0x8F;
	printf("[input] [output] : 0x%x 0x%x \n", num, output);

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
