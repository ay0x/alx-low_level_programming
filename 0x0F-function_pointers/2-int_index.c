#include "function_pointers.h"

/**
 * int_index - Entry point
 * Description: Function that searches for an integer
 * @array: List of arrays
 * @size: The size of the array
 * @cmp: Pointer to the function to be used to compare values
 * Return: Integer
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}

