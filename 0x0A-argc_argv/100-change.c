#include "main.h"
/**
 * main - prints the minimum number of coins to make change
 *          for an amount of money
 *
 * @argc: count of arguments
 * @argv: pointer to array of pointers to arguments
 * Return: always 0
*/
int main(int argc, char **argv)
{
	unsigned int long i;
	int denos[] = {25, 10, 5, 2, 1};
	int deno;
	int amount;
	int rem;
	int no_of_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	/* convert string to integer */
	amount = atoi(argv[argc - 1]);

	if (amount < 0)
		printf("%d\n", 0);

	for (i = 0; i < sizeof(denos) / sizeof(denos[0]); i++)
	{
		while (amount > 0)
		{
			if (amount >= denos[i])
			{
				deno = denos[i];
				rem = amount % deno;
				no_of_coins += (amount - rem) / deno;
				amount = rem;
			}
			/*
			 * if remainder is less that of current denominator
			 * go to the next one
			 */
			else
				break;
		}
	}
	printf("%d\n", no_of_coins);
	exit(EXIT_SUCCESS);
}
