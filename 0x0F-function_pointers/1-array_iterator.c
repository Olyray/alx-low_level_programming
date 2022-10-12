#include <stdio.h>

/**
 * array_iterator - iterates over an array
 * @array: the array
 * @size: the size of the array
 * @action: the pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int) size; i++)
	{
		(*action)(array[i]);
	}
}
