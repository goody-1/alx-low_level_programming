#include "main.h"

/**
* _strchr - function that locates a character in a string.
*
* @s: memory area destination
* @c: memory area source
*
* Return:  pointer to the first occurrence
* of the character or NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
