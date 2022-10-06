#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - copies a string
 * @s1: the first string
 * @s2: the second string
 * @n: the length of the second copied string
 * Return: the pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n >= strlen(s2))
	{
		for (i = 0; i < (int)strlen(s1); i++)
		{
			concatenated[i] = s1[i];
		}
		for (i = strlen(s1); i < (int)(strlen(s1) + strlen(s2)); i++)
		{
			concatenated[i] = s2[j];
			j++;
		}
	}
	else
	{
		for (i = 0; i < (int)strlen(s1); i++)
		{
			concatenated[i] = s1[i];
		}
		for (i = strlen(s1); i < (int)(strlen(s1) + n); i++)
		{
			concatenated[i] = s2[j];
			j++;
		}
	}
	return (concatenated);
}
