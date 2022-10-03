#include <stdio.h>
#include <string.h>

/**
  * _strchr - Find pointer to the first occurrence of a letter
  * @s: The string to be searched
  * @c: The character to be searched
  * Return: the required pointer
  */

char *_strchr(char *s, char c)
{
	char *x;

	x = strchr(s, c);
	return (x);
}
