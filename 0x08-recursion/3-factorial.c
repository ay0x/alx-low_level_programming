#include "main.h"

/**
 * factorial - Entry point
 * Description: Returns the factorial of a given number
 * @n: integer
 * Return: integer
 */
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
			return (i);

}

