#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Entry point
 * Description: Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: String argument
 * Return: Pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int str_len = 0;
	int i;
	char *dup;

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	if (str_len == 0)
	{
		return (NULL);
	}

	dup = (char *)malloc(sizeof(char) * (str_len + 1));

	for (i = 0; i < str_len; i++)
	{
		dup[i] = str[i];
	}

	dup[str_len] = '\0';

	return (dup);
}
