#include "main.h"

/**
 * main - main program
 * Return: returns 0
**/


int main(void)
{
	int i, res = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			res += i;
		}
	}
	printf("%d\n", res);

	return (0);
}
