#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: character to be checked
 * Return: returns 1 if c is lowercase
**/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
