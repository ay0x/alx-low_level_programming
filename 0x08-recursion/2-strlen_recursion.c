#include "main.h"
/**
 * _strlen_recursion - Entry point
 * Description: Returns the length of a string.
 * @s: string argument
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}

