#include <stdio.h>
#include <string.h>

/**
  *  _strncpy - copies two strings
  * @dest: the destination string
  * @src: the source string
  * @n: the number limit
  * Return: pointer to the concatenated string
  */

char *_strncpy(char *dest, char *src, int n)
{
	char *joined;

	joined = strncpy(dest, src, n);

	return (joined);
}
