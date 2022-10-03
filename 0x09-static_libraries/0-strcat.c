#include <stdio.h>
#include <string.h>

/**
  *  _strcat - concatenates two strings
  * @dest: the destination string
  * @src: the source string
  * Return: pointer to the concatenated string
  */

char *_strcat(char *dest, char *src)
{
	char *joined;

	joined = strcat(dest, src);

	return (joined);
}
