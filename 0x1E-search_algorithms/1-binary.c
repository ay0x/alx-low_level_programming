#include "search_algos.h"

/**
 * binary_search - Binary search
 * @array: Pointer to the first item in the array
 * @size: Size of the array
 * @value: Target value to be searched for
 * Return: The index of the target value
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;

	if (size  == 1)
		return (array[left]);

	while (left <= right)
	{
		if (left == 0 && right == 0)
			return (-1);

		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
