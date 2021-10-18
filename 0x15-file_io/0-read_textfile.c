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
	int fd, out, len = 0;
	char *c;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	c = malloc(letters * sizeof(char));

	if (c == NULL)
		return (0);

	out = read(fd, c, letters);

	if (out == -1)
		return (0);

	c[out] = '\0';

	while (c[len] != '\0')
	{
		printf("%c", c[len]);
		len++;
	}

	close(fd);

	return (len);
}
