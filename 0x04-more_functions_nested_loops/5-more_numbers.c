#include "main.h"

/**
 * more_numbers - Entry point
 * Description: prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	char num[] = "1234567891011121314";
	int i;
	int j;

	for (j = 0; j <= 10; j++)
	{
	for (i = 0; i <= 18; i++)
	{
		_putchar(num[i]);
	}
	_putchar('\n');
	}

}
