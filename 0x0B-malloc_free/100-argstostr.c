#include "main.h"

unsigned int str_len(char *str);

/**
 * argstostr - concatenates all the arguments of program.
 *
 * @ac: count of arguments
 * @av: list of arguments
 *
 * Return: pointer to the new string or null if failure
*/
char *argstostr(int ac, char **av)
{
	char *concated;
	int i, j, len, len_sum = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	printf("ac is %d\n", ac);
	for (i = 0; i < ac; i++)
	{
		len = (int) str_len(av[i]);
		len_sum += len;
	}
	/* add space for new line characters */
	len_sum += ac;
	/* printf("length of sum is %d\n", len_sum); */

	/* add space for null character */
	concated = malloc(sizeof(char) * (len_sum + 1));

	if (concated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = (int) str_len(av[i]);

		for (j = 0; j < len; j++)
		{
			concated[c] = av[i][j];
			c++;
		}
		concated[c] = '\n';
		c++;
		/* terminate string */
		concated[c] = '\0';
	}
	return (concated);
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
