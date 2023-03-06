#include "main.h"

/**
 * _memcpy - Entry point
 * Description: copies memory area.
 * @dest: Destination Pointer
 * @src: Source pointer
 * @n: Unsigned integer
 * Return: Pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}


	return (dest);
}
