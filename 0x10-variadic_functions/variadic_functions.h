#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * struct print - Struct print
 *
 * @ch: format identifier
 * @print_type: The function for identifier, i.e int, char etc
 */
typedef struct print
{
	char ch;
	void (*print_type)(va_list arg);
} print_t;


/* prototypes for functions */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* advanced tasks */


/* utilities */
int _putchar(char c);

#endif
