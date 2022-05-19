/*
 * main.c
 *
 *  Created on: Jan 17, 2022
 *      Author: rsamonte
 */


#include <stdio.h>
#include <stdint.h>

#define PI_VALUE (3.1415f)

#define AREA_OF_CIRCLE(x)	((PI_VALUE) * (x) * (x))

int main(void)
{
	float area_circle;

	area_circle = AREA_OF_CIRCLE(1+1);

	printf("Area = %f\n", area_circle);


	return 0;
}
