#include "main.h"

/**
 * _memset - Entry point
 * Description: fills memory with a constant byte
 * @s: Character Pointer
 * @b: Character constant
 * @n: Unsigned integer
 * Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (i < n)
	{
		s[i] = b;
		i++;
	}


	return (s);
}
