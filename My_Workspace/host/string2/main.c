/*
 * main.c
 *
 *  Created on: Jan 14, 2022
 *      Author: rsamonte
 */




#include <stdio.h>

int main()
{
    char name[30];
   printf("Enter your name :");
   fflush(stdout);
   scanf("%s",name);

   printf("Hi,%s\n",name);
   fflush(stdout);

   return 0;
}
