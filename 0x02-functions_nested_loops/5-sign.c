#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 * Return: returns 1 if c is alphabet
**/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}

}
