#include "main.h"

/**
 * print_sign - Entry point
 * Description: checks character is a letter, lowercase or uppercase
 * @n: the integer value it receives
 * Return: 1 if it is greater than 0. 0 if it is zero.
 * -1 if it is less than zero
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
