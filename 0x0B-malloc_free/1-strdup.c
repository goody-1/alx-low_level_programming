#include "main.h"


/**
 * _strdup - function that returns a pointer to a newly allocated space
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

	if (str == NULL)
		return (NULL);

	while (str[len_str] != '\0')
		len_str++;

	s = malloc((len_str + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len_str; i++)
		s[i] = str[i];

	return (s);
}
