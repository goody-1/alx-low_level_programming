#include <stdlib.h>
#include <stdio.h>

/**
 * main - print lowercase characters in reverse
 *
 * Return: return value
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);

}
