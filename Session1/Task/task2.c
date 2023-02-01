/**
 ****************************************************************************************
 *   @file          : task2.c
 *   @author        : Ahmed Ali
 *   @brief         : Write a C program to input two numbers and perform all arithmetic 
 *				      operations. 
 ****************************************************************************************
*/

/* ****************************** Includes Section Start **************************** */
#include <stdio.h>
#include <math.h>
/* ****************************** Includes Section End **************************** */

/* ****************************** Macros Section Start ****************************** */
#define SUCCESS_RET  0
#define F_ZERO       0.0f
/* ****************************** Macros Section End ****************************** */

int main(void)
{
	float first_number = F_ZERO, second_number = F_ZERO;
	
	printf("First number: ");
	scanf("%f", &first_number);
	printf("Second number: ");
	scanf("%f", &second_number);
	
	printf("Sum         = %g\n", first_number + second_number);
	printf("Difference  = %g\n", first_number - second_number);
	printf("Product     = %g\n", first_number * second_number);
	printf("Quotient    = %g\n", first_number / second_number);
	printf("Modulus     = %g\n", fmod(first_number, second_number));
	
	return SUCCESS_RET;
}