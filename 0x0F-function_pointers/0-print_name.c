#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Entry point
 * @name: Name to be printed
 * @f: Pointer to the function to print
 * Return: Void
 * Description: Collects name and function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
