#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * Description: Creates an array of characters and initialize
 * with a specific character
 * @size: Size of array
 * @c: Character to initialize
 * Return: Pointer to array or NULL
*/

char *create_array(unsigned int size, char c)
{
char *arr = malloc(sizeof(char) * size);

if (size == 0 || arr == NULL)
{
	return (NULL);
}

else
{
	unsigned int i;

	for (i = 0; i <= size; i++)
	{
		*(arr + i) = c;
	}
	return (arr);
}
}
