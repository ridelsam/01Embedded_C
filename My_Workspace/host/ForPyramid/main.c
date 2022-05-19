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

	int32_t i;
	int32_t j;
	int32_t temp;

	printf("Enter height of pyramid: \n");

	scanf("%d'", &i);

	if ( i < 0) {

			printf("Wrong input! Exiting...\n");
			wait_for_user_input();
			return 0;

	} else {


		for (temp=1; temp <= i; temp++)
		{

			for(j=temp; j>=1; j--)

			{
				printf("%4d\t", j);
			}

			printf("\n");

		}

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
