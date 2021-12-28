#include "main.h"

/**
* rot13 - encodes a string using rot13
* @s: the string to be encoded
* Return: encoded string
*/

char *rot13(char *s)
{
	int i = 0, j;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encoded[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = encoded[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

