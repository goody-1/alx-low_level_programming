#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the file name
 * @letters: number of letters to be read and printed
 *
 * Return:	number of letters it could read and print
 *			if filename is NULL	- 0
 *			if file can not be opened or read	- 0
 *			if write fails or does not write the expected amount of bytes	- 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_in, written_out = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	read_in = read(fd, buffer, letters);

	if (read_in == -1)
		return (0);

	buffer[read_in] = '\0';

	/*
	* while (c[len] != '\0')
	* {
	*	printf("%c", c[len]);
	*	len++;
	* }
	*/

	/* writting to standard output, and writing what what returned from read */

	written_out = write(STDOUT_FILENO, buffer, read_in);

	close(fd);

	return (written_out);
}
