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
			char *endptr;

			long num = strtol(argv[i], &endptr, 10);


			if (*endptr != '\0')
			{
				printf("Error\n");
				return (1);
			}
			sum += (int)num;

		}
		printf("%d\n", sum);
		return (0);
	}
return (0);
}
