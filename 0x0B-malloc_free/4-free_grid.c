#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid previously
 *  created by your alloc_grid function.
 * @grid: pointer to pointer
 * @height: the num of rows
*/
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
