#include "main.h"

/**
 * _strncat - Entry Point
 * Description: Function that concatenates two strings.
 * @dest: Destionation pointer
 * @src: Source pointer
 * @n: number of bytes
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *orig_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n-- > 0)
	{
	*dest++ = *src++;
	}

	*dest = '\0';

	return (orig_dest);
}
