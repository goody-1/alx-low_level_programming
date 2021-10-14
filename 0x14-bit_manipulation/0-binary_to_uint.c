#include "main.h"
int _pow_recursion(int x, int y);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *		-	there is one or more chars in the string b that is not 0 or 1
 *		-	b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, dec, rem, i;
	int len = 0;

	/* check if b is NULL */
	if (b == NULL)
		return (0);

	/* check if b contains only 0's and 1's */
	while (b[len] != '\0')
	{
		if (b[len] == '0' || b[len] == '1')
			len++;
		else
			return (0);
	}

	/* convert string b to an integer */
	num = atoi(b);
	dec = 0, i = 0;

	while (num != 0)
	{
		rem = num % 10;
		num /= 10;

		dec += rem * _pow_recursion(2, i);
		i++;
	}

	return (dec);

}

/**
* _pow_recursion -  returns the value of x raised to the power of y
*
* @x: number
* @y: index
* Return: x ^ y
*/
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
