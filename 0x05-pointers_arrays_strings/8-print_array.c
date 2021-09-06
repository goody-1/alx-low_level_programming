#include "main.h"

/**
* print_array - prints n elements of an array of integers,
* followed by a new line.
* @a: pointer
* @n: number of times to print
* Return: void
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(a[i]);
		_putchar(',');
		_putchar(' ');
	}

	_putchar('\n');
}

