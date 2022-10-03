#include <ctype.h>
#include <stdio.h>

/**
  * _isdigit - checks if a character is a digiti
  * @c: the character to be checked
  * Return: 1 if it's a digit, 0 if it isn't.
  */

int _isdigit(int c)
{
	int check;

	check = isdigit(c);
	if (check > 0)
		return (1);
	else
		return (0);
}
