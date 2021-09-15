#include "main.h"

/**
* _strlen_recursion -  returns the length of a string.
*
* @s: string whose length is to be returned
*
* Return: length of string
*/

int _strlen_recursion(char *s)
{
	static int i = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		i++;
	}

	return (i);
}
