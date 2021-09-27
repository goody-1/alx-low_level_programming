#include "dog.h"

/**
 * free_dog - a function that frees dogs
 *
 * @d: dog structure
 *
 * Return: void
 *
 */

void free_dog(dog_t *d)
{
	free(d);
}
