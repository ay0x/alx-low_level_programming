#include "3-calc.h"

/**
 * op_add - Entry point
 * Description: Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of the operation
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry point
 * Description: Subtraction between two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of the operation
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Entry point
 * Description: Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of the operation
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry point
 * Description: Divides two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of the operation
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}

}

/**
 * op_mod - Entry point
 * Description: Gives the remainder of a division
 * @a: First integer
 * @b: Second integer
 * Return: Result of the operation
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
