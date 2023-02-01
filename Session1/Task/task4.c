/**
 ****************************************************************************************
 *   @file          : task4.c
 *   @author        : Ahmed Ali
 *   @brief         :  Write a C program to input length and width of a rectangle and 
 *				       find area of the given rectangle
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
	float length = F_ZERO, width = F_ZERO;
	
	printf("Enter length: ");
	scanf("%f", &length);
	printf("Enter width: ");
	scanf("%f", &width);
	
	printf("Area of rectangle = %g sq. units", length * width);
	
	return SUCCESS_RET;
}