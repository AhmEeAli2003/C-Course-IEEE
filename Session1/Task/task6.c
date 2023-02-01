/**
 ****************************************************************************************
 *   @file          : task6.c
 *   @author        : Ahmed Ali
 *   @brief         : Write a C program to input temperature in Centigrade and convert 
 *				      to Fahrenheit. 
 ****************************************************************************************
*/

/* ****************************** Includes Section Start **************************** */
#include <stdio.h>
/* ****************************** Includes Section End **************************** */

/* ****************************** Macros Section Start ****************************** */
#define SUCCESS_RET  0
#define F_ZERO       0.0f
#define FREEZING_PT  32.0f
#define SCALE_FACTOR (9.0f / 5.0f)
/* ****************************** Macros Section End ****************************** */

int main(void)
{
	float celsius = F_ZERO;
	
	printf("Enter temperature in celsius: ");
	scanf("%f", &celsius);
	
	printf("Temperature in Fahrenheit = %g F\n", ((celsius * SCALE_FACTOR) + FREEZING_PT));
	
	return SUCCESS_RET;
}