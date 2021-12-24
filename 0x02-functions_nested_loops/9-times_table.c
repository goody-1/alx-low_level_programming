#include "main.h"

/**
 * times_table - prints the times table from 0 to
 * Return: returns no value
**/

void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            p = i * j;
            if (j != 0 && p / 10 == 0)
                _putchar(' ');
            else if (j != 0)
                _putchar(p / 10 + '0');
            _putchar(p % 10 + '0');

            if (j != 9)
            {
                _putchar(',');
                _putchar(' ');
            }
            else
                _putchar('\n');
        }
    }
}
