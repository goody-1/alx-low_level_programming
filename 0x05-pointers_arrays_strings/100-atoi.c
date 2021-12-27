#include "main.h"

/**
* _atoi - convert a string to an integer.
* @s: source pointer
* Return: void
*/

int _atoi(char *s)
{
	int i = 0, res = 0;
	int flag = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] == '-')
				flag = -1;
			res = res * 10 + (s[i] - '0');
			if (s[i + 1] == ' ')
				break;
		}
		i++;
	}
	return (flag * res);
}
