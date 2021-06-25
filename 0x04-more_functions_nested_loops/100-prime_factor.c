#include <stdio.h>

/**
* main - finds and prints the largest prime factor
* of the number 612852475143
* Return: no return (return is void)
*/

int main(void)
{
	long int num = 612852475143;
	long int count;

	for (count = num - 1; count > 1; count--)
	{
		if (num % count == 0 && num % count != 1)
		{
			printf("%d", count);
		}
		printf("\n");
	}

	return (0);
}

