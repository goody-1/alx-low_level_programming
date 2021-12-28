#include "main.h"

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
	int i, temp;

	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
	}
}
