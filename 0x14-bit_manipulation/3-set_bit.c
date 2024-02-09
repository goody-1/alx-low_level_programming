#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: integer to be modified]
 * @index: index of modification
 *
 * Return:  1 or -1 if error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((*n & (1 << index)) == 0)
	{
		*n += (1 << index);
		return (*n);
	}

	return (*n);
}
