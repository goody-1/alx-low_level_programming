#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * Description: Do not create file if it does not exits
 * @filename: the name of the file to be created
 * @text_content: the NULL terminated string to append to the file
 *
 * Return:	integer, 1 on success, -1 on failure (e.g
 *			file does not exists or no required permission to write file
 *			or filename is NULL);
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, sz;

	fd = open(filename, O_WRONLY | O_EXCL | O_APPEND);

	if ((fd < 0) || (filename == NULL))
		return (-1);

	while (text_content[len] != '\0')
		len++;

	sz = write(fd, text_content, len);
	close(fd);

	if (sz < 1)
		return (-1);

	return (1);
}
