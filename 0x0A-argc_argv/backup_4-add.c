#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Description: Main program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
			sum += atoi(argv[i]);
			}

		}
		printf("%d\n", sum);
		return (0);
	}
return (0);
}
