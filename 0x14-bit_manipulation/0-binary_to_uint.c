#include "main.h"

void print_number(int n);
int positive_power(int n, int p);
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary string
 *
 * Return:  the converted number, or 0 if
 *				there is at least a character not binary in the string
 *				b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, dec = 0;
	int j;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] !=  '1')
			return (0);
	}

	for (len = 0; b[len] != '\0'; len++)
	;

	j = len - 1;
	i = 0;

	while (j >= 0 && i < len)
	{
		dec += (b[i] - '0') * positive_power(2, j);

		j--;
		i++;
	}

	return (dec);
}
/**
* positive_power - gets the power of a number
* @n: integer
* @p: index of n
* Return: power of number
*/
int positive_power(int n, int p)
{
	int i, pow = n;

	if (n == 0)
		return (0);
	if (p == 0)
		return (1);
	if (p < 0)
		return (-1);

	for (i = 1; i < p; i++)
	{
		pow *= n;
	}
	return (pow);
}
