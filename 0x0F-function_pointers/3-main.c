#include "3-calc.h"

/**
 * main -  proram entry: perform simple calculations
 *
 * @argc: array to be iterated
 * @argv: size of the array
 *
 * Return: integer found
*/

int main(int argc, char **argv)
{
	int result, num1, num2;
	int (*operation)(int, int);
	char *operator;

	/* Check for correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	/* check that operator is valid */
	if ((operator[0] != '+' && operator[0] != '-' && operator[0] != '*' &&
		operator[0] != '/' && operator[0] != '%') || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/* Check for division by zero */
	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(operator);
	result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}
