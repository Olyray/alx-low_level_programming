#include <ctype.h>
#include <stdio.h>

/**
  * print_line - checks if a character is a digiti
  * @n: The length of the straight line
  */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
	else
		putchar('\n');
}
