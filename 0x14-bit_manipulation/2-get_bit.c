#include "main.h"
#include <stdio.h>

unsigned long int convert(unsigned long int n);

/**
 * get_bit - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 * @index: the index
 * Return: the integer value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int converted_binary, arg_int_len, int_len = 0;
	char *converted_string;
	int bit;

	/*convert n to binary*/
	converted_binary = convert(n);
	/*convert binary to string*/
	arg_int_len = converted_binary;
	do {
		arg_int_len = arg_int_len / 10;
		++int_len;
	} while (arg_int_len != 0);
	converted_string = malloc(sizeof(converted_string) * int_len);
	if (converted_string == NULL)
		return (-1);
	sprintf(converted_string, "%lu", converted_binary);
	/*Loop through string to binary at index*/
	bit = converted_string[int_len - (index + 1)] - '0';
		/*pass that into a variable*/

	/*Return the variable*/
	return (bit);
}

/**
 * convert - converts a decimal to a binary
 * @n: the decimal to be converted
 * Return: the binary in question.
 */
unsigned long int convert(unsigned long int n)
{
	unsigned long int bin = 0;
	unsigned long int rem, i = 1;

	while (n != 0)
	{
	rem = n % 2;
	n /= 2;
	bin += rem * i;
	i *= 10;
	}

	return (bin);
}
