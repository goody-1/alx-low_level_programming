#include "main.h"
#include <limits.h>

/**
* print_number - prints an integer
* @n: integer to be printed
* Return: no return (return is void)
*/

void print_number(int n)
{
	int tens = 1, temp = n, lmb;

	if (n < 0)
	{
		_putchar('-');
		if (temp == INT_MIN)
		{
			/* get leftmost bit of -21474883648; -2 */
			lmb = temp / 1000000000;
			/* negate the lmb and print character */
			lmb = -lmb;
			_putchar('0' + lmb);
			/* add this number to remove the leftmost bit for easy operation */
			temp += 2000000000;
		}
		temp = -temp;
	}
	/* get power of temp */
	while (temp / tens > 9)
		tens *= 10;

	while (tens >= 1)
	{
		_putchar('0' + temp / tens);
		temp %= tens;
		tens /= 10;
	}
}
