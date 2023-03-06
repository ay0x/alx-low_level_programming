#include "main.h"

/**
 * _strspn - Entry Point
 * Description: gets the length of a prefix substring
 * @s: String pointer
 * @accept: Constant character
 * Return: Pointer to the first occurence
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i;
	while (*s != '\0')
	{
	int found = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
		found = 1;
		break;
		}
	}

	if (!found)
	{
		return (count);
	}

	s++;
	count++;
	}

	return (count);
}
