#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: Returns the last digit of an integer
 * @num: the integer value it receives
 * Return: The last digit of a  number
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (num < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
