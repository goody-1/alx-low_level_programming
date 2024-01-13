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
			lmb = temp / 1000000000;
			lmb = -lmb;
			_putchar('0' + lmb);
			temp += 2000000000;
		}
		temp = -temp;
	}
	while (temp / tens > 9)
		tens *= 10;

	while (tens >= 1)
	{
		_putchar('0' + temp / tens);
		temp %= tens;
		tens /= 10;
	}
}
