#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - a function that initializes a variable of type 'struct dog'
 *
 * @name: name of dog
 * @age: age of dog, in float
 * @owner: owner of dog, char *
 * @d: struct
 *
 * Return: void
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
