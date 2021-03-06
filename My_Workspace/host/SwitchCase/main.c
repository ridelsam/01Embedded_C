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

	int8_t shape;

	float area, r, a, b, h;
	float applepie;
	//int flag = 0;

	applepie = 3.1415;

	printf("Area Calculation Program \n");
	printf("Circle			--> c\n");
	printf("Triangle		--> t\n");
	printf("Rectangle		--> r\n");
	printf("Square			--> s\n");
	printf("Trapezoid		--> z\n");

	scanf("%c'", &shape);

	switch (shape)
	{
	case 'c':

		printf("Enter radius of circle \n");

		if (scanf("%f'", &r) == 0){
			printf("Wrong input! Exiting...\n");
			break;

		}

		if(r>=0){
			area = applepie*(r*r);
			printf("Area  of circle: %f\n", area);

		} else {
			printf("Wrong input! Exiting...\n");
		}

		break;

	case 't':



		printf("Enter base of triangle \n");
		if (scanf("%f'", &a) == 0) {
			printf("Wrong input! Exiting...\n");
			break;
		}

		printf("Enter height of triangle \n");
		if (scanf("%f'", &h) == 0) {
			printf("Wrong input! Exiting...\n");
			break;
		}

		if(a>=0  && h>=0){
			area = (a*h)/2;
			printf("Area  of triangle: %f\n", area);

		} else {
			printf("Wrong input! Exiting...\n");
		}

		break;

	case 'r':



		printf("Enter width of rectangle \n");
		if (scanf("%f'", &a) == 0) {
			printf("Wrong input! Exiting...\n");
			break;
		}

		printf("Enter length of rectangle \n");
		if (scanf("%f'", &h) == 0) {
			printf("Wrong input! Exiting...\n");
			break;
		}

		if(a>=0  && h>=0){
			area = a*h;
			printf("Area  of rectangle: %f\n", area);

		} else {
			printf("Wrong input! Exiting...\n");
		}

		break;

	case 's':

		printf("Enter side of square \n");
		if (scanf("%f'", &a) == 0) {
			printf("Wrong input! Exiting...\n");
			break;
		}


		if(a>=0){
			area = a*a;
			printf("Area  of square: %f\n", area);

		} else {
			printf("Wrong input! Exiting...\n");
		}

		break;

	case 'z':

		printf("Enter base1 of trapezoid \n");
		if (scanf("%f'", &a) == 0) {
			printf("Wrong input! Exiting...\n");
			break;
		}

		printf("Enter base2 of trapezoid \n");
		if (scanf("%f'", &b) == 0) {
			printf("Wrong input! Exiting...\n");
			break;
		}

		printf("Enter height of trapezoid \n");
		if (scanf("%f'", &h) == 0) {
			printf("Wrong input! Exiting...\n");
			break;
		}

		if(a>=0  && b>=0 && h>=0){
			area = ((a+b)/2)*h;
			printf("Area  of trapezoid: %f\n", area);

		} else {
			printf("Wrong input! Exiting...\n");
		}

		break;


	default:
		printf("Wrong input! Exiting...\n");


	}


	wait_for_user_input();
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
