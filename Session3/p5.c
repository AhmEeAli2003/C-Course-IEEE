#include <stdio.h>

/*
Write a C program to check whether a number is palindrome or not
*/

#define SUCCESS_RET    0
#define ZERO           0
#define ONE            1
#define TEN            10

unsigned int reverse_digits(signed int number);
unsigned short isPalindrome(signed int number);

int main(void)
{
    signed int number = ZERO;

    printf("Input number: ");
    scanf("%d", &number);
    
    printf("Is %d a plindrome? -> %s\n", number, isPalindrome(number)?"True":"False");

    return SUCCESS_RET;
}

unsigned int reverse_digits(signed int number)
{
    signed int reverse_number = ZERO;

    while(number > 0)
    {
        reverse_number = (reverse_number * TEN) + (number % TEN);
        number = number / TEN;
    }

    return reverse_number;
}

unsigned short isPalindrome(signed int number)
{
    signed int reverse_number = reverse_digits(number);

    if(reverse_number == number)
    {
        return ONE;
    }
    
    return ZERO;
}