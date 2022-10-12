#include <stdio.h>

/**
 * int_index - iterates over an array
 * @array: the array
 * @size: the size of the array
 * @cmp: the pointer to the function
 * Return: the index of the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int check_match;
	int index;

	if (size <= 0)
		return (-1);
		/*Create for loop of the array size*/
	for (i = 0; i < size; i++)
	{
		/*pass array[i] to the function*/
		check_match = (*cmp)(array[i]);
		/*if the result of the call isn't zero return i*/
		if (check_match != 0)
			return (i);
		/*if result remains zero return -1*/
		if (i == size - 1)
		{
			if (check_match == 0)
				return (-1);
		}
		index = i;
	}
	return (index);
}
