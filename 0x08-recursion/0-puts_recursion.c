#include "main.h"

/**
 * _puts_recursion - Entry Point
 * Description: Prints a string followd by a new line
 * @s: Parameter string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
