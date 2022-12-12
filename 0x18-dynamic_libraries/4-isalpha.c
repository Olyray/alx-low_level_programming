#include <stdio.h>
#include <ctype.h>

/**
  * _isalpha - checks if a character is a letter
  * @c: The character to be checked
  * Return: It returns 1 if it's a lower case and zero if it isn't.
  */

int _isalpha(int c)
{
	int checker = isalpha(c);

	if (checker > 0)
		return (1);
	else
		return (0);
}
