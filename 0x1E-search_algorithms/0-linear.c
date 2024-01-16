#include "search_algos.h"

/**
 * linear_search - Linear search
 * @array: Pointer to the first item in the array
 * @size: Size of the array
 * @value: Target value to be searched for
 * Return: The index of the target value
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
		}
		return (-1);
	}
	else
		return (-1);
}
