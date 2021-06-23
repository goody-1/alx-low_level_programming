#include "holberton.h"

/**
 * main - print lowercase characters of the english alphabet
 *
 * Return: return value
 * 
 */    


int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');

	return (0);
}
