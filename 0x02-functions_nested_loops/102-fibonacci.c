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

	printf("1, 2, ");
	for (i = 3; i <= 50; i++)
	{
	    c = a + b;
	    printf("%ld", c);
	    a = b;
	    b = c;

	    if (i != 50)
	        printf(", ");
	}
	printf("\n");

	return (0);
}
