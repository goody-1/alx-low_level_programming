#include "main.h"
#include <stdlib.h>

#define BUFFERSIZE 1024
void copy_textfile(char *file_from, char *file_to);

/**
 * main - main program
 * Description: uses the copy_textfile function
 *		usage - cp file_from file_to. If number of arguments not correct,
 *		exit code - 97; print on the POSIX standard error
 *
 * @ac: argument count
 * @av: pointer to character array of arguments
 *
 * Return: always 0
 */

int main(int ac, char **av)
{
	char *file_from, *file_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	/* getting the name of the files */
	file_from = av[1];
	file_to = av[2];

	copy_textfile(file_from, file_to);

	return (0);
}

/**
 * copy_textfile - copies contents of a file to another
 * Desccription: If file_to exists, it is truncated.
 *	-	If file_from does not exist, or cannot be read, exit code - 98;
 *		print on POSIX standard error
 *	-	If file_to can't be created or written to, exit code - 99;
 *		print on POSIX standard error
 *	-	If file descriptors can't be closed, exit code - 100;
 *		print on POSIX standard error
 *
 * @file_from: source file
 * @file_to: destination file
 *
 * Return: void
 */

void copy_textfile(char *file_from, char *file_to)
{
	int source, dest;
	char buffer[BUFFERSIZE];
	ssize_t read_in;

	/* source file open in read only mode */
	source = open(file_from, O_RDONLY);
	/* destination file open in write mode; created if not found */
	dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (source < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (dest < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((read_in = read(source, &buffer, BUFFERSIZE)) > 0)
	{
		write(dest, &buffer, read_in);
	}


	if (close(source) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	if (close(dest) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
}
