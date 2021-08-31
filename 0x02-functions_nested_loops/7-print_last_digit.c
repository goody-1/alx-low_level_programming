#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 * Return: returns value of last digit
**/

int print_last_digit(int n)
{
	int rem;

	if (n >= 0)
	{
		rem = n % 10;
	}
	else
	{
		n = -n;
		rem = n % 10;
	}

	putchar(rem + '0');

}
