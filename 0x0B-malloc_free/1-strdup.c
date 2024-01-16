#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 *      which contains a copy of the string given as a parameter
 *
 * @str: string to be duplicated
 *
 * Return: NULL if str is NULL or memory is insufficient
 *      otherwise, return pointer to duplicated string
*/
char *_strdup(char *str)
{
	char *dup;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	return (dup);
}
