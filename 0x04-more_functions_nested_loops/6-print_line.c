#include "main.h"

/**
 * print_line - Entry point
 * Description: Draws a straight line in the terminal
 * @n: Number of line
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
