#include "holberton.h"

/**
* print_most_numbers - prints numbers 0 to 9
* Description: prints numbers 0 to 9 followed by new line except 2 and 4
* Return: no return (return is void)
*/

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '12'; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	}

	_putchar('\n');

}

