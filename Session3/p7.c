#include <stdio.h>

/*
7.	Write a recursive function in C to find factorial of a number
*/

#define SUCCESS_RET    0
#define ZERO           0
#define ONE            1
#define TWO            2

signed int factorial(signed int number);

int main(void)
{
    signed int number = ZERO;

    printf("Input number: ");
    scanf("%d", &number);
    

    printf("The factorial of %d is %d\n", number, factorial(number));


    return SUCCESS_RET;
}

signed int factorial(signed int number)
{
    if(number == ZERO)
    {
        return ONE;
    }
    else
    {
        if(number > ZERO)
        {
            return number * factorial(number - ONE);
        }
        else
        {
            return number * factorial(number + ONE);
        }
    }
}