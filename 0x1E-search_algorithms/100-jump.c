#include "search_algos.h"
/**
 * jump_search - searches for a value in an array of integers,
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jumpStep = sqrt(size);
	size_t prev = 0;
	size_t curr = jumpStep;

	if (array == NULL || size == 0)
		return (-1);

	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = curr;
		curr += jumpStep;
	}
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	printf("Value found betweeen the indexes of [%lu] and [%lu]\n", prev, curr);
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
	}

	if (prev < size && array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	return (-1);
}
