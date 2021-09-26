#include "main.h"


/**
 * string_nconcat - function that concatenates two strings
 *
 * Description: The returned pointer shall point to a newly allocated space
 * in memory, which contains s1, followed by
 * the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * If NULL is passed, treat it as an empty string
 *
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of bytes of s2 to be added
 *
 * Return: pointer to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
 * NULL is returned on failure
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
