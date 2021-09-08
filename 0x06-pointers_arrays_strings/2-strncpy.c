#include "main.h"

/**
* _strncpy - copies a string
*
* Description: should work exactly like strncpy
*
* @dest: this is the destination of the result
* @src: this is the string to be copied to the dest
* @n: maximum number of bytes to be used from src
*
* Return: a pointer to the resulting string dest;
*/


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}

	return (dest);
}
