#include <stdio.h>

#define SUCCESS_RET  	 0
#define INT_ZERO     	 0
#define FOUR         	 4
#define ONE_HUNDRED      100
#define FOUR_HUNDRED     400

int main(void)
{
	unsigned short year = INT_ZERO;

	printf("Input year: ");
	scanf("%hu", &year);

	/*
	    If a year is exactly divisible by 4 and not divisible by 100 then its Leap year. 
		Else if year is exactly divisible 400 then its leap year. Else its a Common year.
	*/
	
	printf("%hu is %s\n", year, ((INT_ZERO == year % FOUR) && (INT_ZERO != year % ONE_HUNDRED))? "Leap Year":
	                            (INT_ZERO == year % FOUR_HUNDRED)? "Leap Year":"Common Year");
	return SUCCESS_RET;
}
