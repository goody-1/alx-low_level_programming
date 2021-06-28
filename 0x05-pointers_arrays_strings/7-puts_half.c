#include "holberton.h"

/**
* puts_half - prints half of a string, followed by a new line
* @str: pointer
* Return: void
*/

void puts_half(char *str)
{
	int i = 0;
	int j, n, str_len;

	while (str[i] != '\0')
	{
		i++;
	}

	str_len = i;

	if (str_len % 2 == 0)
	{
		n = str_len / 2;
	}
	else
	{
		n = (str_len - 1) / 2;
	}
	for (j = n; j < str_len; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
