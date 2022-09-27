#include <stdio.h>
#include <string.h>

/**
  * _strpbrk - Checks for the first character in s to match in accept
  * @s: The string with the character that is searched
  * @accept: The second string
  * Return: a pointer to the character that matches
  */

char *_strpbrk(char *s, char *accept)
{
	char *match;

	match = strpbrk(s, accept);
	return (match);
}
