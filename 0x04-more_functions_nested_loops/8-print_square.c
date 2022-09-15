#include <ctype.h>
#include <stdio.h>

/**
  * print_square - prints a square
  * @size: The size of the square
  */

void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
