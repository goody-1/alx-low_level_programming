#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

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

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}

	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);

}


/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest
* @src: source pointer
* @dest: destination pointer
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	*dest = *src;

	return (dest);
}

/**
* _strlen - returns the length of a string
* @s: pointer
* Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
