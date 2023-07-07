#include "main.h"

/**
 * print_binary - Entry point
 * Description: Prints decimal to binary
 * @n: Decimal number
 * Return: Void but prints Binary value
*/

void print_binary(unsigned long int n)
{
	unsigned long int remainder;

	if (n == 0)
		_putchar(n + '0');

	else if (n == 1)
		_putchar(n + '0');

	else
	{
		remainder =  n & 1;
		n = n >> 1;
		print_binary(n);
		_putchar(remainder + '0');

	}
}
