#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @s: the string to be converted
* Return: a string of capitalized words
*/


char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == ',' || s[i] == ';' ||
			s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' ||
			s[i] == '\t')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (s);
}
