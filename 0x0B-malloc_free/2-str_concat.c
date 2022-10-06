#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - copies a string
 * @s1: the first string
 * @s2: the second string
 * Return: the pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int i;
	int j;

	j = 0;
	concatenated = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (int)strlen(s1); i++)
	{
		concatenated[i] = s1[i];
	}
	for (i = strlen(s1); i < (int)(strlen(s1) + strlen(s2)); i++)
	{
		concatenated[i] = s2[j];
		j++;
	}
	return (concatenated);
}
