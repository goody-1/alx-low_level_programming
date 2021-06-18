#include <stdlib.h>
#include <stdio.h>

/**
 * main - print numbers from 0 to 9, using char
 *
 * Return: return value
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);

}
