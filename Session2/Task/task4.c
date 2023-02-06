#include <stdio.h>

#define SUCCESS_RET  0
#define INT_ZERO     0
#define ONE          1
#define TWO          2

int main(void)
{
	signed int number = INT_ZERO;
	signed int first_iterator = INT_ZERO, second_iterator = INT_ZERO;
	unsigned short isPrime = INT_ZERO;

	printf("Input any number: ");
	scanf("%d", &number);
	
	printf("Prime factors of %d: ", number);

	/* Find all prime factors */
	for(first_iterator = TWO; first_iterator <= number / TWO; first_iterator++)
	{
		/* check if 'first_iterator' is factor of number */
		if(INT_ZERO == number % first_iterator)
		{
			isPrime = ONE;		

			/* Check if this factor is prime or not */		
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
				printf("%d, ", first_iterator);
			}
		}
	}

	printf("\b\b.");
	
	return SUCCESS_RET;
}
