#include "holberton.h"

/**
* print_diagonal - draws diagonal line 
*
* Return: no return (return is void)
*/

void print_diagonal(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= n; count++)
		{
			_putchar('\n');
			_putchar('\\');
		}

		_putchar('\n');
	}

}
