#include "3-calc.h"

/**
 * op_add -  sums two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -  subtracts one integer from another
 *
 * @a: minuend
 * @b: subtrahend
 *
 * Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -  multiplies two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -  divides and integer with anaother
 *
 * @a: dividend
 * @b: divisor
 *
 * Return: quotient of a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod -  gets the modulo of two integers
 *
 * @a: dividend
 * @b: divisor
 *
 * Return: modulus of a and b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
