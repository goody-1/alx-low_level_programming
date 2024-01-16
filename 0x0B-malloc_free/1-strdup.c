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
	char *head, *dup;
	int len = 0, i;

	head = str;

	while (*str != '\0')
	{
		str += 1;
		len++;
	}

	dup = malloc(sizeof(char) * len);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = head[i];

	return (dup);
}
