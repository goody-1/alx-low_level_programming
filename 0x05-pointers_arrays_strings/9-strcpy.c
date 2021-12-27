#include "main.h"

/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest
* @src: source pointer
* @dest: destination pointer
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len] != '\0')
		len++;

	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
