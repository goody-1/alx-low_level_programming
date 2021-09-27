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
	dog_t *new_dog = malloc(sizeof(*new_dog));

	new_dog->name = name;

	new_dog->age = age;
	new_dog->owner = owner;

	if (new_dog != NULL)
		return (new_dog);
	else
		return (NULL);

}
