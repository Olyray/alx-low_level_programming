#include <stdio.h>
#include <ctype.h>

/**
  * print_sign - checks the relationship of an int to zero
  * @c: The character to be checked
  * Return: It returns 1 if it's a lower case and zero if it isn't.
  */

int print_sign(int c)
{
	if (c > 0)
	{
		putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
