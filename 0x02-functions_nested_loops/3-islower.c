#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * Return: returns 1 if c is lowercase
**/

int _islower(int c);
{
	char c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
