#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 * Description: Creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: Array size
 * @c: Array name
 * Return: Character pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		{
		return (NULL);
		}

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
