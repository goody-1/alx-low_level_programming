#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 * Return: returns value of last digit
**/

int print_last_digit(int n)
{
	int rem;


	rem = abs(n) % 10;

	_putchar (rem + '0');

	return (rem);

}
