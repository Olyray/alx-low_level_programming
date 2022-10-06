#include <stdio.h>
#include <stdlib.h>


/**
 * array_range - mallocs a pointer
 * @min: the number of the element.
 * @max: the size of the element
 * Return: the pointer
 */

int *array_range(int min, int max)
{
	int *number_range;
	int i;

	if (min > max)
		return (NULL);
	number_range = malloc(sizeof(number_range) * (max - min));
	if (number_range == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		number_range[i] = i;
	return (number_range);
}
