#include "main.h"


/**
* main - a program that adds positive numbers
*
* @argc: argument count
*
* @argv: argument vector
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int count, sum = 0;


	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (count = 1; count < argc; count++)
	{
		if (!atoi(argv[count]))
		{
			printf("Error\n");
			return (1);
		}
	}

	for (count = 1; count < argc; count++)
	{
		sum += atoi(argv[count]);
	}

	printf("%d\n", sum);

	return (0);
}
