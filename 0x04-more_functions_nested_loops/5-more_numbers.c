#include <ctype.h>
#include <stdio.h>

/**
  * more_numbers - checks if a character is a digiti
  */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				putchar(j + '0');
			else
			{
				putchar(((j / 10) + '0') + ((j % 10) + '0'));
			}
		}
		putchar('\n');
	}
}
