#include "main.h"

/**
 * create_file - create a file
 *
 * Description: The file must have permissions: rw-------.
 *		Permission should not be changed if file already exists
 *		- truncate file if it already exists
 *		- create empty file if text_content is NULL
 * @filename: the name of the file to be created
 * @text_content: the NULL terminated string to write to the file
 *
 * Return:	integer, 1 on success, -1 on failure (e.g
 *			file can not be create, can not be written, write failes etc ).
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, sz;

	fd = open(filename, O_WRONLY|O_CREAT|O_TRUNC, 0600);

	if ((filename == NULL) || fd < 0)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	sz = write(fd, text_content, len);

	close(fd);

	if (sz < 0)
		return (-1);

	return (1);
}
