#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - Entry point
 * Description: Function that frees a 2 dimensional grid.
 * @grid: Number of grid
 * @height: Number of height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
	free(grid[i]);
}
free(grid);
}

