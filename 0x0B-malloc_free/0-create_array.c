#include "main.h"

/**
 * create_array -  creates an array of chars,
 *		and initializes it with a specific char
 *
 * @size: size of array
 * @c: character to be used for initialization
 *
 * Return: NULL if size = 0 or program fails, otherwise, pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *array, *head_store;
	unsigned int i = 0;

	array = malloc(sizeof(int) * size);
	if (array == NULL || size == 0)
		return (NULL);

	head_store = array;
	/* malloc'd space might not be initialized to null, don't do *array != '\0'*/
	while (i < size)
	{
		*array = c;
		array++;
		i++;
	}

	return (head_store);
}
