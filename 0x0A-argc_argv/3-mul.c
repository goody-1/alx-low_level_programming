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

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	int first = argv[0];
	int second = argv[1];

	printf("%d\n", first * second);

	return (0);
}
