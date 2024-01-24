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
	char *temp;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);
		if ((i < n - 1) && separator)
		{
			if (temp == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", temp, separator);
		}
		else
		{
			if (temp == NULL)
				printf("(nil)");
			else
				printf("%s", temp);
		}
	}
	printf("\n");

	va_end(args);
}
