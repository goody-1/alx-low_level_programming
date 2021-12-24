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

	unsigned long sum = 2;
	int i;

	for (i = 3; i <= 33; i++)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0 && c <= 4000000)
			sum += c;
	}

	printf("%ld\n", sum);

	return (0);
}
