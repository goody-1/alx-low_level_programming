#include "dog.h"

int str_len(char *s);
char *str_cpy(char *dest, char *src);

/**
 * new_dog - creates new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * (str_len(name) + 1));
	new_dog->owner = malloc(sizeof(char) * (str_len(owner) + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = str_cpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = str_cpy(new_dog->owner, owner);

	return (new_dog);
}


/**
* str_cpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest
* @src: source pointer
* @dest: destination pointer
* Return: char
*/

char *str_cpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
* str_len - returns the length of a string
* @s: pointer
* Return: length of string
*/

int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
