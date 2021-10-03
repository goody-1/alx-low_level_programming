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
	va_list strings;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str != NULL)
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(strings);
}
