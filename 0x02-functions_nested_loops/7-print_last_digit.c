#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 * Return: returns value of last digit
**/

int print_last_digit(int n)
{
	int lst_dig;

	if (n < 0)
		n = -n;

	lst_dig = n % 10;
	_putchar (lst_dig + '0');

	return (lst_dig);

}
