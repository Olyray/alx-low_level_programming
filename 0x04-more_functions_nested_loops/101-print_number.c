#include <stdio.h>
#include "main.h"

/**
 * print_number - print a number
 * @n: the number to be printed
 */
void print_number(int n)
{
	unsigned int num_check = n;

	if (n < 0)
	{
		_putchar('-');
		num_check = -num_check;
	}
	if ((num_check / 10) > 0)
		print_number(num_check / 10);
	_putchar((num_check % 10) + 48);
}
