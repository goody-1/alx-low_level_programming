#include "holberton.h"

/**
* reverse_array - reverses the content of an array of integers
*
* @a: array
* @n: number of elements of the array
*
* Return: void
*/


void reverse_array(int *a, int n)
{
	#define SIZE n

	int s[SIZE];
	int i = 0, c, j = 0;

	for (c = n - 1; c >= 0; c--)
	{
		s[i] = a[c];

		i++;
	}

	/* a = s; */

	while (j < n)
	{
		*(a + j) = *(s + j);

		j++;
	}

	/* *a = *s; */

	/*
	 * while (j < n)
	 * {
	 * printf("%d ", a[j]);
	 * j++;
	 * }
	 *
	*/

}

