#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int heigt)
{
	int x;

	for (x = 0; x < heigt; x++)
	{
		free(grid[x]);
	}
	free(grid);
	

}

