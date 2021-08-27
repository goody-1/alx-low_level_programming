#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: returns void
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '8'; ch++)
	{
		putchar(ch);
		putchar(',');
	}

	putchar('9');

	putchar('\n');

	return (0);

}
