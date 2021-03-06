/*
 * main.c
 *
 *  Created on: Jan 16, 2022
 *      Author: rsamonte
 */





#include<stdio.h>
#include<stdint.h>


void array_display(uint32_t const *const pArray, uint32_t nItems);
void array_swap(uint32_t *const pArray1, uint32_t *const pArray2, uint32_t nItems1, uint32_t nItems2);
void wait_for_user_input (void);


int main(void)
{
	printf("Array Swapping Program\n");
	int32_t num1, num2;
	printf("Enter no of elements of Array1 and Array2: \n");
	scanf("%d %d", &num1, &num2);


	uint32_t Array1[num1], Array2[num2];


	for(uint32_t i = 0; i<num1; i++)
	{
		printf("Enter element %d of Array 1", i);
		scanf("%d", &Array1[i]);
		printf("\n");

	}
	printf("\n");
	for(uint32_t i = 0; i<num2; i++)
	{
		printf("Enter element %d of Array 2", i);
		scanf("%d", &Array2[i]);
		printf("\n");

	}

	printf("Contents of Array1 and Array2 before swap\n");

	printf("\n");


	uint32_t nItems1 = sizeof(Array1) / sizeof(uint32_t);
	array_display(Array1, nItems1);
	printf("\n");
	uint32_t nItems2 = sizeof(Array2) / sizeof(uint32_t);
	array_display(Array2, nItems2 );

	printf("\n");
	array_swap(Array1, Array2, nItems1, nItems2);
	printf("\n");


	printf("Contents of Array1 and Array2 after swap\n");
	array_display(Array1, nItems1 );
	printf("\n");
	array_display(Array2, nItems2 );
	printf("\n");
	printf("\n");


	wait_for_user_input ();
	return 0;
}


void array_swap(uint32_t *const pArray1, uint32_t *const pArray2, uint32_t nItems1, uint32_t nItems2)
{
	//display the contents of the received array

	uint8_t temp;

	if (nItems1>=nItems2){
		for(uint32_t i = 0; i<nItems2; i++)
			{
				temp = pArray1[i];
				pArray1[i]=pArray2[i];
				pArray2[i]=temp;
			}


	} else if (nItems2>nItems1){
		for(uint32_t i = 0; i<nItems2; i++)
			{
				temp = pArray1[i];
				pArray1[i]=pArray2[i];
				pArray2[i]=temp;
			}

	}



}



void array_display(uint32_t const *const pArray, uint32_t nItems)
{
	//display the contents of the received array
	for(uint32_t i = 0; i<nItems; i++)
	{
		printf("%x\t", pArray[i]);

	}

}



void wait_for_user_input (void)
{
	printf("Press enter key to exit\n");

	while(getchar() != '\n'){

			//just read the input buffer and do nothing
	}
	getchar();


}
