#include "main.h"

/**
* print_number - prints an integer
* @n: integer to be printed
* Return: no return (return is void)
*/

void print_number(int n)
{
	int tens = 1, temp = n;

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
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
