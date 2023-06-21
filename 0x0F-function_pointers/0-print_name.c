#include <stdlib.h>

/**
 * print_name - Entry point
 * Description: Function that prints a name
 * @name: Name parameter
 * @f: Function pointer
 * Return: Void
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}

}
