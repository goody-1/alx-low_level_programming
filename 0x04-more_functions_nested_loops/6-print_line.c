#include "holberton.h"

/**
* print_line - prints line in terminal
* @n: this is the number of times the character _ should be printed
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
		for (count = 1; count <= n; count++)
		{
			_putchar('-');
		}

		_putchar('\n');
	}

}

