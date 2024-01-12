#include "main.h"
/**
 * main - print all arguments received
 *
 * @argc: count of arguments
 * @argv: pointer to array of pointers to arguments
 * Return: always 0
*/
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *(argv++));

	exit(EXIT_SUCCESS);
}
