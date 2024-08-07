#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers,
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (!array)
		return (-1);

	while (low <= high)
	{
		if (value <= array[high])
		{
			pos = low + ((
				(double)(high - low) / (array[high] - array[low])
				) * (value - array[low]));

			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
			else if (array[pos] > value)
				high = pos - 1;
			else
				low = pos + 1;
		}
		else
		{
			printf("Value checked array[%d] is out of range\n", array[size]);
			break;
		}
	}
	return (-1);
}
