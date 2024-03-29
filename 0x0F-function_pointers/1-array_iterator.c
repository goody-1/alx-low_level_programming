#include "function_pointers.h"

/**
 * array_iterator -  executes a function given
 *		as a parameter on each element of an array
 *
 * @array: array to be iterated
 * @size: size of the array
 * @action: function pointer to be used
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
