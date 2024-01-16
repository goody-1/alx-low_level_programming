#include "main.h"

unsigned int str_len(char *str);

/**
 * strtow - splits a string into words.
 *
 * @str: string to be splitted
 *
 * Return: pointer to the new string or null if failure
*/
char **strtow(char *str)
{
	char **words;
	int i, j, k = 0, len, str_length, words_num = 0;

	if (str == NULL)
		return (NULL);

	str_length = str_len(str);

	for (i = 0; i < str_length; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			words_num++;
	}
	/* number of words is number of spaces plus 1 */
	words_num++;
	printf("word num is %d\n", words_num);

	words = malloc(sizeof(char *) * (words_num + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < words_num; i++)
	{
		len = 0;
		/* get length of word */

		for (; k < str_length; k++)
		{
			if (str[k] != ' ')
				len++;
			else
				break;
		}

		/* allocate space for word with null terminator */
		words[i] = malloc(sizeof(char) * len);

		if (words[i] == NULL)
		{
			while (i >= 0)
				free(words[i--]);
			/* then free the array of pointers */
			free(words);
			return (NULL);
		}


		for (j = 0; j < len; j++)
		{
			if (str[k] != ' ')
			{
				words[i][j] = str[k];
				k++;
			}
		}
		words[i][len] = '\0';
	}

	return (words);
}

/**
 * str_len - get length of string;
 *
 * @str: string to be checked
 * Return: length of string or NULl
*/
unsigned int str_len(char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (0);
	while (str[len] != '\0')
		len++;

	return (len);
}
