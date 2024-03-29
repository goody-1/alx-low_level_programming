#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: struct dog
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/* check if d.name or d.owner is null and respond accordingly */
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		if (!(d->age))
			d->age = 0;

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
		printf("%s", "");
}
