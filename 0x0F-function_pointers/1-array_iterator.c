#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 *
 * @array: specimen array
 * @size: array size
 * @action: function pointer to be executed on array elements
 *
 * Return: void
 *
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (!array || !size || !action)
		return;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
