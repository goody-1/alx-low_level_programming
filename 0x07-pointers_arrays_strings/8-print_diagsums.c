#include "main.h"

/**
* print_diagsums - function that prints the sum of the two diagonals
*	of a square matrix of integers..
* @a: pointer to the array
* @size: size of the square array
*
* Return:  void
*/

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, k = 0;
	int left_diag_sum = 0, right_diag_sum = 0;

	while (i < size)
	{
		while (j < size)
		{
			if (i == j)
				left_diag_sum += a[k];
			if (i + j == size - 1)
				right_diag_sum += a[k];
			k++;
			j++;
		}
		j = 0;
		i++;
	}
	printf("%d, %d\n", left_diag_sum, right_diag_sum);
}
