#include <stdio.h>
#include <string.h>

/**
  * _strstr - Checks for the needle in the haystack
  * @haystack: Where we search for the needle
  * @needle: What we look for the in the haystack
  * Return: The needle we found
  */

char *_strstr(char *haystack, char *needle)
{
	char *match;

	match = strstr(haystack, needle);
	return (match);
}
