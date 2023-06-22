#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - Entry point
 * Description: Add all the integers in the variable
 * @n: Number of variables
 * Return: Sum of all variables
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list my_list;

	if (n == 0)
	{
		return (0);
	}

va_start(my_list, n);
for (i = 0; i < n; i++)
{
sum = sum + va_arg(my_list, int);
}
va_end(my_list);

return (sum);
}
