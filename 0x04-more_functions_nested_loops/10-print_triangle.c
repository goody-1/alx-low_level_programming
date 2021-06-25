#include "holberton.h"

/**
* print_triangle - prints a triangle followed by new line
* @size: size of the triangle
* Return: no return (return is void)
*/

void print_triangle(int size)
{
	int count, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= size; count++)
		{
			for (n = size - 1; n >= count; n--)
			{
				_putchar(' ');
			}
			for (n = 1; n <= count; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}

