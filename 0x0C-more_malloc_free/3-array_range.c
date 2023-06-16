#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Entry point
 * @min: Minimum number of arrays
 * @max: Maximum number of arrays
 * Return: Pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *arr;
	int i, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	arr = malloc(sizeof(int) * length);

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
