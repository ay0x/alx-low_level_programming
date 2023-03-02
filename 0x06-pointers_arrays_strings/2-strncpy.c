#include "main.h"

/**
 * _strncpy - Entry Point
 * Description: function that copies a string.
 * @dest: Pointer destination
 * @src: Pointer source
 * @n: number of bytes
 * Return: Original destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *orig_dest = dest;

	while (*src != '\0' && n-- > 0)
	{
	*dest++ = *src++;
	}

	while (n-- > 0)
	{
		*dest++ = '\0';
	}

	return (orig_dest);
}
