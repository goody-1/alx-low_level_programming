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


/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;

#endif
