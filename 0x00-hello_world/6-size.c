#include<stdio.h>

/**
 * main - prints size of various types
 * Description: the program just prints the sizes of the various types on the machine it is run on
 * Return: this return value of 0 as desired
 */

int main(void)
{
	printf("Size of a char: %ld\n byte(s)", sizeof(char));
	printf("Size of an int: %ld\n byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld\n byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld\n byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld\n byte(s)", sizeof(float));

	return (0);
}
