#include "main.h"


/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * Description: The _calloc function allocates memory for an array of
 * nmemb elements of size bytes each and returns a pointer to the
 * allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 *
 * @nmemb: first string to be concatenated
 * @size: second string to be concatenated
 *
 * Return: If malloc fails, then _calloc returns NULL
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *s, i = 0, len;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (len = 0; s[len]; len++);


	while (i < len)
	{
		s[i] = 0;
		i++;
	}

	return (s);
}
