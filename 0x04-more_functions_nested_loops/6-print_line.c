#include "holberton.h"

/**
* print_line - prints line in terminal
* @n: this is the number of times the character _ should be printed
* Return: no return (return is void)
*/

void print_line(int n)
{
	int count = 1;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count <= n)
		{
			_putchar('-');
		}

		_putchar('\n');
	}

}

