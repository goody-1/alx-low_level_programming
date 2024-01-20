#include "main.h"
#include "stdint.h"

int _atoi(char *s);
void print_error(void);
unsigned int str_len(char *str);
void print_number(int n);
int is_digits(char *str);
void multiply(char *num1, char *num2);

/**
 * main - program entry
 *
 * @argc: count of program arguments
 * @argv: list of program arguments
 *
 * Return: always 0
*/
int main(int argc, char **argv)
{
	char *p1, *p2;

	if (argc != 3)
		print_error();
	p1 = argv[1];
	p2 = argv[2];

	if (!is_digits(p1) || !is_digits(p2))
		print_error();

	multiply(p1, p2);

	return (0);
}
/**
* print_error - print error
*
* Return: void
*/
void print_error(void)
{
	int i;
	char *error = "Error";

	for (i = 0; error[i] != '\0'; i++)
		_putchar(error[i]);

	_putchar('\n');
	exit(98);
}

/**
* _atoi - convert a string to an integer.
* @s: source pointer
* Return: void
*/

int _atoi(char *s)
{
	int i = 0;
	unsigned int res = 0;
	int flag = 1;

	while (s[i] != '\0')
	{
		if (s[i - 1] == '-')
			flag *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + (s[i] - '0');
			if (s[i + 1] == ' ')
				break;
		}
		i++;
	}
	return (flag * res);
}


/**
* is_digits - check whether a string contains only digits
* @str: string to check
* Return: 1 if only digits, 0 otherwise
*/
int is_digits(char *str)
{
	unsigned int i;
	int tf = 0;

	for (i = 0; i < str_len(str); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (tf);
	}

	tf = 1;
	return (tf);
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
/**
* print_number - prints an integer
* @n: integer to be printed
* Return: no return (return is void)
*/

void print_number(int n)
{
	unsigned int c;

	c = n;

	if (n < 0)
	{
		_putchar('-');
		c = -n;
	}

	if (c / 10)
		print_number(c / 10);

	_putchar((c % 10) + '0');
}

/**
* multiply - multiply two numbers
*
* @num1: first string of integers to be multiplied
* @num2: second string of integers to be multiplied
*
* Return: no return (return is void)
*/
void multiply(char *num1, char *num2)
{
	int len1 = str_len(num1), sum, mul, isZero = 1;
	int len2 = str_len(num2), i, j, start, result_len;
	int *result;

	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
		print_error();

	result_len = len1 + len2;

	/* Initialize result space to 0 and i.e 234 * 123 has length of 6 */
	for (i = 0; i < result_len; i++)
		result[i] = 0;

	/**
	 * What these loops do is multiply this way
	 *		1	2	3	5
	 *	x	1	0	9	1
	 *	------------------
	 *
	 *	------------------
	*/
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = mul + result[i + j + 1];

			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	start = 0;

	/* Check if the entire result is zero */
	for (i = 0; i < result_len; i++)
	{
		if (result[i] != 0)
		{
			isZero = 0;
			break;
		}

	}

	/* If not all zeros, find the first non-zero digit */
	if (!isZero)
	{
		while (start < result_len && result[start] == 0)
			start++;
	}

	/* Print the result */
	if (isZero)
	{
		_putchar('0');
	}
	else
	{
		for (i = start; i < result_len; i++)
			_putchar(result[i] + '0');
	}

	_putchar('\n');

	free(result);
}
