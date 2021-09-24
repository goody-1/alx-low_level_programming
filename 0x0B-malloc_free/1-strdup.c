#include "main.h"


/**
 * strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: string to be duplicated
 *
 * Return:  pointer to duplicated string or NULL if it fails
 *
 */

char *_strdup(char *str)
{

	char *s;
	int i, len_str = 0;

	while (str != '\0')
		len_str++;

	s = malloc(len_str * sizeof(char));

	if (str == NULL || s == NULL || len_str == 0)
		return (NULL);

	for (i = 0; i < len_str; i++)
		s[i] = str[i];


	return (s);
}
