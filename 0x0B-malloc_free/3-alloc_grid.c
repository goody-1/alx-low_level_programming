#include "main.h"


/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 *
 * Description - Each element of the grid should be initialized to 0
 * - If width or height is 0 or negative, return NULL
 *
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
 * NULL is returned on failure
 *
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	int **ar = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
		ar[i] = (int *)malloc(width * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ar[i][j] = 0;

	return (ar);
}
