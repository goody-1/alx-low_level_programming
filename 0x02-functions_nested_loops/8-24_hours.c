#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: returns value of last digit
**/

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				putchar('0');
			}
			else if (h < 20)
			{
				putchar('1');
			}
			else
			{
				putchar('2');
			}

			putchar(h % 10 + '0');
			putchar(':');

			/* for the minute part */

			if (m < 10)
			{
				putchar('0');
			}
			else if (m < 20)
			{
				putchar('1');
			}
			else if (m < 30)
			{
				putchar('2');
			}
			else if (m < 40)
			{
				putchar('3');
			}
			else if (m < 50)
			{
				putchar('4');
			}
			else
			{
				putchar('5');
			}

			putchar(m % 10 + '0');
			putchar(' ');
		}
	}
}
