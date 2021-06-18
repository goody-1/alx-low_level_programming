#include <stdlib.h>
#include <stdio.h>

/**
 * main - print lowercase characters of the english alphabet
 *
 * Return: return value
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch, ', ');
	}

	putchar('\n');

	return (0);

}
