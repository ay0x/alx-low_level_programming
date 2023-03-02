#include "main.h"

/**
 * _strcat - Entry point
 * Description: Copies value of @src to concatinate to @dest
 * @dest: Destination pointer
 * @src: Source pointer
 * Return: Pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[dest_len] != '\0')
	{
	dest_len++;
	}

	while (src[i] != '\0')
	{
	dest[dest_len + i] = src[i];
	i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
