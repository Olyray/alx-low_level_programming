#include <ctype.h>
#include <stdio.h>

/**
  * print_triangle - prints a triangle
  * @size: the height of the triangle
  */
void print_triangle(int size)
{
	for (int i = size; i >= 1; i--)
	{
		for (int j = 0; j < size; j++)
		{
			if (j < i - 1)
				putchar(' ');

			else
				putchar('#');
		}

		putchar('\n');
	}
}
