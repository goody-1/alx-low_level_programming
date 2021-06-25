#include <stdio.h>

/**
* main - finds and prints the largest prime factor
* of the number 612852475143
* Return: no return (return is void)
*/

void main(int)
{
	int num = 612852475143;
	int count;

	for (count = num - 1; count > 1; count--)
	{
		if (num % count == 0 && num % count != 1)
		{
			printf("%d", count);
		}
		_putchar('\n');
	}
}

