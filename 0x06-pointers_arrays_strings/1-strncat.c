#include "holberton.h"

/**
* _strncat - concatenates two strings
*
* Description: This function appends the src string to the dest string,
* it will use at most n bytes from src; and src does not need to be
* null-terminated if it contains n or more bytes
*
* @dest: this is the destination of the result
* @src: this is the string to be added to the dest
* @n: maximum number of bytes to be used from src
*
* Return: a pointer to the resulting string dest;
*/


char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, m;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	for (m = 0; m < j; m++)
	{
		dest[i] = src[m];
		i++;
	}

	return (dest);
}
