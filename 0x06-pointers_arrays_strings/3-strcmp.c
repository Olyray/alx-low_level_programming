#include <stdio.h>
#include <string.h>

/**
  *  _strcmp - compares two strings
  * @s1: the first string
  * @s2: the second string
  * Return: pointer to the concatenated string
  */

int _strcmp(char *s1, char *s2)
{
	int confirmation;

	confirmation = strcmp(s1, s2);

	return (confirmation);
}
