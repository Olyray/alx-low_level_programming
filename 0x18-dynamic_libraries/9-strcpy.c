#include <stdio.h>
#include <string.h>

/**
  * *_strcpy - swap the paramenters
  * @dest: The destination
  * @src: The source
  * Return: The copied string
  */

char *_strcpy(char *dest, char *src)
{
	char *copy;

	copy = strcpy(dest, src);

	return (copy);
}
