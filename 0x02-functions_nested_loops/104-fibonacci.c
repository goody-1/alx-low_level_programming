#include "main.h"

/**
 * main - main program
 * Return: returns 0
**/

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c = 3;

	int i;

	printf("%lu, %lu, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;

		if (i != 98)
			printf(", ");
	}
	printf("\n");

	return (0);
}
