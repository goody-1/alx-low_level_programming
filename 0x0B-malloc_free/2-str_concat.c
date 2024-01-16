#include "main.h"

unsigned int str_len(char *str);
/**
 * str_concat -  concatenates two strings.
 *
 * @s1: fisrt string
 * @s2: second string
 *
 * Return: NULL if program fails, otherwise,
 *      pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *concated;
	int s1_len, s2_len, total_len, counter = 0, i = 0;

	s1_len = str_len(s1);
	s2_len = str_len(s2);
	total_len = s1_len + s2_len + 1;

	concated = malloc(sizeof(char) * total_len);

	if (concated == NULL)
		return (NULL);

	while (counter < s1_len)
	{
		concated[counter] = s1[counter];
		counter++;
	}
	while (counter < total_len)
	{
		concated[counter] = s2[i];
		counter++;
		i++;
	}

	return (concated);
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
