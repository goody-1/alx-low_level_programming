#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - print last digit of random number
 * Description: print last digit of random nubmer and 
 * tell if it is greater than 5 or is 0 or is less than 6 and is not 0
 * 
 * Return: return value is 0
 */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	digit = abs(n)%10;

	if (n > 0)
	{
		if (digit > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", (n, digit));
		}
		else if (digit < 6 && digit != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", (n, digit));
		}
		else if (digit == 0)
		{
			printf("Last digit of %d is %d and is 0\n", (n, digit));
		}
	}
	else if (n < 0)
	{	
		if (digit > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", (n, -digit));
		}
		else if (digit < 6 && digit != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", (n, -digit));
		}
		else if (digit == 0)
		{
			printf("Last digit of %d is %d and is 0\n", (n, digit));
		}
	}


	return (0);
}
