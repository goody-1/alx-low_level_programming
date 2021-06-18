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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	
	putchar('\n');
	
	return (0);
}
