#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if ((i < n - 1) && separator)
			printf("%s%s", va_arg(args, char *), separator);
		else
			printf("%s", va_arg(args, char *));
	}
	printf("\n");

	va_end(args);
}
