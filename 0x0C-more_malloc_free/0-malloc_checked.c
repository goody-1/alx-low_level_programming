#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory to be allocated
 * Return: void pointer
*/

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL || b >= INT_MAX || b < 1)
	{
		free(mem);
		exit(98);
	}
	return (mem);
}
