#include "main.h"

/**
 * clear_bit - sets the value of a bit to zero at a give index
 * @n: the number
 * @index: the position of the bit
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
