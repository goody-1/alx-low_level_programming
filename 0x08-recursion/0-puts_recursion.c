#include "main.h"

/**
* _puts_recursion - prints a string, followed by a new line
*
* @s: string to be printed
*
* Return: no return or return 0
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	_putchar(*s);

	_puts_recursion(s + 1);
}
