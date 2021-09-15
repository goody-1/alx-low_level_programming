#include "main.h"

/**
* _sqrt_recursion -  returns  the natural square root of a number
*
* @n: number in question
*
* Return: natural square root of n or -1 if does not exist
*/

int _sqrt_recursion(int n)
{
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
