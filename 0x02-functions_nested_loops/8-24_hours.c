#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: returns value of last digit
**/

int hour(int);
int minute(int);

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			hour(h);
			_putchar(h % 10 + '0');
			_putchar(':');

			/* for the minute part */
			minute(m);
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}


int minute(int m)
{
	if (m < 10)
	{
		_putchar('0');
	}
	else if (m < 20)
	{
		_putchar('1');
	}
	else if (m < 30)
	{
		_putchar('2');
	}
	else if (m < 40)
	{
		_putchar('3');
	}
	else if (m < 50)
	{
		_putchar('4');
	}
	else
	{
		_putchar('5');
	}

	return (m);
}

int hour(int h)
{
	if (h < 10)
	{
		_putchar('0');
	}
	else if (h < 20)
	{
		_putchar('1');
	}
	else
	{
		_putchar('2');
	}

	return (h);
}
