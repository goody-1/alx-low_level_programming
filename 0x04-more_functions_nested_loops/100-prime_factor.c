#include <stdio.h>

/**
* main - finds and prints the largest prime factor
* of the number 612852475143
* Return: no return (return is void)
*/

int main(void)
{
	long unsigned int num = 1231952;
	long unsigned int count, i;
	unsigned int sum = 0;

	for (count = num - 1; count > 1; count--)
	{
		for (i = 2; i < count; i++)
		{
			if ((count % i == 0))
			{
				sum += 1;
			}
		}

		if ((sum == 0) && (num % count == 0))
		{
			printf("%lu", count);
			break;
		}

		sum = 0;
	}

	printf("\n");

	return (0);
}


