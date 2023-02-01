/**
 ****************************************************************************************
 *   @file          : task5.c
 *   @author        : Ahmed Ali
 *   @brief         : Write a C program to input radius of a circle from user and find 
 *				      diameter, circumference and area of the circle. 
 ****************************************************************************************
*/

/* ****************************** Includes Section Start **************************** */
#include <stdio.h>
/* ****************************** Includes Section End **************************** */

/* ****************************** Macros Section Start ****************************** */
#define SUCCESS_RET  0
#define F_ZERO       0.0f
#define PI           3.14159265f
#define FACTOR       2.0f
/* ****************************** Macros Section End ****************************** */

int main(void)
{
	float radius = F_ZERO;
	
	printf("radius: ");
	scanf("%f", &radius);
	
	printf("Diameter         = %g units\n", FACTOR * radius);
	printf("Circumference    = %g units\n", FACTOR * PI * radius);
	printf("Area             = %g sq. units\n", PI * (radius * radius));
	
	return SUCCESS_RET;
}