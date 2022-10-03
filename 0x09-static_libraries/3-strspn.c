#include <stdio.h>
#include <string.h>

/**
  * _strspn - calculate length of characters in first string
  * @s: The string to be searched
  * @accept: The character to be searched
  * Return: the lengthi
  */

char _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
