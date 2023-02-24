#include "main.h"

/**
 * more_numbers - Entry point
 * Description: prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int row;

	for (row = 0; row <= 10; i++)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		_putchar('1');
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
	}

}
