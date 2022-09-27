#include <stdio.h>
#include <string.h>

/**
  * print_chessboard - prints a chessboard
  * @a: the 2D array used for printing the chessboard
  */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}

}
