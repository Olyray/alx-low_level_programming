#include <stdio.h>
#include <string.h>

/**
  * print_diagsums - prints the sum of the diagonals of a 2d array
  * @a: the 2D array used for printing the chessboard
  * @size: the size of the 2D array in question
  */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int left_diagonal;
	int right_diagonal;

	for (i = 0; i < size; i++)
	{
		j = 0;
		left_diagonal += a[i][j];
		j++;
	}

	for (i = 0; i < size; i++)
	{
		j = size;
		right_diagonal += a[i][j];
		j--;
	}

	printf("%i, %i", left_diagonal, right_diagonal);
	
}
