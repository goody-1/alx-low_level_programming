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

	printf("%d\n", argv[0] * argv[1]);

	return (0);
}
