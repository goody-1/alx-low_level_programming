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

	char *s;
	unsigned int i, j, len_s1 = 0, len_s2 = 0, len_s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	if (n >= len_s2)
		n = len_s2 + 1;

	len_s = len_s1 + n;

	s = malloc((len_s + 2) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		s[i] = s1[i];


	for (j = 0; j < n; j++)
	{
		s[len_s1] = s2[j];
		len_s1++;
	}

	return (s);
}
