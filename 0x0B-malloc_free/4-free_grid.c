#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-D grid previously created by the alloc_grid function
 * @grid: grid defined by alloc_grid
 * @height: number of arrays in in grid.
 * Return: no return
*/
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}