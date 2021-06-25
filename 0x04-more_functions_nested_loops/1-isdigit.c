#include "holberton.h"

/**
* _isdigit - checks if given input is a digit
* @c: the character to be checked
* Return: returns 1 if true, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
