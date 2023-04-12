#include <stdio.h>
#include "main.h"
#include <stdlib.h>

// This function frees a 2-dimensional grid previously created by the alloc_grid function 
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
