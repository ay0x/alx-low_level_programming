#include "main.h"

/**
 * _puts - Entry point
 * Description: Function that prints a string
 * @str: String to pass
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '0\')
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
