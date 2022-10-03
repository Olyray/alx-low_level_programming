#include <stdio.h>
#include <string.h>

/**
  *  _strncat - concatenates two strings
  * @dest: the destination string
  * @src: the source string
  * @n: the number limit
  * Return: pointer to the concatenated string
  */

char *_strncat(char *dest, char *src, int n)
{
	char *joined;
	char new_source[1024];
	int i;

	for (i = 0; i < n; i++)
		new_source[i] = src[i];


	joined = strcat(dest, new_source);

	return (joined);
}
