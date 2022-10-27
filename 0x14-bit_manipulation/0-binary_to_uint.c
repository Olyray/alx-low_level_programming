#include "main.h"
#include <stdlib.h>

int _pow_recursion(int x, int y);

/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: the binary string to be converted
 * Return: the unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int converted_string;
	unsigned int converted_binary;

	if (b == NULL)
		return (0);
	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	converted_string = atoi(b);
	converted_binary = convert_to_decimal(converted_string);
	return (converted_binary);
}

/**
 * convert_to_decimal - convert an binary to a decimal
 * @n: the binary to be converted
 * Return: the converted decimal
 */
unsigned int convert_to_decimal(unsigned int n)
{
	unsigned int dec = 0, i = 0, rem;

	while (n != 0)
	{
		rem = n % 10;
		n /= 10;
		dec += rem * _pow_recursion(2, i);
		++i;
	}

	return (dec);
}

/**
 * _pow_recursion - raise to the power
 * @x: the base number
 * @y: the exponent number
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	int raised_number;

	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	raised_number = x *  _pow_recursion(x, y - 1);
	return (raised_number);
}
