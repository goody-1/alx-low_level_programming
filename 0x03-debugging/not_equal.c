#include "holberton.h"

/*
* not_equal - test if all numbers are not equal
* Return: return the largest of the numbers
*/

int not_equal(int a, int b, int c)
{
	if (a != b && a != c && b != c)
	{
		if (a > b && a > c)
		{
			largest = a;
		}
		else if (b > a && b > c)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
	}
	return (largest);
}
