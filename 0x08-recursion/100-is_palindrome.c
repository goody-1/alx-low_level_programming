#include "main.h"
int str_length(char *s);
/**
 * is_palindrome - Checks if a given string is palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is palindrome - 1.
 *         otherwise - 0.
 */
int is_palindrome(char *s)
{
	int str_len = str_length(s);
	int i = 0;
	char *substring;

	if (str_len == 0 || str_len == 1)
		return (1);

	/* allocate memory for the substring */
	substring = (char *)malloc((str_len - 1) * sizeof(char));

	if (s[0] == s[str_len - 1]) /* confirm if ending characters are same */
	{
		/* create substring with first and last characters removed */
		while (i < str_len - 1)
		{
			substring[i] = s[i + 1];
			i++;
		}
		int result = is_palindrome(substring);

		/* free the allocated memory for substring */
		free(substring);
		return (result);
	}
	else
		return (0);
}

/**
 * str_length - Helper function to get the length of the string
 * @s: The string to be checked.
 *
 * Return: length of string
 */
int str_length(char *s)
{
	int str_len = 0;

	while (*s != '\0')
	{
		str_len++;
		s++;
	}
	return (str_len);
}
