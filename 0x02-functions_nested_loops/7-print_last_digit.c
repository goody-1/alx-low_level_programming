#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 * Return: returns value of last digit
**/

int print_last_digit(int n)
{
	int rem;

	rem = n % 10;
	if (n < 0)
		rem = -rem;

	_putchar (rem + '0');

	return (rem);
}
