#include <ctype.h>
#include <stdio.h>

/**
  * _isupper - checks if a character is upper case
  * @c: the character to be checked
  * Return: 1 if it's upper case, 0 if it isn't.
  */

int _isupper(int c)
{
	int check;

	check = isupper(c);
	if (check > 0)
		return (1);
	else
		return (0);
}
