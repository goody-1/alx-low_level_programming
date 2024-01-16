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

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);

	while (i < height)
	{
		matrix[i] = malloc(sizeof(int) * width);

		if (matrix[i] == NULL)
		{
			while (i >= 0)
				free(matrix[i--]);

			free(matrix);
			return (NULL);
		}
		while (j < width)
		{
			matrix[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (matrix);
}
