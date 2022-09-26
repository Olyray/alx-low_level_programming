#include <stdio.h>
#include <string.h>

/**
  * _memcpy - copy memory area from src to dest
  * @dest: Where memory is copied from
  * @src: where it is copied to
  * @n: The integer used for that
  * Return: the destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
