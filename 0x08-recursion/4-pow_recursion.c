#include "main.h"

/**
* _pow_recursion -  returns the value of x raised to the power of y
*
* @x: number
* @y: index
* Return: x ^ y
*/

int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
