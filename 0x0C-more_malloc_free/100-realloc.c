#include "main.h"

/**
 * _realloc - reallocates memory block, using malloc
 *
 * @ptr: pointer to memory previously allocated
 * @old_size: previous memory size
 * @new_size: new memory size
 *
 * Return: pointer to allocated memory
 *          or NULL if size is 0 or malloc fails or nmemb is 0
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	unsigned char *byte_mem;
	unsigned int i, size;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);
	/* let size to be used be the minimum of old and new sizes */
	size = new_size < old_size ? new_size : old_size;
	byte_mem = (unsigned char *)mem;

	for (i = 0; i < size; i++)
		byte_mem[i] = ((unsigned char *)ptr)[i];

	free(ptr);
	return (mem);
}
