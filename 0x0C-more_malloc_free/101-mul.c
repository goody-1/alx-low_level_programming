#include "main.h"

int _atoi(char *s);
void print_error(void);
unsigned int str_len(char *str);
void print_number(int n);
int only_digits(char *str);

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
	size_t mul, num1, num2;

	if (argc != 3)
		print_error();
	p1 = argv[1];
	p2 = argv[2];

	if (only_digits(p1) != 1 || only_digits(p2) != 1)
		print_error();

	num1 = _atoi(p1);
	num2 = _atoi(p2);

	mul = num1 * num2;
	print_number(mul);

	_putchar('\n');

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
* only_digits - check whether a string contains only digits
* @str: string to check
* Return: 1 if only digits, 0 otherwise
*/
int only_digits(char *str)
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
