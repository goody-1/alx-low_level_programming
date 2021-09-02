#include "main.h"

/**
* print_most_numbers - prints numbers 0 to 9
* Description: prints numbers 0 to 9 followed by new line except 2 and 4
* Return: no return (return is void)
*/

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	}

	_putchar('\n');

}

