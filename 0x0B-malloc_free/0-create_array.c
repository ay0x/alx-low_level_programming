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

if (size == 0)
{
	return (NULL);
}

while (arr != NULL)
{
	*arr = c;
	return (arr);
}

return (NULL);
}
