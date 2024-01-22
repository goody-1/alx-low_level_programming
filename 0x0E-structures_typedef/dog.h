#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a dog object
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};


#endif
