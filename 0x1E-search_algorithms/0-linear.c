#include "search_algos.h"

/**
 * linear_search - perform a linear search on an array
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value of the item to be searched for
 * Return: the found item, or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
