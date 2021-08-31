#include "main.h"

int my_putchar(int var);

/**
 * add - adds two integers and returns the result
 * @p: first integer to be summed
 * @r: second integer to be summed
 * Return: returns the result
**/

int add(int p, int r)
{
	int sum  = p + r;
	my_putchar(sum);
}


/**
 * my_putchar - prints numbers as they are with putchar
 * @var: number to be tested
 * Return: returns no value
**/

int my_putchar(int var)
{
	return (var);
}
