#include <stdio.h>
#include <math.h>

#define SUCCESS_RET  0
#define INT_ZERO     0
#define TEN          10

int main(void)
{
	unsigned int number, swappedNumber, digitsNumber, lastDigit, firstDigit;

	number = swappedNumber = digitsNumber = lastDigit = firstDigit = INT_ZERO;
	
	printf("Input any number: ");
	scanf("%d", &number);

	/* Suppose that user input 12345 */
	lastDigit = number % TEN; /* lastDigit = 5 */

	digitsNumber = (int) log10(number); /* digitsNumber = 4 */

	firstDigit = (int) (number / pow(TEN, digitsNumber)); /* last digit = 12345 / 10000 = 1 */

	swappedNumber  = lastDigit; /* swappedNumber =  5 */
	swappedNumber *= (int) round(pow(TEN, digitsNumber)); /* swappedNumber = 5 * 10000 = 50000 */
	swappedNumber += number % (int) round(pow(TEN, digitsNumber)); /* swappedNumber = 50000 + (12345 % 10000) = 52345 */
	swappedNumber -= lastDigit; /* swappedNumber = 52345 - 5 = 52340 */
	swappedNumber += firstDigit; /* swappedNumber = 52340 + 1 = 52341 */

	printf("Number after swapping first and last digit = %d\n", swappedNumber);
	
	return SUCCESS_RET;
}
