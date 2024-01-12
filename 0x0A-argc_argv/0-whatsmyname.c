#include "main.h"
/**
 * main - program that prints its name
 *
 * @argc: count of arguments
 * @argv: pointer to array of pointers to arguments
 * Return: always 0
*/
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
