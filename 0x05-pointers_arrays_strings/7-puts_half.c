#include "main.h"

/**
* puts_half - prints half of a string, followed by a new line
* @str: pointer
* Return: void
*/

void puts_half(char *str)
{
	int n, len = 0;

	while (str[len] != '\0')
		len++;

	n = len / 2;
	if (len % 2 != 0)
		n = n + 1;

	while (n < len)
	{
		putchar(str[n]);
		n++;
	}
	putchar('\n');
}
