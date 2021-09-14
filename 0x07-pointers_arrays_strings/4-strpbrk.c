#include "main.h"

/**
* _strpbrk - function locates the first occurrence in the
* string s of any of the bytes in the string accept
*
* @s: string to be scanned.
* @accept: string containing the characters to match.
*
* Return:  a pointer to the byte in s that matches one of
* the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int len_s = 0, len_accept = 0;
	int i, j, *p;
	char *p;

	while (s[len_s] != '\0')
		len_s++;

	while (accept[len_accept] != '\0')
		len_accept++;

	for (i = 0; i < len_s; i++)
	{
		for (j = 0; j < len_accept; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				break;
			}
		}
		if (s[i] == accept[j])
			break;
	}

	return (p);
}
