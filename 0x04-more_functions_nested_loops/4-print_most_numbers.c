#include <ctype.h>
#include <stdio.h>

/**
  * print_most_numbers - prints numbers 0 - 9
  */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			putchar(i + 48);
	}
	putchar('\n');
}
