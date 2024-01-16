#include "main.h"

/**
 * alloc_grid -   returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: NULL if program fails,,
 *      NULL if width or height is less than 1,
 *		pointer to array if successful
*/
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i = 0, j = 0;

	if (width < 1 || height < 1)
		return (NULL);

	/* each row contains a pointer to an array */
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);

	while (i < height)
	{
		/* now we talk about the cells */
		matrix[i] = malloc(sizeof(int) * width);

		if (matrix[i] == NULL)
		{
			/* free all rows to which memory was allocated */
			while (i >= 0)
				free(matrix[i--]);
			/* then free the array of pointers */
			free(matrix);
			return (NULL);
		}
		/* Initialize all cells to 0 */
		while (j < width)
		{
			matrix[i][j] = 0;
			j++;
		}
		/* reset j */
		j = 0;
		i++;
	}
	return (matrix);
}
