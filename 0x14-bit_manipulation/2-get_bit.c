#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 *
 * Description: where index is the index, starting
 *		-	from 0 of the bit you want to get
 *
 * @n: number to be checked
 * @index: index of bit to be returned
 *
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
