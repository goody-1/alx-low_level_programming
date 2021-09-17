#include "main.h"


/**
* main - a program that multiplies two numbers
*
* @argc: argument count
*
* @argv: argument vector
*
* Return: always 0
*/

int main(int argc, char *argv[])
{

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	int first = atoi(argv[1]);
	int second = atoi(argv[2]);

	printf("%d\n", first * second);

	return (0);
}
