#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 *
 * @d: struct dog
 *
 * Return: void
 *
 */

void print_dog(struct dog *d)
{
	char *nothing = "";

	if (d != NULL)
	{
		/* check if d.name or d.owner is null and respond accordingly */

		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		if (!(d->age))
			d->age = 0

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
		printf("%s", nothing);
}
