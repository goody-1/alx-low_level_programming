#include "main.h"

/**
* rev_string -  reverses a string
* @s: pointer
* Return: void
*/

void rev_string(char *s)
{
	int i = 0, len = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;

	while (i <= len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
		len--;
	}

}
