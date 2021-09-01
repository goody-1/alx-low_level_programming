#include "main.h"

/**
 * main - main program
 * Return: returns 0
**/

int main(void)
{
	int i;
	long unsigned int fib[49];

	fib[0] = 1; fib[1] = 2;

	printf("%lu, %lu, ", fib[0], fib[1]);

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (i == 49)
		{
			printf("%lu", fib[i]);
		}
		else
		{
			printf("%lu, ", fib[i]);
		}
	}

	return (0);
}
