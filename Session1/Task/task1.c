/**
 ****************************************************************************************
 *   @file          : task1.c
 *   @author        : Ahmed Ali
 *   @brief         :  Write a C program to input two numbers from user and calculate 
 * 					   their sum
 ****************************************************************************************
*/

/* ****************************** Includes Section Start **************************** */
#include <stdio.h>
/* ****************************** Includes Section End **************************** */

/* ****************************** Macros Section Start ****************************** */
#define SUCCESS_RET  0
#define F_ZERO       0.0f
/* ****************************** Macros Section End ****************************** */

int main(void)
{
	float first_number = F_ZERO, second_number = F_ZERO;
	
	printf("Input first number: ");
	scanf("%f", &first_number);
	printf("Input second number: ");
	scanf("%f", &second_number);
	
	printf("Sum  = %g", first_number + second_number);
	
	return SUCCESS_RET;
}