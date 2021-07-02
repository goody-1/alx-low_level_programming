#include "holberton.h"

/**
* cap_string - capitalizes all words of a string
* @str: the string to be converted
* Return: a string of capitalized words
*/


char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == ';' ||
				str[i] == '.' || str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' || str[i] == ')' ||
				str[i] == '{' || str[i] == '}'  || str[i] == 10  ||
				str[i] == 9)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}

		}

		i++;
	}

	return (str);
}

