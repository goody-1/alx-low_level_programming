#include "main.h"
/**
 * main - adds positive numbers
 *
 * @argc: count of arguments
 * @argv: pointer to array of pointers to arguments
 * Return: always 0
*/
int main(int argc, char **argv)
{
	int i, num, sum = 0, i_char = 0;
	char *item;

	if (argc == 0)
	{
		printf("0\n");
		exit(EXIT_FAILURE);
	}
	for (i = 1; i < argc; i++)
	{
		item = argv[i];
		while (item[i_char] != '\0')
		{
			/* characters of argument not within 0-9 returns error */
			if (item[i_char] < '0' || item[i_char] > '9')
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
			i_char++;
		}
		/* reset argument iterator to 0 */
		i_char = 0;
		/* convert string to integer */
		num = atoi(item);
		sum += num;
	}

	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
