#include "variadic_functions.h"

/**
 * print_numbers - a variadic function that prints numbers,
 * followed by a new line
 *
 * @separator: the string to be printed between numbers
 * - don't print if separator is NULL
 * @n: last variable before the ellipsis
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);

	if (n == 0)
		exit(98);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator != NULL)
		{
			if ((i != n - 1))
				printf("%s", separator);
		}

		if (i == n - 1)
			printf("\n");
	}
	va_end(numbers);
}
