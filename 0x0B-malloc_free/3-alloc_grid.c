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
	int *row;
	int i = 0, j = 0;

	if (width < 1 || height < 1)
		return (NULL);

	matrix = malloc(sizeof(int) * width + 1);
	if (matrix == NULL)
		return (NULL);

	while (i < width)
	{
		matrix[i] = malloc(sizeof(int) * height * width + 1);

		if (matrix[i] == NULL)
			return (NULL);
		row = matrix[i];
		while (j < height)
		{
			row[j] = 0;
			j++;
		}
		j = 0;
		i++;
	}

	return (matrix);
}
