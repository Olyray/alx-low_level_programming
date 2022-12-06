#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: the bit in question
 * @index: the index of the bit to be set
 * Return: tbe bit set
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
