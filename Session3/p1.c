#include <stdio.h>

/*
1.	Write a C program to input any number from user and find cube of the given number using function.
*/

#define SUCCESS_RET   0
#define DOUBLE_ZERO   0.0

double cube(double);

int main(void)
{
	double number = DOUBLE_ZERO;

	printf("Input any number: ");
	scanf("%lf", &number);

	printf("Cube of %.1lf = %.1lf\n", number, cube(number));

	return SUCCESS_RET;
}

double cube(double number)
{
	return (number * number * number);
}