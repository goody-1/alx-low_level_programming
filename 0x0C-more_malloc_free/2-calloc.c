#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: byte size of each element
 *
 * Return: pointer to allocated memory
 *          or NULL if size is 0 or malloc fails or nmemb is 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem = malloc(nmemb * size);
	unsigned char *byte_mem;
	unsigned int i;

	if (nmemb == 0 || size == 0 || mem == NULL)
	{
		free(mem);
		return (NULL);
	}

	byte_mem = (unsigned char *)mem;
	for (i = 0; i < (nmemb * size); i++)
		byte_mem[i] = 0;

	return (mem);
}
