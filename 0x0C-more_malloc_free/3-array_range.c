#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to created array
 *          or NULL if min > max or malloc fails
*/

int *array_range(int min, int max)
{
	int *array;
	int size = max - min + 1, i;

	array = malloc(sizeof(int) * size);

	if (min > max || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++, min++)
		array[i] = min;

	return (array);
}
