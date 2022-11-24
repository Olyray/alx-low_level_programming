#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to checks
 * Return: 1 if it is a palindrome, 0 if it is not
 */
int is_palindrome(char *s)
{
	char *checker;
	int i, string_len;

	string_len = strlen(s);
	checker = malloc(sizeof(checker) * strlen(s));
	for (i = 0; i < (int)strlen(s); i++)
	{
		checker[i] = s[(string_len - 1) - i];
	}
	if (strcmp(checker, s) == 0)
		return (1);
	else
		return (0);
}
