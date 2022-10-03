#include <stdio.h>
#include <string.h>

/**
  * _memset - Fill memory with constant byte
  * @s: what would be returned
  * @b: the constant byte
  * @n: The integer used for that
  * Return: the memsetted pointer
  */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
