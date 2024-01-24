#include "function_pointers.h"

/**
 * print_name -  prints a name
 *
 * @name: name to print
 * @f: function pointer to be used
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	void (*printer)(char *) = f;

	printer(name);
}
