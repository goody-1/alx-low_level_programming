#include "main.h"

/**
* print_chessboard - function that prints the chessboard.
* @a: 8 by 8 array of the chessboard
*
* Return:  void
*/

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			putchar(a[i][j]);
			j++;
		}
		putchar('\n');
		j = 0;
		i++;
	}
}
