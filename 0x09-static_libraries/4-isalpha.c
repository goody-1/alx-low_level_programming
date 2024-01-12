#include "main.h"

/**
 * _isalpha - checks if character is alphabet
 * @c: character to be checked
 * Return: returns 1 if c is alphabet
**/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
