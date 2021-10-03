#include "variadic_functions.h"

/**
 * print_strings - a variadic function that prints strings,
 * followed by a new line
 *
 * @separator: the string to be printed between the strings
 * - don't print if separator is NULL
 * @n: last variable before the ellipsis
 *
 * - if one of the string is NULL, print (nil) instead
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(string, char *));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(string);
}
