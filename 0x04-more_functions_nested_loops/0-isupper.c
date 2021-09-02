#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: the character to be checked
 * Return: return 1 if true
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
