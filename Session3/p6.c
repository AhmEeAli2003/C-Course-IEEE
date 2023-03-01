#include <stdio.h>

/*
6.	Write a C program to calculate sum of digits of a number
*/

#define SUCCESS_RET    0
#define ZERO           0
#define TEN            10

signed int sum_of_digits(signed long long number);

int main(void)
{
    signed long long number = ZERO;
    signed int sum = ZERO;

    printf("Input number: ");
    scanf("%lld", &number);

    sum = sum_of_digits(number);

    printf("Sum of digits: %d", sum);

    return SUCCESS_RET;
}

signed int sum_of_digits(signed long long number)
{
    signed int sum = ZERO;

    while(number > ZERO)
    {
            sum = sum + number % TEN;
            number = number / TEN;
    }

    return sum;
}
