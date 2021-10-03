#include "variadic_functions.h"

/**
 * sum_them_all - a variadic function that returns the
 * sum of all its parameters
 *
 * @n: last variable before the ellipsis
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	sum = 0;
	va_start(ap, n);

	if (n == 0)
		return (0);


	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
