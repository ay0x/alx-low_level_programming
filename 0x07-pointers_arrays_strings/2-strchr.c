#include "main.h"

/**
 * _strchr - Entry Point
 * Description: locates a character in a string
 * @s: String pointer
 * @c: Constant character
 * Return: Pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
