#include "main.h"

/**
* print_square - prints numbers 0 to 9
* @size: size of square
* Return: no return (return is void)
*/

void print_square(int size)
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
			for (n = 1; n <= size; n++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

}

