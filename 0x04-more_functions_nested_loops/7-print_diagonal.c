#include <ctype.h>
#include <stdio.h>

/**
  * print_diagonal - checks if a character is a digiti
  * @n: The length of the straight line
  */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar(92);
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
