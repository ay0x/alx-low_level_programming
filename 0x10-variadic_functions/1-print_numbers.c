#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry point
 * Description: Prints numbers, followed by a new line
 * @separator: Separator
 * @n: Number of arguments
 * Return: Void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list my_list;

va_start(my_list, n);

for (i = 0; i < n; i++)
{
	int num = va_arg(my_list, int);

	printf("%d", num);
	if (i != n - 1)
	{
	printf("%s", separator);
	}
}
va_end(my_list);
printf("\n");
}
