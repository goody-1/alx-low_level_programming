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
	int num, c;

	while (counter <= 10)
	{
		for (num = 0; num <= 14; num++)
		{
			c = num;

			if (num > 9)
			{
				_putchar('1');
				
				c = num % 10;
			}
			_putchar(c);
		}

		_putchar('\n');
		counter++;
	}
}
