#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - Entry point
 * Description: Allocates memory for an array, using malloc
 * @nmemb: Number of element
 * @size: Size of element
 * Return: Pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *my_calloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	my_calloc = (unsigned int *)malloc(nmemb * size);
	if (my_calloc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= nmemb; i++)
	{
		my_calloc[i] = 0;
	}

	return (my_calloc);
}
