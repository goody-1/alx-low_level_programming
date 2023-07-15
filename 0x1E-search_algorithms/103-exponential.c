#include "search_algos.h"
int binarySearch(int array[], int low, int high, int value);
/**
 * exponential_search - searches for a value in a sorted array of integers,
 * using the exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t low;
	size_t high;

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	if (i < size)
		high = i;
	else
		high = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binarySearch(array, low, high, value));
}
/**
 * binarySearch - searches for a value in a sorted array of integers,
 * using the exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: low point of search range
 * @high: high point of search range
 * @value: value to search for
 * Return: index where value is located or -1
*/
int binarySearch(int array[], int low, int high, int value)
{
	int mid;
	int i;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[high]);
	i = 0;
	while (low < high)
	{
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;


		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[high]);
	}
	return (-1);
}
