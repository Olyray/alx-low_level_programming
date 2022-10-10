#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - copies a string
 * @width: the first string
 * @height: the second string
 * Return: the pointer to the concatenated string
 */

int **alloc_grid(int width, int height)
{
	int **array_pointer;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	return (NULL);

	array_pointer = malloc(sizeof(int *) * width);
	if (array_pointer == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		array_pointer[i] = malloc(sizeof(int) * height);
		if (array_pointer[i] == NULL)
		{
			free(array_pointer[i]);
			free(array_pointer);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			array_pointer[i][j] = 0;
	return (array_pointer);
}
