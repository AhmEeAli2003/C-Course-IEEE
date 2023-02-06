#include <stdio.h>

#define SUCCESS_RET  0
#define INT_ZERO     0
#define TWO          2

int main(void)
{
	unsigned int number = INT_ZERO;

	printf("Input number: ");
	scanf("%d", &number);

	(number % TWO)? printf("%d is odd\n", number):printf("%d is even\n", number);
	
	return SUCCESS_RET;
}
