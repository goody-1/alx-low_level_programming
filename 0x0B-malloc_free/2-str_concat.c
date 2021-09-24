#include "main.h"


/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 *
 * Return: pointer to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
 * NULL is returned on failure
 *
 */

char *str_concat(char *s1, char *s2)
{

	char *s;
	int i, j, len_s1 = 0, len_s2 = 0, len_s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	len_s = len_s1 + len_s2;

	s = malloc((len_s + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		s[i] = s1[i];


	for (j = 0; j < len_s2; j++)
	{
		s[len_s1] = s2[j];
		len_s1++;
	}

	return (s);
}
