#include <stdlib.h>
#include <stdio.h>

/**
 * main - print numbers from 0 to 9, not using char
 *
 * Return: return value
 */

int main(void)
{
	int x;

	for (x = 0; x <= '9'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);

}
