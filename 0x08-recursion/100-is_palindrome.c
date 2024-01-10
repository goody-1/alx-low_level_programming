#include "main.h"

/**
 * is_palindrome - Checks if a given string is palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is palindrome - 1.
 *         otherwise - 0.
 */
int is_palindrome(char *s)
{
	int str_len = 0;
	int i = 0;
	char *substring;

	/* get length of string */
	while (*s != '\0')
	{
		str_len++;
		s++;
	}

	/* reset pointer to the beginning of the string */
	s -= str_len;

	if (str_len == 0 || str_len == 1)
		return (1);

	if (s[0] == s[str_len - 1]) /* confirm if ending characters are same */
	{
		/* create substring with first and last characters removed */
		while (i < str_len - 1)
		{
			substring[i] = s[i + 1];
			i++;
		}

		return (is_palindrome(substring));
	}
	else
		return (0);
}
