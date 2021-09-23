#include "main.h"


/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: initializer
 *
 * Return:  pointer to the array, or NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{

	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));

	if (ar == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
