#include "main.h"

/**
* leet - encodes a string into 1337 (leet)
* @str: the string to be converted
* Return: a string of leeted words
*/


char *leet(char *str)
{
	int i = 0, j = 0;
	char character[5] = {'a', 'e', 'o', 't', 'l'};
	char leet[5] = {'4', '3', '0', '7', '1'};

	while (str[i] != '\0')
	{

		for (j = 0; j < 5; j++)
		{
			if (str[i] == character[j] || str[i] == character[j] - 32)
			{
				str[i] = leet[j];
				break;
			}

		}
		i++;
	}

	return (str);

}

