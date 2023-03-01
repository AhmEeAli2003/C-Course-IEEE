#include <stdio.h>

/*
2.	Write a C program to input a number from user and check whether given number is even or not using function.
*/

#define SUCCESS_RET   0
#define ZERO          0LL

unsigned short isOdd(long long );

int main(void)
{
    long long number = ZERO;

    printf("Input any number: ");
    scanf("%lld", &number);

   printf("%lld %s\n", number, isOdd(number)?"is odd":"is even");

    return SUCCESS_RET;
}

unsigned short isOdd(long long number)
{
    return (number & 0x01);
}