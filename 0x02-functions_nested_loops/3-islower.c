#include "main.h"

/**
 * _islower - Check if a letter is lower case or upper case
 *
 * c - Is an integer parameter
 * Return: int
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
	return (1);
}
else
{
	return (0);
}
}

