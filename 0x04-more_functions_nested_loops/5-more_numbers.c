#include "holberton.h"

/**
* more_numbers - prints more numbers
* Description:  prints 10 times the numbers, from 0 to 14,
* followed by a new line.
* Return: no return (return is void)
*/

void more_numbers(void)
{
	int counter = 1;
	char num, c;

	while (counter <= 10)
	{
		for (num = 0; num <= 14; num++)
		{
			c = num;    /* put in a store*/

			if (num > 9)
			{
				_putchar('1'); /* print 1 first when num is greater than 9 */

				c = num % 10; /* then change c to the next digit */
			}
			_putchar('0' + c); /* convert c to a character putchar can find */
		}

		_putchar('\n');
		counter++;
	}
}
