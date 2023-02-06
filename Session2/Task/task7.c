#include <stdio.h>

#define SUCCESS_RET  0
#define INT_ZERO     0
#define FALSE        0
#define TRUE         1

int main(void)
{
	signed int first_number = INT_ZERO, second_number = INT_ZERO;
	unsigned short isMaximum = INT_ZERO;
	
	printf("Input first number: ");
	scanf("%d", &first_number);

	printf("Input second number: ");
	scanf("%d", &second_number);
	
	isMaximum = first_number > second_number;
	
	switch(isMaximum)
	{
		case TRUE:
			printf("Maximum: %d\n", first_number);
			break;
		case FALSE:
			printf("Maximum: %d\n", second_number);
			break;
	}
	return SUCCESS_RET;
}

