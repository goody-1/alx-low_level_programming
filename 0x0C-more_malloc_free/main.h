#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* prototypes for functions */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

/* advanced tasks */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);


/* utilities */
int _putchar(char c);

#endif
