#include "main.h"

/**
* _memset - function that fills memory with a constant byte.
*
* Description: The _memset() function fills the first n bytes of the memory
* area pointed to by s with the constant byte b
* overwriting the terminating null byte (\0) at the end of dest,
* and then adds a terminating null byte
*
* @s: A pointer to the memory area to be filled
* @b: The character to fill the memory area with
* @n: The number of bytes to be filled
*
* Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
