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
int *arr;
int arr_len;
	
	if (width <= 0 || height <=0)
{
	return (NULL);
}

arr_len = width * height;

arr = (int *)malloc(sizeof(int) * arr_len);

for (i = 0; i )

}
