#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * reverse_string - checks for palindrome
 * @checker: the checking string
 * @string: the original string
 * @string_len: the length of the string
 * @index: the index for iteration
 * Return: the checker
 */
char *reverse_string(char *checker, char *string, int string_len, int index)
{
	if (index == string_len)
	{
		return (checker);
	}
	checker[index] = string[(string_len - 1) - index];
	index++;
	checker = reverse_string(checker, string, string_len, index);
	return (checker);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to checks
 * Return: 1 if it is a palindrome, 0 if it is not
 */
int is_palindrome(char *s)
{
	char *checker;
	int i = 0, string_len;

	string_len = strlen(s);
	checker = malloc(sizeof(checker) * strlen(s));
	checker = reverse_string(checker, s, string_len, i);

	if (strcmp(checker, s) == 0)
		return (1);
	else
		return (0);
}
