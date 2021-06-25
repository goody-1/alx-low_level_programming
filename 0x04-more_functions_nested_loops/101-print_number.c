#include "holberton.h"

/**
* print_number - prints an integer
* @n: integer to be printed
* Return: no return (return is void)
*/

void print_number(int n)
{
	char c;

	if (n >= 0 && n <= 9)
	{
		_putchar('0' + n);
	}
	else if (n < 0)
	{
		n = -n;

		if (n >= 0 && n <= 9)
		{
			_putchar('-');
			_putchar('0' + n);
		}
		else
		{
			c = n % 10;
			_putchar('-');
			_putchar('1');
			_putchar('0' + c);
		}
	}
	else
	{
		c = n % 10;
		_putchar('1');
		_putchar('0' + c);
	}

}

