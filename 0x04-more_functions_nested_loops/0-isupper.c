#include "main.h"

/**
 * _isupper - Entry point
 * Description: checks character is a letter, lowercase or uppercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
