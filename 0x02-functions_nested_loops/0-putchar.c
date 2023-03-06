#include "main.h"

/**
 * main - program that prints Holberton, followed by a new line.
 *
 * Return: returns 0
 *
 */

int main(void)
{
	char *text = "_putchar";
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
