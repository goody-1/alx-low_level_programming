#include "holberton.h"

/**
* swap_int -  swaps the values of two integers
* @a: first of the integers to be swapped
* @b: second of the integers to be swapped
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

