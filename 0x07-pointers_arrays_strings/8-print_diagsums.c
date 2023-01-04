#include "main.h"

/**
* print_chessboard - function that prints the chessboard.
* @a: 8 by 8 array of the chessboard
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
