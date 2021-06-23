#include "holberton.h"

/**
 * main - the main program
 *
 * Return: returns 0
 *
 */

int main(void)
{
	char * text = "Holberton";
	
	int index;

	for(index = '0'; index <='9'; index++ )
	{
		_putchar(text[index]);
	}
	_putchar('\n');

	return (0);
}
