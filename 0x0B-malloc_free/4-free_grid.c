#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function thatfrees 2-D grid by alloc-grid fncs
 * @grid: 2-D array to be freed
 * @height: height of grid
 * Return: return void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
