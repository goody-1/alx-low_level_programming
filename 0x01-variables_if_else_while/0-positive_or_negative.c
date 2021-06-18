#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - random number
 * Description: generates a random number for n 
 * each time the program is run
 *
 * Return: always return 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0) 
	{
		printf("%ld is positive");
	}
	else if (n == 0)
	{
		print("%ld is zero");	
	}
	else
	{
		print("%ld is negative");
	}
	return (0);
}

