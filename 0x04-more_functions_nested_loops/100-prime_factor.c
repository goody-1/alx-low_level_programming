#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143, temp = num, quotient;
	int i = 2;

	while (i < 5000)
	{
		if (temp % i == 0)
		{
		  /* printf("temp %ld is divisible by %d; ", temp, i); */
			temp = temp / i;
		  /* printf("its quotient is %ld\n", temp); */
			i = 2;
		}
		i++;
	}
	quotient = temp;
	printf("%ld\n", quotient);

	return (0);
}
