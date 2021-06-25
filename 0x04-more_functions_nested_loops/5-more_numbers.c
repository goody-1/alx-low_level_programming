#include "holberton.h"

/**
* more_numbers - prints more numbers
* Description:  prints 10 times the numbers, from 0 to 14, followed by a new line.
* Return: no return (return is void)
*/

void more_numbers(void)
{
	char num;
	int counter;

	for (counter = '1'; counter <= '10'; counter++)
	{
		for (num = '0'; num <= '14'; num++)
		{
			_putchar(num);
		}

		_putchar('\n');
	}

	_putchar('\n');
}

