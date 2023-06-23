#include "3-calc.h"

/**
 * main - Entry point
 * Description: Calc
 * @argc: Number of arguments
 * @argv: List of arguments
 * Return: Result of operations on 2 integers
*/

int main(int argc, char *argv[])
{
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	calc = get_op_func(argv[2]);

	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
