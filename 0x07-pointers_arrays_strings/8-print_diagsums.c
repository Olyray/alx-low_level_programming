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
	int j = 0;
	int k = size - 1;
	int left_diagonal;
	int right_diagonal;

	for (i = 0; i < size; i++)
	{
		left_diagonal += a[i * size + j];
		j++;
	}

	for (i = 0; i < size; i++)
	{
		right_diagonal += a[i * size + k];
		k--;
	}

	printf("%i, %i\n", left_diagonal, right_diagonal);
}
