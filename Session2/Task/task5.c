#include <stdio.h>

#define SUCCESS_RET 0
#define INT_ZERO    0
#define ONE         1
#define TWO         2

int main(void)
{
	unsigned int number = INT_ZERO, sum_primes = INT_ZERO, isPrime = INT_ZERO;
	unsigned short first_iterator = INT_ZERO, second_iterator = INT_ZERO;

	printf("Input upper limit: ");
	scanf("%d", &number);
    
	
		
		for(first_iterator = TWO; first_iterator <= number; first_iterator++)
		{
			isPrime = ONE;
			
			for(second_iterator = TWO; second_iterator <= first_iterator / TWO; second_iterator++)
			{
				if(INT_ZERO == first_iterator % second_iterator)
				{
					isPrime = INT_ZERO;
					break;
				}
			}
			
			if(isPrime)
			{
				sum_primes += first_iterator;
			}
		}

	printf("Sum of prime numbers between 1-%d: %d", number, sum_primes);
	
	return SUCCESS_RET;
}
