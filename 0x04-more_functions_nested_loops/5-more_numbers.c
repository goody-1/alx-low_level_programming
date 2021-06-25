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
	int num;

	while (counter <= 10)
	{
		for (num = '0'; num <= '9'; num++)
		{
			_putchar(num);
		}
		for (num = 10; num <= 14; num++)
		{
			_putchar(1 + (num%10) + '0');
		}

		_putchar('\n');
		counter++;
	}
}

