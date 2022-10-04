#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - copies a string
 * @str: the string to be copied
 * Return: the pointer to the copy
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);
	duplicate = strdup(str);
	return (duplicate);
}
