#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * Description: prints a string in reverse
 * @s: String argument
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
