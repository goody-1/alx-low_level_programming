#include "main.h"

/**
* _strspn - that gets the length of a prefix substring
*
* @s: string to be checked
* @accept: substring
*
* Return:  number of bytes in the initial segment of s
* which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int len_s = 0, len_accept = 0;
	int i, j;

	while (s[len_s] != '\0')
		len_s++;

	while (accept[len_accept] != '\0')
		len_accept++;

	for (i = 0; i < len_s; i++)
	{
		for (j = 0; j < len_accept; j++)
		{
			if (s[i] != accept[j])
			{

				/* printf("\n j is %d\n", j); */
				/* printf("%c => %c\n", s[i], accept[j]); */
			}
			else
			{
				/* printf("%c => %c\n", s[i], accept[j]); */

				break;

			}

		}

		if (j == (len_accept - 1) && s[i] != accept[j])
			return (i);
	}

	/* printf("%d, %d\n", len_s, len_accept); */

	return (i);
}
