#include <stdio.h>
/*
3.	Display all prime numbers between a given range using function
*/

#define SUCCESS_RET    0
#define ZERO           0
#define ONE            1
#define TWO            2

void print_primes(unsigned long lower, unsigned long upper);

int main(void)
{
    unsigned long lower = ZERO, upper = ZERO;

    printf("Input lower limit: ");
    scanf("%lu", &lower);

    printf("Input upper limit: ");
    scanf("%lu", &upper);

    print_primes(lower, upper);

    return SUCCESS_RET;
}

void print_primes(unsigned long lower, unsigned long upper)
{
   unsigned long first_iterator = ZERO, second_iterator = ZERO;
   unsigned short isPrime = ZERO;

   printf("Prime numbers between %lu - %lu are: ", lower, upper);

        for(first_iterator = lower; first_iterator <= upper; first_iterator++)
		{
			isPrime = ONE;
			
			for(second_iterator = TWO; second_iterator <= first_iterator / TWO; second_iterator++)
			{
				if(ZERO == first_iterator % second_iterator)
				{
					isPrime = ZERO;
					break;
				}
			}
			
			if(isPrime)
			{
				printf("%lu, ", first_iterator);
			}
		}

        printf("\b\b.");
}