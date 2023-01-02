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
	int i = 0, j = 0, k = 0, len_needle = 0;

	while (needle[len_needle] != '\0')
	len_needle++;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] != needle[0])
			break;

		else if (haystack[i] == needle[0])
		{
		k = 0;
			while ((i + k) < (len_needle + i))
			{ /*keeping track of index*/

				if (haystack[i + k] == needle[k])
				{
					if (k == len_needle - 1)
					return (&haystack[i]);
					k++;
				}
				else
				break;
			}
		i++;
		}
		j++;
		}
		j = 0;
		i++;
	}
}
