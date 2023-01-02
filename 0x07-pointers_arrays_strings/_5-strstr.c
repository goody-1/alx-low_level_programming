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

	/*get the length of needle,*/
	while (needle[len_needle] != '\0')
		len_needle++;
	/*printf("needle length is %d\n", len_needle);*/


	while (haystack[i] != '\0')
	{
		/*printf("index %d of haystack -> %c\n", i, haystack[i]);*/

		while (needle[j] != '\0')
		{
			/*printf("index %d of needle -> %c\n", j, needle[j]);*/
			/*if a char in haystack is equal to first char in needle,*/
			if (haystack[i] != needle[0])
			{
				/*character doesn't match first needle character, go to next*/
				break;
			}
			else if (haystack[i] == needle[0])
			{
				k = 0;

				/*
				 * printf("character %c of haystack with index %d is same as first needle character %c\n",
					haystack[i], i, needle[0]);
				*/

				/*loop to check if the needle string is complete from the haystack char*/
				while ((i + k) < (len_needle + i))
				{ /*keeping track of index*/

						/*printf("haystack[i + k] is %c for index %d\n", haystack[i + k], (i+k));*/
					if (haystack[i + k] == needle[k])
					{
						/*
						 * printf("character %c of haystack with index %d is same as needle character %c\n",
							haystack[i + k], i+k, needle[k]);
						 */
						if (k == len_needle - 1)
						{/*
						 * if the substring is found
								printf("number of characters reached\n\n\n");
						 */
							return (&haystack[i]);

						}
						k++;
					}
					else {
						/*
						 * the next set of character do not match,
						 * break the loop and check the next character
						 * */
						/*
						 * printf("the next set of characters do not match, break the loop and\
						    \n\tcheck the next character in the haystack\n");
						 */
						break;
					}
				}
				i++;
			}
			j++;
		}

		j = 0;
		i++;
	}
}


/*char *_strstr(char *haystack, char *needle)
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
*/