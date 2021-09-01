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

	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}

	_putchar('\n');

	return (0);
}
