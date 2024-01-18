#include "main.h"

unsigned int str_len(char *str);
/**
 * string_nconcat - allocates memory using malloc
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in s2 to be concatenated
 *
 * Return: pointer to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int len = str_len(s1), i, sum, j, len2 = str_len(s2);

	if (n > len2)
		sum = len2 + len;
	else
		sum = n + len;
	new_string = malloc(sizeof(char) * (sum + 1));

	if (new_string == NULL)
		return (NULL);

	/* Copy the first string into the new string */
	for (i = 0; i < len; i++)
		new_string[i] = s1[i];

	/* Copy the n bytes of s2 in the new string */
	for (i = len, j = 0; i < sum && j < n; i++, j++)
		new_string[i] = s2[j];

	new_string[i] = '\0';

	return (new_string);
}
/**
 * str_len - get length of string;
 *
 * @str: string to be checked
 * Return: length of string or NULl
*/
unsigned int str_len(char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (0);
	while (str[len] != '\0')
		len++;

	return (len);
}
