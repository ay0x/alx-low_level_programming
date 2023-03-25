#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Entry point
 * @array: Array elements
 * @size: Size of array
 * @action: Pointer to the function to print
 * Return: Void
 * Description: executes a function given as a parameter
 * on each element of an array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
