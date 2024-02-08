#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * Description: not allowed to use arrays, malloc, % or / symbols
 *
 * @n: number to be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
