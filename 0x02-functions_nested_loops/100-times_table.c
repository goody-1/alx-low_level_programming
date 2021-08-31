#include "main.h"

void my_putchar(int var);

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: limit of times table
 * Return: returns void
**/


void print_times_table(int n)
{
	int i, j, res;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				my_putchar(res);

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}


/**
 * my_putchar - prints numbers as they are with putchar
 * @var: number to be tested
 * Return: returns no value
**/

void my_putchar(int var)
{

	/* print '-' for negative numbers */

	if (var < 0)
	{
		_putchar('-');
		var = var * -1;
	}

	/*
	 * First remove the last digit of number and print
	 * the remaining digits using recursion, then print
	 * the last digit
	*/

	if (var / 10)
		my_putchar(var / 10);

	_putchar(var % 10 + '0');
}
