#include <stdio.h>
#include "main.h"
/**
 * main - Printing _putchar with Putchar
 *
 * Return: Always 0.
 */

int main(void)
{
	char put[] = "_putchar";

	for (int i = 0; i <= 8; i++)
	{
		putchar(put[i]);
	}
	putchar('\n');
	return (0);
}
