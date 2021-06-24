#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	int not_equal(int a, int b, int c);

	if (a == b && a == c)
	{
		largest = a;
	}

	int a_and_b_equal(int a, int b, int c);

	else if (a == c && a != b)
	{
		if (a > b)
		{
			largest = a;
		}
		else
		{
			largest = b;
		}
	}
	else if (b == c && b != a)
	{
		if (b > a)
		{
			largest = b;
		}
		else
		{
			largest = a;
		}
	}

	return (largest);
}

