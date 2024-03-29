#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * Description: Allocates memory
 * @b: Number of memory
 * Return: Pointer to the address
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

