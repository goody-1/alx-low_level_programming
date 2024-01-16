#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 *              by alloc_grid function
 * @grid: the 2 dimensianal array to be freed
 * @height: number or rows
 *
 * Return: void
*/
void free_grid(int **grid, int height)
{
	/* free each row */
	while (height--)
		free(grid[height]);
	/* free the array of pointers */
	free(grid);
}
