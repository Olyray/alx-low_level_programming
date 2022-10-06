#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - copies a string
 * @width: the first string
 * @height: the second string
 * Return: the pointer to the concatenated string
 */

/*Write a function that returns a pointer to a 2 dimensional array of integers.

    Prototype: int **alloc_grid(int width, int height);
    Each element of the grid should be initialized to 0
    The function should return NULL on failure
    If width or height is 0 or negative, return NULL*/


int **alloc_grid(int width, int height)
{
	int **array_pointer;
	int *null_array;
	int i;
	int j;

	null_array = malloc(sizeof(int) * (width * height));
	if (null_array == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			null_array[i * height + j] = 0;
	array_pointer = &null_array;
	return (array_pointer);

}
