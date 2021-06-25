#include "holberton.h"

/**
* print_line - prints line in terminal
*
* Return: no return (return is void)
*/

void print_line(int n)
{
	int count;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count > 0 && count <= n)
		{
			_putchar('-');
		}

		_putchar('\n');
	}

}

