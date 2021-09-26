#include "main.h"


/**
 * array_range - function that creates an array of integers
 *
 * Description: The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 * If min > max, return NULL
 * If malloc fails, return NULL
 *
 * @min: first string to be concatenated
 * @max: second string to be concatenated
 *
 * Return: the pointer to the newly created array
 *
 */

int *array_range(int min, int max)
{
	int *arr, diff;
	int i = 0;
	diff = max - min;

	if (min > max)
		return (NULL);

	arr = malloc((diff + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	// arr[0] = min;

	for (i = 0; arr[i] = max; i++)
	{
		arr[i] = min;
		min++;
	}


	return (arr);
}
