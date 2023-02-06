#include <stdio.h>

#define SUCCESS_RET  0
#define INT_ZERO     0

int main(void)
{
	signed int number = INT_ZERO;

	printf("Input number: ");
	scanf("%d", &number);

	/* Solution using simple if */
	if(INT_ZERO == number)
	{
		printf("%d is equal to zero\n", number);
	}
	if(number > INT_ZERO)
	{
		printf("%d is positive\n", number);
	}
	if(number < INT_ZERO)
	{
		printf("%d is negative\n", number);
	}

	/* Solution using if else */
	/*
	if(INT_ZERO == number)
	{
		printf("%d is equal to zero\n", number);
	}
	else if(number > INT_ZERO)
	{
		printf("%d is positive\n", number);
	}
	else
	{
		printf("%d is negative\n", number);
	}
	*/
	return SUCCESS_RET;
}
