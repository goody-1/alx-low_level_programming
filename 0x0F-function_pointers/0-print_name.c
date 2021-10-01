#include "function_pointers.h"

void name(char *name);


/**
 * print_name - a function that prints a name
 *
 * @name: name to be printed
 *@f: function pointer
 *
 * Return: void
 *
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
