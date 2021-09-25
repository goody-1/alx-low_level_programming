#include "main.h"


/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * Description - if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 *
 * @b: memory size
 *
 * Return: a pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *s = 0;

	if (s == NULL)
		exit(98);

	s = malloc(b);

	return (s);

}
