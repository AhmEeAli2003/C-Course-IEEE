#include <stdio.h>

#define SUCCESS_RET  0
#define INT_ZERO     0

#define A_CAPITAL    'A'
#define Z_CAPITAL    'Z'
#define A_SMALL      'a'
#define Z_SMALL      'z'
#define CHAR_ZERO    '0'
#define CHAR_NINE    '9'

int main(void)
{
	unsigned char character = INT_ZERO;

	printf("Input any character: ");
	scanf("%c", &character);

	if((character >= A_CAPITAL && character <= Z_CAPITAL) || (character >= A_SMALL && character <= Z_SMALL))
	{
		printf("%c is alphabet\n", character);
	}
	else if(character >= CHAR_ZERO && character <= CHAR_NINE)
	{
		printf("%c is digit\n", character);
	}
	else
	{
		printf("%c is special character\n", character);
	}

	return SUCCESS_RET;
}
