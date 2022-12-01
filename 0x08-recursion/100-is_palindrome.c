#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * palindrome_check - checks for palindrome
 * @s: the original string
 * @len: the length of the string
 * @index: the iteration number
 * Return: 1 or 0
 */
int palindrome_check(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (palindrome_check(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to checks
 * Return: 1 if it is a palindrome, 0 if it is not
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = strlen(s);

	if (!(*s))
		return (1);

	return (palindrome_check(s, len, index));
}
