#include "main.h"

/**
 * _strcmp - Entry point
 * Description: Compate two strings
 * @s1: String one
 * @s2: String two
 * Return: Compared
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
		break;
	}
	s1++;
	s2++;
	}

	return (*s1 - *s2);
}

