#include "main.h"

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
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (i < n)
	{
		if (src[i] == '\0')
			break;
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len + 1] = '\0';

	return (dest);
}
