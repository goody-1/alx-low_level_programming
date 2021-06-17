#include<stdio.h>

/**
 * main - prints size of various types
 * Description: the program just prints the sizes of the various types on the machine it is run on
 * Return: this return value of 0 as desired
 */

int main(void)
{
	printf(sizeof(int));
	printf(sizeof(float));
	printf(sizeof(char));
	printf(sizeof(double));

	return (0);
}
