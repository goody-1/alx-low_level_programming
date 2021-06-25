#include "holberton.h"

/**
* print_number - prints an integer
* @n: integer to be printed
* Return: no return (return is void)
*/

void print_number(int n)
{
	unsigned int c;

	c = n;

	if (n < 0)
	{
		_putchar('-');
		c = -n;
	}

	if (c / 10)
	{
		print_number(c / 10);
	}

	_putchar((c % 10) + '0');

}

