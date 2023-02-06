#include <stdio.h>

#define SUCCESS_RET 0
#define INT_ZERO    0
#define ONE         1
#define TWO         2

int main(void)
{
	unsigned int number = INT_ZERO, sum_primes = INT_ZERO;
	unsigned short iterator = INT_ZERO;

	printf("Input upper limit: ");
	scanf("%d", &number);
    
	if(ONE == number)
	{
		sum_primes = ONE;
	}
	else
	{
		for(iterator = TWO; iterator <= number; iterator++)
		{
			if(INT_ZERO == number % iterator)
			{
				sum_primes += iterator;
			}
		}
	}

	printf("Sum of prime numbers between 1-%d: %d", number, sum_primes);
	
	return SUCCESS_RET;
}
