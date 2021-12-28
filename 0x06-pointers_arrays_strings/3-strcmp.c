#include "main.h"
int _strlen(char *s);

/**
* _strcmp - compares two strings
*
* Description: should work exactly like strcmp
*
* @s1: first string to be compared
* @s2: second string to be compared
*
* Return: a pointer to the resulting string dest;
*/


int _strcmp(char *s1, char *s2)
{
	unsigned int i, big_size = 0;

	if (_strlen(s1) > _strlen(s2))
		big_size = _strlen(s1);
	else
		big_size = _strlen(s2);

	for (i = 0; i < big_size; i++)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return ((s1[i] - s2[i]));
	}

	return (0);
}

/**
* _strlen - returns length of a string
*
* @s: string
* Return: length of string;
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
