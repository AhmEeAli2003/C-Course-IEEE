#include <stdio.h>

#define SUCCESS_RET  0
#define INT_ZERO     0

int main(void)
{
	unsigned char day = INT_ZERO;

	printf("Input day number(1-7): ");
	scanf("%c", &day);

	switch(day)
	{
		case '1':
			printf("Saturday\n");
			break;
		case '2':
			printf("Sunday\n");
			break;
		case '3':
			printf("Monday\n");
			break;
		case '4':
			printf("Tuseday\n");
			break;
		case '5':
			printf("Wednesday\n");
			break;
		case '6':
			printf("Thuesday\n");
			break;
		case '7':
			printf("Friday\n");
			break;
		default:
			printf("Invalid input\n");
	}
	
	return SUCCESS_RET;
}
