#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print the times table of the number passed
 * @n: the number passed
 */
void print_times_table(int n)
{
	int i, j, int_count;

	if (n >= 1 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int_count = count_integer(i * (j + 1));
				if (j == n)
					printf("%i", j * i);
				else
				{
					if (int_count == 1)
						printf("%i,   ", j * i);
					else if (int_count == 2)
						printf("%i,  ", j * i);
					else if (int_count == 3)
						printf("%i, ", j * i);
				}
			}
			printf("\n");
		}
	}
}

/**
 * count_integer - counts the length of an integer
 * @n: the integer to be counted
 * Return: the length of the integer
 */
int count_integer(int n)
{
	int count = 0;

	do {
		n /= 10;
		++count;
	} while (n != 0);
	return (count);
}
