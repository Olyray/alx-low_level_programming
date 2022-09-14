

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * times_table - prints timestable for 9
  */

void times_table(void)
{
	int i;
	int j;
	int x;

	/*Create a for loop of 9 with i*/
	for (i = 0; i < 10; i++)
	{
		/*Create a for loop of 9 with j*/
		for (j = 0; j < 10; j++)
		{
			/*x = i * j*/
			x = i * j;
			/*printchar x*/
			if (x <= 9)
				putchar(x + '0');
			else
			{
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
			}

			putchar(32);
		}
		/*print new line*/
		putchar('\n');
	}
}
