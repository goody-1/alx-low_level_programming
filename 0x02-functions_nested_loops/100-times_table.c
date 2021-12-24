#include "main.h"

void recursive_putchar(int var);

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: limit of times table
 * Return: returns void
**/


void print_times_table(int n)
{
	int i, j, p, tens, unit;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = i * j;
			tens = p / 10;
			unit = p % 10;

			if (j != 0 && p < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (j != 0)
			{
				if (p < 100)
				{
					_putchar(' ');
				}
				recursive_putchar(tens);
			}
			_putchar(unit + '0');

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}

/**
 * recursive_putchar - prints numbers as they are with putchar
 * @var: number to be print
 * Return: void
**/
void recursive_putchar(int var)
{
	if (var < 0)
		return;

	if (var / 10)
		recursive_putchar(var / 10);

	_putchar(var % 10 + '0');
}
