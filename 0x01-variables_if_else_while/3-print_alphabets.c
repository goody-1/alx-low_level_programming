#include <stdlib.h>
#include <stdio.h>

/**
 * main - print lowercase characters of the english alphabet
 *
 * Return: return value
 *     
 */

int main(void)
{
        char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
	}	
	for (ch = 'A'; ch <= 'Z'; ch++)
        {
                putchar(ch);
	}								        }
	        putchar('\n');
        return (0);

}
