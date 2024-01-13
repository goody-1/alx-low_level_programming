#include <math.h>
#include "main.h"

long largest_prime_factor(long num);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long lpf = largest_prime_factor(612852475143);

	printf("%ld\n", lpf);
	return (0);
}

/**
 * largest_prime_factor - print the largest prime factor of a given number
 *
 * @num: the number whose largest prime factor is to be found
 * Return: the largest prime factor
*/
long largest_prime_factor(long num)
{
	long lpf = 1, temp, i;

	temp = num;

	/* keep dividing even numbers by 2 */
	while (temp % 2 == 0)
	{
		temp /= 2;
		lpf = temp;
	}

	/* find the largest prime factor for the number left */
	for (i = 3; i < sqrt(temp); i += 2)
	{
		/* keep dividing if possible */
		while (temp % i == 0)
		{
			temp /= i;
			lpf = temp;
		}
	}
	return (lpf);
}
