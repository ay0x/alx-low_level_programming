#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Creates an array of integers
 * min: Minimum number of arrays
 * max: Maximum number of arrays
 * Return Pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *arr;
	int length;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	length = max - min;

	arr = malloc(sizeof(int) * length + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
