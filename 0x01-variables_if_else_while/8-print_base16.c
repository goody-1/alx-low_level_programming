#include <stdlib.h>
#include <stdio.h>

/**
 * main - print lowercase characters of the english alphabet
 *
 * Return: return value
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= 'F'; ch++)
	{
		ch = tolower(ch);
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
