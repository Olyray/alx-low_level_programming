#include <stdio.h>
#include <string.h>

/**
  * print_array - prints elements of an array
  * @a: The array in question
  * @n: The number of elements to be printed
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%i", a[i]);
		else
			printf("%i, ", a[i]);
	}
	printf("\n");
}
