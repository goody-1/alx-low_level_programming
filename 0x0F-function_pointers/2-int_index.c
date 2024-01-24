#include "function_pointers.h"

/**
 * int_index -  searches for an integer
 *
 * @array: array to be iterated
 * @size: size of the array
 * @cmp: function pointer to be used
 *
 * Return: integer found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (!array || !size || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result)
			return (i);
	}

	return (-1);
}
