#include "holberton.h"

/**
* print_rev -  reverses a string
* @s: pointer
* Return: void
*/

void rev_string(char *s)
{
	int i = 0;
	int j, k;

	while (s[i] != '\0')
	{
		i++;
	}

	k = i - 1;

	for (j = k; j >= 0; j--)
	{
		s[k-j] = s[j];
	}

	_putchar('\n');
}

