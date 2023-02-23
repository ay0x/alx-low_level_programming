#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: prints the numbers, from 0 to 9 skipping 2 and 4
 */

void print_most_numbers()
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2)
		{
			continue;
		}
		else if (i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
