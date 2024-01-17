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

	/* Count the number of words */
	for (i = 0; i < str_length; i++)
	{
		/* number of words is determined by taking count of the */
		/* last character in every word */
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words_num++;
	}
	if (words_num == 0)
		return (NULL);

	/* Allocate space for the array of pointers to words */
	words = malloc(sizeof(char *) * (words_num + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < words_num; i++)
	{
		/* Skip leading spaces */
		while (k < str_length && str[k] == ' ')
			k++;

		/* Calculate the length of the current word */
		len = 0;
		while (k < str_length && str[k] != ' ')
		{
			len++;
			k++;
		}
		/**
		 * for (; k < str_length && str[k] != ' '; k++, len++)
		 *		;
		 * The statement above can be used as well
		 */

		/* Allocate space for the word with null terminator */
		words[i] = malloc(sizeof(char) * (len + 1));

		if (words[i] == NULL)
		{
			/* Free allocated memory on failure */
			while (i >= 0)
				free(words[i--]);
			free(words);
			return (NULL);
		}

		/* Copy the characters of the current word */
		for (j = 0; j < len; j++)
			/* pick from beginning of current word */
			words[i][j] = str[k - len + j];
		words[i][len] = '\0'; /* Null-terminate the word */
	}

	/* Null-terminate the array of pointers */
	words[words_num] = NULL;

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
