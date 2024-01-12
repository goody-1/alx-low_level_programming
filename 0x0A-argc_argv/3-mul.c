#include "main.h"
/**
 * main - multiplies two numbers
 *
 * @argc: count of arguments
 * @argv: pointer to array of pointers to arguments
 * Return: always 0
*/
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	exit(EXIT_SUCCESS);
}
