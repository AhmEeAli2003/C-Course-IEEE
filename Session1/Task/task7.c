/**
 ****************************************************************************************
 *   @file          : task7.c
 *   @author        : Ahmed Ali
 *   @brief         : Write a C program to input number of days from user and convert 
 *			          it to years, weeks and days. 
 ****************************************************************************************
*/

/* ****************************** Includes Section Start **************************** */
#include <stdio.h>
/* ****************************** Includes Section End **************************** */

/* ****************************** Macros Section Start ****************************** */
#define SUCCESS_RET    0
#define ZERO           0
#define DAYS_IN_WEEK   7
#define DAYS_IN_YEAR   365
/* ****************************** Macros Section End ****************************** */

int main(void)
{
	unsigned int days, year, week, day;
	days = year = week = day = ZERO;
	printf("Enter days: ");
	scanf("%d", &days);
	
	year = days % DAYS_IN_YEAR;
	days -= DAYS_IN_YEAR;
	week = days % DAYS_IN_WEEK;
	days -= DAYS_IN_WEEK;
	day = days;
	printf("%d days = %d years, %d weeks/s and %d day/s\n", year, week, day);
	
	return SUCCESS_RET;
}