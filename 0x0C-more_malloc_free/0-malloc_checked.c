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
void *mallock = malloc(b);

if (mallock == NULL)
{
exit (98);
}
return (mallock);
}
