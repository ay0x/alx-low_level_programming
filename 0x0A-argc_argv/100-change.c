#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the min number of coins to make change
 * for an amount of money
 * @argc: Argument count
 * @argv: Arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int total, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);
	count = 0;

	if (total > 0)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents) / sizeof(cents[0]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
