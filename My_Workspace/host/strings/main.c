/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>


int main(void)
{
    char msg1[] = "Hello, how are you?";
    char const *pmsg2 = "fastbitlab.com";

    msg1[0] = 'b';




    printf("Message is : %s\n", msg1);
    printf("Message is : %s\n", pmsg2);
    printf("Address of 'msg2' variable =%p\n", &pmsg2);
    printf("Value of 'msg2' variable =%p\n", pmsg2);


    return 0;


}
