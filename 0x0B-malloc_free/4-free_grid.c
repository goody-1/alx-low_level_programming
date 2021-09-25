#include "main.h"


/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by my alloc_grid function
 *
 * Description - will be compiled with my alloc_grid.c file
 *
 * @grid: number of columns
 * @height: number of rows
 *
 * Return: void
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
		free(grid[i]);

	free(grid);

	return;

}
