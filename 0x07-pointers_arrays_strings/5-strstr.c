#include "main.h"

/**
* _strstr - function that locates a substring.
* Description: finds the first occurrence of the substring needle
* in the string haystack. The terminating null bytes (\0)
* are not compared
* @haystack: haystack.
* @needle: needle
*
* Return:  pointer to the beginning of the located substring,
* or NULL if no such byte is found
*/


char *_strstr(char *haystack, char *needle)
{
	int len_needle = 0, i = 0, j = 0, k = 0, stop = 0;
	char *p;

	p = NULL;

	while (needle[len_needle] != '\0')
	{
		len_needle++;
	}

	while (haystack[i] != '\0' && !stop)
	{
		for (j = 0; j < len_needle; j++)
		{
			if (haystack[i] == needle[j] && !stop)
			{
				for (k = 0; k < len_needle; k++)
				{
					if (haystack[i] == needle[j])
					{
						i++;
						j++;
					}
				}
				if (k > (len_needle - 2)  && i > (len_needle - 2) &&
				(haystack[i] == needle[j]))
				{
					p = &haystack[i - len_needle];
					stop = 1;
					break;
				}
			}
		}
		if (k > (len_needle - 2)  && i > (len_needle - 2)
		&& (haystack[i] == needle[j]))
			break;
		i++;
	}
	return (p);
}
