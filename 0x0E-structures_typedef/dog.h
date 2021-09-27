#ifndef DOG_H
#define DOG_H

/**
 * struct dog - definition dog structure
 * @name: parameter for dog name
 * @owner: parameter for owner name
 * @age: parameter for dog age
 *
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
