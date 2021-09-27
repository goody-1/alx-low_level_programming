#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - a function that prints creates a new dog
 *
 * @name: name of dog
 * @age: age of dog, in float
 * @owner: owner of dog, char *
 *
 *
 * Return: return NULL if function fails
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char * n = name;
	char * o = owner;

	dog_t *new_dog = malloc(sizeof(*new_dog));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = o;

	return (new_dog);

}
