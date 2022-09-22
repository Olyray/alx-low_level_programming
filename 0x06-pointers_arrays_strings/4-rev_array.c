#include <stdio.h>
#include <string.h>

/**
  *  reverse_array - reverses an array
  * @a: the array to be reversed
  * @n: the size of the array
  */

void reverse_array(int *a, int n)
{
	int i;
	int b[500];

	for (i = 0; i < n; i++)
		b[i] = a[(n - 1) - i];
	for (i = 0; i < n; i++)
		a[i] = b[i];

}
