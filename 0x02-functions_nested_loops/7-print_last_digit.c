
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * print_last_digit - returns the absolute value of an int
  * @c: The int to be checked
  * Return: the last digit
  */

int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;
	putchar('0' + abs(last_digit));
	return (abs(last_digit));
}
