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
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
}
