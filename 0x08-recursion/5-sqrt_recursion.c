
#include "main.h"

/**
 * check_int - checks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */
int check_int(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}

	else if (a * a > b)
	{
		return (-1);
	}

	else
	{
	return (check_int(a + 1, b));
	}

}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_int(1, n));
}

