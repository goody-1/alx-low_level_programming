#include "main.h"

void my_putchar(int);

/**
 * times_table - prints the times table from 0 to 
 * Return: returns no value
**/

void times_table(void)
{
	int i, j, res, n;
	for (i = 0; i <= 9; i++)
	{
	    for (j = 0; j<= 9; j++)
	    {
	        res = i * j;
	        my_putchar(res);
	        
	        if (j != 9)
	        {
	        putchar(',');
	        putchar(' ');
	        }
	    }
	    putchar('\n');
	}
}


/**
 * my_putchar - prints numbers as they are with putchar
 * @var: number to be tested
 * Return: returns no value
**/

void my_putchar(var) {
     
    /* print '-' for negative numbers */
    if (var < 0) {
        putchar('-');
        var = var * -1;
    }
  
    /* First remove the last digit of number and print 
    the remaining digits using recursion, then print
    the last digit
	*/
    if (var/10)
        my_putchar(var/10);
  
    putchar(var%10 + '0');
}
