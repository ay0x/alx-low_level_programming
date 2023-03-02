#include "main.h"

/**
 * string_toupper - Change strings to upper case
 * Description: Change strings to Upper case
 * @str: Strings
 * Return: Upper case strings
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
	if (*p >= 'a' && *p <= 'z')
	{
	*p = *p - ('a' - 'A');
	}
		p++;
	}
	return (str);
}
