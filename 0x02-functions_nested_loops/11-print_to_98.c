#include <stdio.h>

/**
  * print_to_98 - prints to number 98
  * @n: the number to start from
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
			printf("%i, ", i);
	}
	else
	{
		int j;

		for (j = n; j <= 98; j++)
			printf("%i, ", j);
	}
}
