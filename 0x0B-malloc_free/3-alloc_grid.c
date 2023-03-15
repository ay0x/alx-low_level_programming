#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - Entry point
 * Description: A pointer to a 2 dimensional array of integers
 * @width: Size of Width
 * @height: Size of height
 * Return: Pointers
 */

int **alloc_grid(int width, int height)
{
int **arr;
int i, j;

	if (width <= 0 || height <= 0)
{
	return (NULL);
}

arr = (int **)malloc(sizeof(int *) * height);

if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(sizeof(int) * width);
}

for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
	arr[i][j] = 0;
	}
}

return (arr);
}
