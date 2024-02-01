#include <stdio.h>
#include <stdlib.h>

void before_main(void) __attribute__((constructor));
/**
 * before_main - prints a string before main function execution
 *
 * Return: void
 */
void before_main(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";

	printf("%s", s);
}
