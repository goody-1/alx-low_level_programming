#include "main.h"

/**
 * flip_bits - the number of bits needed to be flipped
 *			to get from one number to another
 *
 * @n: first operand
 * @m: second operand
 *
 * Return:  1 or -1 if error
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t = n ^ m;
	unsigned int count = 0;

	/* Brian Kernighan's Bit Counting Algorithm */
	while (t)
	{
		t &= (t - 1); /* Clears the least significant bit set*/
		count++;
	}

	return (count);
}
