#include "holberton.h"

/*
* a_and_b_equal - test if first 2 numbers are equal
* Return: return largest number
*/

int a_and_b_equal(int a, int b, int c)
{
	if (a == b && a != c)
	{
		if (a > c)
		{
			largest = a;
		}
		else
		{
			largest = c;
		}
	}

	return (largest);
}
