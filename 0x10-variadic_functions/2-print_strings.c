#include "variadic_functions.h"

/**
 * print_strings - a variadic function that prints strings,
 * followed by a new line
 *
 * @separator: the string to be printed between the strings
 * - don't print if separator is NULL
 * @n: last variable before the ellipsis
 * @...: variable number of strings to be printed.
 *
 * - if one of the string is NULL, print (nil) instead
 *
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list strings;
	unsigned int index;
	char *str;


	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(strings);
}
