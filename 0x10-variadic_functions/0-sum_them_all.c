#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all parameters of function
 *
 * @n: name to print
 *
 * Return: sum of all arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int result = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		result += va_arg(args, int);

	va_end(args);

	return (result);
}
