#include "search_algos.h"

/**
 * binary_search - perform a binary search on a sorted array
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value of the item to be searched for
 * Return: the index of the found item, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;
	size_t i;

	if (array == NULL)
	return (-1);

	while (left <= right)
	{
		middle = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
