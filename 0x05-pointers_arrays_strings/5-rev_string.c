#include "holberton.h"

/**
* rev_string -  reverses a string
* @s: pointer
* Return: void
*/

void rev_string(char *s)
{
	int i, j, len_of_str;
    char *begin_ptr, *end_ptr, ch;

    i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len_of_str = i  - 1;
    begin_ptr = s;
    end_ptr = s;
    
    /* Move the end_ptr to the last character */

    for (j = 0; j < len_of_str; j++)
    {
        end_ptr++;
    }

    /* Swap the char from start and end */
    /* index using begin_ptr and end_ptr */

	for (j = 0; j < len_of_str / 2; j++)
	{
        /* swap character */
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;

        /* update pointers positions */*
        begin_ptr++;
        end_ptr--;
	}

	putchar('\n');
}
